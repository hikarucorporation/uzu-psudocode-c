// Function : mouseUp
// Namespace: juce:ComboBox
// Entry    : 002db210
// Prototype: undefined mouseUp(ComboBox * this, ulong * param_1)
// Body     : 002db210 - 002db28c


/* juce::ComboBox::mouseUp(juce::MouseEvent const&) */

void __thiscall juce::ComboBox::mouseUp(ComboBox *this,ulong *param_1)

{
  bool bVar1;
  float local_70 [24];
  
  if (this[0x184] != (ComboBox)0x0) {
    this[0x184] = (ComboBox)0x0;
    Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    MouseEvent::getEventRelativeTo(local_70,param_1,(long *)this);
    bVar1 = Component::reallyContains
                      (CONCAT44((float)local_70[3],(float)local_70[2]),(Component *)this);
    if ((bVar1) &&
       (((ComboBox *)param_1[6] == this ||
        (*(char *)(*(long *)(this + 0x1b8) + 0x210) == '\0' &&
         *(char *)(*(long *)(this + 0x1b8) + 0x211) == '\0')))) {
      showPopupIfNotActive(this);
    }
  }
  return;
}


