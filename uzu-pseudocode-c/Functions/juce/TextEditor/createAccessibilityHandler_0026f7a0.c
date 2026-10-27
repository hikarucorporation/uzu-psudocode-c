// Function : createAccessibilityHandler
// Namespace: juce:TextEditor
// Entry    : 0026f7a0
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long param_2)
// Body     : 0026f7a0 - 0026f8a1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::createAccessibilityHandler() */

undefined8 * __cdecl juce::TextEditor::createAccessibilityHandler(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  puVar1 = operator_new(0x80);
  uVar4 = 7;
  if (*(char *)(param_2 + 0x1c8) == '\0') {
    lVar2 = param_2 + 8;
    do {
      if ((*(ushort *)(lVar2 + 0xe8) & 0x8000) != 0) goto LAB_0026f7ed;
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
    uVar4 = 8;
  }
LAB_0026f7ed:
  local_40 = &uStack_50;
  uStack_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = local_40;
                    /* try { // try from 0026f815 to 0026f81e has its CatchHandler @ 0026f8a2 */
  puVar3 = operator_new(0x10);
  *puVar3 = &PTR__AccessibilityTextInterface_00710dd0;
  puVar3[1] = param_2;
  *puVar1 = &PTR__AccessibilityHandler_00706fc8;
  puVar1[1] = param_2 + 8;
  puVar1[2] = *(undefined8 *)(*(long *)(param_2 + 8) + -8);
  *(undefined4 *)(puVar1 + 3) = uVar4;
  puVar1[6] = 0;
  puVar1[7] = puVar1 + 5;
  puVar1[8] = puVar1 + 5;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = puVar3;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR__AccessibilityHandler_00710d78;
  puVar1[0xf] = param_2;
  *param_1 = puVar1;
  return param_1;
}


