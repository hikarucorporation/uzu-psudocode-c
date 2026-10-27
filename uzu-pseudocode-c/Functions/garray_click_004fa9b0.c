// Function : garray_click
// Namespace: 
// Entry    : 004fa9b0
// Prototype: undefined8 garray_click(long param_1)
// Body     : 004fa9b0 - 004fa9c1


undefined8 garray_click(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 0x20) == 0) {
    return 0;
  }
  uVar1 = gobj_click(*(long **)(param_1 + 0x10));
  return uVar1;
}


