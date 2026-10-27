// Function : setBoundsForComponent
// Namespace: juce:ComponentBoundsConstrainer
// Entry    : 0028f9a0
// Prototype: undefined setBoundsForComponent(long * param_1, ComponentHelpers * param_2, long param_3, undefined8 param_4, undefined1 param_5, undefined4 param_6)
// Body     : 0028f9a0 - 0028fea8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComponentBoundsConstrainer::setBoundsForComponent(juce::Component*, juce::Rectangle<int>,
   bool, bool, bool, bool) */

void __cdecl
juce::ComponentBoundsConstrainer::setBoundsForComponent
          (long *param_1,ComponentHelpers *param_2,long param_3,undefined8 param_4,
          undefined1 param_5,undefined4 param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  Desktop *pDVar4;
  int iVar5;
  ComponentHelpers *this;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ComponentHelpers *pCVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ComponentHelpers *pCVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ComponentHelpers *local_80;
  int local_78;
  undefined4 uStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  long local_50;
  long *local_48;
  ComponentHelpers *local_40;
  int *local_38;
  
  lVar7 = *(long *)(param_2 + 0x30);
  local_98 = param_3;
  local_90 = param_4;
  local_64 = param_6;
  local_50 = param_3;
  local_48 = param_1;
  if (lVar7 == 0) {
    uVar15 = (ulong)(uint)((int)param_3 - (int)*(ulong *)(param_2 + 0x38)) |
             param_3 - (*(ulong *)(param_2 + 0x38) & 0xffffffff00000000) & 0xffffffff00000000;
    local_88 = param_4;
    local_80 = param_2;
    do {
      local_78 = (int)uVar15;
      uStack_74 = (undefined4)(uVar15 >> 0x20);
      local_70 = (int)param_4;
      iStack_6c = (int)((ulong)param_4 >> 0x20);
      local_40 = param_2;
      local_38 = &local_78;
      auVar20 = detail::ComponentHelpers::
                convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
      local_60 = auVar20;
      if (*(float **)(param_2 + 0x50) != (float *)0x0) {
        auVar20 = Rectangle<int>::transformedBy
                            ((Rectangle<int> *)local_60,*(float **)(param_2 + 0x50));
      }
      pCVar16 = local_80;
      param_4 = auVar20._8_8_;
      uVar15 = auVar20._0_8_;
      param_2 = *(ComponentHelpers **)(param_2 + 0x30);
    } while (param_2 != (ComponentHelpers *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar4 = operator_new(0x1d0);
                    /* try { // try from 0028fb81 to 0028fb88 has its CatchHandler @ 0028fec4 */
      Desktop::Desktop(pDVar4);
      plVar1 = *(long **)(pDVar4 + 0xe0);
      iVar9 = *(int *)((long)plVar1 + 0xc);
      Desktop::instance = pDVar4;
      param_4 = local_88;
    }
    else {
      plVar1 = *(long **)(Desktop::instance + 0xe0);
      iVar9 = *(int *)((long)plVar1 + 0xc);
      param_4 = local_88;
    }
    local_88 = param_4;
    if ((long)iVar9 == 0) {
      uVar15 = 0;
      uVar13 = 0x7fffffff;
      uVar12 = 0;
      uVar6 = 0x7fffffff;
    }
    else {
      iVar18 = auVar20._12_4_ / 2 + auVar20._4_4_;
      lVar7 = *plVar1;
      iVar17 = auVar20._8_4_ / 2 + auVar20._0_4_;
      lVar10 = (long)iVar9 * 0x70;
      iVar9 = 0x7fffffff;
      lVar8 = 0;
      do {
        uVar15 = *(ulong *)(lVar7 + 0xc);
        iVar3 = (int)*(undefined8 *)(lVar7 + 4);
        iVar5 = (int)((ulong)*(undefined8 *)(lVar7 + 4) >> 0x20);
        iVar2 = (int)(uVar15 >> 0x20);
        if ((((iVar3 <= iVar17) && (iVar5 <= iVar18)) && (iVar17 < (int)uVar15 + iVar3)) &&
           (iVar18 < iVar2 + iVar5)) {
          lVar8 = lVar7;
          goto LAB_0028fbcc;
        }
        dVar19 = hypot((double)((iVar3 - iVar17) +
                               ((int)(((uint)(uVar15 >> 0x1f) & 1) + (int)uVar15) >> 1)),
                       (double)((iVar5 - iVar18) + iVar2 / 2));
        if ((int)dVar19 <= iVar9) {
          iVar9 = (int)dVar19;
          lVar8 = lVar7;
        }
        lVar7 = lVar7 + 0x70;
        lVar10 = lVar10 + -0x70;
      } while (lVar10 != 0);
      if (lVar8 == 0) {
        uVar13 = 0x7fffffff;
        uVar15 = 0;
        uVar12 = 0;
        uVar6 = 0x7fffffff;
        param_4 = local_88;
        pCVar16 = local_80;
      }
      else {
LAB_0028fbcc:
        pCVar16 = local_80;
        param_4 = local_88;
        auVar20 = *(undefined1 (*) [16])(lVar8 + 0x14);
        if (local_80 != (ComponentHelpers *)0x0) {
          pCVar11 = local_80;
          do {
            this = pCVar11;
            pCVar11 = *(ComponentHelpers **)(this + 0x30);
          } while (*(ComponentHelpers **)(this + 0x30) != (ComponentHelpers *)0x0);
          auVar20 = detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>>
                              (this,*(double *)*(undefined1 (*) [16])(lVar8 + 0x14),
                               *(double *)(lVar8 + 0x1c));
          if (this != pCVar16) {
            auVar20 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>>
                                (this,pCVar16,auVar20._0_8_,auVar20._8_8_);
          }
        }
        uVar13 = auVar20._8_8_;
        uVar15 = (ulong)(uint)(auVar20._0_4_ + (int)*(long *)(pCVar16 + 0x38));
        uVar6 = uVar13 >> 0x20;
        uVar12 = (auVar20._0_8_ & 0xffffffff00000000) + *(long *)(pCVar16 + 0x38) &
                 0xffffffff00000000;
      }
    }
  }
  else {
    uVar13 = (ulong)*(uint *)(lVar7 + 0x40);
    uVar6 = (ulong)*(uint *)(lVar7 + 0x44);
    uVar15 = 0;
    uVar12 = 0;
    pCVar16 = param_2;
  }
  local_60._8_8_ = uVar13 & 0xffffffff | uVar6 << 0x20;
  local_60._0_8_ = uVar15 | uVar12;
  if (*(long *)(pCVar16 + 0x30) == 0) {
    lVar7 = 0;
    pCVar11 = pCVar16;
    do {
      if ((*(ushort *)(pCVar11 + 0xe8) & 1) != 0) {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028fd08 to 0028fd11 has its CatchHandler @ 0028febc */
          pDVar4 = operator_new(0x1d0);
                    /* try { // try from 0028fd15 to 0028fd1c has its CatchHandler @ 0028fea9 */
          Desktop::Desktop(pDVar4);
          iVar9 = *(int *)(pDVar4 + 0xdc);
          Desktop::instance = pDVar4;
        }
        else {
          iVar9 = *(int *)(Desktop::instance + 0xdc);
        }
        if ((long)iVar9 == 0) goto LAB_0028fd35;
        lVar7 = 0;
        goto LAB_0028fcf0;
      }
      pCVar11 = *(ComponentHelpers **)(pCVar11 + 0x30);
    } while (pCVar11 != (ComponentHelpers *)0x0);
    iStack_6c = 0;
    iStack_68 = 0;
  }
  else {
LAB_0028fc81:
    lVar7 = 0;
    iStack_6c = 0;
    iStack_68 = 0;
  }
  goto LAB_0028fd70;
  while (lVar7 = lVar7 + 8, (long)iVar9 * 8 != lVar7) {
LAB_0028fcf0:
    if ((ComponentHelpers *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar7))[1] == pCVar11)
    {
      (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar7) + 0xb8))();
      if ((char)local_78 == '\0') goto LAB_0028fc81;
      lVar7 = CONCAT44(local_70,uStack_74);
      goto LAB_0028fd70;
    }
  }
LAB_0028fd35:
  lVar7 = 0;
  iStack_6c = 0;
  iStack_68 = 0;
LAB_0028fd70:
  plVar1 = local_48;
  iVar17 = (int)((ulong)lVar7 >> 0x20);
  iVar9 = iStack_68 + iVar17;
  local_90._0_4_ = (int)param_4 + iVar9;
  uVar14 = iStack_6c + (int)lVar7;
  local_90._4_4_ = (int)((ulong)param_4 >> 0x20) + uVar14;
  local_98 = (ulong)(uint)((int)local_50 - iVar17) |
             local_50 + lVar7 * -0x100000000 & 0xffffffff00000000U;
  local_78 = (int)*(long *)(pCVar16 + 0x38) - iVar17;
  local_70 = (int)*(long *)(pCVar16 + 0x40) + iVar9;
  uStack_74 = (undefined4)((ulong)(lVar7 * -0x100000000 + *(long *)(pCVar16 + 0x38)) >> 0x20);
  iStack_6c = (int)(((ulong)uVar14 << 0x20) + *(long *)(pCVar16 + 0x40) >> 0x20);
  (**(code **)(*local_48 + 0x10))
            (local_48,&local_98,&local_78,local_60,0,0,param_5,(undefined1)local_64);
  local_98 = CONCAT44(local_98._4_4_ + (int)lVar7,iVar17 + (int)local_98);
  local_90 = CONCAT44(local_90._4_4_ - uVar14,(int)local_90 - iVar9);
  (**(code **)(*plVar1 + 0x28))(plVar1,pCVar16,local_98);
  return;
}


