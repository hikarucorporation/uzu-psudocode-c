// Function : mouseUp
// Namespace: juce:Label
// Entry    : 002354e0
// Prototype: undefined mouseUp(undefined8 param_1_00, float param_2, Label * this, long param_4)
// Body     : 002354e0 - 00235551


/* juce::Label::mouseUp(juce::MouseEvent const&) */

void __thiscall juce::Label::mouseUp(undefined8 param_1_00,float param_2,Label *this,long param_4)

{
  Label *pLVar1;
  ulong uVar2;
  undefined8 extraout_XMM0_Qa;
  
  if (this[0x210] != (Label)0x0) {
    pLVar1 = this;
    do {
      if ((*(ushort *)(pLVar1 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pLVar1 = *(Label **)(pLVar1 + 0x30);
    } while (pLVar1 != (Label *)0x0);
    uVar2 = Component::contains(CONCAT44((float)(int)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20),
                                         (float)(int)*(undefined8 *)(param_4 + 8)),(Component *)this
                               );
    if ((((char)uVar2 != '\0') && (*(char *)(param_4 + 0x59) == '\0')) &&
       ((*(byte *)(param_4 + 0x10) & 0x20) == 0)) {
      showEditor(extraout_XMM0_Qa,param_2,this);
      return;
    }
  }
  return;
}


