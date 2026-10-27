// Function : getSize
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6e00
// Prototype: undefined8 getSize(JuceVST3Editor * this, ulong * param_1)
// Body     : 001b6e00 - 001b6f7a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::getSize(Steinberg::ViewRect*)
    */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::getSize(JuceVST3Editor *this,ulong *param_1)

{
  float fVar1;
  JuceVST3Editor JVar2;
  ComponentHelpers *pCVar3;
  Component *this_00;
  Desktop *pDVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  if (param_1 == (ulong *)0x0) {
    return 1;
  }
  pCVar3 = *(ComponentHelpers **)(this + 200);
  if (pCVar3 == (ComponentHelpers *)0x0) {
    return 1;
  }
  this_00 = *(Component **)(pCVar3 + 0xf0);
  if (this_00 == (Component *)0x0) {
    uVar5 = 0;
    JVar2 = this[0xb0];
  }
  else {
    auVar13 = Component::getLocalBounds(this_00);
    Component::getLocalArea(pCVar3,(ComponentHelpers *)this_00,auVar13._0_8_,auVar13._8_8_);
    JVar2 = this[0xb0];
    uVar5 = extraout_RDX;
  }
  if (JVar2 != (JuceVST3Editor)0x0) {
    uVar8 = *(ulong *)(this + 0xa0);
    uVar9 = *(ulong *)(this + 0xa8);
    goto LAB_001b6f4f;
  }
  fVar6 = (float)(int)uVar5;
  fVar7 = (float)(int)((ulong)uVar5 >> 0x20);
  pDVar4 = Desktop::getInstance();
  fVar1 = *(float *)(pDVar4 + 0x130);
  fVar10 = (float)(_DAT_005d91c0 & (uint)fVar1);
  if (fVar10 == DAT_005d94c8) {
    if ((fVar1 == DAT_005d9038) && (!NAN(fVar1) && !NAN(DAT_005d9038))) goto LAB_001b6f13;
LAB_001b6eed:
    fVar10 = fVar1 * 0.0;
    fVar6 = fVar6 * fVar1;
    fVar7 = fVar7 * fVar1;
  }
  else {
    fVar11 = (float)((uint)(DAT_005d9054 + fVar1) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar11) {
      fVar12 = DAT_005d9038;
      if (DAT_005d9038 <= fVar10) {
        fVar12 = fVar10;
      }
      if (fVar12 * DAT_005d94d0 < fVar11) goto LAB_001b6eed;
    }
LAB_001b6f13:
    fVar10 = 0.0;
  }
  uVar8 = (ulong)((double)fVar10 + _DAT_005d9a90) & _DAT_005d9aa0 |
          (long)((double)fVar10 + _DAT_005d9a90) << 0x20;
  uVar9 = (ulong)((double)(fVar6 + fVar10) + _UNK_005d9a98) & _UNK_005d9aa8 |
          (long)((double)(fVar7 + fVar10) + _UNK_005d9a98) << 0x20;
LAB_001b6f4f:
  *param_1 = uVar8;
  param_1[1] = uVar9;
  uVar8 = param_1[1];
  *(ulong *)(this + 0xa0) = *param_1;
  *(ulong *)(this + 0xa8) = uVar8;
  if (this[0xb0] == (JuceVST3Editor)0x0) {
    this[0xb0] = (JuceVST3Editor)0x1;
  }
  return 0;
}


