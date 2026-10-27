// Function : png_handle_iCCP
// Namespace: juce:pnglibNamespace
// Entry    : 003a2570
// Prototype: undefined png_handle_iCCP(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a2570 - 003a2c21


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_iCCP(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_iCCP(pnglibNamespace *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *__dest;
  uint uVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  pnglibNamespace *ppVar21;
  uint local_54c;
  ulong local_548;
  long local_540;
  pnglibNamespace *local_538;
  ulong local_530;
  ulong local_528 [16];
  uint local_4a8;
  undefined8 local_498;
  ulong local_438 [129];
  
  local_54c = param_3;
  if ((*(uint *)(param_1 + 0x4c) & 1) == 0) goto LAB_003a2be1;
  if ((*(uint *)(param_1 + 0x4c) & 6) != 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar20 = "out of place";
LAB_003a25dc:
      png_chunk_warning((long)param_1,(long)pcVar20);
      return;
    }
    goto LAB_003a2be1;
  }
  if (param_3 < 0xe) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar20 = "too short";
      goto LAB_003a25dc;
    }
    goto LAB_003a2be1;
  }
  if ((*(ushort *)(param_1 + 0x3e2) & 0x8000) != 0) {
    png_crc_finish(param_1,param_3);
    return;
  }
  ppVar21 = param_1 + 0x398;
  if ((*(ushort *)(param_1 + 0x3e2) & 4) != 0) {
    pcVar20 = "too many profiles";
    goto LAB_003a2730;
  }
  uVar18 = 0x51;
  if (param_3 < 0x51) {
    uVar18 = (ulong)param_3;
  }
  if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a2be1;
  puVar16 = &local_498;
  (**(code **)(param_1 + 0x20))(param_1,puVar16,uVar18);
  bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
  if (((byte)param_1[0x13b] & 0x20) == 0) {
    bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
  }
  if (bVar2) {
    uVar13 = (ulong)*(uint *)(param_1 + 0x16c);
    local_540 = param_2;
    local_538 = ppVar21;
    local_530 = uVar18;
    do {
      uVar19 = uVar18 & 0xffffffff;
      if ((int)uVar18 == 0) {
        uVar19 = 0xffffffff;
      }
      uVar13 = zlibNamespace::crc32_z((uint)uVar13,puVar16,uVar19);
      puVar16 = (ulong *)((long)puVar16 + uVar19);
      uVar18 = uVar18 - uVar19;
    } while (uVar18 != 0);
    *(int *)(param_1 + 0x16c) = (int)uVar13;
    uVar18 = local_530;
    ppVar21 = local_538;
    param_2 = local_540;
  }
  uVar17 = (uint)uVar18;
  local_54c = param_3 - uVar17;
  if (local_54c < 0xb) {
    png_crc_finish(param_1,local_54c);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a2be1;
    pcVar20 = "too short";
    goto LAB_003a28b2;
  }
  uVar13 = 0;
  while (*(char *)((long)local_438 + (uVar13 - 0x60)) != '\0') {
    uVar19 = uVar13 + 1;
    if ((0x4e < uVar13) || (uVar13 = uVar19, uVar18 <= uVar19)) goto LAB_003a2839;
  }
  uVar19 = uVar13;
LAB_003a2839:
  if ((int)uVar19 - 1U < 0x4f) {
    uVar18 = (uVar19 & 0xffffffff) + 1;
    pcVar20 = "bad compression method";
    if (uVar17 <= (uint)uVar18) goto LAB_003a2730;
    if (*(char *)((long)local_438 + ((uVar19 & 0xffffffff) - 0x5f)) != '\0') goto LAB_003a2730;
    local_530 = uVar18;
    uVar18 = png_inflate_claim((long)param_1,0x69434350);
    if ((int)uVar18 != 0) {
      pcVar20 = *(char **)(param_1 + 0x90);
      goto LAB_003a2730;
    }
    uVar15 = (int)uVar19 + 2;
    local_528[0xe] = 0;
    local_528[0xf] = 0;
    local_528[0xc] = 0;
    local_528[0xd] = 0;
    local_528[10] = 0;
    local_528[0xb] = 0;
    local_528[8] = 0;
    local_528[9] = 0;
    local_528[6] = 0;
    local_528[7] = 0;
    local_528[4] = 0;
    local_528[5] = 0;
    local_528[2] = 0;
    local_528[3] = 0;
    local_528[0] = 0;
    local_528[1] = 0;
    local_4a8 = 0;
    local_548 = 0x84;
    *(ulong *)(param_1 + 0x60) = (long)local_438 + ((ulong)uVar15 - 0x60);
    *(uint *)(param_1 + 0x68) = uVar17 - uVar15;
    png_inflate_read(param_1,local_438,&local_54c,local_528,&local_548,0);
    if (local_548 != 0) {
      pcVar20 = *(char **)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_003a2730;
    }
    uVar18 = local_528[0] << 0x20;
    uVar18 = local_528[0] >> 0x18 & 0xff | (uVar18 & 0xff000000000000) >> 0x28 |
             (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8;
    uVar17 = (uint)uVar18;
    uVar14 = png_icc_check_length(param_1,(long)ppVar21,(char *)&local_498,uVar17);
    if ((int)uVar14 == 0) {
LAB_003a2a66:
      *(undefined4 *)(param_1 + 0x58) = 0;
      pcVar20 = (char *)0x0;
      goto LAB_003a2730;
    }
    uVar14 = png_icc_check_header
                       (param_1,(long)ppVar21,(char *)&local_498,uVar17,(uint *)local_528,
                        (uint)(byte)param_1[0x187]);
    uVar15 = local_4a8;
    if ((int)uVar14 == 0) goto LAB_003a2a66;
    uVar9 = local_4a8 >> 8;
    uVar10 = local_4a8 >> 0x10;
    uVar11 = local_4a8 >> 0x18;
    local_540 = param_2;
    local_538 = ppVar21;
    puVar16 = png_read_buffer((long)param_1,uVar18);
    if (puVar16 == (ulong *)0x0) {
      pcVar20 = "out of memory";
LAB_003a2a7d:
      *(undefined4 *)(param_1 + 0x58) = 0;
      ppVar21 = local_538;
      param_2 = local_540;
      goto LAB_003a2730;
    }
    memcpy(puVar16,local_528,0x84);
    uVar13 = (ulong)((uVar11 | (uVar10 & 0xff) << 8 | (uVar9 & 0xff) << 0x10 | uVar15 << 0x18) * 0xc
                    );
    local_548 = uVar13;
    png_inflate_read(param_1,local_438,&local_54c,(long)puVar16 + 0x84,&local_548,0);
    if (local_548 != 0) {
LAB_003a2a5d:
      pcVar20 = *(char **)(param_1 + 0x90);
      goto LAB_003a2a7d;
    }
    uVar14 = png_icc_check_tag_table
                       (param_1,(long)local_538,(char *)&local_498,uVar17,(long)puVar16);
    if ((int)uVar14 == 0) {
      pcVar20 = (char *)0x0;
      goto LAB_003a2a7d;
    }
    local_548 = (uVar18 - uVar13) - 0x84;
    png_inflate_read(param_1,local_438,&local_54c,(long)puVar16 + 0x84 + uVar13,&local_548,1);
    uVar15 = local_54c;
    if (local_54c == 0) {
      if (local_548 != 0) goto LAB_003a2a5d;
      uVar15 = 0;
    }
    else {
      if (((byte)param_1[0x52] & 0x10) == 0) {
        pcVar20 = "extra compressed data";
        goto LAB_003a2a7d;
      }
      if (local_548 != 0) goto LAB_003a2a5d;
      png_chunk_warning((long)param_1,0x5e44f4);
    }
    png_crc_finish(param_1,uVar15);
    png_icc_set_sRGB(param_1,(int *)local_538,puVar16,*(ulong *)(param_1 + 0xc0));
    lVar12 = local_540;
    if (local_540 == 0) {
LAB_003a2bd4:
      *(undefined4 *)(param_1 + 0x58) = 0;
      return;
    }
    png_free_data((long)param_1,local_540,0x10,0);
    __dest = malloc(local_530);
    param_2 = local_540;
    *(void **)(lVar12 + 0x80) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,&local_498,local_530);
      *(uint *)(local_540 + 0x90) = uVar17;
      *(ulong **)(local_540 + 0x88) = puVar16;
      *(byte *)(local_540 + 0x11c) = *(byte *)(local_540 + 0x11c) | 0x10;
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(byte *)(local_540 + 9) = *(byte *)(local_540 + 9) | 0x10;
      png_colorspace_sync((long)param_1,local_540);
      goto LAB_003a2bd4;
    }
    param_1[0x3e3] = (pnglibNamespace)((byte)param_1[0x3e3] | 0x80);
    png_colorspace_sync((long)param_1,local_540);
    *(undefined4 *)(param_1 + 0x58) = 0;
    param_1[0x3e3] = (pnglibNamespace)((byte)param_1[0x3e3] | 0x80);
    pcVar20 = "out of memory";
    ppVar21 = local_538;
LAB_003a274d:
    uVar14 = *(undefined8 *)(ppVar21 + 0x44);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(ppVar21 + 0x3c);
    *(undefined8 *)(param_2 + 0x78) = uVar14;
    uVar14 = *(undefined8 *)ppVar21;
    uVar3 = *(undefined8 *)(ppVar21 + 8);
    uVar4 = *(undefined8 *)(ppVar21 + 0x10);
    uVar5 = *(undefined8 *)(ppVar21 + 0x18);
    uVar6 = *(undefined8 *)(ppVar21 + 0x20);
    uVar7 = *(undefined8 *)(ppVar21 + 0x28);
    uVar8 = *(undefined8 *)(ppVar21 + 0x38);
    *(undefined8 *)(param_2 + 100) = *(undefined8 *)(ppVar21 + 0x30);
    *(undefined8 *)(param_2 + 0x6c) = uVar8;
    *(undefined8 *)(param_2 + 0x54) = uVar6;
    *(undefined8 *)(param_2 + 0x5c) = uVar7;
    *(undefined8 *)(param_2 + 0x44) = uVar4;
    *(undefined8 *)(param_2 + 0x4c) = uVar5;
    *(undefined8 *)(param_2 + 0x34) = uVar14;
    *(undefined8 *)(param_2 + 0x3c) = uVar3;
    uVar1 = *(ushort *)(param_2 + 0x7e);
    if ((uVar1 & 0x8000) == 0) {
      uVar15 = (uVar1 & 0x80) << 4;
      uVar17 = (*(uint *)(param_2 + 8) & 0xfffff7fb) + (uVar1 & 2) * 2;
      if ((uVar1 & 1) == 0) {
        uVar15 = uVar17 & 0xfffffffe | uVar15;
      }
      else {
        uVar15 = uVar17 | uVar15 | 1;
      }
      *(uint *)(param_2 + 8) = uVar15;
    }
    else {
      uVar15 = *(uint *)(param_2 + 8) & 0xffffe7fa;
      *(uint *)(param_2 + 8) = uVar15;
      uVar17 = *(uint *)(param_2 + 0x11c);
      if ((uVar17 & 0x10) != 0) {
        if (*(void **)(param_2 + 0x80) != (void *)0x0) {
          free(*(void **)(param_2 + 0x80));
        }
        if (*(void **)(param_2 + 0x88) != (void *)0x0) {
          free(*(void **)(param_2 + 0x88));
        }
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *(uint *)(param_2 + 8) = uVar15;
      }
      *(uint *)(param_2 + 0x11c) = uVar17 & 0xffffffef;
    }
  }
  else {
    pcVar20 = "bad keyword";
LAB_003a2730:
    png_crc_finish(param_1,local_54c);
    param_1[0x3e3] = (pnglibNamespace)((byte)param_1[0x3e3] | 0x80);
    if (param_2 != 0) goto LAB_003a274d;
  }
  if (pcVar20 == (char *)0x0) {
    return;
  }
  if (((byte)param_1[0x52] & 0x10) != 0) {
LAB_003a28b2:
    png_chunk_warning((long)param_1,(long)pcVar20);
    return;
  }
LAB_003a2be1:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


