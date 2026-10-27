// Function : bob_saturation
// Namespace: 
// Entry    : 004d7e20
// Prototype: undefined bob_saturation(float param_1, long param_2)
// Body     : 004d7e20 - 004d7e4a


void bob_saturation(float param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = -(ulong)(DAT_00651e50 < (double)param_1);
  *(ulong *)(param_2 + 0x58) = ~uVar1 & DAT_00651e58 | (ulong)(double)param_1 & uVar1;
  return;
}


