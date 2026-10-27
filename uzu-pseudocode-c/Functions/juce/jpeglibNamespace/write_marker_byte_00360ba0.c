// Function : write_marker_byte
// Namespace: juce:jpeglibNamespace
// Entry    : 00360ba0
// Prototype: undefined write_marker_byte(long * param_1, undefined1 param_2)
// Body     : 00360ba0 - 00360bd4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_marker_byte(juce::jpeglibNamespace::jpeg_compress_struct*, int) */

void __cdecl juce::jpeglibNamespace::write_marker_byte(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  
  plVar2 = (long *)param_1[5];
  puVar3 = (undefined1 *)*plVar2;
  *plVar2 = (long)(puVar3 + 1);
  *puVar3 = param_2;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar5 = (*(code *)plVar2[3])();
    if (cVar5 == '\0') {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00360bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_1);
      return;
    }
  }
  return;
}


