// Function : updatePopupDisplay
// Namespace: juce:Slider:Pimpl
// Entry    : 002d9f80
// Prototype: undefined updatePopupDisplay(Pimpl * this)
// Body     : 002d9f80 - 002da70f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Pimpl::updatePopupDisplay() */

void __thiscall juce::Slider::Pimpl::updatePopupDisplay(Pimpl *this)

{
  long lVar1;
  Component *this_00;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ComponentHelpers *pCVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ComponentHelpers *this_01;
  int iVar14;
  uint uVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined1 local_68 [16];
  long local_58;
  ulong local_50;
  ulong local_48;
  ComponentHelpers *local_40;
  undefined1 *local_38;
  
  if (*(long *)(this + 0x270) == 0) {
    return;
  }
  if (*(int *)(this + 0x20) - 9U < 4) {
    if (*(int *)(this + 0x1e0) == 1) {
      (**(code **)(**(long **)(this + 0x80) + 0x10))(local_88);
                    /* try { // try from 002da044 to 002da04f has its CatchHandler @ 002da728 */
      local_90 = (**(code **)((long)local_88 + 0x20))(&fStack_80);
                    /* try { // try from 002da055 to 002da05a has its CatchHandler @ 002da720 */
      (**(code **)((long)local_88 + 0x58))(&fStack_80);
    }
    else if (*(int *)(this + 0x1e0) == 2) {
      (**(code **)(**(long **)(this + 0xb0) + 0x10))(local_88);
                    /* try { // try from 002d9fda to 002d9fe5 has its CatchHandler @ 002da738 */
      local_90 = (**(code **)((long)local_88 + 0x20))(&fStack_80);
                    /* try { // try from 002d9feb to 002d9ff0 has its CatchHandler @ 002da730 */
      (**(code **)((long)local_88 + 0x58))(&fStack_80);
    }
    else {
      (**(code **)(**(long **)(this + 0x50) + 0x10))(local_88);
                    /* try { // try from 002da076 to 002da081 has its CatchHandler @ 002da718 */
      local_90 = (**(code **)((long)local_88 + 0x20))(&fStack_80);
                    /* try { // try from 002da087 to 002da08c has its CatchHandler @ 002da710 */
      (**(code **)((long)local_88 + 0x58))(&fStack_80);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x50) + 0x10))(local_88);
                    /* try { // try from 002da00f to 002da01a has its CatchHandler @ 002da748 */
    local_90 = (**(code **)((long)local_88 + 0x20))(&fStack_80);
                    /* try { // try from 002da020 to 002da025 has its CatchHandler @ 002da740 */
    (**(code **)((long)local_88 + 0x58))(&fStack_80);
  }
  this_00 = *(Component **)(this + 0x270);
  (**(code **)(**(long **)(this + 0x18) + 0x1b8))(local_90,&local_58);
  piVar13 = (int *)(local_58 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    UNLOCK();
  }
  LOCK();
  lVar1 = *(long *)(this_00 + 0x148);
  *(long *)(this_00 + 0x148) = local_58;
  UNLOCK();
  piVar13 = (int *)(lVar1 + -0x10);
  if (piVar13 == &emptyString) {
LAB_002da0e8:
    this_01 = *(ComponentHelpers **)(this_00 + 0x30);
    pCVar10 = *(ComponentHelpers **)(this_00 + 0x138);
    if (this_01 != (ComponentHelpers *)0x0) goto LAB_002da0fa;
LAB_002da124:
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulong *)(pCVar10 + 0x40);
    auVar20 = auVar20 << 0x40;
    do {
      _local_88 = auVar20;
      local_40 = pCVar10;
      local_38 = local_88;
                    /* try { // try from 002da15d to 002da164 has its CatchHandler @ 002da752 */
      auVar20 = detail::ComponentHelpers::
                convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
      local_68 = auVar20;
      if (*(float **)(pCVar10 + 0x50) != (float *)0x0) {
        auVar20 = Rectangle<int>::transformedBy
                            ((Rectangle<int> *)local_68,*(float **)(pCVar10 + 0x50));
      }
      pCVar10 = *(ComponentHelpers **)(pCVar10 + 0x30);
    } while (pCVar10 != (ComponentHelpers *)0x0);
    pfVar2 = *(float **)(this_00 + 0x50);
    if (pfVar2 == (float *)0x0) {
      local_88._4_4_ = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_74 = 0.0;
      local_88._0_4_ = DAT_005d9038;
      local_78 = DAT_005d9038;
    }
    else {
      local_88._4_4_ = pfVar2[1];
      fStack_80 = pfVar2[2];
      fStack_7c = pfVar2[3];
      local_74 = pfVar2[5];
      local_88._0_4_ = *pfVar2;
      local_78 = pfVar2[4];
    }
    fVar19 = (float)local_88._0_4_ * local_78 - fStack_7c * (float)local_88._4_4_;
    dVar18 = (double)fVar19;
    dVar17 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar18 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar18,0));
    if (dVar17 == DAT_005d94e0) {
      if ((fVar19 == 0.0) && (!NAN(fVar19))) goto LAB_002da2ce;
LAB_002da21f:
      dVar18 = _DAT_005d9000 / dVar18;
      dVar17 = (double)local_78;
      fStack_7c = (float)((double)(float)((uint)fStack_7c ^ _DAT_006524b0) * dVar18);
      local_88._4_4_ = (BADTYPE)((double)(float)(local_88._4_4_ ^ _DAT_006524b0) * dVar18);
      local_78 = (float)((double)(float)local_88._0_4_ * dVar18);
      local_88._0_4_ = (float)(dVar17 * dVar18);
      fVar19 = (float)local_88._4_4_ * local_74;
      local_74 = (float)((uint)fStack_80 ^ _DAT_006524b0) * fStack_7c - local_74 * local_78;
      fStack_80 = (float)((uint)fStack_80 ^ _DAT_006524b0) * (float)(dVar17 * dVar18) - fVar19;
    }
    else {
      if ((DAT_005db368 < dVar17) && (DAT_005db370 * dVar17 < dVar17)) goto LAB_002da21f;
LAB_002da2ce:
    }
    local_68 = auVar20;
    auVar20 = Rectangle<int>::transformedBy((Rectangle<int> *)local_68,(float *)local_88);
  }
  else {
    LOCK();
    iVar16 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar16 != 0) goto LAB_002da0e8;
    operator_delete__(piVar13);
    this_01 = *(ComponentHelpers **)(this_00 + 0x30);
    pCVar10 = *(ComponentHelpers **)(this_00 + 0x138);
    if (this_01 == (ComponentHelpers *)0x0) goto LAB_002da124;
LAB_002da0fa:
                    /* try { // try from 002da0fe to 002da107 has its CatchHandler @ 002da750 */
    auVar20 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                        (this_01,pCVar10,0,*(undefined8 *)(pCVar10 + 0x40));
  }
  local_88._0_4_ = 0x96;
  local_68._0_4_ = 0x1e;
                    /* try { // try from 002da308 to 002da6e0 has its CatchHandler @ 002da750 */
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_88,local_68);
  local_50 = (ulong)(uint)local_88._0_4_;
  local_48 = (ulong)(uint)local_68._0_4_;
  *(undefined8 *)(this_00 + 0xf0) = 0xf0000000f;
  *(undefined4 *)(this_00 + 0xf8) = local_88._0_4_;
  *(undefined4 *)(this_00 + 0xfc) = local_68._0_4_;
  if (*(long *)(this_00 + 0x30) != 0) {
    iVar16 = 0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulong *)(*(long *)(this_00 + 0x30) + 0x40);
    auVar21 = auVar21 << 0x40;
    goto LAB_002da4e4;
  }
  local_68 = Component::getParentMonitorArea(this_00);
  pfVar2 = *(float **)(this_00 + 0x50);
  if (pfVar2 == (float *)0x0) {
    local_88._4_4_ = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    local_74 = 0.0;
    local_88._0_4_ = DAT_005d9038;
    local_78 = DAT_005d9038;
  }
  else {
    local_88._4_4_ = pfVar2[1];
    fStack_80 = pfVar2[2];
    fStack_7c = pfVar2[3];
    local_74 = pfVar2[5];
    local_88._0_4_ = *pfVar2;
    local_78 = pfVar2[4];
  }
  fVar19 = (float)local_88._0_4_ * local_78 - fStack_7c * (float)local_88._4_4_;
  dVar18 = (double)fVar19;
  dVar17 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar18 >> 0x20),
                            _DAT_005d91b0 & SUB84(dVar18,0));
  if (dVar17 == DAT_005d94e0) {
    if ((fVar19 == 0.0) && (!NAN(fVar19))) goto LAB_002da4ba;
LAB_002da40b:
    dVar18 = _DAT_005d9000 / dVar18;
    dVar17 = (double)local_78;
    fStack_7c = (float)((double)(float)((uint)fStack_7c ^ _DAT_006524b0) * dVar18);
    local_88._4_4_ = (BADTYPE)((double)(float)(local_88._4_4_ ^ _DAT_006524b0) * dVar18);
    local_78 = (float)((double)(float)local_88._0_4_ * dVar18);
    local_88._0_4_ = (float)(dVar17 * dVar18);
    fVar19 = (float)local_88._4_4_ * local_74;
    local_74 = (float)((uint)fStack_80 ^ _DAT_006524b0) * fStack_7c - local_74 * local_78;
    fStack_80 = (float)((uint)fStack_80 ^ _DAT_006524b0) * (float)(dVar17 * dVar18) - fVar19;
  }
  else {
    if ((DAT_005db368 < dVar17) && (DAT_005db370 * dVar17 < dVar17)) goto LAB_002da40b;
LAB_002da4ba:
  }
  auVar21 = Rectangle<int>::transformedBy((Rectangle<int> *)local_68,(float *)local_88);
  iVar16 = auVar21._4_4_;
LAB_002da4e4:
  iVar8 = auVar20._4_4_;
  uVar5 = *(uint *)(this_00 + 0x108);
  uVar9 = iVar8 - iVar16;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  iVar6 = auVar20._8_4_;
  uVar3 = 0xffffffff;
  uVar7 = 0xffffffff;
  iVar11 = auVar20._12_4_;
  if (((uVar5 & 2) != 0) && (uVar7 = ((iVar16 - iVar11) - iVar8) + auVar21._12_4_, (int)uVar7 < 0))
  {
    uVar7 = 0;
  }
  iVar16 = auVar20._0_4_;
  uVar12 = iVar16 - auVar21._0_4_;
  uVar15 = 0;
  if (-1 < (int)uVar12) {
    uVar15 = uVar12;
  }
  if (((uVar5 & 8) != 0) &&
     (uVar3 = ((auVar21._0_4_ - iVar6) - iVar16) + auVar21._8_4_, (int)uVar3 < 0)) {
    uVar3 = 0;
  }
  uVar9 = -(uint)((uVar5 & 1) == 0) | uVar9;
  if ((iVar11 * 2 < iVar6) &&
     ((iVar4 = (int)local_48 + 0x32, iVar4 < (int)uVar9 || (iVar4 < (int)uVar7)))) {
    uVar3 = 0;
    uVar15 = 0;
  }
  else {
    uVar15 = -(uint)((uVar5 & 4) == 0) | uVar15;
    if (iVar6 < iVar11 / 2) {
      iVar4 = (int)local_50 + 0x32;
      if (iVar4 < (int)uVar3 || iVar4 < (int)uVar15) {
        uVar7 = 0;
        uVar9 = 0;
      }
    }
  }
  iVar4 = (int)local_50 + 0x1e;
  iVar14 = (int)local_48 + 0x1e;
  uVar5 = uVar9;
  if ((int)uVar9 < (int)uVar7) {
    uVar5 = uVar7;
  }
  uVar12 = uVar15;
  if ((int)uVar15 < (int)uVar3) {
    uVar12 = uVar3;
  }
  if ((int)uVar5 < (int)uVar12) {
    iVar8 = iVar8 + iVar11 / 2;
    iVar11 = iVar14 / 2;
    *(int *)(this_00 + 0x104) = iVar11;
    if ((int)uVar3 < (int)uVar15) {
      iVar6 = *(int *)(this_00 + 0xf0) + *(int *)(this_00 + 0xf8) + 10;
      *(int *)(this_00 + 0x100) = iVar6;
    }
    else {
      iVar16 = iVar6 + iVar16;
      iVar6 = *(int *)(this_00 + 0xf0) + -10;
      *(int *)(this_00 + 0x100) = iVar6;
    }
  }
  else {
    iVar16 = ((int)(((uint)(auVar20._8_8_ >> 0x1f) & 1) + iVar6) >> 1) + iVar16;
    iVar6 = iVar4 / 2;
    *(int *)(this_00 + 0x100) = iVar6;
    if ((int)uVar9 < (int)uVar7) {
      iVar8 = iVar11 + iVar8;
      iVar11 = *(int *)(this_00 + 0xf4) + -10;
      *(int *)(this_00 + 0x104) = iVar11;
    }
    else {
      iVar11 = *(int *)(this_00 + 0xf4) + *(int *)(this_00 + 0xfc) + 10;
      *(int *)(this_00 + 0x104) = iVar11;
    }
  }
  Component::setBounds(this_00,iVar16 - iVar6,iVar8 - iVar11,iVar4,iVar14);
  Component::internalRepaintUnchecked((long)this_00,0,*(ulong *)(this_00 + 0x40),'\x01');
  piVar13 = (int *)(local_58 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar16 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar13);
    }
  }
  return;
}


