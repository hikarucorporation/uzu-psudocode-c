// Function : jpeg_fill_bit_buffer
// Namespace: juce:jpeglibNamespace
// Entry    : 0037f6f0
// Prototype: undefined8 jpeg_fill_bit_buffer(undefined8 * param_1, ulong param_2, uint param_3, int param_4)
// Body     : 0037f6f0 - 0037f844


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fill_bit_buffer(juce::jpeglibNamespace::bitread_working_state*,
   long, int, int) */

undefined8 __cdecl
juce::jpeglibNamespace::jpeg_fill_bit_buffer
          (undefined8 *param_1,ulong param_2,uint param_3,int param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  pbVar7 = (byte *)*param_1;
  lVar8 = param_1[1];
  plVar2 = (long *)param_1[4];
  if (*(int *)((long)plVar2 + 0x21c) == 0) {
    if ((int)param_3 < 0x19) {
      do {
        if (lVar8 == 0) {
          cVar5 = (**(code **)(plVar2[5] + 0x18))(plVar2);
          if (cVar5 == '\0') {
            return 0;
          }
          pbVar7 = *(byte **)plVar2[5];
          lVar8 = ((undefined8 *)plVar2[5])[1];
        }
        lVar8 = lVar8 + -1;
        uVar6 = (ulong)*pbVar7;
        pbVar7 = pbVar7 + 1;
        if (uVar6 == 0xff) {
          do {
            if (lVar8 == 0) {
              cVar5 = (**(code **)(plVar2[5] + 0x18))(plVar2);
              if (cVar5 == '\0') {
                return 0;
              }
              pbVar7 = *(byte **)plVar2[5];
              lVar8 = ((undefined8 *)plVar2[5])[1];
            }
            lVar8 = lVar8 + -1;
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar1 == 0xff);
          if (bVar1 != 0) {
            *(uint *)((long)plVar2 + 0x21c) = (uint)bVar1;
            goto joined_r0x0037f818;
          }
          uVar6 = 0xff;
        }
        param_2 = param_2 << 8 | uVar6;
        uVar6 = (ulong)(param_3 + 8);
        bVar4 = (int)param_3 < 0x11;
        param_3 = param_3 + 8;
      } while (bVar4);
      goto LAB_0037f821;
    }
  }
  else {
joined_r0x0037f818:
    if ((int)param_3 < param_4) {
      if (*(char *)(plVar2[0x4a] + 0x3c) == '\0') {
        lVar3 = *plVar2;
        *(undefined4 *)(lVar3 + 0x28) = 0x78;
        (**(code **)(lVar3 + 8))(plVar2,0xffffffff);
        *(undefined1 *)(plVar2[0x4a] + 0x3c) = 1;
      }
      param_2 = param_2 << (0x19U - (char)param_3 & 0x3f);
      uVar6 = 0x19;
      goto LAB_0037f821;
    }
  }
  uVar6 = (ulong)param_3;
LAB_0037f821:
  *param_1 = pbVar7;
  param_1[1] = lVar8;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = (int)uVar6;
  return CONCAT71((int7)(uVar6 >> 8),1);
}


