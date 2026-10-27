// Function : internalRepaintUnchecked
// Namespace: juce:Component
// Entry    : 001e2270
// Prototype: undefined internalRepaintUnchecked(long param_1, undefined8 param_2, ulong param_3, char param_4)
// Body     : 001e2270 - 001e25d8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::internalRepaintUnchecked(juce::Rectangle<int>, bool) */

void __cdecl
juce::Component::internalRepaintUnchecked
          (long param_1,undefined8 param_2,ulong param_3,char param_4)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  Desktop *this;
  ulong uVar5;
  undefined8 extraout_RDX;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int iStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  ulong uStack_50;
  long local_40;
  undefined8 *local_38;
  
  if ((*(ushort *)(param_1 + 0xe8) & 2) == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x88);
  iStack_70 = (int)param_3;
  uVar5 = param_3;
  if (plVar1 != (long *)0x0) {
    if (param_4 == '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x20))();
      if (cVar2 == '\0') {
        return;
      }
      uVar5 = param_3 & 0xffffffff;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))();
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  if ((0 < (int)uVar5) && (0xffffffff < (long)param_3)) {
    if ((*(ushort *)(param_1 + 0xe8) & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x30);
      if (lVar8 != 0) {
        local_38 = &local_58;
        local_58 = param_2;
        uStack_50 = param_3;
        local_40 = param_1;
        auVar16 = detail::ComponentHelpers::
                  convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                  ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
        local_68 = auVar16;
        if (*(float **)(param_1 + 0x50) != (float *)0x0) {
          auVar16 = Rectangle<int>::transformedBy
                              ((Rectangle<int> *)local_68,*(float **)(param_1 + 0x50));
        }
        uVar3 = auVar16._0_4_;
        uVar9 = 0;
        if (-1 < (int)uVar3) {
          uVar9 = uVar3;
        }
        uVar5 = 0;
        if (-1 < (long)auVar16._0_8_) {
          uVar5 = auVar16._0_8_ >> 0x20;
        }
        iVar4 = uVar3 + auVar16._8_4_;
        if (*(int *)(lVar8 + 0x40) < iVar4) {
          iVar4 = *(int *)(lVar8 + 0x40);
        }
        iVar4 = iVar4 - uVar9;
        if (-1 < iVar4) {
          iVar7 = auVar16._4_4_ + auVar16._12_4_;
          if (*(int *)(lVar8 + 0x44) < iVar7) {
            iVar7 = *(int *)(lVar8 + 0x44);
          }
          iVar7 = iVar7 - (int)uVar5;
          if (((-1 < iVar7) && (iVar4 != 0)) && (iVar7 != 0)) {
            internalRepaintUnchecked(lVar8,(ulong)uVar9 | uVar5 << 0x20,CONCAT44(iVar7,iVar4),'\0');
          }
        }
      }
    }
    else {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e23c0 to 001e23c9 has its CatchHandler @ 001e25ec */
        this = operator_new(0x1d0);
                    /* try { // try from 001e23cd to 001e23d4 has its CatchHandler @ 001e25d9 */
        Desktop::Desktop(this);
        Desktop::instance = this;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar8 = 0;
        do {
          plVar1 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar8);
          if (plVar1[1] == param_1) {
            (**(code **)(*plVar1 + 0x48))(plVar1);
            fVar14 = (float)(int)extraout_RDX / (float)*(int *)(param_1 + 0x40);
            fVar13 = (float)(int)((ulong)extraout_RDX >> 0x20) / (float)*(int *)(param_1 + 0x44);
            fVar15 = (float)(int)param_2 * fVar14;
            fVar11 = (float)(int)((ulong)param_2 >> 0x20) * fVar13;
            iVar7 = -0x80000000;
            iVar4 = -0x80000000;
            if (DAT_00653430 < fVar15) {
              fVar12 = floorf(fVar15);
              iVar4 = (int)fVar12;
            }
            if (DAT_00653430 < fVar11) {
              fVar12 = floorf(fVar11);
              iVar7 = (int)fVar12;
            }
            fVar15 = fVar15 + fVar14 * (float)iStack_70;
            iVar6 = 0x7fffffff;
            iVar10 = 0x7fffffff;
            if (fVar15 < DAT_00653434) {
              fVar14 = ceilf(fVar15);
              iVar10 = (int)fVar14;
            }
            fVar11 = fVar11 + fVar13 * (float)(int)(param_3 >> 0x20);
            if (fVar11 < DAT_00653434) {
              fVar11 = ceilf(fVar11);
              iVar6 = (int)fVar11;
            }
            uStack_50 = CONCAT44(iVar6 - iVar7,iVar10 - iVar4);
            local_58 = CONCAT44(iVar7,iVar4);
            if (*(float **)(param_1 + 0x50) == (float *)0x0) {
              local_68._8_8_ = uStack_50;
              local_68._0_8_ = local_58;
            }
            else {
              local_68 = Rectangle<int>::transformedBy
                                   ((Rectangle<int> *)&local_58,*(float **)(param_1 + 0x50));
            }
            (**(code **)(*plVar1 + 0x100))(plVar1,local_68);
            return;
          }
          lVar8 = lVar8 + 8;
        } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar8);
      }
    }
  }
  return;
}


