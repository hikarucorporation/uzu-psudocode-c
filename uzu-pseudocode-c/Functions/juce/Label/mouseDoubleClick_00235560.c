// Function : mouseDoubleClick
// Namespace: juce:Label
// Entry    : 00235560
// Prototype: undefined mouseDoubleClick(undefined8 param_1_00, float param_2, Label * this, long param_4)
// Body     : 00235560 - 00235593


/* juce::Label::mouseDoubleClick(juce::MouseEvent const&) */

void __thiscall
juce::Label::mouseDoubleClick(undefined8 param_1_00,float param_2,Label *this,long param_4)

{
  Label *pLVar1;
  
  if (this[0x211] != (Label)0x0) {
    pLVar1 = this;
    do {
      if ((*(ushort *)(pLVar1 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pLVar1 = *(Label **)(pLVar1 + 0x30);
    } while (pLVar1 != (Label *)0x0);
    if ((*(byte *)(param_4 + 0x10) & 0x20) == 0) {
      showEditor(param_1_00,param_2,this);
      return;
    }
  }
  return;
}


