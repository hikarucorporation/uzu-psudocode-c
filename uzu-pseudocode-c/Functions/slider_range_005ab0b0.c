// Function : slider_range
// Namespace: 
// Entry    : 005ab0b0
// Prototype: undefined slider_range(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 005ab0b0 - 005ab30c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_range(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double local_38;
  
  fVar5 = (float)atom_getfloatarg(0,param_3,param_4);
  fVar6 = (float)atom_getfloatarg(1,param_3,param_4);
  iVar1 = *(int *)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x4bc) == 0) * 4);
  dVar8 = (double)fVar6;
  local_38 = (double)fVar5;
  iVar4 = *(int *)(param_1 + 0x498);
  if (iVar4 == 0) {
    *(double *)(param_1 + 0x4a0) = local_38;
    *(double *)(param_1 + 0x4a8) = dVar8;
    dVar7 = dVar8 - local_38;
  }
  else {
    dVar7 = _DAT_005d9000;
    if (fVar6 != 0.0) {
      dVar7 = dVar8;
    }
    if (fVar5 != 0.0) {
      dVar7 = dVar8;
    }
    dVar8 = dVar7;
    if (dVar8 <= 0.0) {
      if (0.0 < fVar5) {
        dVar8 = DAT_00651f48 * local_38;
      }
    }
    else if (fVar5 <= 0.0) {
      local_38 = DAT_00651f48 * dVar8;
    }
    *(double *)(param_1 + 0x4a0) = local_38;
    *(double *)(param_1 + 0x4a8) = dVar8;
    dVar7 = log(dVar8 / local_38);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  dVar7 = dVar7 / (double)((float)iVar1 / (float)*(int *)(lVar2 + 0xec) + DAT_005d9054);
  *(double *)(param_1 + 0x4b0) = dVar7;
  fVar5 = *(float *)(param_1 + 0x4b8);
  fVar6 = 0.0;
  if (((uint)fVar5 & 0x7f800000) != 0x7f800000) {
    fVar6 = fVar5;
  }
  fVar9 = 0.0;
  if (((uint)fVar5 & 0x7f800000) != 0) {
    fVar9 = fVar6;
  }
  iVar1 = *(int *)(param_1 + 0x494);
  fVar5 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar5 | (uint)fVar9 & -(uint)(fVar5 != 0.0));
  *(float *)(param_1 + 0x4b8) = fVar5;
  if (local_38 <= dVar8) {
    if (dVar8 < (double)fVar5) {
      fVar5 = (float)dVar8;
    }
    if ((double)fVar5 < local_38) {
      fVar5 = (float)local_38;
    }
  }
  else {
    if (local_38 < (double)fVar5) {
      fVar5 = (float)local_38;
    }
    if ((double)fVar5 < dVar8) {
      fVar5 = (float)dVar8;
    }
  }
  if (iVar4 == 0) {
    local_38 = (double)fVar5 - local_38;
  }
  else {
    local_38 = log((double)fVar5 / local_38);
  }
  iVar3 = (int)((local_38 * DAT_005d90a0) / dVar7 + _DAT_0065e808);
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x494) = iVar4;
  *(int *)(param_1 + 0x490) = iVar4;
  if (iVar4 == iVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005ab30b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,lVar2,0);
  return;
}


