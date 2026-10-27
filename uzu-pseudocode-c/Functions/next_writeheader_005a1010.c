// Function : next_writeheader
// Namespace: 
// Entry    : 005a1010
// Prototype: ulong next_writeheader(int * param_1, long param_2)
// Body     : 005a1010 - 005a10eb


ulong next_writeheader(int *param_1,long param_2)

{
  bool bVar1;
  undefined7 extraout_var;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  
  bVar1 = soundfile_needsbyteswap((long)param_1);
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (int)param_2 * param_1[0xb];
  }
  local_38 = 0x646e732e;
  iVar5 = (int)CONCAT71(extraout_var,bVar1);
  local_34 = swap4(0x1c,iVar5);
  local_30 = swap4(uVar4,iVar5);
  local_2c = 0;
  local_28 = swap4(param_1[4],iVar5);
  local_24 = swap4(param_1[5],iVar5);
  local_20 = 0x206450;
  if (param_1[10] == 0) {
    swapstring4((undefined1 *)&local_38,1);
  }
  uVar3 = 0;
  if (param_1[6] - 2U < 3) {
    local_2c = swap4(*(uint *)(&DAT_0065e4d4 + (long)(int)(param_1[6] - 2U) * 4),iVar5);
    uVar2 = fd_write(*param_1,0,&local_38,0x1c);
    uVar3 = 0xffffffff;
    if (0x1b < (long)uVar2) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  return uVar3;
}


