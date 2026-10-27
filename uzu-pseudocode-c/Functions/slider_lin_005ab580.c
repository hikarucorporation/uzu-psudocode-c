// Function : slider_lin
// Namespace: 
// Entry    : 005ab580
// Prototype: undefined slider_lin(long param_1)
// Body     : 005ab580 - 005ab6ba


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_lin(long param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = *(int *)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x4bc) == 0) * 4);
  *(undefined4 *)(param_1 + 0x498) = 0;
  dVar1 = *(double *)(param_1 + 0x4a8);
  dVar2 = *(double *)(param_1 + 0x4a0);
  dVar6 = (dVar1 - dVar2) /
          ((double)iVar3 / (double)*(int *)(*(long *)(param_1 + 0x30) + 0xec) + DAT_00651e70);
  *(double *)(param_1 + 0x4b0) = dVar6;
  fVar7 = *(float *)(param_1 + 0x4b8);
  fVar9 = 0.0;
  if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
    fVar9 = fVar7;
  }
  fVar8 = 0.0;
  if (((uint)fVar7 & 0x7f800000) != 0) {
    fVar8 = fVar9;
  }
  iVar3 = *(int *)(param_1 + 0x494);
  fVar7 = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar7 | (uint)fVar8 & -(uint)(fVar7 != 0.0));
  *(float *)(param_1 + 0x4b8) = fVar7;
  if (dVar2 <= dVar1) {
    if (dVar1 < (double)fVar7) {
      fVar7 = (float)dVar1;
    }
    if ((double)fVar7 < dVar2) {
      fVar7 = (float)dVar2;
    }
  }
  else {
    if (dVar2 < (double)fVar7) {
      fVar7 = (float)dVar2;
    }
    if ((double)fVar7 < dVar1) {
      fVar7 = (float)dVar1;
    }
  }
  iVar4 = (int)((((double)fVar7 - dVar2) * DAT_005d90a0) / dVar6 + _DAT_0065e808);
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x494) = iVar5;
  *(int *)(param_1 + 0x490) = iVar5;
  if (iVar5 == iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005ab6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,*(long *)(param_1 + 0x30),0);
  return;
}


