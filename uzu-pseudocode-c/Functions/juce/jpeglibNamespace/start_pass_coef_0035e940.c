// Function : start_pass_coef
// Namespace: juce:jpeglibNamespace
// Entry    : 0035e940
// Prototype: undefined start_pass_coef(long * param_1, int param_2)
// Body     : 0035e940 - 0035ea17


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_coef(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::J_BUF_MODE) */

void __cdecl juce::jpeglibNamespace::start_pass_coef(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  lVar1 = param_1[0x3f];
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar3 = 1;
  if (*(int *)((long)param_1 + 0x164) < 2) {
    uVar3 = *(undefined4 *)((ulong)((int)param_1[0x2c] == 1) * 0x40 + 0xc + param_1[0x2d]);
  }
  *(undefined4 *)(lVar1 + 0x1c) = uVar3;
  *(undefined8 *)(lVar1 + 0x14) = 0;
  if (param_2 == 3) {
    if (*(long *)(lVar1 + 0x70) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
      *(code **)(lVar1 + 8) = compress_first_pass;
      return;
    }
    *(code **)(lVar1 + 8) = compress_first_pass;
    return;
  }
  if (param_2 == 2) {
    if (*(long *)(lVar1 + 0x70) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
      *(code **)(lVar1 + 8) = compress_output;
      return;
    }
    *(code **)(lVar1 + 8) = compress_output;
    return;
  }
  if (param_2 != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x0035e9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)();
    return;
  }
  if (*(long *)(lVar1 + 0x70) != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 3;
    (*(code *)*puVar2)();
  }
  *(code **)(lVar1 + 8) = compress_data;
  return;
}


