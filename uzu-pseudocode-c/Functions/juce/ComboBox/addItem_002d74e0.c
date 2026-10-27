// Function : addItem
// Namespace: juce:ComboBox
// Entry    : 002d74e0
// Prototype: undefined addItem(ComboBox * this, undefined8 * param_1, int param_2)
// Body     : 002d74e0 - 002d7552


/* juce::ComboBox::addItem(juce::String const&, int) */

void __thiscall juce::ComboBox::addItem(ComboBox *this,undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *local_18;
  
  if ((param_2 != 0) && (local_18 = (char *)*param_1, *local_18 != '\0')) {
    piVar2 = (int *)(local_18 + -0x10);
    if (piVar2 != &emptyString) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
                    /* try { // try from 002d750f to 002d7523 has its CatchHandler @ 002d7553 */
    PopupMenu::addItem((PopupMenu *)(this + 0x138),param_2,&local_18,1,0);
    piVar2 = (int *)(local_18 + -0x10);
    if (piVar2 != &emptyString) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar2);
        return;
      }
    }
  }
  return;
}


