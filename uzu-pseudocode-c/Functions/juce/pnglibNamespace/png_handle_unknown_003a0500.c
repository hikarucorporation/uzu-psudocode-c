// Function : png_handle_unknown
// Namespace: juce:pnglibNamespace
// Entry    : 003a0500
// Prototype: undefined png_handle_unknown(pnglibNamespace * param_1, long param_2, uint param_3, int param_4)
// Body     : 003a0500 - 003a082f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_unknown(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int, int) */

void __cdecl
juce::pnglibNamespace::png_handle_unknown
          (pnglibNamespace *param_1,long param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  void *__dest;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  
  if (*(long *)(param_1 + 0x2d8) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x2e0);
      if (param_4 != 3) goto LAB_003a05a2;
LAB_003a05bd:
      uVar5 = png_cache_unknown_chunk(param_1,param_3);
      if ((int)uVar5 == 0) goto LAB_003a0621;
    }
    else {
      if (param_4 == 3) goto LAB_003a05bd;
LAB_003a05a2:
      if ((param_4 == 2) && (((byte)param_1[0x13b] & 0x20) != 0)) goto LAB_003a05bd;
      png_crc_finish(param_1,param_3);
    }
LAB_003a05cb:
    if (param_4 == 3) {
LAB_003a05e3:
      iVar3 = *(int *)(param_1 + 0x324);
      if (iVar3 == 0) {
LAB_003a066a:
        bVar2 = false;
        if ((param_1 != (pnglibNamespace *)0x0) && (param_2 != 0)) {
          uVar7 = *(uint *)(param_2 + 0x128);
          if (((int)uVar7 < 0) ||
             ((pvVar6 = *(void **)(param_2 + 0x120), pvVar6 == (void *)0x0 && (uVar7 != 0))))
          goto LAB_003a0828;
          if (uVar7 == 0x7fffffff) {
LAB_003a06cd:
            if (((byte)param_1[0x4d] & 0x80) != 0) {
              pcVar10 = "too many unknown chunks";
LAB_003a06fa:
              png_chunk_warning((long)param_1,(long)pcVar10);
              goto LAB_003a054a;
            }
            if (((byte)param_1[0x52] & 0x40) == 0) goto LAB_003a0828;
            pcVar10 = "too many unknown chunks";
          }
          else {
            sVar9 = (ulong)uVar7 * 0x20;
            __dest = malloc(sVar9 + 0x20);
            if (__dest == (void *)0x0) goto LAB_003a06cd;
            if (uVar7 == 0) {
              sVar9 = 0;
            }
            else {
              memcpy(__dest,pvVar6,sVar9);
            }
            puVar1 = (undefined8 *)((long)__dest + sVar9 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)((long)__dest + sVar9) = 0;
            ((undefined8 *)((long)__dest + sVar9))[1] = 0;
            if (pvVar6 != (void *)0x0) {
              free(pvVar6);
              uVar7 = *(uint *)(param_2 + 0x128);
            }
            *(void **)(param_2 + 0x120) = __dest;
            *(byte *)(param_2 + 0x11d) = *(byte *)(param_2 + 0x11d) | 2;
            lVar8 = (long)(int)uVar7 * 0x20;
            *(pnglibNamespace *)((long)__dest + lVar8 + 4) = param_1[0x334];
            *(undefined4 *)((long)__dest + lVar8) = *(undefined4 *)(param_1 + 0x330);
            *(undefined1 *)((long)__dest + lVar8 + 4) = 0;
            uVar7 = (byte)param_1[0x348] & 0xb;
            if (((byte)param_1[0x348] & 0xb) == 0) {
              if ((((byte)param_1[0x4d] & 0x80) != 0) || (((byte)param_1[0x52] & 0x20) == 0))
              goto LAB_003a0828;
              png_warning((long)param_1,"png_set_unknown_chunks now expects a valid location");
              uVar7 = *(uint *)(param_1 + 0x4c) & 0xb;
              if ((*(uint *)(param_1 + 0x4c) & 0xb) == 0) goto LAB_003a0828;
            }
            do {
              uVar4 = uVar7;
              uVar7 = -uVar4 & uVar4 ^ uVar4;
            } while (uVar4 != (-uVar4 & uVar4));
            *(char *)((long)__dest + lVar8 + 0x18) = (char)uVar4;
            sVar9 = *(size_t *)(param_1 + 0x340);
            if (sVar9 == 0) {
              puVar1 = (undefined8 *)((long)__dest + lVar8 + 8);
              *puVar1 = 0;
              puVar1[1] = 0;
LAB_003a07f5:
              *(int *)(param_2 + 0x128) = *(int *)(param_2 + 0x128) + 1;
              goto LAB_003a054a;
            }
            pvVar6 = malloc(sVar9);
            *(void **)((long)__dest + lVar8 + 8) = pvVar6;
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,*(void **)(param_1 + 0x338),sVar9);
              *(size_t *)((long)__dest + lVar8 + 0x10) = sVar9;
              goto LAB_003a07f5;
            }
            if (((byte)param_1[0x4d] & 0x80) != 0) {
              pcVar10 = "unknown chunk: out of memory";
              goto LAB_003a06fa;
            }
            if (((byte)param_1[0x52] & 0x40) == 0) goto LAB_003a0828;
            pcVar10 = "unknown chunk: out of memory";
          }
          png_warning((long)param_1,pcVar10);
          goto LAB_003a054a;
        }
      }
      else {
        bVar2 = true;
        if (iVar3 != 1) {
          if (iVar3 != 2) {
            *(int *)(param_1 + 0x324) = iVar3 + -1;
            goto LAB_003a066a;
          }
          *(undefined4 *)(param_1 + 0x324) = 1;
          if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a0828;
          png_chunk_warning((long)param_1,0x5e4682);
        }
      }
    }
    else {
      bVar2 = true;
      if (param_4 == 2) {
LAB_003a05d7:
        bVar2 = true;
        if (((byte)param_1[0x13b] & 0x20) != 0) goto LAB_003a05e3;
      }
    }
  }
  else {
    uVar5 = png_cache_unknown_chunk(param_1,param_3);
    if ((int)uVar5 == 0) {
LAB_003a0621:
      bVar2 = true;
      goto LAB_003a0623;
    }
    iVar3 = (**(code **)(param_1 + 0x2d8))(param_1,param_1 + 0x330);
    if (iVar3 < 0) goto LAB_003a0828;
    if (iVar3 == 0) {
      if (1 < param_4) goto LAB_003a05cb;
      if (*(int *)(param_1 + 0x2e0) < 2) {
        png_chunk_warning((long)param_1,0x5e4712);
        if (((byte)param_1[0x52] & 0x20) == 0) goto LAB_003a0828;
        png_warning((long)param_1,
                    "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks");
      }
      goto LAB_003a05d7;
    }
LAB_003a054a:
    bVar2 = false;
  }
LAB_003a0623:
  if (*(void **)(param_1 + 0x338) != (void *)0x0) {
    free(*(void **)(param_1 + 0x338));
  }
  *(undefined8 *)(param_1 + 0x338) = 0;
  if ((!bVar2) || (((byte)param_1[0x13b] & 0x20) != 0)) {
    return;
  }
LAB_003a0828:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


