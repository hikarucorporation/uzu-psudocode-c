// Function : start_pass_dpost
// Namespace: juce:jpeglibNamespace
// Entry    : 00378880
// Prototype: undefined start_pass_dpost(long * param_1, int param_2)
// Body     : 00378880 - 00378962


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_dpost(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::J_BUF_MODE) */

void __cdecl juce::jpeglibNamespace::start_pass_dpost(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[0x47];
  if (param_2 == 3) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    *(code **)(lVar1 + 8) = post_process_prepass;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    return;
  }
  if (param_2 == 2) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    *(code **)(lVar1 + 8) = post_process_2pass;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    return;
  }
  if (param_2 != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 3;
    (*(code *)*puVar2)();
    *(undefined8 *)(lVar1 + 0x24) = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0x62) == '\0') {
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1[0x4c] + 8);
    *(undefined8 *)(lVar1 + 0x24) = 0;
    return;
  }
  *(code **)(lVar1 + 8) = post_process_1pass;
  if (*(long *)(lVar1 + 0x18) == 0) {
    uVar3 = (**(code **)(param_1[1] + 0x38))
                      (param_1,*(undefined8 *)(lVar1 + 0x10),0,*(undefined4 *)(lVar1 + 0x20),1);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x24) = 0;
  return;
}


