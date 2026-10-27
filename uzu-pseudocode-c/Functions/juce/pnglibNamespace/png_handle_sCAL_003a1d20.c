// Function : png_handle_sCAL
// Namespace: juce:pnglibNamespace
// Entry    : 003a1d20
// Prototype: undefined png_handle_sCAL(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a1d20 - 003a2030


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_sCAL(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_sCAL(pnglibNamespace *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  ulong *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  uint local_4c;
  ulong local_48;
  ulong local_40;
  ulong *local_38;
  
  if ((*(uint *)(param_1 + 0x4c) & 1) == 0) goto LAB_003a2029;
  if ((*(uint *)(param_1 + 0x4c) & 4) != 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a2029;
    pcVar7 = "out of place";
    goto LAB_003a1dde;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 0x40) != 0)) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a2029;
    pcVar7 = "duplicate";
    goto LAB_003a1dde;
  }
  if (param_3 < 4) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a2029;
    pcVar7 = "invalid";
    goto LAB_003a1dde;
  }
  uVar8 = (ulong)(param_3 + 1);
  __ptr = *(ulong **)(param_1 + 0x358);
  if (__ptr == (ulong *)0x0) {
    if (uVar8 != 0) goto LAB_003a1dfd;
LAB_003a1ee3:
    if (((byte)param_1[0x52] & 0x10) != 0) {
      png_chunk_warning((long)param_1,0x656a52);
      png_crc_finish(param_1,param_3);
      return;
    }
LAB_003a2029:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  if (*(ulong *)(param_1 + 0x360) < uVar8) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    free(__ptr);
LAB_003a1dfd:
    __ptr = calloc(1,uVar8);
    if (__ptr == (ulong *)0x0) goto LAB_003a1ee3;
    *(ulong **)(param_1 + 0x358) = __ptr;
    *(ulong *)(param_1 + 0x360) = uVar8;
  }
  if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a2029;
  uVar8 = (ulong)param_3;
  (**(code **)(param_1 + 0x20))(param_1,__ptr,uVar8);
  bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
  if (((byte)param_1[0x13b] & 0x20) == 0) {
    bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
  }
  if (bVar2) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x16c);
    local_40 = uVar8;
    local_38 = __ptr;
    do {
      uVar6 = uVar8 & 0xffffffff;
      if ((int)uVar8 == 0) {
        uVar6 = 0xffffffff;
      }
      uVar4 = zlibNamespace::crc32_z((uint)uVar4,__ptr,uVar6);
      __ptr = (ulong *)((long)__ptr + uVar6);
      uVar8 = uVar8 - uVar6;
    } while (uVar8 != 0);
    *(int *)(param_1 + 0x16c) = (int)uVar4;
    uVar8 = local_40;
    __ptr = local_38;
  }
  *(byte *)((long)__ptr + uVar8) = 0;
  uVar5 = png_crc_finish(param_1,0);
  if ((int)uVar5 != 0) {
    return;
  }
  if (1 < (byte)((byte)*__ptr - 1)) {
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar7 = "invalid unit";
LAB_003a1dde:
      png_chunk_warning((long)param_1,(long)pcVar7);
      return;
    }
    goto LAB_003a2029;
  }
  local_48 = 1;
  local_4c = 0;
  uVar3 = png_check_fp_number((long)__ptr,uVar8,&local_4c,&local_48);
  if ((uVar3 != 0) && (local_48 < uVar8)) {
    uVar4 = local_48 + 1;
    pbVar1 = (byte *)((long)__ptr + local_48);
    local_48 = uVar4;
    if (*pbVar1 == 0) {
      if ((local_4c & 0x188) == 0x108) {
        local_4c = 0;
        uVar3 = png_check_fp_number((long)__ptr,uVar8,&local_4c,&local_48);
        if ((uVar3 == 0) || (local_48 != uVar8)) {
          pcVar7 = "bad height format";
        }
        else {
          if ((local_4c & 0x188) == 0x108) {
            png_set_sCAL_s(param_1,param_2,(uint)(byte)*__ptr,(char *)((long)__ptr + 1),
                           (char *)(uVar4 + (long)__ptr));
            return;
          }
          pcVar7 = "non-positive height";
        }
      }
      else {
        pcVar7 = "non-positive width";
      }
      goto LAB_003a1f69;
    }
  }
  pcVar7 = "bad width format";
LAB_003a1f69:
  png_chunk_benign_error(param_1,(long)pcVar7);
  return;
}


