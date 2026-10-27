// Function : start_pass_prep
// Namespace: juce:jpeglibNamespace
// Entry    : 00373880
// Prototype: undefined start_pass_prep(long * param_1, int param_2)
// Body     : 00373880 - 003738c3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_prep(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::J_BUF_MODE) */

void __cdecl juce::jpeglibNamespace::start_pass_prep(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0x3e];
  if (param_2 != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 3;
    (*(code *)*puVar2)(param_1);
  }
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)((long)param_1 + 0x34);
  *(undefined8 *)(lVar1 + 100) = 0;
  *(int *)(lVar1 + 0x6c) = *(int *)((long)param_1 + 0x154) * 2;
  return;
}


