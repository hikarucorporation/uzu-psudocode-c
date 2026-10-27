// Function : png_handle_tRNS
// Namespace: juce:pnglibNamespace
// Entry    : 003a3390
// Prototype: undefined png_handle_tRNS(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a3390 - 003a382f


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_tRNS(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_tRNS(pnglibNamespace *param_1,long param_2,uint param_3)

{
  pnglibNamespace pVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__dest;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  undefined8 local_138;
  
  puVar12 = &local_138;
  uVar9 = *(uint *)(param_1 + 0x4c);
  if ((uVar9 & 1) == 0) goto LAB_003a3828;
  if ((uVar9 & 4) != 0) {
LAB_003a349f:
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar11 = "out of place";
LAB_003a34bc:
      png_chunk_warning((long)param_1,(long)pcVar11);
      return;
    }
LAB_003a3828:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a3828;
    pcVar11 = "duplicate";
    goto LAB_003a34bc;
  }
  pVar1 = param_1[0x187];
  if (pVar1 == (pnglibNamespace)0x3) {
    if ((uVar9 & 2) == 0) goto LAB_003a349f;
    if ((0x100 < param_3) || ((uint)*(ushort *)(param_1 + 0x178) <= param_3 - 1)) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar11 = "invalid";
        goto LAB_003a34bc;
      }
      goto LAB_003a3828;
    }
    if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a3828;
    uVar6 = (ulong)param_3;
    (**(code **)(param_1 + 0x20))(param_1,&local_138,uVar6);
    bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
    if (((byte)param_1[0x13b] & 0x20) == 0) {
      bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
    }
    if (bVar3) {
      uVar7 = (ulong)*(uint *)(param_1 + 0x16c);
      do {
        uVar10 = uVar6 & 0xffffffff;
        if ((int)uVar6 == 0) {
          uVar10 = 0xffffffff;
        }
        uVar7 = zlibNamespace::crc32_z((uint)uVar7,puVar12,uVar10);
        puVar12 = (ulong *)((long)puVar12 + uVar10);
        uVar6 = uVar6 - uVar10;
      } while (uVar6 != 0);
      *(int *)(param_1 + 0x16c) = (int)uVar7;
    }
    *(short *)(param_1 + 0x180) = (short)param_3;
  }
  else if (pVar1 == (pnglibNamespace)0x2) {
    if (param_3 != 6) {
LAB_003a35a4:
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        png_chunk_warning((long)param_1,0x5e4488);
        return;
      }
      goto LAB_003a3828;
    }
    if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a3828;
    (**(code **)(param_1 + 0x20))(param_1,&local_138,6);
    bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
    if (((byte)param_1[0x13b] & 0x20) == 0) {
      bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
    }
    if (bVar3) {
      uVar6 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),&local_138,6);
      *(int *)(param_1 + 0x16c) = (int)uVar6;
    }
    *(undefined2 *)(param_1 + 0x180) = 1;
    *(ushort *)(param_1 + 0x212) = (ushort)local_138 << 8 | (ushort)local_138 >> 8;
    *(ushort *)(param_1 + 0x214) = local_138._2_2_ << 8 | local_138._2_2_ >> 8;
    *(ushort *)(param_1 + 0x216) = local_138._4_2_ << 8 | local_138._4_2_ >> 8;
  }
  else {
    if (pVar1 != (pnglibNamespace)0x0) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar11 = "invalid with alpha channel";
        goto LAB_003a34bc;
      }
      goto LAB_003a3828;
    }
    if (param_3 != 2) goto LAB_003a35a4;
    if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a3828;
    (**(code **)(param_1 + 0x20))(param_1,&local_138,2);
    bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
    if (((byte)param_1[0x13b] & 0x20) == 0) {
      bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
    }
    if (bVar3) {
      uVar6 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),&local_138,2);
      *(int *)(param_1 + 0x16c) = (int)uVar6;
    }
    *(undefined2 *)(param_1 + 0x180) = 1;
    *(ushort *)(param_1 + 0x218) = (ushort)local_138 << 8 | (ushort)local_138 >> 8;
  }
  uVar8 = png_crc_finish(param_1,0);
  if ((int)uVar8 != 0) {
    *(undefined2 *)(param_1 + 0x180) = 0;
    return;
  }
  if (param_1 == (pnglibNamespace *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0x180);
  uVar9 = *(uint *)(param_2 + 0x11c);
  if ((uVar9 & 0x2000) != 0) {
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xef;
    if (*(void **)(param_2 + 0xb8) != (void *)0x0) {
      free(*(void **)(param_2 + 0xb8));
      uVar9 = *(uint *)(param_2 + 0x11c);
    }
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0;
  }
  uVar9 = uVar9 & 0xffffdfff;
  *(uint *)(param_2 + 0x11c) = uVar9;
  if (uVar2 - 1 < 0x100) {
    __dest = malloc(0x100);
    if (__dest == (void *)0x0) goto LAB_003a3828;
    *(void **)(param_2 + 0xb8) = __dest;
    memcpy(__dest,&local_138,(ulong)(uint)uVar2);
  }
  else {
    __dest = *(void **)(param_2 + 0xb8);
  }
  *(void **)(param_1 + 0x208) = __dest;
  if (0xf < *(byte *)(param_2 + 0x24)) goto LAB_003a37d5;
  uVar5 = ~(-1 << (*(byte *)(param_2 + 0x24) & 0x1f));
  if (*(char *)(param_2 + 0x25) == '\x02') {
    if (((int)(uint)*(ushort *)(param_1 + 0x212) <= (int)uVar5) &&
       ((int)(uint)*(ushort *)(param_1 + 0x214) <= (int)uVar5)) {
      uVar4 = *(ushort *)(param_1 + 0x216);
      goto joined_r0x003a37bd;
    }
  }
  else {
    if (*(char *)(param_2 + 0x25) != '\0') goto LAB_003a37d5;
    uVar4 = *(ushort *)(param_1 + 0x218);
joined_r0x003a37bd:
    if ((int)(uint)uVar4 <= (int)uVar5) goto LAB_003a37d5;
  }
  png_warning((long)param_1,"tRNS chunk has out-of-range samples for bit_depth");
  uVar9 = *(uint *)(param_2 + 0x11c);
LAB_003a37d5:
  *(undefined2 *)(param_2 + 200) = *(undefined2 *)(param_1 + 0x218);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_1 + 0x210);
  uVar4 = 1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
  }
  *(ushort *)(param_2 + 0x22) = uVar4;
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x10;
  *(uint *)(param_2 + 0x11c) = uVar9 | 0x2000;
  return;
}


