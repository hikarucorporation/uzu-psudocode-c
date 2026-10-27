// Function : my_numbox_log
// Namespace: 
// Entry    : 005a5d00
// Prototype: undefined my_numbox_log(long param_1)
// Body     : 005a5d00 - 005a5e20


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void my_numbox_log(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *(undefined4 *)(param_1 + 0x4c0) = 1;
  dVar3 = *(double *)(param_1 + 0x4a8);
  dVar2 = *(double *)(param_1 + 0x4b0);
  dVar2 = (double)(~-(ulong)(dVar3 == 0.0) & (ulong)dVar2 |
                  (~-(ulong)(dVar2 == 0.0) & (ulong)dVar2 | _DAT_005d9000 & -(ulong)(dVar2 == 0.0))
                  & -(ulong)(dVar3 == 0.0));
  if (dVar2 <= 0.0) {
    if (0.0 < dVar3) {
      dVar2 = DAT_00651f48 * dVar3;
    }
  }
  else if (dVar3 <= 0.0) {
    dVar3 = DAT_00651f48 * dVar2;
  }
  *(double *)(param_1 + 0x4a8) = dVar3;
  *(double *)(param_1 + 0x4b0) = dVar2;
  dVar4 = (double)*(float *)(param_1 + 0x4a0);
  bVar1 = dVar4 < dVar3;
  if (bVar1) {
    *(float *)(param_1 + 0x4a0) = (float)dVar3;
    dVar4 = (double)(float)dVar3;
  }
  if (dVar2 < dVar4) {
    *(float *)(param_1 + 0x4a0) = (float)dVar2;
  }
  dVar3 = log(dVar2 / dVar3);
  dVar3 = exp(dVar3 / (double)*(int *)(param_1 + 0x4e8));
  *(double *)(param_1 + 0x4b8) = dVar3;
  if (dVar2 < dVar4 || bVar1) {
    sys_queuegui(param_1,*(long *)(param_1 + 0x30),0x5a68b0);
    return;
  }
  return;
}


