// Function : png_compress_IDAT
// Namespace: juce:pnglibNamespace
// Entry    : 0039bdf0
// Prototype: undefined png_compress_IDAT(pnglibNamespace * param_1, undefined8 param_2, ulong param_3, uint param_4)
// Body     : 0039bdf0 - 0039c1a3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_compress_IDAT(juce::pnglibNamespace::png_struct_def*, unsigned char
   const*, unsigned long, int) */

void __cdecl
juce::pnglibNamespace::png_compress_IDAT
          (pnglibNamespace *param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  long *__ptr;
  int iVar11;
  
  if (*(int *)(param_1 + 0x58) != 0x49444154) {
    plVar2 = *(long **)(param_1 + 0xd0);
    if (plVar2 == (long *)0x0) {
      puVar4 = malloc((ulong)*(uint *)(param_1 + 0xd8) + 8);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0039c189;
      *(undefined8 **)(param_1 + 0xd0) = puVar4;
      *puVar4 = 0;
    }
    else {
      __ptr = (long *)*plVar2;
      if (__ptr != (long *)0x0) {
        *plVar2 = 0;
        do {
          plVar2 = (long *)*__ptr;
          free(__ptr);
          __ptr = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    uVar5 = png_image_size((long)param_1);
    uVar5 = png_deflate_claim((long)param_1,0x49444154,uVar5);
    if ((int)uVar5 != 0) goto LAB_0039c189;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0xd0) + 8;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xd8);
  }
  *(undefined8 *)(param_1 + 0x60) = param_2;
LAB_0039bed0:
  do {
    uVar5 = 0xffffffff;
    if (param_3 < 0xffffffff) {
      uVar5 = param_3;
    }
    *(int *)(param_1 + 0x68) = (int)uVar5;
    uVar10 = 0;
    if (param_3 - uVar5 == 0) {
      uVar10 = param_4;
    }
    uVar6 = zlibNamespace::deflate((long *)(param_1 + 0x60),uVar10);
    uVar10 = *(uint *)(param_1 + 0x80);
    param_3 = (ulong)*(uint *)(param_1 + 0x68) + (param_3 - uVar5);
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar11 = (int)uVar6;
    if (uVar10 == 0) {
      lVar3 = *(long *)(param_1 + 0xd0);
      puVar1 = (ulong *)(lVar3 + 8);
      uVar10 = *(uint *)(param_1 + 0xd8);
      if ((((((byte)param_1[0x4c] & 4) == 0) && (param_1[0x318] == (pnglibNamespace)0x0)) &&
          (uVar5 = png_image_size((long)param_1), uVar5 < 0x4001)) &&
         ((bVar9 = *(byte *)puVar1, (bVar9 & 0xf) == 8 && ((bVar9 & 0xf0) < 0x71)))) {
        bVar9 = bVar9 >> 4;
        uVar6 = 0x80L << bVar9;
        if (uVar5 <= uVar6) {
          uVar7 = (uint)bVar9;
          uVar8 = (uint)bVar9 << 0xc | 0x800;
          bVar9 = bVar9 << 4 | 8;
          do {
            uVar7 = uVar7 - 1;
            uVar8 = uVar8 - 0x1000;
            bVar9 = bVar9 - 0x10;
            if (uVar7 == 0) break;
            uVar6 = uVar6 >> 1 & 0x7fffffff;
          } while (uVar5 <= uVar6);
          *(byte *)(lVar3 + 8) = bVar9;
          uVar7 = *(byte *)(lVar3 + 9) & 0xffffffe0;
          bVar9 = (byte)uVar7;
          *(byte *)(lVar3 + 9) = ((char)((uVar8 | uVar7) / 0x1f) * -0x1f + bVar9 | bVar9) ^ 0x1f;
        }
      }
      if (uVar10 != 0) {
        png_write_complete_chunk(param_1,0x49444154,puVar1,(ulong)uVar10);
      }
      param_1[0x4c] = (pnglibNamespace)((byte)param_1[0x4c] | 4);
      *(ulong **)(param_1 + 0x78) = puVar1;
      *(uint *)(param_1 + 0x80) = uVar10;
      if ((param_4 != 0) && (iVar11 == 0)) goto LAB_0039bed0;
    }
    if (iVar11 != 0) {
      if ((param_4 != 4) || (iVar11 != 1)) {
        png_zstream_error((long)param_1,iVar11);
                    /* WARNING: Subroutine does not return */
        png_err(param_1);
      }
      lVar3 = *(long *)(param_1 + 0xd0);
      iVar11 = *(int *)(param_1 + 0xd8);
      if ((((((byte)param_1[0x4c] & 4) != 0) || (param_1[0x318] != (pnglibNamespace)0x0)) ||
          (uVar5 = png_image_size((long)param_1), 0x4000 < uVar5)) ||
         ((bVar9 = *(byte *)(lVar3 + 8), (bVar9 & 0xf) != 8 || (0x70 < (bVar9 & 0xf0)))))
      goto LAB_0039c13c;
      bVar9 = bVar9 >> 4;
      uVar6 = 0x80L << bVar9;
      if (uVar6 < uVar5) goto LAB_0039c13c;
      uVar7 = (uint)bVar9;
      uVar8 = (uint)bVar9 << 0xc | 0x800;
      bVar9 = bVar9 << 4 | 8;
      goto LAB_0039c0f0;
    }
  } while (param_3 != 0);
  if (param_4 != 4) {
    return;
  }
LAB_0039c189:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
  while (uVar6 = uVar6 >> 1 & 0x7fffffff, uVar5 <= uVar6) {
LAB_0039c0f0:
    uVar7 = uVar7 - 1;
    uVar8 = uVar8 - 0x1000;
    bVar9 = bVar9 - 0x10;
    if (uVar7 == 0) break;
  }
  *(byte *)(lVar3 + 8) = bVar9;
  uVar7 = *(byte *)(lVar3 + 9) & 0xffffffe0;
  bVar9 = (byte)uVar7;
  *(byte *)(lVar3 + 9) = ((char)((uVar8 | uVar7) / 0x1f) * -0x1f + bVar9 | bVar9) ^ 0x1f;
LAB_0039c13c:
  if (iVar11 - uVar10 != 0) {
    png_write_complete_chunk(param_1,0x49444154,(ulong *)(lVar3 + 8),(ulong)(iVar11 - uVar10));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  param_1[0x4c] = (pnglibNamespace)((byte)param_1[0x4c] | 0xc);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


