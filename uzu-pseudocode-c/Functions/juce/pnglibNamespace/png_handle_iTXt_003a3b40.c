// Function : png_handle_iTXt
// Namespace: juce:pnglibNamespace
// Entry    : 003a3b40
// Prototype: undefined png_handle_iTXt(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a3b40 - 003a3eee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_iTXt(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_iTXt(pnglibNamespace *param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  pnglibNamespace *ppVar14;
  ulong local_78;
  pnglibNamespace *local_70;
  int local_68 [2];
  ulong *local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  uVar11 = (ulong)param_3;
  iVar3 = *(int *)(param_1 + 0x324);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x324) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar10 = "no space in chunk cache";
        goto LAB_003a3d4d;
      }
      goto LAB_003a3ee7;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x4c);
  if ((uVar6 & 1) == 0) goto LAB_003a3ee7;
  if ((uVar6 & 4) != 0) {
    *(uint *)(param_1 + 0x4c) = uVar6 | 8;
  }
  uVar12 = (ulong)(param_3 + 1);
  ppVar14 = param_1 + 0x358;
  __ptr = *(ulong **)(param_1 + 0x358);
  if (__ptr == (ulong *)0x0) {
LAB_003a3bf2:
    __ptr = calloc(1,uVar12);
    if (__ptr == (ulong *)0x0) {
      png_chunk_warning((long)param_1,0x5e4fbd);
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar10 = "out of memory";
LAB_003a3d4d:
        png_chunk_warning((long)param_1,(long)pcVar10);
        return;
      }
      goto LAB_003a3ee7;
    }
    *(ulong **)(param_1 + 0x358) = __ptr;
    *(ulong *)(param_1 + 0x360) = uVar12;
  }
  else if (*(ulong *)(param_1 + 0x360) < uVar12) {
    *(undefined8 *)ppVar14 = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    free(__ptr);
    goto LAB_003a3bf2;
  }
  if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a3ee7;
  (**(code **)(param_1 + 0x20))(param_1);
  bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
  if (((byte)param_1[0x13b] & 0x20) == 0) {
    bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
  }
  if ((param_3 != 0) && (bVar2)) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x16c);
    puVar9 = __ptr;
    uVar12 = uVar11;
    local_70 = ppVar14;
    do {
      uVar13 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
        uVar13 = 0xffffffff;
      }
      uVar4 = zlibNamespace::crc32_z((uint)uVar4,puVar9,uVar13);
      puVar9 = (ulong *)((long)puVar9 + uVar13);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    *(int *)(param_1 + 0x16c) = (int)uVar4;
    ppVar14 = local_70;
  }
  uVar5 = png_crc_finish(param_1,0);
  if ((int)uVar5 != 0) {
    return;
  }
  pcVar10 = "bad keyword";
  if (param_3 != 0) {
    uVar12 = 0;
    do {
      if (*(char *)((long)__ptr + uVar12) == '\0') goto LAB_003a3d02;
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
    uVar12 = uVar11;
LAB_003a3d02:
    iVar3 = (int)uVar12;
    if (0xffffffb0 < iVar3 - 0x50U) {
      if (param_3 < iVar3 + 5U) {
LAB_003a3d16:
        pcVar10 = "truncated";
      }
      else {
        cVar1 = *(char *)((uVar12 & 0xffffffff) + 1 + (long)__ptr);
        if ((cVar1 == '\0') ||
           ((pcVar10 = "bad compression info", cVar1 == '\x01' &&
            (*(char *)((uVar12 & 0xffffffff) + 2 + (long)__ptr) == '\0')))) {
          uVar6 = iVar3 + 3;
          uVar12 = (ulong)uVar6;
          if (uVar6 < param_3) {
            uVar12 = (ulong)uVar6;
            do {
              if (*(char *)((long)__ptr + uVar12) == '\0') goto LAB_003a3da9;
              uVar12 = uVar12 + 1;
            } while (param_3 != (uint)uVar12);
            uVar12 = uVar11;
          }
LAB_003a3da9:
          uVar7 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar7;
          if (uVar7 < param_3) {
            uVar12 = (ulong)uVar7;
            do {
              if (*(char *)((long)__ptr + uVar12) == '\0') goto LAB_003a3dc7;
              uVar12 = uVar12 + 1;
            } while (param_3 != (uint)uVar12);
            uVar12 = uVar11;
          }
LAB_003a3dc7:
          uVar8 = (int)uVar12 + 1;
          if ((cVar1 != '\0') || (param_3 < uVar8)) {
            if (cVar1 == '\0' || param_3 <= uVar8) goto LAB_003a3d16;
            local_78 = 0xffffffffffffffff;
            iVar3 = png_decompress_chunk(param_1,param_3,uVar8,&local_78);
            if (iVar3 == 1) {
              __ptr = *(ulong **)ppVar14;
            }
            else {
              pcVar10 = *(char **)(param_1 + 0x90);
              if (pcVar10 != (char *)0x0) goto LAB_003a3e4f;
            }
          }
          else {
            local_78 = (ulong)(param_3 - uVar8);
          }
          local_68[0] = 2 - (uint)(cVar1 == '\0');
          *(undefined1 *)((long)__ptr + local_78 + uVar8) = 0;
          local_40 = (ulong)uVar6 + (long)__ptr;
          local_38 = (ulong)uVar7 + (long)__ptr;
          local_58 = (long)__ptr + (ulong)uVar8;
          local_50 = 0;
          local_48 = local_78;
          local_60 = __ptr;
          uVar5 = png_set_text_2(param_1,param_2,local_68);
          if ((int)uVar5 == 0) {
            return;
          }
          pcVar10 = "insufficient memory";
        }
      }
    }
  }
LAB_003a3e4f:
  if (((byte)param_1[0x52] & 0x10) != 0) {
    png_chunk_warning((long)param_1,(long)pcVar10);
    return;
  }
LAB_003a3ee7:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


