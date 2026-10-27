// Function : canvas_setdeleting
// Namespace: 
// Entry    : 00515e80
// Prototype: uint canvas_setdeleting(long param_1, ushort param_2)
// Body     : 00515e80 - 00515ea0


uint canvas_setdeleting(long param_1,ushort param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe8);
  *(ushort *)(param_1 + 0xe8) = (ushort)uVar1 & 0xffbf | (param_2 & 1) << 6;
  return uVar1 >> 6 & 1;
}


