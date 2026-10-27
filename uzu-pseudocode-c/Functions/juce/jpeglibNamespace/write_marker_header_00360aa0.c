// Function : write_marker_header
// Namespace: juce:jpeglibNamespace
// Entry    : 00360aa0
// Prototype: undefined write_marker_header(long * param_1, undefined1 param_2, uint param_3)
// Body     : 00360aa0 - 00360b9b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_marker_header(juce::jpeglibNamespace::jpeg_compress_struct*, int,
   unsigned int) */

void __cdecl
juce::jpeglibNamespace::write_marker_header(long *param_1,undefined1 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  char cVar5;
  
  if (0xfffd < param_3) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0xc;
    (*(code *)*puVar2)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar5 = (*(code *)puVar2[3])(param_1);
    if (cVar5 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
      (*(code *)*puVar2)(param_1);
    }
  }
  plVar4 = (long *)param_1[5];
  puVar3 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar3 + 1);
  *puVar3 = param_2;
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar5 = (*(code *)plVar4[3])(param_1);
    if (cVar5 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
      (*(code *)*puVar2)(param_1);
    }
  }
  plVar4 = (long *)param_1[5];
  puVar3 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar3 + 1);
  *puVar3 = (char)(param_3 + 2 >> 8);
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar5 = (*(code *)plVar4[3])(param_1);
    if (cVar5 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
      (*(code *)*puVar2)(param_1);
    }
  }
  plVar4 = (long *)param_1[5];
  puVar3 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar3 + 1);
  *puVar3 = (char)(param_3 + 2);
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar5 = (*(code *)plVar4[3])(param_1);
    if (cVar5 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00360b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
  }
  return;
}


