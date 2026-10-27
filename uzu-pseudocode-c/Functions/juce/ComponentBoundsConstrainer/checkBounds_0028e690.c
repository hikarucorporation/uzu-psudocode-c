// Function : checkBounds
// Namespace: juce:ComponentBoundsConstrainer
// Entry    : 0028e690
// Prototype: undefined checkBounds(ComponentBoundsConstrainer * this, int * param_1, int * param_2, int * param_3, byte param_4, int param_6_00, byte param_6, byte param_7)
// Body     : 0028e690 - 0028ea41


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComponentBoundsConstrainer::checkBounds(juce::Rectangle<int>&, juce::Rectangle<int> const&,
   juce::Rectangle<int> const&, bool, bool, bool, bool) */

void __thiscall
juce::ComponentBoundsConstrainer::checkBounds
          (ComponentBoundsConstrainer *this,int *param_1,int *param_2,int *param_3,byte param_4,
          int param_6_00,byte param_6,byte param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_6_00 == 0) {
    uVar11 = *(uint *)(this + 0xc);
    uVar12 = param_1[2];
    uVar10 = uVar12;
    if ((int)uVar11 < (int)uVar12) {
      uVar10 = uVar11;
    }
    if ((int)uVar12 < (int)*(uint *)(this + 8)) {
      uVar10 = *(uint *)(this + 8);
    }
    param_1[2] = uVar10;
    if (param_4 != 0) goto LAB_0028e723;
LAB_0028e6d8:
    uVar12 = *(uint *)(this + 0x14);
    uVar3 = param_1[3];
    uVar8 = uVar3;
    if ((int)uVar12 < (int)uVar3) {
      uVar8 = uVar12;
    }
    if ((int)uVar3 < (int)*(uint *)(this + 0x10)) {
      uVar8 = *(uint *)(this + 0x10);
    }
    param_1[3] = uVar8;
  }
  else {
    uVar11 = *(uint *)(this + 0xc);
    iVar7 = (param_2[2] + *param_2) - uVar11;
    iVar2 = (param_2[2] + *param_2) - *(int *)(this + 8);
    iVar4 = *param_1;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar4 < iVar7) {
      iVar2 = iVar7;
    }
    uVar10 = (iVar4 - iVar2) + param_1[2];
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    param_1[2] = uVar10;
    *param_1 = iVar2;
    if (param_4 == 0) goto LAB_0028e6d8;
LAB_0028e723:
    uVar12 = *(uint *)(this + 0x14);
    iVar7 = (param_2[3] + param_2[1]) - uVar12;
    iVar2 = (param_2[3] + param_2[1]) - *(int *)(this + 0x10);
    iVar4 = param_1[1];
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar4 < iVar7) {
      iVar2 = iVar7;
    }
    uVar8 = (iVar4 - iVar2) + param_1[3];
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    param_1[3] = uVar8;
    param_1[1] = iVar2;
  }
  if ((int)uVar10 < 1) {
    return;
  }
  if ((int)uVar8 < 1) {
    return;
  }
  if (0 < *(int *)(this + 0x18)) {
    iVar4 = param_3[1];
    uVar3 = *(int *)(this + 0x18) - uVar8;
    iVar2 = ((int)uVar3 >> 0x1f & uVar3) + iVar4;
    if (param_1[1] < iVar2) {
      if (param_4 != 0) {
        uVar8 = (param_1[1] - iVar4) + uVar8;
        if ((int)uVar8 < 0) {
          uVar8 = 0;
        }
        param_1[3] = uVar8;
        iVar2 = iVar4;
      }
      param_1[1] = iVar2;
    }
  }
  bVar9 = (byte)param_6_00;
  if (0 < *(int *)(this + 0x1c)) {
    iVar4 = *param_3;
    uVar3 = *(int *)(this + 0x1c) - uVar10;
    iVar2 = ((int)uVar3 >> 0x1f & uVar3) + iVar4;
    if (*param_1 < iVar2) {
      if (bVar9 != 0) {
        uVar10 = (*param_1 - iVar4) + uVar10;
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
        param_1[2] = uVar10;
        iVar2 = iVar4;
      }
      *param_1 = iVar2;
    }
  }
  uVar3 = *(uint *)(this + 0x20);
  if ((int)uVar3 < 1) {
LAB_0028e81e:
    uVar3 = *(uint *)(this + 0x24);
  }
  else {
    iVar4 = param_3[3] + param_3[1];
    if (uVar8 < uVar3) {
      uVar3 = uVar8;
    }
    iVar2 = param_1[1];
    if (iVar2 <= (int)(iVar4 - uVar3)) goto LAB_0028e81e;
    if (param_6 != 0) {
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      param_1[1] = iVar2;
      uVar8 = iVar4 - iVar2;
      param_1[3] = uVar8;
      goto LAB_0028e81e;
    }
    param_1[1] = iVar4 - uVar3;
    uVar3 = *(uint *)(this + 0x24);
  }
  if (0 < (int)uVar3) {
    iVar4 = param_3[2] + *param_3;
    if (uVar10 < uVar3) {
      uVar3 = uVar10;
    }
    iVar2 = *param_1;
    if ((int)(iVar4 - uVar3) < iVar2) {
      if (param_7 == 0) {
        *param_1 = iVar4 - uVar3;
      }
      else {
        if (iVar4 < iVar2) {
          iVar2 = iVar4;
        }
        *param_1 = iVar2;
        uVar10 = iVar4 - iVar2;
        param_1[2] = uVar10;
      }
    }
  }
  dVar13 = *(double *)(this + 0x28);
  if (dVar13 <= 0.0) {
    return;
  }
  bVar5 = (param_4 | param_6) ^ 1;
  if (((bVar5 == 0 && bVar9 == 0) && param_7 == 0) ||
     (((bVar6 = (bVar9 | param_7) ^ 1, (bVar6 != 0 || param_4 != 0) || param_6 != 0 &&
       (0 < param_2[3])) &&
      (auVar15._0_8_ = (double)param_2[3], auVar15._8_8_ = (double)(int)uVar8,
      auVar14._8_8_ = (double)(int)uVar10, auVar14._0_8_ = (double)param_2[2],
      auVar15 = divpd(auVar14,auVar15),
      (double)(auVar15._8_8_ & _UNK_005d91b8) < (double)(auVar15._0_8_ & _DAT_005d91b0))))) {
    uVar10 = SUB84((double)(int)uVar8 * dVar13 + DAT_005d9098,0);
    param_1[2] = uVar10;
    uVar12 = *(uint *)(this + 8);
    if (((int)uVar11 < (int)uVar10) || ((int)uVar10 < (int)uVar12)) {
      if ((int)uVar10 <= (int)uVar11) {
        uVar11 = uVar10;
      }
      bVar1 = (int)uVar10 < (int)uVar12;
      uVar10 = uVar11;
      if (bVar1) {
        uVar10 = uVar12;
      }
      param_1[2] = uVar10;
      uVar8 = SUB84((double)(int)uVar10 / dVar13 + DAT_005d9098,0);
      param_1[3] = uVar8;
      if ((bVar5 == 0 && bVar9 == 0) && param_7 == 0) goto LAB_0028ea1b;
    }
    else if ((bVar5 == 0 && bVar9 == 0) && param_7 == 0) {
LAB_0028ea1b:
      *param_1 = (int)(param_2[2] - uVar10) / 2 + *param_2;
      return;
    }
    if ((((param_7 | bVar9) != 1) || (param_4 != 0)) || (param_6 != 0)) goto LAB_0028e9bf;
  }
  else {
    uVar8 = SUB84((double)(int)uVar10 / dVar13 + DAT_005d9098,0);
    param_1[3] = uVar8;
    uVar11 = *(uint *)(this + 0x10);
    if (((int)uVar12 < (int)uVar8) || ((int)uVar8 < (int)uVar11)) {
      if ((int)uVar8 <= (int)uVar12) {
        uVar12 = uVar8;
      }
      bVar1 = (int)uVar8 < (int)uVar11;
      uVar8 = uVar12;
      if (bVar1) {
        uVar8 = uVar11;
      }
      dVar13 = dVar13 * (double)(int)uVar8 + DAT_005d9098;
      param_1[3] = uVar8;
      uVar10 = SUB84(dVar13,0);
      param_1[2] = uVar10;
    }
    if ((bVar6 != 0 || param_4 != 0) || param_6 != 0) {
LAB_0028e9bf:
      if (bVar9 != 0) {
        *param_1 = (param_2[2] + *param_2) - uVar10;
      }
      if (param_4 == 0) {
        return;
      }
      param_1[1] = (param_2[3] + param_2[1]) - uVar8;
      return;
    }
  }
  param_1[1] = (int)(param_2[3] - uVar8) / 2 + param_2[1];
  return;
}


