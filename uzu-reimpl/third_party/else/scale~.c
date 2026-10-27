// The old ELSE [scale~] object, used by the UZU patch as:
//   [scale~ -1 1 0.65 0.9]
// i.e. input range followed by output range.

#include <m_pd.h>
#include <math.h>

static t_class *scale_tilde_class;

typedef struct _scale_tilde {
    t_object x_obj;
    t_float  x_minin;
    t_float  x_maxin;
    t_float  x_minout;
    t_float  x_maxout;
    t_float  x_exp;
    t_int    x_clip;
} t_scale_tilde;

static t_float scale_tilde_convert (t_scale_tilde *x, t_float f)
{
    const t_float rangein = x->x_maxin - x->x_minin;
    const t_float rangeout = x->x_maxout - x->x_minout;

    if (f == x->x_minin) return x->x_minout;
    if (f == x->x_maxin) return x->x_maxout;

    if (x->x_clip)
    {
        if (rangein < 0.0f)
        {
            if (f > x->x_minin) return x->x_minout;
            if (f < x->x_maxin) return x->x_maxout;
        }
        else
        {
            if (f < x->x_minin) return x->x_minout;
            if (f > x->x_maxin) return x->x_maxout;
        }
    }

    if (rangein == 0.0f)
        return x->x_minout;

    const t_float p = (f - x->x_minin) / rangein;
    if (fabsf (x->x_exp) == 1.0f || x->x_exp == 0.0f)
        return x->x_minout + rangeout * p;
    if (x->x_exp > 0.0f)
        return x->x_minout + rangeout * copysignf (powf (fabsf (p), x->x_exp), p);
    return x->x_minout + rangeout * (1.0f - copysignf (powf (fabsf (1.0f - p), -x->x_exp), p));
}

static t_int *scale_tilde_perform (t_int *w)
{
    t_scale_tilde *x = (t_scale_tilde *) (w[1]);
    int n = (int) (w[2]);
    t_sample *in = (t_sample *) (w[3]);
    t_sample *out = (t_sample *) (w[4]);

    while (n--)
        *out++ = scale_tilde_convert (x, *in++);

    return w + 5;
}

static void scale_tilde_dsp (t_scale_tilde *x, t_signal **sp)
{
    dsp_add (scale_tilde_perform, 4, x, sp[0]->s_n, sp[0]->s_vec, sp[1]->s_vec);
}

static void scale_tilde_in (t_scale_tilde *x, t_floatarg f1, t_floatarg f2)
{
    x->x_minin = f1;
    x->x_maxin = f2;
}

static void scale_tilde_exp (t_scale_tilde *x, t_floatarg f)
{
    x->x_exp = f;
}

static void scale_tilde_clip (t_scale_tilde *x, t_floatarg f)
{
    x->x_clip = (f != 0.0f);
}

static void *scale_tilde_new (t_symbol *s, int ac, t_atom *av)
{
    (void) s;
    t_scale_tilde *x = (t_scale_tilde *) pd_new (scale_tilde_class);

    x->x_minin = -1.0f;
    x->x_maxin = 1.0f;
    x->x_minout = 0.0f;
    x->x_maxout = 1.0f;
    x->x_exp = 1.0f;
    x->x_clip = 1;

    t_float args[5] = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    int n = 0;
    while (ac > 0 && n < 5)
    {
        if (av->a_type != A_FLOAT)
        {
            pd_error (x, "[scale~]: improper args");
            return NULL;
        }
        args[n++] = atom_getfloat (av);
        --ac;
        ++av;
    }

    if (n == 2)
    {
        x->x_minout = args[0];
        x->x_maxout = args[1];
    }
    else if (n == 3)
    {
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

    outlet_new (&x->x_obj, &s_signal);
    return x;
}

void scale_tilde_setup (void)
{
    scale_tilde_class = class_new (gensym ("scale~"), (t_newmethod) scale_tilde_new, 0,
                                   sizeof (t_scale_tilde), 0, A_GIMME, 0);
    class_addmethod (scale_tilde_class, nullfn, gensym ("signal"), 0);
    class_addmethod (scale_tilde_class, (t_method) scale_tilde_dsp, gensym ("dsp"), A_CANT, 0);
    class_addmethod (scale_tilde_class, (t_method) scale_tilde_in, gensym ("in"), A_FLOAT, A_FLOAT, 0);
    class_addmethod (scale_tilde_class, (t_method) scale_tilde_exp, gensym ("exp"), A_FLOAT, 0);
    class_addmethod (scale_tilde_class, (t_method) scale_tilde_clip, gensym ("clip"), A_FLOAT, 0);
}
