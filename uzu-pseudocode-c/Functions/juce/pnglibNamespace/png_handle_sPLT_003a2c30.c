// Function : png_handle_sPLT
// Namespace: juce:pnglibNamespace
// Entry    : 003a2c30
// Prototype: undefined png_handle_sPLT(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a2c30 - 003a2f9c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_sPLT(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_sPLT(pnglibNamespace *param_1,long param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  ulong *__ptr;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *local_50;
  char local_48;
  void *local_40;
  undefined4 local_38;
  
  iVar4 = *(int *)(param_1 + 0x324);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
LAB_003a2c73:
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x324) = iVar4 + -1;
    if (iVar4 + -1 == 1) {
      png_warning((long)param_1,"No space in chunk cache for sPLT");
      goto LAB_003a2c73;
    }
  }
  if ((*(uint *)(param_1 + 0x4c) & 1) == 0) goto LAB_003a2f95;
  if ((*(uint *)(param_1 + 0x4c) & 4) != 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a2f95;
    pcVar13 = "out of place";
    goto LAB_003a2e50;
  }
  uVar9 = (ulong)(param_3 + 1);
  __ptr = *(ulong **)(param_1 + 0x358);
  if (__ptr == (ulong *)0x0) {
LAB_003a2cce:
    __ptr = calloc(1,uVar9);
    if (__ptr == (ulong *)0x0) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar13 = "out of memory";
LAB_003a2e50:
        png_chunk_warning((long)param_1,(long)pcVar13);
        return;
      }
      goto LAB_003a2f95;
    }
    *(ulong **)(param_1 + 0x358) = __ptr;
    *(ulong *)(param_1 + 0x360) = uVar9;
  }
  else if (*(ulong *)(param_1 + 0x360) < uVar9) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    free(__ptr);
    goto LAB_003a2cce;
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    uVar9 = (ulong)param_3;
    (**(code **)(param_1 + 0x20))(param_1,__ptr,uVar9);
    bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
    if (((byte)param_1[0x13b] & 0x20) == 0) {
      bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
    }
    if ((param_3 != 0) && (bVar3)) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x16c);
      puVar10 = __ptr;
      uVar17 = uVar9;
      do {
        uVar16 = uVar17 & 0xffffffff;
        if ((int)uVar17 == 0) {
          uVar16 = 0xffffffff;
        }
        uVar5 = zlibNamespace::crc32_z((uint)uVar5,puVar10,uVar16);
        puVar10 = (ulong *)((long)puVar10 + uVar16);
        uVar17 = uVar17 - uVar16;
      } while (uVar17 != 0);
      *(int *)(param_1 + 0x16c) = (int)uVar5;
    }
    uVar6 = png_crc_finish(param_1,0);
    if ((int)uVar6 != 0) {
      return;
    }
    *(char *)((long)__ptr + uVar9) = '\0';
    iVar4 = 1;
    puVar10 = __ptr;
    do {
      puVar11 = puVar10;
      iVar4 = iVar4 + 1;
      puVar10 = (ulong *)((long)puVar11 + 1);
    } while ((char)*puVar11 != '\0');
    if ((param_3 < 2) || ((ulong *)((ulong)(param_3 - 2) + (long)__ptr) < puVar10)) {
      pcVar13 = "malformed sPLT chunk";
    }
    else {
      cVar1 = *(char *)puVar10;
      uVar15 = (uint)(cVar1 != '\b') * 4 + 6;
      uVar14 = param_3 - iVar4;
      uVar9 = (ulong)uVar14 / (ulong)uVar15;
      local_48 = cVar1;
      if (uVar14 % uVar15 == 0) {
        local_38 = (undefined4)uVar9;
        local_40 = png_malloc_warn((long)param_1,uVar9 * 10);
        if (local_40 != (void *)0x0) {
          if (uVar15 <= uVar14) {
            if (cVar1 == '\b') {
              pbVar12 = (byte *)((long)puVar11 + 2);
              puVar7 = (ushort *)((long)local_40 + 8);
              uVar17 = 0;
              do {
                puVar7[-4] = (ushort)*pbVar12;
                puVar7[-3] = (ushort)pbVar12[1];
                puVar7[-2] = (ushort)pbVar12[2];
                puVar7[-1] = (ushort)pbVar12[3];
                *puVar7 = *(ushort *)(pbVar12 + 4) << 8 | *(ushort *)(pbVar12 + 4) >> 8;
                uVar17 = uVar17 + 1;
                puVar7 = puVar7 + 5;
                pbVar12 = pbVar12 + 6;
              } while (uVar17 != uVar9);
            }
            else {
              lVar8 = 0;
              uVar17 = 0;
              do {
                uVar2 = *(ushort *)((long)puVar11 + lVar8 + 2);
                *(ushort *)((long)local_40 + lVar8) = uVar2 << 8 | uVar2 >> 8;
                uVar2 = *(ushort *)((long)puVar11 + lVar8 + 4);
                *(ushort *)((long)local_40 + lVar8 + 2) = uVar2 << 8 | uVar2 >> 8;
                uVar2 = *(ushort *)((long)puVar11 + lVar8 + 6);
                *(ushort *)((long)local_40 + lVar8 + 4) = uVar2 << 8 | uVar2 >> 8;
                uVar2 = *(ushort *)((long)puVar11 + lVar8 + 8);
                *(ushort *)((long)local_40 + lVar8 + 6) = uVar2 << 8 | uVar2 >> 8;
                uVar2 = *(ushort *)((long)puVar11 + lVar8 + 10);
                *(ushort *)((long)local_40 + lVar8 + 8) = uVar2 << 8 | uVar2 >> 8;
                uVar17 = uVar17 + 1;
                lVar8 = lVar8 + 10;
              } while (uVar17 != uVar9);
            }
          }
          local_50 = __ptr;
          png_set_sPLT(param_1,param_2,&local_50);
          if (local_40 == (void *)0x0) {
            return;
          }
          free(local_40);
          return;
        }
        pcVar13 = "sPLT chunk requires too much memory";
        local_40 = (void *)0x0;
      }
      else {
        pcVar13 = "sPLT chunk has bad length";
      }
    }
    png_warning((long)param_1,pcVar13);
    return;
  }
LAB_003a2f95:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


