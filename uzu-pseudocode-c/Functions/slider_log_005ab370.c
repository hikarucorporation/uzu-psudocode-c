// Function : slider_log
// Namespace: 
// Entry    : 005ab370
// Prototype: undefined slider_log(long param_1)
// Body     : 005ab370 - 005ab572


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_log(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  *(undefined4 *)(param_1 + 0x498) = 1;
  dVar10 = *(double *)(param_1 + 0x4a0);
  dVar9 = *(double *)(param_1 + 0x4a8);
  iVar1 = *(int *)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x4bc) == 0) * 4);
  dVar9 = (double)(~-(ulong)(dVar10 == 0.0) & (ulong)dVar9 |
                  (~-(ulong)(dVar9 == 0.0) & (ulong)dVar9 | _DAT_005d9000 & -(ulong)(dVar9 == 0.0))
                  & -(ulong)(dVar10 == 0.0));
  if (dVar9 <= 0.0) {
    if (0.0 < dVar10) {
      dVar9 = DAT_00651f48 * dVar10;
    }
  }
  else if (dVar10 <= 0.0) {
    dVar10 = DAT_00651f48 * dVar9;
  }
  *(double *)(param_1 + 0x4a0) = dVar10;
  *(double *)(param_1 + 0x4a8) = dVar9;
  dVar6 = log(dVar9 / dVar10);
  lVar2 = *(long *)(param_1 + 0x30);
  dVar6 = dVar6 / (double)((float)iVar1 / (float)*(int *)(lVar2 + 0xec) + DAT_005d9054);
  *(double *)(param_1 + 0x4b0) = dVar6;
  fVar5 = *(float *)(param_1 + 0x4b8);
  fVar8 = 0.0;
  if (((uint)fVar5 & 0x7f800000) != 0x7f800000) {
    fVar8 = fVar5;
  }
  fVar7 = 0.0;
  if (((uint)fVar5 & 0x7f800000) != 0) {
    fVar7 = fVar8;
  }
  iVar1 = *(int *)(param_1 + 0x494);
  fVar5 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar5 | (uint)fVar7 & -(uint)(fVar5 != 0.0));
  *(float *)(param_1 + 0x4b8) = fVar5;
  if (dVar10 <= dVar9) {
    if (dVar9 < (double)fVar5) {
      fVar5 = (float)dVar9;
    }
    if ((double)fVar5 < dVar10) {
      fVar5 = (float)dVar10;
    }
  }
  else {
    if (dVar10 < (double)fVar5) {
      fVar5 = (float)dVar10;
    }
    if ((double)fVar5 < dVar9) {
      fVar5 = (float)dVar9;
    }
  }
  dVar10 = log((double)fVar5 / dVar10);
  iVar3 = (int)((dVar10 * DAT_005d90a0) / dVar6 + _DAT_0065e808);
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x494) = iVar4;
  *(int *)(param_1 + 0x490) = iVar4;
  if (iVar4 == iVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005ab571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,lVar2,0);
  return;
}


