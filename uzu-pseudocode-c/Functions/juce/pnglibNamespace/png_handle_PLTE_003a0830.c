// Function : png_handle_PLTE
// Namespace: juce:pnglibNamespace
// Entry    : 003a0830
// Prototype: undefined png_handle_PLTE(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a0830 - 003a0ba7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_PLTE(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_PLTE(pnglibNamespace *param_1,long param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 local_343;
  undefined1 local_342;
  undefined1 local_341;
  long local_340;
  undefined1 local_338 [776];
  
  uVar7 = *(uint *)(param_1 + 0x4c);
  if (((uVar7 & 1) == 0) || ((uVar7 & 2) != 0)) goto LAB_003a0ba0;
  if ((uVar7 & 4) != 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar6 = "out of place";
LAB_003a08a8:
      png_chunk_warning((long)param_1,(long)pcVar6);
      return;
    }
    goto LAB_003a0ba0;
  }
  *(uint *)(param_1 + 0x4c) = uVar7 | 2;
  if (((byte)param_1[0x187] & 2) == 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar6 = "ignored in grayscale PNG";
      goto LAB_003a08a8;
    }
    goto LAB_003a0ba0;
  }
  if ((0x300 < param_3) || (param_3 % 3 != 0)) {
    png_crc_finish(param_1,param_3);
    if ((param_1[0x187] != (pnglibNamespace)0x3) && (((byte)param_1[0x52] & 0x10) != 0)) {
      pcVar6 = "invalid";
      goto LAB_003a08a8;
    }
    goto LAB_003a0ba0;
  }
  uVar7 = (param_3 & 0xffff) / 3;
  uVar4 = 0x100;
  if (param_1[0x187] == (pnglibNamespace)0x3) {
    uVar4 = 1 << ((byte)param_1[0x188] & 0x1f);
  }
  if ((int)uVar4 < (int)uVar7) {
    uVar7 = uVar4;
  }
  local_340 = param_2;
  if (0 < (int)uVar7) {
    puVar5 = local_338;
    uVar4 = uVar7;
    do {
      if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a0ba0;
      (**(code **)(param_1 + 0x20))(param_1,&local_343,3);
      bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
      if (((byte)param_1[0x13b] & 0x20) == 0) {
        bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
      }
      if (bVar1) {
        uVar3 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),(ulong *)&local_343,3);
        *(int *)(param_1 + 0x16c) = (int)uVar3;
      }
      *puVar5 = local_343;
      puVar5[1] = local_342;
      puVar5[2] = local_341;
      puVar5 = puVar5 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  png_crc_finish(param_1,param_3 + uVar7 * -3);
  lVar2 = local_340;
  if ((param_1 != (pnglibNamespace *)0x0) && (local_340 != 0)) {
    if (*(char *)(local_340 + 0x25) == '\x03') {
      if (((int)uVar7 < 0) || (1 << (*(byte *)(local_340 + 0x24) & 0x1f) < (int)uVar7))
      goto LAB_003a0ba0;
    }
    else if (0x100 < uVar7) {
      png_warning((long)param_1,"Invalid palette length");
      goto LAB_003a0b07;
    }
    if (uVar7 == 0) goto LAB_003a0ba0;
    uVar4 = *(uint *)(local_340 + 0x11c);
    if ((uVar4 & 0x1000) != 0) {
      if (*(void **)(local_340 + 0x18) != (void *)0x0) {
        free(*(void **)(local_340 + 0x18));
        uVar4 = *(uint *)(lVar2 + 0x11c);
      }
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) & 0xf7;
      *(undefined2 *)(lVar2 + 0x20) = 0;
    }
    *(uint *)(lVar2 + 0x11c) = uVar4 & 0xffffefff;
    __dest = calloc(1,0x300);
    if (__dest == (void *)0x0) goto LAB_003a0ba0;
    *(void **)(param_1 + 0x170) = __dest;
    memcpy(__dest,local_338,(ulong)uVar7 * 3);
    *(void **)(lVar2 + 0x18) = __dest;
    *(short *)(param_1 + 0x178) = (short)uVar7;
    *(short *)(lVar2 + 0x20) = (short)uVar7;
    *(uint *)(lVar2 + 0x11c) = uVar4 | 0x1000;
    *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 8;
  }
LAB_003a0b07:
  if (*(short *)(param_1 + 0x180) == 0) {
    if (lVar2 == 0) {
      return;
    }
    uVar7 = *(uint *)(lVar2 + 8);
    if ((uVar7 & 0x10) != 0) {
      *(undefined2 *)(param_1 + 0x180) = 0;
      goto LAB_003a0b36;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x180) = 0;
    if (lVar2 != 0) {
LAB_003a0b36:
      *(undefined2 *)(lVar2 + 0x22) = 0;
    }
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a0ba0;
    png_chunk_warning((long)param_1,0x5e4490);
    if (lVar2 == 0) {
      return;
    }
    uVar7 = *(uint *)(lVar2 + 8);
  }
  if ((uVar7 & 0x40) != 0) {
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a0ba0;
    png_chunk_warning((long)param_1,0x5e44a3);
    uVar7 = *(uint *)(lVar2 + 8);
  }
  if ((uVar7 & 0x20) != 0) {
    if (((byte)param_1[0x52] & 0x10) == 0) {
LAB_003a0ba0:
                    /* WARNING: Subroutine does not return */
      png_err(param_1);
    }
    png_chunk_warning((long)param_1,0x5e44b6);
  }
  return;
}


