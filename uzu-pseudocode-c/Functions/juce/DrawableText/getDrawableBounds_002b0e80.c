// Function : getDrawableBounds
// Namespace: juce:DrawableText
// Entry    : 002b0e80
// Prototype: undefined getDrawableBounds(DrawableText * this)
// Body     : 002b0e80 - 002b0ebf


/* juce::DrawableText::getDrawableBounds() const */

void __thiscall juce::DrawableText::getDrawableBounds(DrawableText *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = *(ulong *)(this + 0x160);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  uVar2 = *(ulong *)(this + 0x168);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  uVar3 = *(ulong *)(this + 0x170);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar3;
  auVar4._0_8_ = CONCAT44(((float)(uVar3 >> 0x20) - (float)(uVar1 >> 0x20)) + (float)(uVar2 >> 0x20)
                          ,((float)uVar3 - (float)uVar1) + (float)uVar2);
  auVar4._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar8 = minps(auVar7,auVar5);
  auVar5 = maxps(auVar10,auVar5);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  auVar10 = minps(auVar9,auVar8);
  auVar5 = maxps(auVar6,auVar5);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar4._0_8_;
  minps(auVar8,auVar10);
  maxps(auVar4,auVar5);
  return;
}


