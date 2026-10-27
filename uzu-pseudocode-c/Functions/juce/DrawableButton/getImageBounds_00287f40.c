// Function : getImageBounds
// Namespace: juce:DrawableButton
// Entry    : 00287f40
// Prototype: undefined getImageBounds(DrawableButton * this)
// Body     : 00287f40 - 002880a0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::DrawableButton::getImageBounds() const */

void __thiscall juce::DrawableButton::getImageBounds(DrawableButton *this)

{
  int iVar1;
  uint uVar2;
  int iVar4;
  int iVar5;
  undefined1 auVar3 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = (int)*(undefined8 *)(this + 0x40);
  iVar4 = (int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20);
  iVar1 = *(int *)(this + 0x1f8);
  if (iVar1 != 5) {
    uVar8 = SUB84((double)(_DAT_005dd190 * (float)iVar5) + _DAT_005d9a90,0);
    uVar9 = SUB84((double)(_UNK_005dd194 * (float)iVar4) + _UNK_005d9a98,0);
    uVar2 = *(uint *)(this + 0x248);
    uVar6 = -(uint)((int)uVar2 < (int)uVar8);
    uVar7 = -(uint)((int)uVar2 < (int)uVar9);
    if (iVar1 - 3U < 2) {
      auVar3._0_4_ = -(uint)((int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2 <
                            (int)(~uVar6 & uVar8 | uVar2 & uVar6));
      iVar5 = -(uint)((int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2 <
                     (int)(~uVar7 & uVar9 | uVar2 & uVar7));
      auVar3._4_4_ = auVar3._0_4_;
      auVar3._8_4_ = iVar5;
      auVar3._12_4_ = iVar5;
      movmskpd(iVar1,auVar3);
    }
  }
  return;
}


