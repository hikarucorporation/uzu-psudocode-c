// Function : create
// Namespace: hb_table_lazy_loader_t_OT__maxp_2u_true_
// Entry    : 003d0720
// Prototype: int * create(long param_1)
// Body     : 003d0720 - 003d078d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_table_lazy_loader_t<OT::maxp, 2u, true>::create(hb_face_t*) */

int * __cdecl hb_table_lazy_loader_t<OT::maxp,2u,true>::create(long param_1)

{
  int *piVar1;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  undefined2 local_c;
  
  local_48[0] = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_20 = 0;
  local_1c = 0;
  uStack_14 = 0;
  local_c = 1;
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* try { // try from 003d075e to 003d0774 has its CatchHandler @ 003d078e */
    piVar1 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x6d617870,*(undefined8 *)(param_1 + 0x28));
    if (piVar1 != (int *)0x0) goto LAB_003d076d;
  }
  piVar1 = &_hb_NullPool;
LAB_003d076d:
  piVar1 = hb_sanitize_context_t::sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_48,piVar1);
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_48);
  return piVar1;
}


