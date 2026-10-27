// Function : request_virt_sarray
// Namespace: juce:jpeglibNamespace
// Entry    : 00376720
// Prototype: undefined request_virt_sarray(long * param_1, uint param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
// Body     : 00376720 - 003768c3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::request_virt_sarray(juce::jpeglibNamespace::jpeg_common_struct*, int,
   unsigned char, unsigned int, unsigned int, unsigned int) */

void __cdecl
juce::jpeglibNamespace::request_virt_sarray
          (long *param_1,uint param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  lVar1 = param_1[1];
  if (param_2 == 1) {
    puVar5 = *(undefined8 **)(lVar1 + 0x70);
    if (*(undefined8 **)(lVar1 + 0x70) == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar4 = puVar5;
        uVar7 = puVar4[2];
        if (0x8f < uVar7) goto LAB_00376862;
        puVar5 = (undefined8 *)*puVar4;
        puVar8 = puVar4;
      } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
    }
    uVar7 = 5000;
    if (puVar8 == (undefined8 *)0x0) {
      uVar7 = 16000;
    }
    while( true ) {
      puVar4 = malloc(uVar7 + 0xa8);
      if (puVar4 != (undefined8 *)0x0) break;
      uVar6 = uVar7 >> 1;
      bVar3 = uVar7 < 100;
      uVar7 = uVar6;
      if (bVar3) {
        *(undefined8 *)(*param_1 + 0x28) = 0x200000038;
        (**(code **)*param_1)(param_1);
      }
    }
    *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + uVar7 + 0xa8;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = uVar7 + 0x90;
    puVar5 = (undefined8 *)(lVar1 + 0x70);
    if (puVar8 != (undefined8 *)0x0) {
      puVar5 = puVar8;
    }
    *puVar5 = puVar4;
    uVar7 = puVar4[2];
LAB_00376862:
    puVar5 = (undefined8 *)((long)puVar4 + puVar4[1] + 0x18);
    puVar4[1] = puVar4[1] + 0x90;
    puVar4[2] = uVar7 - 0x90;
  }
  else {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(uint *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
    puVar5 = (undefined8 *)alloc_small(param_1,param_2,0x90);
  }
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = param_5;
  *(undefined4 *)((long)puVar5 + 0xc) = param_4;
  *(undefined4 *)(puVar5 + 2) = param_6;
  *(undefined1 *)((long)puVar5 + 0x24) = param_3;
  *(undefined1 *)((long)puVar5 + 0x26) = 0;
  puVar5[5] = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 **)(lVar1 + 0x88) = puVar5;
  return;
}


