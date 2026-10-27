// Function : setSelectedItemIndex
// Namespace: juce:ComboBox
// Entry    : 002ddd50
// Prototype: undefined setSelectedItemIndex(ComboBox * this, int param_1, int param_2)
// Body     : 002ddd50 - 002ddd78


/* juce::ComboBox::setSelectedItemIndex(int, juce::NotificationType) */

void __thiscall juce::ComboBox::setSelectedItemIndex(ComboBox *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = getItemForIndex(this,param_1);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar1 + 8);
  }
  setSelectedId(this,iVar2,param_2);
  return;
}


