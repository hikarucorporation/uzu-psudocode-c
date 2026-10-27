// Function : nudgeSelectedItem
// Namespace: juce:ComboBox
// Entry    : 002dd6a0
// Prototype: undefined nudgeSelectedItem(ComboBox * this, int param_1)
// Body     : 002dd6a0 - 002dd7c4


/* juce::ComboBox::nudgeSelectedItem(int) */

void __thiscall juce::ComboBox::nudgeSelectedItem(ComboBox *this,int param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  MenuItemIterator local_60 [8];
  undefined4 *local_58;
  undefined1 *local_50;
  long *local_48;
  undefined1 *local_40;
  long local_38;
  
  uVar2 = getSelectedItemIndex(this);
  while( true ) {
    local_60[0] = (MenuItemIterator)0x1;
    local_58 = malloc(0x20);
    local_38 = 0;
    local_50 = &DAT_100000008;
    *local_58 = 0;
    local_48 = malloc(0x40);
    local_40 = &DAT_100000008;
    *local_48 = (long)(this + 0x138);
    uVar6 = 0;
    uVar3 = PopupMenu::MenuItemIterator::next(local_60);
    cVar1 = (char)uVar3;
    while (cVar1 != '\0') {
      uVar6 = (uVar6 + 1) - (uint)(*(int *)(local_38 + 8) == 0);
      uVar3 = PopupMenu::MenuItemIterator::next(local_60);
      cVar1 = (char)uVar3;
    }
    uVar2 = uVar2 + param_1;
    free(local_48);
    free(local_58);
    if (uVar6 <= uVar2) break;
    lVar4 = getItemForIndex(this,uVar2);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 100) != '\0')) {
      lVar4 = getItemForIndex(this,uVar2);
      if (lVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(lVar4 + 8);
      }
      setSelectedId(this,iVar5,3);
      return;
    }
  }
  return;
}


