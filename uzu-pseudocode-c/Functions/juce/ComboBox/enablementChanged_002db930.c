// Function : enablementChanged
// Namespace: juce:ComboBox
// Entry    : 002db930
// Prototype: undefined enablementChanged(ComboBox * this)
// Body     : 002db930 - 002db995


/* juce::ComboBox::enablementChanged() */

void __thiscall juce::ComboBox::enablementChanged(ComboBox *this)

{
  ComboBox *pCVar1;
  
  pCVar1 = this;
  do {
    if ((*(ushort *)(pCVar1 + 0xe8) & 0x8000) != 0) {
      if (this[0x185] != (ComboBox)0x0) {
        this[0x185] = (ComboBox)0x0;
        PopupMenu::dismissAllActiveMenus();
        Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      }
      break;
    }
    pCVar1 = *(ComboBox **)(pCVar1 + 0x30);
  } while (pCVar1 != (ComboBox *)0x0);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


