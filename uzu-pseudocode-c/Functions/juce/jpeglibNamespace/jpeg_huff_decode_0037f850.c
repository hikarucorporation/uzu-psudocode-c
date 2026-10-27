// Function : jpeg_huff_decode
// Namespace: juce:jpeglibNamespace
// Entry    : 0037f850
// Prototype: ulong jpeg_huff_decode(undefined8 * param_1, ulong param_2, uint param_3, long param_4, uint param_5)
// Body     : 0037f850 - 0037f95f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_huff_decode(juce::jpeglibNamespace::bitread_working_state*, long,
   int, juce::jpeglibNamespace::d_derived_tbl*, int) */

ulong __cdecl
juce::jpeglibNamespace::jpeg_huff_decode
          (undefined8 *param_1,ulong param_2,uint param_3,long param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((int)param_3 < (int)param_5) {
    uVar3 = jpeg_fill_bit_buffer(param_1,param_2,param_3,param_5);
    if ((char)uVar3 == '\0') {
      return 0xffffffff;
    }
    param_2 = param_1[2];
    param_3 = *(uint *)(param_1 + 3);
  }
  uVar5 = param_3 - param_5;
  uVar4 = (ulong)param_5;
  uVar7 = (ulong)(int)((uint)((long)param_2 >> ((byte)uVar5 & 0x3f)) & *(uint *)(bmask + uVar4 * 4))
  ;
  uVar6 = uVar4;
  if (*(long *)(param_4 + uVar4 * 8) < (long)uVar7) {
    do {
      if ((int)uVar5 < 1) {
        uVar3 = jpeg_fill_bit_buffer(param_1,param_2,uVar5,1);
        if ((char)uVar3 == '\0') {
          return 0xffffffff;
        }
        param_2 = param_1[2];
        uVar5 = *(uint *)(param_1 + 3);
      }
      uVar5 = uVar5 - 1;
      uVar7 = (ulong)((uint)(param_2 >> ((byte)uVar5 & 0x3f)) & 1) | uVar7 * 2;
      uVar4 = uVar6 + 1;
      lVar2 = uVar6 * 8;
      uVar6 = uVar4;
    } while (*(long *)(param_4 + 8 + lVar2) < (long)uVar7);
    param_1[2] = param_2;
    *(uint *)(param_1 + 3) = uVar5;
    param_5 = (uint)uVar4;
  }
  else {
    param_1[2] = param_2;
    *(uint *)(param_1 + 3) = uVar5;
  }
  if ((int)param_5 < 0x11) {
    uVar4 = (ulong)*(byte *)(*(long *)(param_4 + 0x118) + 0x11 +
                            (long)((int)uVar7 + *(int *)(param_4 + 0x90 + uVar4 * 8)));
  }
  else {
    plVar1 = (long *)param_1[4];
    lVar2 = *plVar1;
    *(undefined4 *)(lVar2 + 0x28) = 0x79;
    (**(code **)(lVar2 + 8))(plVar1,0xffffffff);
    uVar4 = 0;
  }
  return uVar4;
}


