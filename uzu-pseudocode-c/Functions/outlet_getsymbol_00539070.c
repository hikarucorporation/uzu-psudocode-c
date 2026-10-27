// Function : outlet_getsymbol
// Namespace: 
// Entry    : 00539070
// Prototype: undefined8 outlet_getsymbol(long param_1)
// Body     : 00539070 - 00539074


undefined8 outlet_getsymbol(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


