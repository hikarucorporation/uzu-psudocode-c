// Function : getSelectedId
// Namespace: juce:ComboBox
// Entry    : 002b8710
// Prototype: undefined4 getSelectedId(ComboBox * this)
// Body     : 002b8710 - 002b8803


/* juce::ComboBox::getSelectedId() const */

undefined4 __thiscall juce::ComboBox::getSelectedId(ComboBox *this)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  long local_38;
  undefined1 local_30 [8];
  byte *local_28;
  
                    /* try { // try from 002b8727 to 002b872c has its CatchHandler @ 002b8835 */
  (**(code **)(**(long **)(this + 0x150) + 0x10))(&local_38);
                    /* try { // try from 002b8736 to 002b873b has its CatchHandler @ 002b882d */
  iVar1 = (**(code **)(local_38 + 0x10))(local_30);
  puVar3 = (undefined8 *)getItemForId(this,iVar1);
                    /* try { // try from 002b874d to 002b8752 has its CatchHandler @ 002b8825 */
  (**(code **)(local_38 + 0x58))(local_30);
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 002b8770 to 002b8775 has its CatchHandler @ 002b8823 */
    (**(code **)(**(long **)(*(long *)(this + 0x1b8) + 0x178) + 0x10))(&local_38);
                    /* try { // try from 002b877f to 002b8789 has its CatchHandler @ 002b880c */
    (**(code **)(local_38 + 0x28))(&local_28,local_30);
                    /* try { // try from 002b878e to 002b8793 has its CatchHandler @ 002b8804 */
    (**(code **)(local_38 + 0x58))(local_30);
    if (local_28 == (byte *)*puVar3) {
      bVar5 = true;
    }
    else {
      uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (local_28,(byte *)*puVar3);
      bVar5 = uVar2 == 0;
    }
    if (local_28 != &DAT_0061ac58) {
      local_28 = local_28 + -0x10;
      LOCK();
      iVar1 = *(int *)local_28;
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(local_28);
      }
    }
    if (bVar5) {
      uVar4 = *(undefined4 *)(puVar3 + 1);
    }
  }
  return uVar4;
}


