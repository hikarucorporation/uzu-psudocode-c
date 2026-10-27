// Function : get
// Namespace: hb_lazy_loader_t_OT__cff1_accelerator_t_hb_face_lazy_loader_t_OT__cff1_accelerator_t_16u__~3487b85a
// Entry    : 0044a470
// Prototype: accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>> * get(hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t> * this)
// Body     : 0044a470 - 0044a538


/* hb_lazy_loader_t<OT::cff1_accelerator_t, hb_face_lazy_loader_t<OT::cff1_accelerator_t, 16u>,
   hb_face_t, 16u, OT::cff1_accelerator_t>::get() const */

accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
* __thiscall
hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
::get(hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
      *this)

{
  long lVar1;
  int *__ptr;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar2;
  
  paVar2 = *(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
             **)this;
  while( true ) {
    if (paVar2 != (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                   *)0x0) {
      return paVar2;
    }
    lVar1 = *(long *)(this + -0x80);
    if (lVar1 == 0) break;
    paVar2 = calloc(1,0x138);
    if (paVar2 == (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                   *)0x0) {
      LOCK();
      lVar1 = *(long *)this;
      if (lVar1 == 0) {
        *(undefined4 **)this = &_hb_NullPool;
      }
      UNLOCK();
      if (lVar1 == 0) break;
    }
    else {
      OT::cff1::
      accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
      ::accelerator_templ_t(paVar2,lVar1);
      *(undefined8 *)(paVar2 + 0x130) = 0;
      LOCK();
      lVar1 = *(long *)this;
      if (lVar1 == 0) {
        *(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
          **)this = paVar2;
      }
      UNLOCK();
      if (lVar1 == 0) {
        return paVar2;
      }
      __ptr = *(int **)(paVar2 + 0x130);
      if (__ptr != (int *)0x0) {
        if (*__ptr != 0) {
          __ptr[1] = 0;
          free(*(void **)(__ptr + 2));
        }
        free(__ptr);
      }
      OT::cff1::
      accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
      ::~accelerator_templ_t(paVar2);
      free(paVar2);
    }
    paVar2 = *(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
               **)this;
  }
  return (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
          *)&_hb_NullPool;
}


