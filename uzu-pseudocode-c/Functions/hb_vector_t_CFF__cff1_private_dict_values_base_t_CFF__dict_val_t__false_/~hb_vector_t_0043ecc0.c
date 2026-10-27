// Function : ~hb_vector_t
// Namespace: hb_vector_t_CFF__cff1_private_dict_values_base_t_CFF__dict_val_t__false_
// Entry    : 0043ecc0
// Prototype: undefined ~hb_vector_t(hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false> * this)
// Body     : 0043ecc0 - 0043ed37


/* hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>, false>::~hb_vector_t() */

void __thiscall
hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>::~hb_vector_t
          (hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false> *this)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)this != 0) {
    uVar3 = (ulong)*(uint *)(this + 4);
    if (uVar3 != 0) {
      piVar1 = (int *)(*(long *)(this + 8) + uVar3 * 0x28 + -0x20);
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
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


