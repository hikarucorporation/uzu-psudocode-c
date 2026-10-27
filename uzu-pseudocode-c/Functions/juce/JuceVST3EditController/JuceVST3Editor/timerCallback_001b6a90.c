// Function : timerCallback
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6a90
// Prototype: undefined timerCallback(JuceVST3Editor * this)
// Body     : 001b6a90 - 001b6d44


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3EditController::JuceVST3Editor::timerCallback() */

void __thiscall juce::JuceVST3EditController::JuceVST3Editor::timerCallback(JuceVST3Editor *this)

{
  ComponentHelpers *pCVar1;
  Component *this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  Desktop *pDVar6;
  ComponentPeer *this_01;
  undefined8 extraout_RDX;
  float fVar8;
  double dVar7;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 local_28 [16];
  
  Timer::stopTimer((Timer *)(this + 0x50));
  pCVar1 = *(ComponentHelpers **)(this + 0xd8);
  if (pCVar1 == (ComponentHelpers *)0x0) {
    local_28 = (undefined1  [16])0x0;
    uVar14 = 0;
    if (this[0xc0] != (JuceVST3Editor)0x0) goto LAB_001b6c0b;
  }
  else {
    this_00 = *(Component **)(pCVar1 + 0xf0);
    if (this_00 == (Component *)0x0) {
      auVar17._0_8_ = 0;
      if (this[0xc0] != (JuceVST3Editor)0x0) goto LAB_001b6ae0;
LAB_001b6b18:
      fVar13 = (float)(int)auVar17._0_8_;
      fVar16 = (float)(int)((ulong)auVar17._0_8_ >> 0x20);
      pDVar6 = Desktop::getInstance();
      fVar8 = *(float *)(pDVar6 + 0x130);
      fVar11 = (float)(_DAT_005d91c0 & (uint)fVar8);
      if (fVar11 == DAT_005d94c8) {
        if ((fVar8 == DAT_005d9038) && (!NAN(fVar8) && !NAN(DAT_005d9038))) goto LAB_001b6ba6;
LAB_001b6b80:
        fVar11 = fVar8 * 0.0;
        fVar13 = fVar13 * fVar8;
        fVar16 = fVar16 * fVar8;
      }
      else {
        fVar12 = (float)((uint)(DAT_005d9054 + fVar8) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar12) {
          fVar15 = DAT_005d9038;
          if (DAT_005d9038 <= fVar11) {
            fVar15 = fVar11;
          }
          if (fVar15 * DAT_005d94d0 < fVar12) goto LAB_001b6b80;
        }
LAB_001b6ba6:
        fVar11 = 0.0;
      }
      local_28._0_8_ =
           (ulong)((double)fVar11 + _DAT_005d9a90) & _DAT_005d9aa0 |
           (long)((double)fVar11 + _DAT_005d9a90) << 0x20;
      uVar14 = (ulong)((double)(fVar13 + fVar11) + _UNK_005d9a98) & _UNK_005d9aa8 |
               (long)((double)(fVar16 + fVar11) + _UNK_005d9a98) << 0x20;
    }
    else {
      auVar17 = Component::getLocalBounds(this_00);
      Component::getLocalArea(pCVar1,(ComponentHelpers *)this_00,auVar17._0_8_,auVar17._8_8_);
      auVar17._0_8_ = extraout_RDX;
      if (this[0xc0] == (JuceVST3Editor)0x0) goto LAB_001b6b18;
LAB_001b6ae0:
      local_28._0_8_ = *(undefined8 *)(this + 0xb0);
      uVar14 = *(ulong *)(this + 0xb8);
    }
    *(undefined8 *)(this + 0xb0) = local_28._0_8_;
    *(ulong *)(this + 0xb8) = uVar14;
    local_28._8_8_ = (ulong)local_28._0_8_ >> 0x20;
LAB_001b6c0b:
    this[0xc0] = (JuceVST3Editor)0x0;
  }
  pDVar6 = Desktop::getInstance();
  fVar8 = *(float *)(pDVar6 + 0x130);
  auVar17._0_8_ = CONCAT44((float)(int)local_28._8_4_,(float)(int)local_28._0_4_);
  auVar17._8_4_ = (float)(int)local_28._8_4_;
  auVar17._12_4_ = (float)(int)local_28._12_4_;
  auVar10._0_8_ =
       CONCAT44((float)(int)(uVar14 >> 0x20) - (float)(int)local_28._8_4_,
                (float)(int)uVar14 - (float)(int)local_28._0_4_);
  auVar10._8_4_ = 0.0 - auVar17._8_4_;
  auVar10._12_4_ = 0.0 - auVar17._12_4_;
  fVar13 = (float)(_DAT_005d91c0 & (uint)fVar8);
  if (fVar13 == DAT_005d94c8) {
    if ((fVar8 == DAT_005d9038) && (!NAN(fVar8) && !NAN(DAT_005d9038))) goto LAB_001b6c8e;
  }
  else {
    fVar16 = (float)((uint)(DAT_005d9054 + fVar8) & _DAT_005d91c0);
    if (fVar16 <= DAT_005d94cc) goto LAB_001b6c8e;
    fVar11 = DAT_005d9038;
    if (DAT_005d9038 <= fVar13) {
      fVar11 = fVar13;
    }
    if (fVar16 <= fVar11 * DAT_005d94d0) goto LAB_001b6c8e;
  }
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar8;
  auVar17 = divps(auVar17,auVar2);
  auVar3._4_4_ = fVar8;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar8;
  auVar3._12_4_ = fVar8;
  auVar10 = divps(auVar10,auVar3);
LAB_001b6c8e:
  fVar8 = (float)((ulong)auVar17._0_8_ >> 0x20);
  dVar4 = (double)(float)auVar17._0_8_ + _DAT_005d9a90;
  dVar5 = (double)((float)auVar10._0_8_ + (float)auVar17._0_8_) + _UNK_005d9a98;
  dVar7 = (double)fVar8 + _DAT_005d9a90;
  dVar9 = (double)((float)((ulong)auVar10._0_8_ >> 0x20) + fVar8) + _UNK_005d9a98;
  uVar14 = _UNK_005d9aa8 & (ulong)dVar5;
  *(ulong *)(this + 0x18) = _DAT_005d9aa0 & (ulong)dVar4 | (long)dVar7 << 0x20;
  *(ulong *)(this + 0x20) = uVar14 | (long)dVar9 << 0x20;
  if (*(Component **)(this + 0xd8) != (Component *)0x0) {
    Component::setSize(*(Component **)(this + 0xd8),SUB84(dVar5,0) - SUB84(dVar4,0),
                       SUB84(dVar9,0) - SUB84(dVar7,0));
    this_01 = (ComponentPeer *)Component::getPeer(*(Component **)(this + 0xd8));
    if (this_01 != (ComponentPeer *)0x0) {
      ComponentPeer::updateBounds(this_01);
      return;
    }
  }
  return;
}


