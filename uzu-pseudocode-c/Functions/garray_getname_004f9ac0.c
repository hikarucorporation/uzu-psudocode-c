// Function : garray_getname
// Namespace: 
// Entry    : 004f9ac0
// Prototype: uint garray_getname(long param_1, undefined8 * param_2)
// Body     : 004f9ac0 - 004f9ad0


uint garray_getname(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  return *(uint *)(param_1 + 0x30) >> 4 & 1;
}


