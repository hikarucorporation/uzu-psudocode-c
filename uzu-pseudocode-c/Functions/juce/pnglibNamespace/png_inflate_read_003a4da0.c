// Function : png_inflate_read
// Namespace: juce:pnglibNamespace
// Entry    : 003a4da0
// Prototype: undefined png_inflate_read(pnglibNamespace * param_1, ulong * param_2, uint * param_3, undefined8 param_4, ulong * param_5, int param_6)
// Body     : 003a4da0 - 003a5017


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_inflate_read(juce::pnglibNamespace::png_struct_def*, unsigned char*,
   unsigned int, unsigned int*, unsigned char*, unsigned long*, int) */

void __cdecl
juce::pnglibNamespace::png_inflate_read
          (pnglibNamespace *param_1,ulong *param_2,uint *param_3,undefined8 param_4,ulong *param_5,
          int param_6)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x138)) {
    *(undefined8 *)(param_1 + 0x78) = param_4;
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar5 = 0x400;
    do {
      uVar11 = *(uint *)(param_1 + 0x68);
      if (uVar11 == 0) {
        uVar1 = *param_3;
        uVar11 = uVar5;
        if (uVar1 < uVar5) {
          uVar11 = uVar1;
        }
        *param_3 = uVar1 - uVar11;
        if (uVar11 != 0) {
          if (*(code **)(param_1 + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            png_err(param_1);
          }
          uVar8 = (ulong)uVar11;
          (**(code **)(param_1 + 0x20))(param_1,param_2,uVar8);
          bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
          if (((byte)param_1[0x13b] & 0x20) == 0) {
            bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
          }
          if (bVar3) {
            uVar6 = (ulong)*(uint *)(param_1 + 0x16c);
            puVar9 = param_2;
            do {
              uVar10 = uVar8 & 0xffffffff;
              if ((int)uVar8 == 0) {
                uVar10 = 0xffffffff;
              }
              uVar6 = zlibNamespace::crc32_z((uint)uVar6,puVar9,uVar10);
              puVar9 = (ulong *)((long)puVar9 + uVar10);
              uVar8 = uVar8 - uVar10;
            } while (uVar8 != 0);
            *(int *)(param_1 + 0x16c) = (int)uVar6;
          }
        }
        *(ulong **)(param_1 + 0x60) = param_2;
        *(uint *)(param_1 + 0x68) = uVar11;
        uVar1 = *(uint *)(param_1 + 0x80);
        uVar5 = uVar11;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x80);
      }
      uVar8 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar6 = *param_5;
        uVar8 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar8 = uVar6;
        }
        *param_5 = uVar6 - uVar8;
        *(int *)(param_1 + 0x80) = (int)uVar8;
      }
      iVar4 = 0;
      if (*param_3 == 0) {
        iVar4 = (uint)(param_6 != 0) * 2 + 2;
      }
      if ((param_1[400] != (pnglibNamespace)0x0) && (uVar11 != 0)) {
        if (**(char **)(param_1 + 0x60) < '\0') {
          *(char **)(param_1 + 0x90) = "invalid window size (libpng)";
          *param_5 = *param_5 + (uVar8 & 0xffffffff);
          *(undefined4 *)(param_1 + 0x80) = 0;
          return;
        }
        param_1[400] = (pnglibNamespace)0x0;
      }
      iVar4 = zlibNamespace::inflate((long *)(param_1 + 0x60),iVar4);
      if (iVar4 != 0) {
        lVar2 = *(long *)(param_1 + 0x90);
        *param_5 = *param_5 + (ulong)*(uint *)(param_1 + 0x80);
        *(undefined4 *)(param_1 + 0x80) = 0;
        if (lVar2 != 0) {
          return;
        }
        uVar5 = iVar4 + 7;
        if (uVar5 < 10) goto LAB_003a4ff1;
        pcVar7 = "unexpected zlib return code";
        goto LAB_003a4ffe;
      }
    } while ((*param_5 != 0) || (*(int *)(param_1 + 0x80) != 0));
    lVar2 = *(long *)(param_1 + 0x90);
    *param_5 = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (lVar2 == 0) {
      uVar5 = 7;
LAB_003a4ff1:
      pcVar7 = (&PTR_s_unexpected_zlib_return_00712720)[(int)uVar5];
LAB_003a4ffe:
      *(char **)(param_1 + 0x90) = pcVar7;
    }
  }
  else {
    *(char **)(param_1 + 0x90) = "zstream unclaimed";
  }
  return;
}


