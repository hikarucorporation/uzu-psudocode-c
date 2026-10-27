// Function : getSelectedItemIndex
// Namespace: juce:ComboBox
// Entry    : 002dda10
// Prototype: int getSelectedItemIndex(ComboBox * this)
// Body     : 002dda10 - 002ddc03


/* juce::ComboBox::getSelectedItemIndex() const */

int __thiscall juce::ComboBox::getSelectedItemIndex(ComboBox *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_68;
  undefined1 local_60 [8];
  MenuItemIterator local_58;
  undefined7 uStack_57;
  undefined4 *local_50;
  undefined1 *local_48;
  long *local_40;
  undefined1 *local_38;
  long local_30;
  
  (**(code **)(**(long **)(this + 0x150) + 0x10))(&local_68);
                    /* try { // try from 002dda38 to 002dda3d has its CatchHandler @ 002ddc32 */
  iVar2 = (**(code **)(local_68 + 0x10))(local_60);
  iVar6 = -1;
  if (iVar2 != 0) {
    local_58 = (MenuItemIterator)0x1;
    local_50 = malloc(0x20);
    local_30 = 0;
    local_48 = &DAT_100000008;
    *local_50 = 0;
    local_40 = malloc(0x40);
    local_38 = &DAT_100000008;
    *local_40 = (long)(this + 0x138);
    iVar1 = 0;
    do {
      iVar6 = iVar1;
      uVar4 = PopupMenu::MenuItemIterator::next(&local_58);
      if ((char)uVar4 == '\0') {
        free(local_40);
        free(local_50);
        iVar6 = -1;
        goto LAB_002ddb01;
      }
      iVar1 = (iVar6 + 1) - (uint)(*(int *)(local_30 + 8) == 0);
    } while (*(int *)(local_30 + 8) != iVar2);
    free(local_40);
    free(local_50);
  }
LAB_002ddb01:
                    /* try { // try from 002ddb05 to 002ddb0a has its CatchHandler @ 002ddc2a */
  (**(code **)(local_68 + 0x58))(local_60);
  (**(code **)(**(long **)(*(long *)(this + 0x1b8) + 0x178) + 0x10))(&local_58);
                    /* try { // try from 002ddb2e to 002ddb36 has its CatchHandler @ 002ddc0c */
  (**(code **)(CONCAT71(uStack_57,local_58) + 0x28))(&local_68,&local_50);
                    /* try { // try from 002ddb3c to 002ddb41 has its CatchHandler @ 002ddc04 */
  (**(code **)(CONCAT71(uStack_57,local_58) + 0x58))(&local_50);
  puVar5 = (undefined8 *)getItemForIndex(this,iVar6);
  if (puVar5 == (undefined8 *)0x0) {
    pbVar7 = &DAT_0061ac58;
    if (local_68 != &DAT_0061ac58) goto LAB_002ddb72;
LAB_002ddba2:
    bVar8 = false;
    pbVar7 = pbVar7 + -0x10;
    if (pbVar7 == (byte *)&emptyString) goto LAB_002ddbcb;
  }
  else {
    pbVar7 = (byte *)*puVar5;
    if (pbVar7 != &DAT_0061ac58) {
      LOCK();
      *(int *)(pbVar7 + -0x10) = *(int *)(pbVar7 + -0x10) + 1;
      UNLOCK();
    }
    if (local_68 == pbVar7) goto LAB_002ddba2;
LAB_002ddb72:
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (local_68,pbVar7);
    bVar8 = uVar3 != 0;
    pbVar7 = pbVar7 + -0x10;
    if (pbVar7 == (byte *)&emptyString) goto LAB_002ddbcb;
  }
  LOCK();
  iVar2 = *(int *)pbVar7;
  *(int *)pbVar7 = *(int *)pbVar7 + -1;
  UNLOCK();
  if (iVar2 == 0) {
    operator_delete__(pbVar7);
  }
LAB_002ddbcb:
  local_68 = local_68 + -0x10;
  if (local_68 != (byte *)&emptyString) {
    LOCK();
    iVar2 = *(int *)local_68;
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(local_68);
    }
  }
  if (bVar8) {
    iVar6 = -1;
  }
  return iVar6;
}


