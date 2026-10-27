// Function : write_tables_only
// Namespace: juce:jpeglibNamespace
// Entry    : 003608a0
// Prototype: undefined write_tables_only(long * param_1)
// Body     : 003608a0 - 00360a98


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_tables_only(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::write_tables_only(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
      (*(code *)*puVar2)(param_1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd8;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
      (*(code *)*puVar2)(param_1);
    }
  }
  if (param_1[0xe] != 0) {
    emit_dqt(param_1,0);
  }
  if (param_1[0xf] != 0) {
    emit_dqt(param_1,1);
  }
  if (param_1[0x10] != 0) {
    emit_dqt(param_1,2);
  }
  if (param_1[0x11] != 0) {
    emit_dqt(param_1,3);
  }
  if (*(char *)((long)param_1 + 0x121) == '\0') {
    if (param_1[0x14] != 0) {
      emit_dht(param_1,0,0);
    }
    if (param_1[0x18] != 0) {
      emit_dht(param_1,0,1);
    }
    if (param_1[0x15] != 0) {
      emit_dht(param_1,1,0);
    }
    if (param_1[0x19] != 0) {
      emit_dht(param_1,1,1);
    }
    if (param_1[0x16] != 0) {
      emit_dht(param_1,2,0);
    }
    if (param_1[0x1a] != 0) {
      emit_dht(param_1,2,1);
    }
    if (param_1[0x17] != 0) {
      emit_dht(param_1,3,0);
    }
    if (param_1[0x1b] != 0) {
      emit_dht(param_1,3,1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
      (*(code *)*puVar2)(param_1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd9;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00360a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
  }
  return;
}


