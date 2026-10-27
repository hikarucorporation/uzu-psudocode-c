// Function : drawForPath
// Namespace: juce:DropShadow
// Entry    : 003cdae0
// Prototype: undefined drawForPath(DropShadow * this, Graphics * param_1, undefined8 * param_2)
// Body     : 003cdae0 - 003cdfcc


/* juce::DropShadow::drawForPath(juce::Graphics&, juce::Path const&) const */

void __thiscall
juce::DropShadow::drawForPath(DropShadow *this,Graphics *param_1,undefined8 *param_2)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  DropShadow *pDVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  int iVar11;
  int iVar13;
  uint uVar12;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  long *local_a8;
  ulong local_a0;
  ulong local_98;
  DropShadow *local_90;
  undefined8 *local_88;
  long *local_80;
  undefined8 local_78;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined1 local_60 [16];
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined1 local_38;
  
  fVar23 = *(float *)(param_2 + 2);
  iVar17 = -0x80000000;
  iVar20 = -0x80000000;
  local_98 = CONCAT44(local_98._4_4_,*(float *)(param_2 + 3));
  local_a0 = CONCAT44(local_a0._4_4_,*(float *)((long)param_2 + 0x1c));
  fVar22 = *(float *)(param_2 + 3);
  fVar24 = *(float *)((long)param_2 + 0x1c);
  fVar25 = *(float *)((long)param_2 + 0x14);
  local_88 = param_2;
  if (DAT_00653430 < fVar23) {
    local_90 = (DropShadow *)CONCAT44(local_90._4_4_,*(float *)((long)param_2 + 0x14));
    fVar22 = floorf(fVar23);
    iVar20 = (int)fVar22;
    fVar22 = (float)local_98;
    fVar24 = (float)local_a0;
    fVar25 = local_90._0_4_;
  }
  fVar26 = fVar25 - fVar23;
  if (DAT_00653430 < fVar22) {
    local_90 = (DropShadow *)CONCAT44(local_90._4_4_,fVar25 - fVar23);
    fVar22 = floorf((float)local_98);
    iVar17 = (int)fVar22;
    fVar22 = (float)local_98;
    fVar24 = (float)local_a0;
    fVar26 = local_90._0_4_;
  }
  uVar14 = 0x7fffffff;
  iVar15 = 0x7fffffff;
  fVar25 = fVar24 - fVar22;
  if (fVar23 + fVar26 < DAT_00653434) {
    local_a0 = CONCAT44(local_a0._4_4_,fVar24 - fVar22);
    fVar23 = ceilf(fVar23 + fVar26);
    iVar15 = (int)fVar23;
    fVar22 = (float)local_98;
    fVar25 = (float)local_a0;
  }
  if (fVar22 + fVar25 < DAT_00653434) {
    fVar23 = ceilf(fVar22 + fVar25);
    uVar14 = (ulong)(uint)(int)fVar23;
  }
  uVar12 = *(uint *)(this + 4);
  local_a0 = (ulong)uVar12;
  iVar15 = (iVar15 - iVar20) + 2 + uVar12 * 2;
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  iVar21 = iVar20 + (int)*(undefined8 *)(this + 8) + ~uVar12;
  iVar18 = ~uVar12 + (int)((ulong)*(undefined8 *)(this + 8) >> 0x20) + iVar17;
  local_98 = uVar14;
  auVar27 = (**(code **)(**(long **)(param_1 + 8) + 0x60))();
  iVar20 = *(int *)(this + 4);
  iVar16 = auVar27._8_4_ + iVar20 * 2 + 2;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  iVar11 = auVar27._0_4_ - (iVar20 + 1);
  iVar8 = auVar27._4_4_ - (iVar20 + 1);
  iVar19 = iVar21;
  if (iVar21 < iVar11) {
    iVar19 = iVar11;
  }
  iVar3 = iVar18;
  if (iVar18 < iVar8) {
    iVar3 = iVar8;
  }
  iVar13 = iVar11 + iVar16;
  if (iVar21 + iVar15 <= iVar11 + iVar16) {
    iVar13 = iVar21 + iVar15;
  }
  uVar12 = iVar13 - iVar19;
  if (-1 < (int)uVar12) {
    iVar17 = ((int)local_98 - iVar17) + (int)local_a0 * 2 + 2;
    if (iVar17 < 0) {
      iVar17 = 0;
    }
    iVar15 = auVar27._12_4_ + iVar20 * 2 + 2;
    iVar20 = 0;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    iVar15 = iVar20 + iVar8;
    if (iVar17 + iVar18 <= iVar20 + iVar8) {
      iVar15 = iVar17 + iVar18;
    }
    if ((2 < iVar15 - iVar3) && (2 < uVar12)) {
      local_90 = this;
      (**(code **)(**(long **)(param_1 + 8) + 0x110))(&local_80);
                    /* try { // try from 003cdcf9 to 003cdd10 has its CatchHandler @ 003cdff2 */
      (**(code **)(*local_80 + 0x10))(&local_a8,local_80,3,uVar12,iVar15 - iVar3,1);
      plVar5 = local_a8;
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
                    /* try { // try from 003cdd1f to 003cdd38 has its CatchHandler @ 003cdff7 */
      puVar9 = (undefined8 *)(**(code **)(*local_a8 + 0x28))(local_a8);
      pDVar6 = local_90;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,0);
      }
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
                    /* try { // try from 003cdd52 to 003cdd59 has its CatchHandler @ 003cdff0 */
      (**(code **)(*local_a8 + 0x10))(&local_48);
      local_40 = local_48;
      local_38 = 0;
      local_78 = CONCAT44(local_78._4_4_,_ZN4juce7ColoursL5whiteE_474);
      local_70 = 0.0;
      uStack_6c = 0;
      uStack_68 = 0;
      fStack_64 = 0.0;
      local_60 = ZEXT416(DAT_005d9038);
      local_50 = 0x3f800000;
                    /* try { // try from 003cdd97 to 003cdda1 has its CatchHandler @ 003cdfd4 */
      (**(code **)(*local_48 + 0x90))(local_48,&local_78);
      plVar5 = (long *)CONCAT44(fStack_64,uStack_68);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      pvVar4 = (void *)CONCAT44(uStack_6c,local_70);
      if (pvVar4 != (void *)0x0) {
        *(undefined4 *)((long)pvVar4 + 0x24) = 0;
        free(*(void **)((long)pvVar4 + 0x18));
        operator_delete(pvVar4);
      }
      local_70 = (float)(*(int *)(pDVar6 + 8) - iVar19);
      fStack_64 = (float)(*(int *)(pDVar6 + 0xc) - iVar3);
      local_78 = 0x3f800000;
      uStack_6c = 0;
      uStack_68 = 0x3f800000;
                    /* try { // try from 003cde28 to 003cdeb4 has its CatchHandler @ 003cdfcf */
      cVar7 = (**(code **)(*local_40 + 0x68))();
      if ((cVar7 == '\0') && ((long)*(int *)((long)local_88 + 0xc) != 0)) {
        pfVar10 = (float *)*local_88;
        pfVar2 = pfVar10 + *(int *)((long)local_88 + 0xc);
        do {
          fVar23 = *pfVar10;
          if ((fVar23 != DAT_005de3d0) || (NAN(fVar23) || NAN(DAT_005de3d0))) {
            if ((fVar23 != DAT_005de3d4) || (NAN(fVar23) || NAN(DAT_005de3d4))) {
              if (((fVar23 != DAT_005de3d8) || (NAN(fVar23) || NAN(DAT_005de3d8))) &&
                 ((fVar23 != DAT_005de3dc || (NAN(fVar23) || NAN(DAT_005de3dc)))))
              goto LAB_003cde74;
            }
            (**(code **)(*local_40 + 200))(local_40,local_88,&local_78);
            break;
          }
          pfVar10 = pfVar10 + 2;
LAB_003cde74:
          pfVar10 = pfVar10 + 1;
        } while (pfVar10 != pfVar2);
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      plVar5 = local_a8;
      if (local_a8 != (long *)0x0) {
        LOCK();
        *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
        UNLOCK();
      }
                    /* try { // try from 003cdee0 to 003cdee7 has its CatchHandler @ 003cdfcd */
      (**(code **)(*local_a8 + 0x50))(local_a8,0,local_a8[2],*(undefined4 *)(pDVar6 + 4));
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
                    /* try { // try from 003cdefc to 003cdf93 has its CatchHandler @ 003ce00d */
      Graphics::setColour(param_1,*(undefined4 *)pDVar6);
      local_70 = (float)iVar19;
      fStack_64 = (float)iVar3;
      local_78 = 0x3f800000;
      uStack_6c = 0;
      uStack_68 = 0x3f800000;
      if (local_a8 != (long *)0x0) {
        cVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
        if (cVar7 == '\0') {
          (**(code **)(**(long **)(param_1 + 8) + 0x70))();
          (**(code **)(**(long **)(param_1 + 8) + 0x50))
                    (*(long **)(param_1 + 8),&local_a8,&local_78);
          (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
          (**(code **)(**(long **)(param_1 + 8) + 0x78))();
        }
        if (local_a8 != (long *)0x0) {
          LOCK();
          plVar5 = local_a8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*local_a8 + 8))();
          }
        }
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 8))();
      }
    }
  }
  return;
}


