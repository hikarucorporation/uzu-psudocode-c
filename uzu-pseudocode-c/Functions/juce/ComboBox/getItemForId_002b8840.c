// Function : getItemForId
// Namespace: juce:ComboBox
// Entry    : 002b8840
// Prototype: undefined1 * getItemForId(ComboBox * this, int param_1)
// Body     : 002b8840 - 002b88f0


/* juce::ComboBox::getItemForId(int) const */

undefined1 * __thiscall juce::ComboBox::getItemForId(ComboBox *this,int param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  MenuItemIterator local_50 [8];
  undefined4 *local_48;
  undefined1 *local_40;
  long *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  if (param_1 != 0) {
    local_50[0] = (MenuItemIterator)0x1;
    local_48 = malloc(0x20);
    local_28 = (undefined1 *)0x0;
    local_40 = &DAT_100000008;
    *local_48 = 0;
    local_38 = malloc(0x40);
    local_30 = &DAT_100000008;
    *local_38 = (long)(this + 0x138);
    puVar2 = &DAT_100000008;
    do {
      uVar1 = PopupMenu::MenuItemIterator::next(local_50);
      if ((char)uVar1 == '\0') break;
      puVar2 = local_28;
    } while (*(int *)(local_28 + 8) != param_1);
    free(local_38);
    free(local_48);
    if ((char)uVar1 != '\0') {
      return puVar2;
    }
  }
  return (undefined1 *)0x0;
}


