// Function : clipToRectangleList
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003360b0
// Prototype: long * clipToRectangleList(long * param_1, long param_2, long * param_3)
// Body     : 003360b0 - 0033640a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangleList(juce::RectangleList<int>
   const&) */

long * __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangleList
          (long *param_1,long param_2,long *param_3)

{
  EdgeTable *this;
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  uint local_ac;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  long *local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulong *local_60;
  undefined8 *local_58;
  ulong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = (undefined1 *)0x0;
  iVar5 = 0;
  local_98 = param_2;
  if ((0 < (int)uVar2) && (0 < (int)((ulong)uVar2 >> 0x20))) {
    local_a8 = malloc(0x80);
    uStack_a0 = &DAT_100000008;
    *local_a8 = uVar1;
    local_a8[1] = uVar2;
    iVar5 = 1;
  }
  lVar9 = local_98;
  local_80 = param_1;
  if ((long)*(int *)((long)param_3 + 0xc) != 0) {
    puVar19 = (ulong *)*param_3;
    puVar11 = puVar19 + (long)*(int *)((long)param_3 + 0xc) * 2;
    local_48 = puVar11;
    do {
      if (iVar5 == 0) goto LAB_0033638b;
      uVar12 = *puVar19;
      uVar16 = puVar19[1] + uVar12;
      uVar13 = (puVar19[1] & 0xffffffff00000000) + uVar12;
      local_88 = uVar16 & 0xffffffff | uVar13 & 0xffffffff00000000;
      local_ac = iVar5 - 1;
      local_90 = uVar12;
      if (0 < iVar5) {
        uVar15 = uVar12 >> 0x20;
        uVar13 = uVar13 >> 0x20;
        while( true ) {
          uVar4 = (ulong)local_ac;
          local_40 = local_a8[uVar4 * 2];
          iVar5 = *(int *)(local_a8 + uVar4 * 2 + 1) + (int)local_40;
          iVar7 = (int)((ulong)local_40 >> 0x20);
          iVar18 = *(int *)((long)local_a8 + uVar4 * 0x10 + 0xc) + iVar7;
          local_38 = CONCAT44(iVar18,iVar5);
          if (((((int)local_40 < (int)uVar16) && ((int)uVar12 < iVar5)) && (iVar7 < (int)uVar13)) &&
             ((int)uVar15 < iVar18)) {
            local_58 = local_a8 + uVar4 * 2;
            local_78 = &local_a8;
            local_70 = &local_ac;
            local_68 = &local_40;
            local_60 = &local_90;
            RectangleList<int>::
            subtract<juce::Rectangle<int>>(juce::Array<juce::Rectangle<int>,juce::DummyCriticalSection,0>&,juce::Rectangle<int>)
            ::{lambda()#1}::operator()((_lambda___1_ *)&local_78);
          }
          if ((int)local_ac < 1) break;
          uVar16 = local_88 & 0xffffffff;
          uVar12 = local_90 & 0xffffffff;
          uVar15 = local_90 >> 0x20;
          uVar13 = local_88 >> 0x20;
          local_ac = local_ac - 1;
        }
        lVar9 = local_98;
        puVar11 = local_48;
        iVar5 = uStack_a0._4_4_;
        local_ac = local_ac - 1;
      }
      puVar19 = puVar19 + 2;
    } while (puVar19 != puVar11);
  }
  if (iVar5 != 0) {
    this = (EdgeTable *)(lVar9 + 0x10);
    puVar17 = local_a8 + (long)iVar5 * 2;
    puVar20 = local_a8;
    do {
      iVar7 = (int)*puVar20;
      iVar18 = (int)*(undefined8 *)(lVar9 + 0x20);
      iVar5 = (int)puVar20[1] + iVar7;
      if (iVar7 < iVar18) {
        iVar7 = iVar18;
      }
      iVar10 = (int)((ulong)*puVar20 >> 0x20);
      iVar14 = (int)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20);
      iVar8 = iVar10;
      if (iVar10 < iVar14) {
        iVar8 = iVar14;
      }
      iVar18 = iVar18 + (int)*(undefined8 *)(lVar9 + 0x28);
      if (iVar18 < iVar5) {
        iVar5 = iVar18;
      }
      if (-1 < iVar5 - iVar7) {
        iVar10 = (int)((ulong)puVar20[1] >> 0x20) + iVar10;
        iVar18 = (int)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20) + iVar14;
        if (iVar10 <= iVar18) {
          iVar18 = iVar10;
        }
        iVar10 = iVar18 - iVar8;
        if (((-1 < iVar10) && (iVar5 != iVar7)) && (iVar10 != 0)) {
          iVar8 = iVar8 - iVar14;
          local_78 = (undefined8 **)0x8000000000000004;
          local_70 = (uint *)CONCAT44(iVar7 << 8,0xff);
          local_68 = (undefined8 *)((ulong)(uint)(iVar5 << 8) << 0x20);
          local_60 = (ulong *)0x7fffffff000000ff;
          local_58 = (undefined8 *)((ulong)local_58 & 0xffffffff00000000);
          if (iVar8 < iVar18 - iVar14) {
            do {
              EdgeTable::intersectWithEdgeTableLine(this,iVar8,(int *)&local_78);
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          *(undefined1 *)(local_98 + 0x38) = 1;
          lVar9 = local_98;
        }
      }
      puVar20 = puVar20 + 2;
    } while (puVar20 != puVar17);
  }
LAB_0033638b:
  plVar3 = local_80;
  if (*(char *)(lVar9 + 0x38) == '\0') {
    if (*(int *)(lVar9 + 0x2c) != 0) {
LAB_003363d4:
      *local_80 = lVar9;
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      goto LAB_003363e4;
    }
  }
  else {
    *(undefined1 *)(lVar9 + 0x38) = 0;
    if (0 < *(int *)(lVar9 + 0x2c)) {
      piVar6 = *(int **)(lVar9 + 0x10);
      iVar5 = *(int *)(lVar9 + 0x2c) + 1;
      do {
        if (1 < *piVar6) goto LAB_003363d4;
        iVar5 = iVar5 + -1;
        piVar6 = piVar6 + *(int *)(lVar9 + 0x34);
      } while (1 < iVar5);
    }
    *(undefined4 *)(lVar9 + 0x2c) = 0;
  }
  *local_80 = 0;
LAB_003363e4:
  uStack_a0 = (undefined1 *)((ulong)uStack_a0 & 0xffffffff);
  free(local_a8);
  return plVar3;
}


