// Function : write_file_trailer
// Namespace: juce:jpeglibNamespace
// Entry    : 00360830
// Prototype: undefined write_file_trailer(long * param_1)
// Body     : 00360830 - 00360898


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_file_trailer(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::write_file_trailer(long *param_1)

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
  *puVar3 = 0xd9;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00360897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
  }
  return;
}


