// Function : png_handle_zTXt
// Namespace: juce:pnglibNamespace
// Entry    : 003a3830
// Prototype: undefined png_handle_zTXt(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a3830 - 003a3b37


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_zTXt(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_zTXt(pnglibNamespace *param_1,long param_2,uint param_3)

{
  pnglibNamespace *ppVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong *__ptr;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong __size;
  ulong uVar11;
  ulong local_88;
  ulong local_80;
  long local_78;
  pnglibNamespace *local_70;
  int local_68 [2];
  long local_60;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar2 = *(int *)(param_1 + 0x324);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x324) = iVar2 + -1;
    if (iVar2 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar10 = "no space in chunk cache";
        goto LAB_003a3a43;
      }
      goto LAB_003a3b30;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x4c);
  if ((uVar3 & 1) == 0) goto LAB_003a3b30;
  __size = (ulong)param_3;
  if ((uVar3 & 4) != 0) {
    *(uint *)(param_1 + 0x4c) = uVar3 | 8;
  }
  ppVar1 = param_1 + 0x358;
  __ptr = *(ulong **)(param_1 + 0x358);
  if (__ptr == (ulong *)0x0) {
    if (param_3 != 0) goto LAB_003a38ec;
    param_3 = 0;
LAB_003a3a27:
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar10 = "out of memory";
LAB_003a3a43:
      png_chunk_warning((long)param_1,(long)pcVar10);
      return;
    }
  }
  else {
    if (*(ulong *)(param_1 + 0x360) < __size) {
      *(long *)ppVar1 = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
      free(__ptr);
LAB_003a38ec:
      __ptr = calloc(1,__size);
      if (__ptr == (ulong *)0x0) goto LAB_003a3a27;
      *(ulong **)(param_1 + 0x358) = __ptr;
      *(ulong *)(param_1 + 0x360) = __size;
    }
    local_70 = ppVar1;
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_1,__ptr,__size);
      bVar5 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
      if (((byte)param_1[0x13b] & 0x20) == 0) {
        bVar5 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
      }
      if ((param_3 != 0) && (bVar5)) {
        uVar7 = (ulong)*(uint *)(param_1 + 0x16c);
        puVar9 = __ptr;
        local_80 = __size;
        local_78 = param_2;
        do {
          uVar11 = __size & 0xffffffff;
          if ((int)__size == 0) {
            uVar11 = 0xffffffff;
          }
          uVar7 = zlibNamespace::crc32_z((uint)uVar7,puVar9,uVar11);
          puVar9 = (ulong *)((long)puVar9 + uVar11);
          __size = __size - uVar11;
        } while (__size != 0);
        *(int *)(param_1 + 0x16c) = (int)uVar7;
        __size = local_80;
        param_2 = local_78;
      }
      uVar8 = png_crc_finish(param_1,0);
      if ((int)uVar8 == 0) {
        pcVar10 = "bad keyword";
        if (param_3 != 0) {
          uVar7 = 0;
          do {
            if (*(char *)((long)__ptr + uVar7) == '\0') goto LAB_003a3a04;
            uVar7 = uVar7 + 1;
          } while (__size != uVar7);
          uVar7 = __size & 0xffffffff;
LAB_003a3a04:
          iVar2 = (int)uVar7;
          if (0xffffffb0 < iVar2 - 0x50U) {
            if (param_3 < iVar2 + 3U) {
              pcVar10 = "truncated";
            }
            else if (*(char *)((uVar7 & 0xffffffff) + 1 + (long)__ptr) == '\0') {
              local_88 = 0xffffffffffffffff;
              iVar6 = png_decompress_chunk(param_1,param_3,iVar2 + 2U,&local_88);
              if (iVar6 == 1) {
                lVar4 = *(long *)local_70;
                if (lVar4 == 0) {
                  pcVar10 = "Read failure in png_handle_zTXt";
                }
                else {
                  *(undefined1 *)(lVar4 + (iVar2 + 2U) + local_88) = 0;
                  local_68[0] = 0;
                  local_58 = lVar4 + (uVar7 & 0xffffffff) + 2;
                  local_50 = local_88;
                  local_48 = 0;
                  uStack_40 = 0;
                  local_38 = 0;
                  local_60 = lVar4;
                  uVar8 = png_set_text_2(param_1,param_2,local_68);
                  pcVar10 = (char *)0x0;
                  if ((int)uVar8 != 0) {
                    pcVar10 = "insufficient memory";
                  }
                }
              }
              else {
                pcVar10 = *(char **)(param_1 + 0x90);
              }
              if (pcVar10 == (char *)0x0) {
                return;
              }
            }
            else {
              pcVar10 = "unknown compression type";
            }
          }
        }
        if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a3b30;
        png_chunk_warning((long)param_1,(long)pcVar10);
      }
      return;
    }
  }
LAB_003a3b30:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


