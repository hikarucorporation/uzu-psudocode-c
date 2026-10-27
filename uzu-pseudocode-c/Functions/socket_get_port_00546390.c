// Function : socket_get_port
// Namespace: 
// Entry    : 00546390
// Prototype: ushort socket_get_port(int param_1)
// Body     : 00546390 - 005463e3


ushort socket_get_port(int param_1)

{
  int iVar1;
  socklen_t local_84;
  sockaddr local_80 [8];
  
  local_84 = 0x80;
  iVar1 = getsockname(param_1,local_80,&local_84);
  if ((iVar1 < 0) || ((local_80[0].sa_family != 2 && (local_80[0].sa_family != 10)))) {
    return 0;
  }
  return local_80[0].sa_data._0_2_ << 8 | (ushort)local_80[0].sa_data._0_2_ >> 8;
}


