// Function : start_pass_main
// Namespace: juce:jpeglibNamespace
// Entry    : 0035ea20
// Prototype: undefined start_pass_main(long * param_1, int param_2)
// Body     : 0035ea20 - 0035ea5b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_main(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::J_BUF_MODE) */

void __cdecl juce::jpeglibNamespace::start_pass_main(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((char)param_1[0x24] != '\0') {
    return;
  }
  lVar1 = param_1[0x3d];
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(int *)(lVar1 + 0x1c) = param_2;
  if (param_2 == 0) {
    *(code **)(lVar1 + 8) = process_data_simple_main;
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar2 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x0035ea4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


