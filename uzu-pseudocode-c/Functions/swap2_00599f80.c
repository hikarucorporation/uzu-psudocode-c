// Function : swap2
// Namespace: 
// Entry    : 00599f80
// Prototype: ushort swap2(ushort param_1, int param_2)
// Body     : 00599f80 - 00599f8b


ushort swap2(ushort param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = param_1 << 8 | param_1 >> 8;
  if (param_2 == 0) {
    uVar1 = param_1;
  }
  return uVar1;
}


