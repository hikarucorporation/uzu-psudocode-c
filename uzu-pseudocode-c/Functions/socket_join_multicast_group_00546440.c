// Function : socket_join_multicast_group
// Namespace: 
// Entry    : 00546440
// Prototype: int socket_join_multicast_group(int param_1, short * param_2)
// Body     : 00546440 - 005464a4


int socket_join_multicast_group(int param_1,short *param_2)

{
  int iVar1;
  int __level;
  socklen_t __optlen;
  ulong local_18;
  undefined8 uStack_10;
  undefined4 local_8;
  
  if (*param_2 == 2) {
    local_18 = (ulong)*(uint *)(param_2 + 2);
    __level = 0;
    iVar1 = 0x23;
    __optlen = 8;
  }
  else {
    if (*param_2 != 10) {
      return -1;
    }
    local_8 = 0;
    local_18 = *(ulong *)(param_2 + 4);
    uStack_10 = *(undefined8 *)(param_2 + 8);
    __level = 0x29;
    iVar1 = 0x14;
    __optlen = 0x14;
  }
  iVar1 = setsockopt(param_1,__level,iVar1,&local_18,__optlen);
  return iVar1;
}


