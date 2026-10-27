// Function : garray_edit
// Namespace: 
// Entry    : 004fbef0
// Prototype: undefined garray_edit(float param_1, long param_2)
// Body     : 004fbef0 - 004fbf04


void garray_edit(float param_1,long param_2)

{
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xdf | ((byte)(int)param_1 & 1) << 5;
  return;
}


