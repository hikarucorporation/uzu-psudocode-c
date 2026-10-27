// Function : jpeg_idct_2x4
// Namespace: juce:jpeglibNamespace
// Entry    : 00380dc0
// Prototype: undefined jpeg_idct_2x4(long param_1, long param_2, short * param_3, long * param_4, ulong param_5)
// Body     : 00380dc0 - 00380fac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_2x4(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_2x4
          (long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  lVar1 = *(long *)(param_1 + 0x198);
  piVar2 = *(int **)(param_2 + 0x58);
  iVar4 = (piVar2[0x10] * (int)param_3[0x10] + *piVar2 * (int)*param_3) * 0x2000;
  iVar9 = (*piVar2 * (int)*param_3 - piVar2[0x10] * (int)param_3[0x10]) * 0x2000;
  iVar8 = ((int)param_3[0x18] * piVar2[0x18] + (int)param_3[8] * piVar2[8]) * 0x1151;
  iVar7 = (int)param_3[8] * piVar2[8] * 0x187e + iVar8;
  iVar8 = (int)param_3[0x18] * piVar2[0x18] * -0x3b21 + iVar8;
  iVar10 = iVar7 + iVar4 + 0x2008000;
  iVar4 = iVar4 - iVar7;
  iVar11 = iVar8 + iVar9 + 0x2008000;
  iVar9 = iVar9 - iVar8;
  iVar8 = (piVar2[0x11] * (int)param_3[0x11] + piVar2[1] * (int)param_3[1]) * 0x2000;
  iVar7 = (piVar2[1] * (int)param_3[1] - piVar2[0x11] * (int)param_3[0x11]) * 0x2000;
  iVar5 = ((int)param_3[0x19] * piVar2[0x19] + (int)param_3[9] * piVar2[9]) * 0x1151;
  iVar12 = (int)param_3[9] * piVar2[9] * 0x187e + iVar5;
  iVar5 = (int)param_3[0x19] * piVar2[0x19] * -0x3b21 + iVar5;
  iVar13 = iVar12 + iVar8;
  iVar8 = iVar8 - iVar12;
  iVar12 = iVar5 + iVar7;
  iVar7 = iVar7 - iVar5;
  uVar6 = param_5 & 0xffffffff;
  lVar3 = *param_4;
  *(undefined1 *)(lVar3 + uVar6) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)((uint)(iVar10 + iVar13) >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar3 + 1 + uVar6) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)((uint)(iVar10 - iVar13) >> 0x10 & 0x3ff));
  lVar3 = param_4[1];
  *(undefined1 *)(lVar3 + uVar6) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)((uint)(iVar12 + iVar11) >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar3 + 1 + uVar6) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)((uint)(iVar11 - iVar12) >> 0x10 & 0x3ff));
  lVar3 = param_4[2];
  *(undefined1 *)(lVar3 + uVar6) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)(iVar9 + iVar7 + 0x2008000U >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar3 + 1 + uVar6) =
       *(undefined1 *)
        (lVar1 + -0x180 + (ulong)((uint)((iVar9 + 0x2008000) - iVar7) >> 0x10 & 0x3ff));
  lVar3 = param_4[3];
  *(undefined1 *)(lVar3 + uVar6) =
       *(undefined1 *)(lVar1 + -0x180 + (ulong)(iVar4 + iVar8 + 0x2008000U >> 0x10 & 0x3ff));
  *(undefined1 *)(lVar3 + 1 + uVar6) =
       *(undefined1 *)
        (lVar1 + -0x180 + (ulong)((uint)((iVar4 + 0x2008000) - iVar8) >> 0x10 & 0x3ff));
  return;
}


