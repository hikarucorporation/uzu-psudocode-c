// Function : socket_bytes_available
// Namespace: 
// Entry    : 00546410
// Prototype: undefined4 socket_bytes_available(int param_1)
// Body     : 00546410 - 0054643a


undefined4 socket_bytes_available(int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  iVar1 = ioctl(param_1,0x541b,(long)&uStack_8 + 4);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = uStack_8._4_4_;
  }
  return uVar2;
}


