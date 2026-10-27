// Function : bng_flashtime
// Namespace: 
// Entry    : 005a27c0
// Prototype: undefined bng_flashtime(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 005a27c0 - 005a282a


void bng_flashtime(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)atom_getfloatarg(0,param_3,param_4);
  iVar2 = (int)fVar4;
  fVar4 = (float)atom_getfloatarg(1,param_3,param_4);
  iVar1 = (int)fVar4;
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
    iVar1 = iVar2;
  }
  iVar2 = 10;
  if (10 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = 0x32;
  if (0x32 < iVar1) {
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 0x494) = iVar2;
  *(int *)(param_1 + 0x498) = iVar3;
  return;
}


