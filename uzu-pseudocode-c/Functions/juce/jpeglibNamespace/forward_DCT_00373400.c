// Function : forward_DCT
// Namespace: juce:jpeglibNamespace
// Entry    : 00373400
// Prototype: undefined forward_DCT(long param_1, long param_2, undefined8 param_3, long param_4, int param_5, uint param_6)
// Body     : 00373400 - 003734d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::forward_DCT(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, short (*) [64], unsigned int,
   unsigned int) */

void __cdecl
juce::jpeglibNamespace::forward_DCT
          (long param_1,long param_2,undefined8 param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int local_138 [66];
  
  if (param_6 != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x218) + 0x58 + (long)*(int *)(param_2 + 4) * 8);
    lVar3 = *(long *)(param_2 + 0x58);
    uVar7 = 0;
    do {
      (*pcVar2)(local_138,param_3,param_5);
      lVar6 = 0;
      do {
        iVar1 = *(int *)(lVar3 + lVar6 * 4);
        iVar5 = local_138[lVar6];
        if (iVar5 < 0) {
          iVar5 = (iVar1 >> 1) - iVar5;
          sVar4 = 0;
          if (iVar1 <= iVar5) {
            sVar4 = (short)(iVar5 / iVar1);
          }
          sVar4 = -sVar4;
        }
        else {
          iVar5 = iVar5 + (iVar1 >> 1);
          sVar4 = 0;
          if (iVar1 <= iVar5) {
            sVar4 = (short)(iVar5 / iVar1);
          }
        }
        *(short *)(param_4 + lVar6 * 2) = sVar4;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x40);
      uVar7 = uVar7 + 1;
      param_5 = param_5 + *(int *)(param_2 + 0x24);
      param_4 = param_4 + 0x80;
    } while (uVar7 != param_6);
  }
  return;
}


