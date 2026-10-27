// Function : getItemForIndex
// Namespace: juce:ComboBox
// Entry    : 002d7650
// Prototype: long getItemForIndex(ComboBox * this, int param_1)
// Body     : 002d7650 - 002d7708


/* juce::ComboBox::getItemForIndex(int) const */

long __thiscall juce::ComboBox::getItemForIndex(ComboBox *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  MenuItemIterator local_50 [8];
  undefined4 *local_48;
  undefined1 *local_40;
  long *local_38;
  undefined1 *local_30;
  long local_28;
  
  local_50[0] = (MenuItemIterator)0x1;
  local_48 = malloc(0x20);
  local_28 = 0;
  local_40 = &DAT_100000008;
  *local_48 = 0;
  local_38 = malloc(0x40);
  local_30 = &DAT_100000008;
  *local_38 = (long)(this + 0x138);
  iVar3 = 0;
  do {
    uVar1 = PopupMenu::MenuItemIterator::next(local_50);
    if ((char)uVar1 == '\0') {
      lVar2 = 0;
      break;
    }
  } while ((*(int *)(local_28 + 8) == 0) ||
          (bVar4 = iVar3 != param_1, lVar2 = local_28, iVar3 = iVar3 + 1, bVar4));
  free(local_38);
  free(local_48);
  return lVar2;
}


