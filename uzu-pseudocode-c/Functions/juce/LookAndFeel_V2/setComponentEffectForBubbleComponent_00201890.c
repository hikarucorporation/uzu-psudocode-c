// Function : setComponentEffectForBubbleComponent
// Namespace: juce:LookAndFeel_V2
// Entry    : 00201890
// Prototype: undefined setComponentEffectForBubbleComponent(LookAndFeel_V2 * this, long param_1)
// Body     : 00201890 - 002018f7


/* non-virtual thunk to
   juce::LookAndFeel_V2::setComponentEffectForBubbleComponent(juce::BubbleComponent&) */

void __thiscall
juce::LookAndFeel_V2::setComponentEffectForBubbleComponent(LookAndFeel_V2 *this,long param_1)

{
  long lVar1;
  LookAndFeel_V2 *pLVar2;
  undefined8 *puVar3;
  LookAndFeel_V2 *pLVar4;
  
  pLVar4 = this + 0x108;
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    puVar3 = operator_new(0x10);
    *puVar3 = 0;
    puVar3[1] = pLVar4;
    *(undefined8 **)(param_1 + 0x80) = puVar3;
  }
  else {
    pLVar2 = *(LookAndFeel_V2 **)(lVar1 + 8);
    *(LookAndFeel_V2 **)(lVar1 + 8) = pLVar4;
    if (pLVar2 == pLVar4) {
      return;
    }
  }
  Component::internalRepaintUnchecked(param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


