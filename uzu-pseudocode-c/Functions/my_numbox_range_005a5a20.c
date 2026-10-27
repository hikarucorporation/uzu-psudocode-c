// Function : my_numbox_range
// Namespace: 
// Entry    : 005a5a20
// Prototype: undefined my_numbox_range(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 005a5a20 - 005a5bb8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void my_numbox_range(long param_1,undefined8 param_2,int param_3,long param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar2 = (float)atom_getfloatarg(0,param_3,param_4);
  dVar4 = (double)fVar2;
  fVar3 = (float)atom_getfloatarg(1,param_3,param_4);
  dVar5 = (double)fVar3;
  if (*(int *)(param_1 + 0x4c0) != 0) {
    dVar6 = _DAT_005d9000;
    if (fVar3 != 0.0) {
      dVar6 = dVar5;
    }
    if (fVar2 != 0.0) {
      dVar6 = dVar5;
    }
    dVar5 = dVar6;
    if (dVar5 <= 0.0) {
      if (0.0 < fVar2) {
        dVar5 = DAT_00651f48 * dVar4;
      }
    }
    else if (fVar2 <= 0.0) {
      dVar4 = DAT_00651f48 * dVar5;
    }
  }
  *(double *)(param_1 + 0x4a8) = dVar4;
  *(double *)(param_1 + 0x4b0) = dVar5;
  dVar6 = (double)*(float *)(param_1 + 0x4a0);
  bVar1 = dVar6 < dVar4;
  if (bVar1) {
    *(float *)(param_1 + 0x4a0) = (float)dVar4;
    dVar6 = (double)(float)dVar4;
  }
  if (dVar6 > dVar5) {
    *(float *)(param_1 + 0x4a0) = (float)dVar5;
  }
  if (*(int *)(param_1 + 0x4c0) == 0) {
    *(double *)(param_1 + 0x4b8) = _DAT_005d9000;
  }
  else {
    dVar4 = log(dVar5 / dVar4);
    dVar4 = exp(dVar4 / (double)*(int *)(param_1 + 0x4e8));
    *(double *)(param_1 + 0x4b8) = dVar4;
  }
  if (!(dVar6 > dVar5 || bVar1)) {
    return;
  }
  sys_queuegui(param_1,*(long *)(param_1 + 0x30),0x5a68b0);
  return;
}


