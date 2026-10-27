// Function : free_pool
// Namespace: juce:jpeglibNamespace
// Entry    : 003773f0
// Prototype: undefined free_pool(long * param_1, uint param_2)
// Body     : 003773f0 - 0037754a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::free_pool(juce::jpeglibNamespace::jpeg_common_struct*, int) */

void __cdecl juce::jpeglibNamespace::free_pool(long *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (lVar6 = *(long *)(lVar1 + 0x88); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x28)) {
        if (*(char *)(lVar6 + 0x26) != '\0') {
          *(undefined1 *)(lVar6 + 0x26) = 0;
          (**(code **)(lVar6 + 0x40))(param_1,lVar6 + 0x30);
        }
      }
      *(undefined8 *)(lVar1 + 0x88) = 0;
      for (lVar6 = *(long *)(lVar1 + 0x90); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x28)) {
        if (*(char *)(lVar6 + 0x26) != '\0') {
          *(undefined1 *)(lVar6 + 0x26) = 0;
          (**(code **)(lVar6 + 0x40))(param_1,lVar6 + 0x30);
        }
      }
      *(undefined8 *)(lVar1 + 0x90) = 0;
    }
  }
  else {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0xf;
    *(uint *)(lVar6 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar6 = (long)(int)param_2;
  puVar2 = *(undefined8 **)(lVar1 + 0x78 + lVar6 * 8);
  *(undefined8 *)(lVar1 + 0x78 + lVar6 * 8) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar4 = puVar2[1];
    lVar5 = puVar2[2];
    free(puVar2);
    *(long *)(lVar1 + 0x98) = (*(long *)(lVar1 + 0x98) - (lVar4 + lVar5)) + -0x18;
    puVar2 = puVar3;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x68 + lVar6 * 8);
  *(undefined8 *)(lVar1 + 0x68 + lVar6 * 8) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar6 = puVar2[1];
    lVar4 = puVar2[2];
    free(puVar2);
    *(long *)(lVar1 + 0x98) = (*(long *)(lVar1 + 0x98) - (lVar6 + lVar4)) + -0x18;
    puVar2 = puVar3;
  }
  return;
}


