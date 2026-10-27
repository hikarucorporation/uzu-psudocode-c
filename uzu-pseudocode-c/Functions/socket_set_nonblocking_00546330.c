// Function : socket_set_nonblocking
// Namespace: 
// Entry    : 00546330
// Prototype: int socket_set_nonblocking(int param_1, int param_2)
// Body     : 00546330 - 0054636e


int socket_set_nonblocking(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1,3,0);
  iVar2 = fcntl(param_1,4,(ulong)((uint)(param_2 != 0) << 0xb | uVar1 & 0xfffff7ff));
  return iVar2 >> 0x1f;
}


