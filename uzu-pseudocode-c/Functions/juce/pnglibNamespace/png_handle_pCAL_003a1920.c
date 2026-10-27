// Function : png_handle_pCAL
// Namespace: juce:pnglibNamespace
// Entry    : 003a1920
// Prototype: undefined png_handle_pCAL(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a1920 - 003a1d14


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_pCAL(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_pCAL(pnglibNamespace *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong *__ptr;
  ulong uVar6;
  undefined8 uVar7;
  void *__ptr_00;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong *puVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  
  if ((*(uint *)(param_1 + 0x4c) & 1) == 0) goto LAB_003a1d0d;
  if ((*(uint *)(param_1 + 0x4c) & 4) != 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a1d0d;
    pcVar14 = "out of place";
    goto LAB_003a1bfe;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 4) != 0)) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar14 = "duplicate";
      goto LAB_003a1bfe;
    }
    goto LAB_003a1d0d;
  }
  uVar8 = (ulong)(param_3 + 1);
  __ptr = *(ulong **)(param_1 + 0x358);
  if (__ptr == (ulong *)0x0) {
LAB_003a1986:
    __ptr = calloc(1,uVar8);
    if (__ptr == (ulong *)0x0) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar14 = "out of memory";
        goto LAB_003a1bfe;
      }
      goto LAB_003a1d0d;
    }
    *(ulong **)(param_1 + 0x358) = __ptr;
    *(ulong *)(param_1 + 0x360) = uVar8;
  }
  else if (*(ulong *)(param_1 + 0x360) < uVar8) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    free(__ptr);
    goto LAB_003a1986;
  }
  if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a1d0d;
  uVar8 = (ulong)param_3;
  (**(code **)(param_1 + 0x20))(param_1,__ptr,uVar8);
  bVar4 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
  if (((byte)param_1[0x13b] & 0x20) == 0) {
    bVar4 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
  }
  if ((param_3 != 0) && (bVar4)) {
    uVar6 = (ulong)*(uint *)(param_1 + 0x16c);
    puVar13 = __ptr;
    uVar16 = uVar8;
    do {
      uVar9 = uVar16 & 0xffffffff;
      if ((int)uVar16 == 0) {
        uVar9 = 0xffffffff;
      }
      uVar6 = zlibNamespace::crc32_z((uint)uVar6,puVar13,uVar9);
      puVar13 = (ulong *)((long)puVar13 + uVar9);
      uVar16 = uVar16 - uVar9;
    } while (uVar16 != 0);
    *(int *)(param_1 + 0x16c) = (int)uVar6;
  }
  uVar7 = png_crc_finish(param_1,0);
  if ((int)uVar7 != 0) {
    return;
  }
  *(undefined1 *)((long)__ptr + uVar8) = 0;
  lVar17 = uVar8 + 1;
  pbVar11 = (byte *)((long)__ptr + 9);
  do {
    pbVar10 = pbVar11;
    lVar17 = lVar17 + -1;
    pbVar11 = pbVar10 + 1;
  } while (pbVar10[-9] != 0);
  if (lVar17 < 0xd) {
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a1d0d;
    pcVar14 = "invalid";
    goto LAB_003a1bfe;
  }
  bVar2 = pbVar10[-8];
  if ((bVar2 & 0x80) == 0) {
    uVar15 = (uint)pbVar10[-5] |
             (uint)pbVar10[-6] << 8 | (uint)pbVar10[-7] << 0x10 | (uint)bVar2 << 0x18;
    uVar5 = (uint)pbVar10[-4];
    uVar12 = uVar5;
    if ((pbVar10[-4] & 0x80) != 0) goto LAB_003a1b4c;
LAB_003a1ba5:
    uVar12 = (uint)pbVar10[-1] | (uint)pbVar10[-2] << 8 | (uint)pbVar10[-3] << 0x10 | uVar12 << 0x18
    ;
  }
  else {
    uVar15 = -(-((uint)pbVar10[-5] |
                (uint)pbVar10[-6] << 8 | (uint)pbVar10[-7] << 0x10 | (uint)bVar2 << 0x18) &
              0x7fffffff);
    bVar2 = pbVar10[-4];
    uVar12 = (uint)bVar2;
    uVar5 = (uint)bVar2;
    if ((bVar2 & 0x80) == 0) goto LAB_003a1ba5;
LAB_003a1b4c:
    uVar12 = -(-((uint)pbVar10[-1] |
                (uint)pbVar10[-2] << 8 | (uint)pbVar10[-3] << 0x10 | uVar5 << 0x18) & 0x7fffffff);
  }
  bVar2 = *pbVar10;
  bVar3 = *pbVar11;
  if (((((bVar2 != 0) || (bVar3 == 2)) && ((bVar2 != 1 || (bVar3 == 3)))) &&
      ((bVar2 != 2 || (bVar3 == 3)))) && ((bVar2 != 3 || (bVar3 == 4)))) {
    if (3 < bVar2) {
      png_chunk_benign_error(param_1,0x5e4603);
    }
    do {
      pbVar1 = pbVar11 + 1;
      pbVar11 = pbVar11 + 1;
    } while (*pbVar1 != 0);
    __ptr_00 = png_malloc_warn((long)param_1,(ulong)bVar3 * 8);
    if (__ptr_00 == (void *)0x0) {
      pcVar14 = "out of memory";
LAB_003a1cf7:
      png_chunk_benign_error(param_1,(long)pcVar14);
      return;
    }
    if (bVar3 != 0) {
      uVar16 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        *(byte **)((long)__ptr_00 + uVar16 * 8) = pbVar11;
        while( true ) {
          if ((byte *)((long)__ptr + uVar8) < pbVar11) {
            free(__ptr_00);
            pcVar14 = "invalid data";
            goto LAB_003a1cf7;
          }
          if (*pbVar11 == 0) break;
          pbVar11 = pbVar11 + 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != bVar3);
    }
    png_set_pCAL(param_1,param_2,(char *)__ptr,uVar15,uVar12,(uint)bVar2,(uint)bVar3,
                 (char *)(pbVar10 + 2),(long)__ptr_00);
    free(__ptr_00);
    return;
  }
  if (((byte)param_1[0x52] & 0x10) != 0) {
    pcVar14 = "invalid parameter count";
LAB_003a1bfe:
    png_chunk_warning((long)param_1,(long)pcVar14);
    return;
  }
LAB_003a1d0d:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


