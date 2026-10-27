// Function : setJustificationType
// Namespace: juce:ComboBox
// Entry    : 002ddd20
// Prototype: undefined setJustificationType(ComboBox * this, int param_1)
// Body     : 002ddd20 - 002ddd45


/* juce::ComboBox::setJustificationType(juce::Justification) */

void __thiscall juce::ComboBox::setJustificationType(ComboBox *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x1b8);
  if (*(int *)(lVar1 + 0x1b8) == param_1) {
    return;
  }
  *(int *)(lVar1 + 0x1b8) = param_1;
  Component::internalRepaintUnchecked(lVar1,0,*(ulong *)(lVar1 + 0x40),'\x01');
  return;
}


