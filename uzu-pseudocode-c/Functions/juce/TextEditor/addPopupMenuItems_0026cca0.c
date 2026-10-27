// Function : addPopupMenuItems
// Namespace: juce:TextEditor
// Entry    : 0026cca0
// Prototype: undefined addPopupMenuItems(long param_1, PopupMenu * param_2)
// Body     : 0026cca0 - 0026cfca


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::addPopupMenuItems(juce::PopupMenu&, juce::MouseEvent const*) */

void __cdecl juce::TextEditor::addPopupMenuItems(long param_1,PopupMenu *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    lVar3 = param_1 + 8;
    do {
      bVar5 = (*(ushort *)(lVar3 + 0xe8) & 0x8000) == 0;
      if (!bVar5) break;
      lVar3 = *(long *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  else {
    bVar5 = false;
  }
  if (*(int *)(param_1 + 0x2a4) == 0) {
    translate((juce *)&local_30,&DAT_005e38f7);
                    /* try { // try from 0026ce1e to 0026ce32 has its CatchHandler @ 0026cfd1 */
    PopupMenu::addItem(param_2,0x1003,(undefined8 *)&local_30,bVar5,0);
    piVar4 = (int *)(local_30 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
    translate((juce *)&local_38,(byte *)0x5e3019);
                    /* try { // try from 0026ce81 to 0026ce93 has its CatchHandler @ 0026cfcf */
    PopupMenu::addItem(param_2,0x1004,(undefined8 *)&local_38,
                       *(int *)(param_1 + 0x270) != *(int *)(param_1 + 0x274),0);
    piVar4 = (int *)(local_38 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
  }
  translate((juce *)&local_40,(byte *)"Paste");
                    /* try { // try from 0026cd0f to 0026cd23 has its CatchHandler @ 0026cfd7 */
  PopupMenu::addItem(param_2,0x1005,(undefined8 *)&local_40,bVar5,0);
  piVar4 = (int *)(local_40 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  translate((juce *)&local_48,(byte *)"Delete");
                    /* try { // try from 0026cd5f to 0026cd73 has its CatchHandler @ 0026cfd5 */
  PopupMenu::addItem(param_2,0x1002,(undefined8 *)&local_48,bVar5,0);
  piVar4 = (int *)(local_48 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  PopupMenu::addSeparator(param_2);
  translate((juce *)&local_50,(byte *)"Select All");
                    /* try { // try from 0026cdb0 to 0026cdc7 has its CatchHandler @ 0026cfd3 */
  PopupMenu::addItem(param_2,0x1006,(undefined8 *)&local_50,1,0);
  piVar4 = (int *)(local_50 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
      PopupMenu::addSeparator(param_2);
      cVar2 = *(char *)(param_1 + 0x1c8);
      goto joined_r0x0026ced6;
    }
  }
  PopupMenu::addSeparator(param_2);
  cVar2 = *(char *)(param_1 + 0x1c8);
joined_r0x0026ced6:
  if (cVar2 == '\0') {
    translate((juce *)&local_58,&DAT_005e390c);
    if (*(int *)(param_1 + 0x25c) - 1U < *(uint *)(param_1 + 0x234)) {
      bVar5 = *(long *)(*(long *)(param_1 + 0x228) + -8 + (long)*(int *)(param_1 + 0x25c) * 8) != 0;
    }
    else {
      bVar5 = false;
    }
                    /* try { // try from 0026cf14 to 0026cf2e has its CatchHandler @ 0026cfcd */
    PopupMenu::addItem(param_2,0x1008,&local_58,bVar5,0);
    piVar4 = (int *)(local_58 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
    translate((juce *)&local_60,&DAT_005e3911);
    if (*(uint *)(param_1 + 0x25c) < *(uint *)(param_1 + 0x234)) {
      bVar5 = *(long *)(*(long *)(param_1 + 0x228) + (long)(int)*(uint *)(param_1 + 0x25c) * 8) != 0
      ;
    }
    else {
      bVar5 = false;
    }
                    /* try { // try from 0026cf83 to 0026cf9d has its CatchHandler @ 0026cfcb */
    PopupMenu::addItem(param_2,0x1009,&local_60,bVar5,0);
    piVar4 = (int *)(local_60 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
  }
  return;
}


