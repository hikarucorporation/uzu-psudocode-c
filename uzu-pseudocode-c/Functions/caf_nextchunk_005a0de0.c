// Function : caf_nextchunk
// Namespace: 
// Entry    : 005a0de0
// Prototype: long caf_nextchunk(int * param_1, long param_2, void * param_3)
// Body     : 005a0de0 - 005a0e41


long caf_nextchunk(int *param_1,long param_2,void *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ssize_t sVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = sys_isbigendian();
  uVar2 = swap8s(*(ulong *)((long)param_3 + 4),(uint)((int)uVar1 == 0));
  lVar5 = (ulong)((int)uVar2 + (int)param_2 + 0xcU & 1) + param_2 + uVar2 + 0xc;
  sVar3 = fd_read(*param_1,lVar5,param_3,0xc);
  lVar4 = -1;
  if (0xb < sVar3) {
    lVar4 = lVar5;
  }
  return lVar4;
}


