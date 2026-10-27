// Function : next_updateheader
// Namespace: 
// Entry    : 005a10f0
// Prototype: bool next_updateheader(int * param_1, long param_2)
// Body     : 005a10f0 - 005a114a


bool next_updateheader(int *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  ssize_t sVar3;
  ulong local_18;
  
  bVar1 = soundfile_needsbyteswap((long)param_1);
  uVar2 = 0xffffffff;
  if ((ulong)(param_1[0xb] * param_2) < 0xffffffff) {
    uVar2 = (uint)(param_1[0xb] * param_2);
  }
  uVar2 = swap4(uVar2,(int)CONCAT71(extraout_var,bVar1));
  local_18 = (ulong)uVar2;
  sVar3 = fd_write(*param_1,8,&local_18,4);
  return 3 < sVar3;
}


