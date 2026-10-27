// Function : gtemplate_get
// Namespace: 
// Entry    : 005213b0
// Prototype: undefined8 gtemplate_get(long param_1)
// Body     : 005213b0 - 005213b4


undefined8 gtemplate_get(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


