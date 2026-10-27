// Function : sigfiddle_auto
// Namespace: 
// Entry    : 004e1100
// Prototype: undefined sigfiddle_auto(float param_1, long param_2)
// Body     : 004e1100 - 004e1111


void sigfiddle_auto(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x310) = (uint)(param_1 != 0.0);
  return;
}


