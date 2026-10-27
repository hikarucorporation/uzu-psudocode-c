// Function : square_midi
// Namespace: 
// Entry    : 005718c0
// Prototype: undefined square_midi(float param_1, long param_2)
// Body     : 005718c0 - 005718cf


void square_midi(float param_1,long param_2)

{
  *(ulong *)(param_2 + 0x78) = (ulong)(param_1 != 0.0);
  return;
}


