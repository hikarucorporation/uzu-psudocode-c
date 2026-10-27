// Function : onSize
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b60f0
// Prototype: undefined8 onSize(JuceVST3Editor * this, undefined8 * param_1)
// Body     : 001b60f0 - 001b624b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3EditController::JuceVST3Editor::onSize(Steinberg::ViewRect*) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::onSize(JuceVST3Editor *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  Desktop *pDVar7;
  ComponentPeer *this_00;
  float fVar10;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int local_38;
  int iStack_34;
  int local_28;
  int iStack_24;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  if (this[0xc0] != (JuceVST3Editor)0x0) {
    this[0xc0] = (JuceVST3Editor)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  pDVar7 = Desktop::getInstance();
  fVar10 = *(float *)(pDVar7 + 0x130);
  local_28 = (int)uVar1;
  iStack_24 = (int)((ulong)uVar1 >> 0x20);
  auVar9._0_8_ = CONCAT44((float)iStack_24,(float)local_28);
  auVar9._8_8_ = 0;
  local_38 = (int)uVar2;
  iStack_34 = (int)((ulong)uVar2 >> 0x20);
  auVar12._0_8_ = CONCAT44((float)iStack_34 - (float)iStack_24,(float)local_38 - (float)local_28);
  auVar12._8_8_ = 0;
  fVar13 = (float)(_DAT_005d91c0 & (uint)fVar10);
  if (fVar13 == DAT_005d94c8) {
    if ((fVar10 == DAT_005d9038) && (!NAN(fVar10) && !NAN(DAT_005d9038))) goto LAB_001b6197;
  }
  else {
    fVar14 = (float)((uint)(DAT_005d9054 + fVar10) & _DAT_005d91c0);
    if (fVar14 <= DAT_005d94cc) goto LAB_001b6197;
    fVar15 = DAT_005d9038;
    if (DAT_005d9038 <= fVar13) {
      fVar15 = fVar13;
    }
    if (fVar14 <= fVar15 * DAT_005d94d0) goto LAB_001b6197;
  }
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar10;
  auVar9 = divps(auVar9,auVar3);
  auVar4._4_4_ = fVar10;
  auVar4._0_4_ = fVar10;
  auVar4._8_4_ = fVar10;
  auVar4._12_4_ = fVar10;
  auVar12 = divps(auVar12,auVar4);
LAB_001b6197:
  fVar10 = (float)(auVar9._0_8_ >> 0x20);
  dVar5 = (double)(float)auVar9._0_8_ + _DAT_005d9a90;
  dVar6 = (double)((float)auVar12._0_8_ + (float)auVar9._0_8_) + _UNK_005d9a98;
  dVar8 = (double)fVar10 + _DAT_005d9a90;
  dVar11 = (double)((float)(auVar12._0_8_ >> 0x20) + fVar10) + _UNK_005d9a98;
  auVar9._0_8_ = _UNK_005d9aa8 & (ulong)dVar6;
  *(ulong *)(this + 0x18) = _DAT_005d9aa0 & (ulong)dVar5 | (long)dVar8 << 0x20;
  *(ulong *)(this + 0x20) = auVar9._0_8_ | (long)dVar11 << 0x20;
  if (*(Component **)(this + 0xd8) != (Component *)0x0) {
    Component::setSize(*(Component **)(this + 0xd8),SUB84(dVar6,0) - SUB84(dVar5,0),
                       SUB84(dVar11,0) - SUB84(dVar8,0));
    this_00 = (ComponentPeer *)Component::getPeer(*(Component **)(this + 0xd8));
    if (this_00 != (ComponentPeer *)0x0) {
      ComponentPeer::updateBounds(this_00);
    }
  }
  return 0;
}


