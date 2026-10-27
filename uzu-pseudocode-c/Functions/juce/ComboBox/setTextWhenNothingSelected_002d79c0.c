// Function : setTextWhenNothingSelected
// Namespace: juce:ComboBox
// Entry    : 002d79c0
// Prototype: undefined setTextWhenNothingSelected(ComboBox * this, long * param_1)
// Body     : 002d79c0 - 002d7a3f


/* juce::ComboBox::setTextWhenNothingSelected(juce::String const&) */

void __thiscall juce::ComboBox::setTextWhenNothingSelected(ComboBox *this,long *param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  
  pbVar5 = (byte *)*param_1;
  if (*(byte **)(this + 0x1c0) != pbVar5) {
    uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)(this + 0x1c0),pbVar5);
    if (uVar4 != 0) {
      pbVar1 = pbVar5 + -0x10;
      if (pbVar1 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
        pbVar5 = (byte *)*param_1;
      }
      LOCK();
      lVar3 = *(long *)(this + 0x1c0);
      *(byte **)(this + 0x1c0) = pbVar5;
      UNLOCK();
      piVar6 = (int *)(lVar3 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar6);
        }
      }
      Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      return;
    }
  }
  return;
}


