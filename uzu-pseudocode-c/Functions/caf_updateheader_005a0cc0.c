// Function : caf_updateheader
// Namespace: 
// Entry    : 005a0cc0
// Prototype: bool caf_updateheader(int * param_1, long param_2)
// Body     : 005a0cc0 - 005a0d12


bool caf_updateheader(int *param_1,long param_2)

{
  undefined8 uVar1;
  ssize_t sVar2;
  ulong local_18;
  
  uVar1 = sys_isbigendian();
  local_18 = swap8s(param_1[0xb] * param_2 + 4,(uint)((int)uVar1 == 0));
  sVar2 = fd_write(*param_1,0x38,&local_18,8);
  return 7 < sVar2;
}


