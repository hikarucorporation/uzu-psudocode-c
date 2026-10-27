// Function : getSliderLayout
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f58e0
// Prototype: int * getSliderLayout(int * param_1, long * param_2, long param_3)
// Body     : 001f58e0 - 001f5b00


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::getSliderLayout(juce::Slider&) */

int * __cdecl juce::LookAndFeel_V2::getSliderLayout(int *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  lVar2 = *(long *)(param_3 + 0x1a0);
  iVar5 = *(int *)(lVar2 + 0x208);
  iVar8 = *(int *)(param_3 + 0x40);
  iVar9 = *(int *)(param_3 + 0x44);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  iVar7 = iVar8 + -0x1e;
  if (iVar5 - 1U < 2) {
    iVar6 = iVar9;
  }
  else {
    iVar6 = iVar9 + -0xf;
    iVar7 = iVar8;
  }
  if (*(int *)(lVar2 + 0x220) <= iVar7) {
    iVar7 = *(int *)(lVar2 + 0x220);
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (*(int *)(lVar2 + 0x224) <= iVar6) {
    iVar6 = *(int *)(lVar2 + 0x224);
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (iVar5 != 0) {
    if ((uVar1 & 0xfffffffe) == 2) {
      *(undefined8 *)(param_1 + 6) = uVar4;
    }
    else {
      param_1[6] = iVar7;
      param_1[7] = iVar6;
      if (iVar5 != 1) {
        if (iVar5 != 2) {
          param_1[4] = (iVar8 - iVar7) / 2;
          if (iVar5 != 3) {
            if (iVar5 != 4) goto LAB_001f59b1;
            param_1[5] = iVar9 - iVar6;
          }
          goto LAB_001f59c3;
        }
        param_1[4] = iVar8 - iVar7;
      }
LAB_001f59b1:
      param_1[5] = (iVar9 - iVar6) / 2;
    }
  }
LAB_001f59c3:
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar4;
  if ((uVar1 & 0xfffffffe) == 2) {
    iVar5 = 2;
    if (2 < iVar8) {
      iVar5 = iVar8;
    }
    iVar8 = 2;
    if (2 < iVar9) {
      iVar8 = iVar9;
    }
    param_1[0] = 1;
    param_1[1] = 1;
    param_1[2] = iVar5 + -2;
    param_1[3] = iVar8 + -2;
    return param_1;
  }
  if (iVar5 == 1) {
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
    *param_1 = iVar7;
    iVar8 = iVar8 - iVar7;
    param_1[2] = iVar8;
  }
  else {
    if (iVar5 == 2) {
      iVar6 = 0;
      bVar3 = iVar8 < iVar7;
      iVar8 = iVar8 - iVar7;
      if (bVar3) {
        iVar8 = iVar6;
      }
      param_1[2] = iVar8;
      iVar7 = 0;
      goto LAB_001f5a69;
    }
    iVar7 = 0;
    if (iVar5 == 4) {
      bVar3 = iVar9 < iVar6;
      iVar9 = iVar9 - iVar6;
      if (bVar3) {
        iVar9 = iVar7;
      }
      param_1[3] = iVar9;
    }
    else if (iVar5 == 3) {
      if (iVar9 < iVar6) {
        iVar6 = iVar9;
      }
      param_1[1] = iVar6;
      iVar9 = iVar9 - iVar6;
      param_1[3] = iVar9;
      goto LAB_001f5a69;
    }
  }
  iVar6 = 0;
LAB_001f5a69:
  iVar5 = (**(code **)(*param_2 + 0x2e0))(param_2,param_3);
  uVar1 = *(uint *)(*(long *)(param_3 + 0x1a0) + 0x20);
  if (uVar1 < 0xd) {
    if ((0xa05U >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0x140aU >> (uVar1 & 0x1f) & 1) != 0) {
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar9 = iVar9 + iVar5 * -2;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        param_1[1] = iVar6 + iVar5;
        param_1[2] = iVar8;
        param_1[3] = iVar9;
      }
    }
    else {
      iVar8 = iVar8 + iVar5 * -2;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      iVar6 = 0;
      if (-1 < iVar9) {
        iVar6 = iVar9;
      }
      *param_1 = iVar7 + iVar5;
      param_1[2] = iVar8;
      param_1[3] = iVar6;
    }
  }
  return param_1;
}


