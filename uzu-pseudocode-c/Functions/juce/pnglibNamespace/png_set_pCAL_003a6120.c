// Function : png_set_pCAL
// Namespace: juce:pnglibNamespace
// Entry    : 003a6120
// Prototype: undefined png_set_pCAL(pnglibNamespace * param_1, long param_2, char * param_3, undefined4 param_4, undefined4 param_5, uint param_6, uint param_7, char * param_8, long param_9)
// Body     : 003a6120 - 003a64aa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_set_pCAL(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_info_def*, char const*, int, int, int, int, char const*, char**) */

void __cdecl
juce::pnglibNamespace::png_set_pCAL
          (pnglibNamespace *param_1,long param_2,char *param_3,undefined4 param_4,undefined4 param_5
          ,uint param_6,uint param_7,char *param_8,long param_9)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  uint local_6c;
  pnglibNamespace *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  long local_50;
  long local_48;
  ulong local_40;
  size_t local_38;
  
  if ((((param_1 == (pnglibNamespace *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) ||
     (param_8 == (char *)0x0)) {
    return;
  }
  if ((0 < (int)param_7) && (param_9 == 0)) {
    return;
  }
  local_60 = param_4;
  local_5c = param_5;
  local_38 = strlen(param_3);
  if (param_6 < 4) {
    local_58 = param_8;
    local_48 = param_9;
    local_68 = param_1;
    local_50 = param_2;
    if (param_7 != 0) {
      uVar7 = 0;
      do {
        pcVar5 = *(char **)(local_48 + uVar7 * 8);
        if (pcVar5 == (char *)0x0) {
LAB_003a63cb:
          param_1 = local_68;
          if (((byte)local_68[0x4d] & 0x80) != 0) {
            pcVar5 = "Invalid format for pCAL parameter";
            goto LAB_003a643f;
          }
          if (((byte)local_68[0x52] & 0x40) == 0) goto LAB_003a649e;
          pcVar5 = "Invalid format for pCAL parameter";
          goto LAB_003a6476;
        }
        sVar3 = strlen(pcVar5);
        local_6c = 0;
        local_40 = 0;
        uVar2 = png_check_fp_number((long)pcVar5,sVar3,&local_6c,&local_40);
        if (((uVar2 == 0) || ((local_40 != sVar3 && (pcVar5[local_40] != '\0')))) || (local_6c == 0)
           ) goto LAB_003a63cb;
        uVar7 = uVar7 + 1;
      } while (param_7 != uVar7);
    }
    lVar6 = local_48;
    sVar3 = local_38 + 1;
    if (sVar3 != 0) {
      pvVar4 = malloc(sVar3);
      lVar1 = local_50;
      if (pvVar4 != (void *)0x0) {
        *(void **)(local_50 + 0xf8) = pvVar4;
        memcpy(pvVar4,param_3,sVar3);
        *(undefined4 *)(lVar1 + 0x100) = local_60;
        *(undefined4 *)(lVar1 + 0x104) = local_5c;
        *(char *)(lVar1 + 0x118) = (char)param_6;
        *(char *)(lVar1 + 0x119) = (char)param_7;
        sVar3 = strlen(local_58);
        param_1 = local_68;
        sVar3 = sVar3 + 1;
        if ((sVar3 == 0) || (pvVar4 = malloc(sVar3), pvVar4 == (void *)0x0)) {
          png_warning((long)param_1,"Out of memory");
          *(undefined8 *)(lVar1 + 0x108) = 0;
          pcVar5 = "Insufficient memory for pCAL units";
        }
        else {
          *(void **)(lVar1 + 0x108) = pvVar4;
          memcpy(pvVar4,local_58,sVar3);
          sVar3 = (ulong)(param_7 + 1) << 3;
          pvVar4 = png_malloc_warn((long)param_1,sVar3);
          *(void **)(lVar1 + 0x110) = pvVar4;
          if (pvVar4 != (void *)0x0) {
            memset(pvVar4,0,sVar3);
            if (0 < (int)param_7) {
              uVar7 = 0;
              do {
                sVar3 = strlen(*(char **)(lVar6 + uVar7 * 8));
                sVar3 = sVar3 + 1;
                if ((sVar3 == 0) || (pvVar4 = malloc(sVar3), pvVar4 == (void *)0x0)) {
                  png_warning((long)param_1,"Out of memory");
                  pvVar4 = (void *)0x0;
                }
                lVar6 = local_48;
                *(void **)(*(long *)(lVar1 + 0x110) + uVar7 * 8) = pvVar4;
                pvVar4 = *(void **)(*(long *)(lVar1 + 0x110) + uVar7 * 8);
                if (pvVar4 == (void *)0x0) {
                  pcVar5 = "Insufficient memory for pCAL parameter";
                  goto LAB_003a6476;
                }
                memcpy(pvVar4,*(void **)(local_48 + uVar7 * 8),sVar3);
                uVar7 = uVar7 + 1;
              } while (param_7 != uVar7);
            }
            *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 4;
            *(byte *)(lVar1 + 0x11c) = *(byte *)(lVar1 + 0x11c) | 0x80;
            return;
          }
          pcVar5 = "Insufficient memory for pCAL params";
        }
        goto LAB_003a6476;
      }
    }
    param_1 = local_68;
    png_warning((long)local_68,"Out of memory");
    *(undefined8 *)(local_50 + 0xf8) = 0;
    if (((byte)param_1[0x4d] & 0x80) != 0) {
      pcVar5 = "Insufficient memory for pCAL purpose";
      goto LAB_003a643f;
    }
    if (((byte)param_1[0x52] & 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      png_err(param_1);
    }
    pcVar5 = "Insufficient memory for pCAL purpose";
  }
  else {
    if (((byte)param_1[0x4d] & 0x80) != 0) {
      pcVar5 = "Invalid pCAL equation type";
LAB_003a643f:
      png_chunk_warning((long)param_1,(long)pcVar5);
      return;
    }
    if (((byte)param_1[0x52] & 0x40) == 0) {
LAB_003a649e:
                    /* WARNING: Subroutine does not return */
      png_err(param_1);
    }
    pcVar5 = "Invalid pCAL equation type";
  }
LAB_003a6476:
  png_warning((long)param_1,pcVar5);
  return;
}


