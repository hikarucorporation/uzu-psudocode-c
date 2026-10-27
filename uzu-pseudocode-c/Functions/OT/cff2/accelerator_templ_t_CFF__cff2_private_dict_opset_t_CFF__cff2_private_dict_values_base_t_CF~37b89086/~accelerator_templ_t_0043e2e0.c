// Function : ~accelerator_templ_t
// Namespace: OT:cff2:accelerator_templ_t_CFF__cff2_private_dict_opset_t_CFF__cff2_private_dict_values_base_t_CF~37b89086
// Entry    : 0043e2e0
// Prototype: undefined ~accelerator_templ_t(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>> * this)
// Body     : 0043e2e0 - 0043e42c


/* OT::cff2::accelerator_templ_t<CFF::cff2_private_dict_opset_t,
   CFF::cff2_private_dict_values_base_t<CFF::dict_val_t> >::~accelerator_templ_t() */

void __thiscall
OT::cff2::
accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
::~accelerator_templ_t
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *this)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  
                    /* try { // try from 0043e2eb to 0043e2ef has its CatchHandler @ 0043e42d */
  _fini(this);
  if (*(int *)(this + 0xb0) != 0) {
    uVar3 = (ulong)*(uint *)(this + 0xb4);
    if (uVar3 != 0) {
      piVar1 = (int *)(*(long *)(this + 0xb8) + uVar3 * 0x30 + -0x28);
      do {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulong)uVar2;
        if (*piVar1 != 0) {
          piVar1[1] = 0;
          free(*(void **)(piVar1 + 2));
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0;
        piVar1 = piVar1 + -0xc;
      } while (uVar2 != 0);
    }
    *(undefined4 *)(this + 0xb4) = 0;
    free(*(void **)(this + 0xb8));
  }
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  if (*(int *)(this + 0xa0) != 0) {
    uVar3 = (ulong)*(uint *)(this + 0xa4);
    if (uVar3 != 0) {
      piVar1 = (int *)(*(long *)(this + 0xa8) + uVar3 * 0x28 + -0x20);
      do {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulong)uVar2;
        if (*piVar1 != 0) {
          piVar1[1] = 0;
          free(*(void **)(piVar1 + 2));
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0;
        piVar1 = piVar1 + -10;
      } while (uVar2 != 0);
    }
    *(undefined4 *)(this + 0xa4) = 0;
    free(*(void **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  if (*(int *)(this + 0x50) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)this);
  return;
}


