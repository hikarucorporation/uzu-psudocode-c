// Function : hb_paint_extents_pop_group
// Namespace: 
// Entry    : 0046b9d0
// Prototype: undefined hb_paint_extents_pop_group(undefined8 param_1, long param_2, uint param_3)
// Body     : 0046b9d0 - 0046bb08


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_pop_group(hb_paint_funcs_t*, void*, hb_paint_composite_mode_t, void*) */

void __cdecl hb_paint_extents_pop_group(undefined8 param_1,long param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) {
    iVar6 = 0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
LAB_0046ba10:
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
    piVar4 = (int *)&_hb_CrapPool;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x28);
    uVar5 = iVar2 - 1;
    iVar6 = *(int *)(lVar3 + (ulong)uVar5 * 0x14);
    pfVar1 = (float *)(lVar3 + 4 + (ulong)uVar5 * 0x14);
    fVar10 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar13 = pfVar1[3];
    *(uint *)(param_2 + 0x24) = uVar5;
    if (uVar5 == 0) goto LAB_0046ba10;
    piVar4 = (int *)(lVar3 + (ulong)(iVar2 - 2) * 0x14);
  }
  if (8 < param_3) {
switchD_0046ba3d_caseD_3:
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *piVar4 = 0;
        return;
      }
      return;
    }
    if (*piVar4 == 1) {
      uVar5 = -(uint)((float)piVar4[1] <= fVar10);
      uVar7 = -(uint)((float)piVar4[2] <= fVar11);
      uVar8 = -(uint)(fVar12 <= (float)piVar4[3]);
      uVar9 = -(uint)(fVar13 <= (float)piVar4[4]);
      piVar4[1] = ~uVar5 & (uint)fVar10 | piVar4[1] & uVar5;
      piVar4[2] = ~uVar7 & (uint)fVar11 | piVar4[2] & uVar7;
      piVar4[3] = ~uVar8 & (uint)fVar12 | piVar4[3] & uVar8;
      piVar4[4] = ~uVar9 & (uint)fVar13 | piVar4[4] & uVar9;
      return;
    }
    if (*piVar4 != 2) {
      return;
    }
LAB_0046ba8a:
    *piVar4 = 1;
    piVar4[1] = (int)fVar10;
    piVar4[2] = (int)fVar11;
    piVar4[3] = (int)fVar12;
    piVar4[4] = (int)fVar13;
    return;
  }
  switch(param_3) {
  case 0:
switchD_0046ba3d_caseD_0:
    *piVar4 = 2;
    return;
  default:
    *piVar4 = iVar6;
    piVar4[1] = (int)fVar10;
    piVar4[2] = (int)fVar11;
    piVar4[3] = (int)fVar12;
    piVar4[4] = (int)fVar13;
    return;
  case 2:
  case 8:
    return;
  case 3:
  case 4:
    goto switchD_0046ba3d_caseD_3;
  case 5:
  case 6:
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        return;
      }
      goto switchD_0046ba3d_caseD_0;
    }
    if (*piVar4 == 1) {
      uVar5 = -(uint)(fVar10 <= (float)piVar4[1]);
      uVar7 = -(uint)(fVar11 <= (float)piVar4[2]);
      uVar8 = -(uint)((float)piVar4[3] <= fVar12);
      uVar9 = -(uint)((float)piVar4[4] <= fVar13);
      fVar10 = (float)(~uVar5 & (uint)fVar10 | piVar4[1] & uVar5);
      fVar11 = (float)(~uVar7 & (uint)fVar11 | piVar4[2] & uVar7);
      fVar12 = (float)(~uVar8 & (uint)fVar12 | piVar4[3] & uVar8);
      fVar13 = (float)(~uVar9 & (uint)fVar13 | piVar4[4] & uVar9);
      piVar4[1] = (int)fVar10;
      piVar4[2] = (int)fVar11;
      piVar4[3] = (int)fVar12;
      piVar4[4] = (int)fVar13;
      if ((fVar10 < fVar12) && (fVar11 < fVar13)) {
        return;
      }
      goto switchD_0046ba3d_caseD_0;
    }
    if (*piVar4 != 0) {
      return;
    }
    goto LAB_0046ba8a;
  }
}


