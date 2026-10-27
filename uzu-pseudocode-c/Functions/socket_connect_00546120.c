// Function : socket_connect
// Namespace: 
// Entry    : 00546120
// Prototype: undefined8 socket_connect(float param_1, int param_2, sockaddr * param_3, socklen_t param_4)
// Body     : 00546120 - 00546327


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 socket_connect(float param_1,int param_2,sockaddr *param_3,socklen_t param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  socklen_t local_150;
  int local_14c;
  timeval local_148;
  float local_138;
  fd_set local_128;
  fd_set local_a8;
  
  uVar6 = 0;
  local_138 = param_1;
  uVar1 = fcntl(param_2,3,0);
  fcntl(param_2,4,(ulong)(uVar1 | 0x800));
  iVar2 = connect(param_2,param_3,param_4);
  if (iVar2 < 0) {
    piVar4 = __errno_location();
    if (*piVar4 == 0x73) {
      fVar7 = local_138;
      if (local_138 <= 0.0) {
        fVar7 = 0.0;
      }
      local_148.tv_sec = (__time_t)(int)fVar7;
      local_148.tv_usec = (__suseconds_t)((fVar7 - (float)(int)fVar7) * _DAT_00659418);
      local_a8.fds_bits[0] = 0;
      local_a8.fds_bits[1] = 0;
      local_a8.fds_bits[2] = 0;
      local_a8.fds_bits[3] = 0;
      local_a8.fds_bits[4] = 0;
      local_a8.fds_bits[5] = 0;
      local_a8.fds_bits[6] = 0;
      local_a8.fds_bits[7] = 0;
      local_a8.fds_bits[8] = 0;
      local_a8.fds_bits[9] = 0;
      local_a8.fds_bits[10] = 0;
      local_a8.fds_bits[0xb] = 0;
      local_a8.fds_bits[0xc] = 0;
      local_a8.fds_bits[0xd] = 0;
      iVar2 = param_2 + 0x3f;
      if (-1 < param_2) {
        iVar2 = param_2;
      }
      local_a8.fds_bits[0xe] = 0;
      local_a8.fds_bits[0xf] = 0;
      uVar5 = 1L << ((byte)param_2 & 0x3f);
      iVar2 = iVar2 >> 6;
      local_a8.fds_bits[iVar2] = local_a8.fds_bits[iVar2] | uVar5;
      local_128.fds_bits[0] = 0;
      local_128.fds_bits[1] = 0;
      local_128.fds_bits[2] = 0;
      local_128.fds_bits[3] = 0;
      local_128.fds_bits[4] = 0;
      local_128.fds_bits[5] = 0;
      local_128.fds_bits[6] = 0;
      local_128.fds_bits[7] = 0;
      local_128.fds_bits[8] = 0;
      local_128.fds_bits[9] = 0;
      local_128.fds_bits[10] = 0;
      local_128.fds_bits[0xb] = 0;
      local_128.fds_bits[0xc] = 0;
      local_128.fds_bits[0xd] = 0;
      local_128.fds_bits[0xe] = 0;
      local_128.fds_bits[0xf] = 0;
      local_128.fds_bits[iVar2] = local_128.fds_bits[iVar2] | uVar5;
      iVar3 = select(param_2 + 1,(fd_set *)0x0,&local_a8,&local_128,&local_148);
      if (iVar3 < 0) {
        fwrite("socket_connect: select failed",0x1d,1,*(FILE **)PTR_stderr_00715948);
      }
      else if (iVar3 == 0) {
        *piVar4 = 0x6e;
      }
      else {
        if ((local_128.fds_bits[iVar2] & uVar5) == 0) goto LAB_00546174;
        local_150 = 4;
        getsockopt(param_2,1,4,&local_14c,&local_150);
        *piVar4 = local_14c;
      }
    }
    uVar6 = 0xffffffff;
  }
  else {
LAB_00546174:
    uVar1 = fcntl(param_2,3,0);
    fcntl(param_2,4,(ulong)(uVar1 & 0xfffff7ff));
  }
  return uVar6;
}


