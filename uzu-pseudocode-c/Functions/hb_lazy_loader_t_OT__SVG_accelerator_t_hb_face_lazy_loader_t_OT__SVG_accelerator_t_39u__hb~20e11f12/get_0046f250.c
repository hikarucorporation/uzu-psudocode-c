// Function : get
// Namespace: hb_lazy_loader_t_OT__SVG_accelerator_t_hb_face_lazy_loader_t_OT__SVG_accelerator_t_39u__hb~20e11f12
// Entry    : 0046f250
// Prototype: accelerator_t * get(hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t> * this)
// Body     : 0046f250 - 0046f33e


/* hb_lazy_loader_t<OT::SVG_accelerator_t, hb_face_lazy_loader_t<OT::SVG_accelerator_t, 39u>,
   hb_face_t, 39u, OT::SVG_accelerator_t>::get() const */

accelerator_t * __thiscall
hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
::get(hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
      *this)

{
  long lVar1;
  accelerator_t *paVar2;
  int *piVar3;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  paVar2 = *(accelerator_t **)this;
  if (paVar2 == (accelerator_t *)0x0) {
    do {
      lVar1 = *(long *)(this + -0x138);
      if (lVar1 == 0) {
LAB_0046f337:
        return (accelerator_t *)&_hb_NullPool;
      }
      paVar2 = calloc(1,8);
      if (paVar2 == (accelerator_t *)0x0) {
        LOCK();
        lVar1 = *(long *)this;
        if (lVar1 == 0) {
          *(undefined4 **)this = &_hb_NullPool;
        }
        UNLOCK();
        if (lVar1 == 0) goto LAB_0046f337;
      }
      else {
        local_70[0] = 0;
        local_44 = 0;
        local_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_38 = 0x10000;
        local_34 = 0;
                    /* try { // try from 0046f2ea to 0046f2f4 has its CatchHandler @ 0046f33f */
        piVar3 = hb_sanitize_context_t::reference_table<OT::SVG>
                           ((hb_sanitize_context_t *)local_70,lVar1);
        *(int **)paVar2 = piVar3;
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        LOCK();
        lVar1 = *(long *)this;
        if (lVar1 == 0) {
          *(accelerator_t **)this = paVar2;
        }
        UNLOCK();
        if (lVar1 == 0) {
          return paVar2;
        }
        OT::SVG::accelerator_t::~accelerator_t(paVar2);
        free(paVar2);
      }
      paVar2 = *(accelerator_t **)this;
    } while (paVar2 == (accelerator_t *)0x0);
  }
  return paVar2;
}


