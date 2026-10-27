// Minimal, API-compatible implementation of the old ELSE [scale] object.
// The UZU patch uses the 4/5 argument form:
//   [scale <in_min> <in_max> <out_min> <out_max> <exp>]
// and the 2/3 argument form used by some of its helpers.

#include <m_pd.h>
#include <math.h>

static t_class *scale_class;

typedef struct _scale {
    t_object  x_obj;
    t_outlet *x_outlet;
    t_float   x_minin;
    t_float   x_maxin;
    t_float   x_minout;
    t_float   x_maxout;
    t_float   x_exp;
    t_int     x_clip;
    t_float   x_last;
} t_scale;

static t_float scale_convert (t_scale *x, t_float f)
{
    const t_float minin = x->x_minin;
    const t_float maxin = x->x_maxin;
    const t_float minout = x->x_minout;
    const t_float maxout = x->x_maxout;
    const t_float rangein = maxin - minin;
    const t_float rangeout = maxout - minout;

    if (f == minin)
        return minout;
    if (f == maxin)
        return maxout;

    if (x->x_clip)
    {
        if (rangein < 0.0f)
        {
            if (f > minin) return minout;
            if (f < maxin) return maxout;
        }
        else
        {
            if (f < minin) return minout;
            if (f > maxin) return maxout;
        }
    }

    if (rangein == 0.0f)
        return minout;

    const t_float p = (f - minin) / rangein;

    if (fabsf (x->x_exp) == 1.0f || x->x_exp == 0.0f)
        return minout + rangeout * p;

    if (x->x_exp > 0.0f)
        return minout + rangeout * copysignf (powf (fabsf (p), x->x_exp), p);

    return minout + rangeout * (1.0f - copysignf (powf (fabsf (1.0f - p), -x->x_exp), p));
}

static void scale_float (t_scale *x, t_floatarg f)
{
    x->x_last = f;
    outlet_float (x->x_outlet, scale_convert (x, f));
}

static void scale_bang (t_scale *x)
{
    outlet_float (x->x_outlet, scale_convert (x, x->x_last));
}

static void scale_list (t_scale *x, t_symbol *s, int ac, t_atom *av)
{
    (void) s;
    if (ac == 0)
    {
        scale_bang (x);
        return;
    }

    t_atom *out = (t_atom *) getbytes ((size_t) ac * sizeof (t_atom));
    if (out == NULL)
        return;

    for (int i = 0; i < ac; ++i)
        SETFLOAT (out + i, scale_convert (x, atom_getfloatarg (i, ac, av)));

    outlet_list (x->x_outlet, &s_list, ac, out);
    freebytes (out, (size_t) ac * sizeof (t_atom));
}

static void scale_set (t_scale *x, t_floatarg f)
{
    x->x_last = f;
}

static void scale_exp (t_scale *x, t_floatarg f)
{
    x->x_exp = f;
}

static void scale_clip (t_scale *x, t_floatarg f)
{
    x->x_clip = (f != 0.0f);
}

static void scale_in (t_scale *x, t_floatarg f1, t_floatarg f2)
{
    x->x_minin = f1;
    x->x_maxin = f2;
}

static void *scale_new (t_symbol *s, int ac, t_atom *av)
{
    (void) s;
    t_scale *x = (t_scale *) pd_new (scale_class);
    x->x_minin = 0.0f;
    x->x_maxin = 127.0f;
    x->x_minout = 0.0f;
    x->x_maxout = 1.0f;
    x->x_exp = 1.0f;
    x->x_clip = 1;
    x->x_last = 0.0f;

    t_float args[5] = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    int n = 0;
    while (ac > 0 && n < 5)
    {
        if (av->a_type != A_FLOAT)
        {
            pd_error (x, "[scale]: improper args");
            return NULL;
        }

        args[n++] = atom_getfloat (av);
        --ac;
        ++av;
    }

    if (n == 2)
    {
        // [scale out_min out_max] -- old ELSE shorthand.
        x->x_minout = args[0];
        x->x_maxout = args[1];
    }
    else if (n == 3)
    {
        // [scale out_min out_max exp]
        x->x_minout = args[0];
        x->x_maxout = args[1];
        x->x_exp = args[2];
    }
    else if (n >= 4)
    {
        x->x_minin = args[0];
        x->x_maxin = args[1];
        x->x_minout = args[2];
        x->x_maxout = args[3];
        if (n >= 5)
            x->x_exp = args[4];
    }

    x->x_outlet = outlet_new (&x->x_obj, 0);
    return x;
}

void scale_setup (void)
{
    scale_class = class_new (gensym ("scale"), (t_newmethod) scale_new, 0,
                             sizeof (t_scale), 0, A_GIMME, 0);
    class_addfloat (scale_class, (t_method) scale_float);
    class_addbang (scale_class, (t_method) scale_bang);
    class_addlist (scale_class, (t_method) scale_list);
    class_addmethod (scale_class, (t_method) scale_set, gensym ("set"), A_DEFFLOAT, 0);
    class_addmethod (scale_class, (t_method) scale_exp, gensym ("exp"), A_DEFFLOAT, 0);
    class_addmethod (scale_class, (t_method) scale_clip, gensym ("clip"), A_DEFFLOAT, 0);
    class_addmethod (scale_class, (t_method) scale_in, gensym ("in"), A_FLOAT, A_FLOAT, 0);
}
