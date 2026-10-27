// Function : focusGained
// Namespace: juce:Label
// Entry    : 00235690
// Prototype: undefined focusGained(undefined8 param_1, float param_2, Label * this, int param_4)
// Body     : 00235690 - 002356c2


/* juce::Label::focusGained(juce::Component::FocusChangeType) */

void __thiscall juce::Label::focusGained(undefined8 param_1,float param_2,Label *this,int param_4)

{
  Label *pLVar1;
  
  if (this[0x210] != (Label)0x0) {
    pLVar1 = this;
    do {
      if ((*(ushort *)(pLVar1 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pLVar1 = *(Label **)(pLVar1 + 0x30);
    } while (pLVar1 != (Label *)0x0);
    if (param_4 == 1) {
      showEditor(param_1,param_2,this);
      return;
    }
  }
  return;
}


