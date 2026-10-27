// Function : ~accelerator_templ_t
// Namespace: OT:cff1:accelerator_templ_t_CFF__cff1_private_dict_opset_t_CFF__cff1_private_dict_values_base_t_CF~c1ca8b38
// Entry    : 0043e150
// Prototype: undefined ~accelerator_templ_t(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>> * this)
// Body     : 0043e150 - 0043e2a8


/* OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_t,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t> >::~accelerator_templ_t() */

void __thiscall
OT::cff1::
accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
::~accelerator_templ_t
          (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
           *this)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  
                    /* try { // try from 0043e15b to 0043e15f has its CatchHandler @ 0043e2a9 */
  _fini(this);
  if (*(int *)(this + 0x118) != 0) {
    uVar3 = (ulong)*(uint *)(this + 0x11c);
    if (uVar3 != 0) {
      piVar1 = (int *)(*(long *)(this + 0x120) + uVar3 * 0x28 + -0x20);
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
    *(undefined4 *)(this + 0x11c) = 0;
    free(*(void **)(this + 0x120));
  }
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  if (*(int *)(this + 0x108) != 0) {
    uVar3 = (ulong)*(uint *)(this + 0x10c);
    if (uVar3 != 0) {
      piVar1 = (int *)(*(long *)(this + 0x110) + uVar3 * 0x28 + -0x20);
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
    *(undefined4 *)(this + 0x10c) = 0;
    free(*(void **)(this + 0x110));
  }
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  if (*(int *)(this + 0xa0) != 0) {
    *(undefined4 *)(this + 0xa4) = 0;
    free(*(void **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)this);
  return;
}


