// Function : png_handle_tEXt
// Namespace: juce:pnglibNamespace
// Entry    : 003a2fa0
// Prototype: undefined png_handle_tEXt(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a2fa0 - 003a31ef


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_tEXt(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_tEXt(pnglibNamespace *param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong *__ptr;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int local_68 [2];
  ulong *local_60;
  char *local_58;
  size_t local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x324) = iVar1 + -1;
    if (iVar1 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a31e8;
      pcVar10 = "no space in chunk cache";
      goto LAB_003a31d2;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  if ((uVar2 & 1) == 0) goto LAB_003a31e8;
  if ((uVar2 & 4) != 0) {
    *(uint *)(param_1 + 0x4c) = uVar2 | 8;
  }
  uVar7 = (ulong)(param_3 + 1);
  __ptr = *(ulong **)(param_1 + 0x358);
  if (__ptr == (ulong *)0x0) {
LAB_003a3056:
    __ptr = calloc(1,uVar7);
    if (__ptr == (ulong *)0x0) {
      png_chunk_warning((long)param_1,0x5e4fbd);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar10 = "out of memory";
LAB_003a31d2:
        png_chunk_warning((long)param_1,(long)pcVar10);
        return;
      }
      goto LAB_003a31e8;
    }
    *(ulong **)(param_1 + 0x358) = __ptr;
    *(ulong *)(param_1 + 0x360) = uVar7;
  }
  else if (*(ulong *)(param_1 + 0x360) < uVar7) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    free(__ptr);
    goto LAB_003a3056;
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    uVar7 = (ulong)param_3;
    (**(code **)(param_1 + 0x20))(param_1,__ptr,uVar7);
    bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
    if (((byte)param_1[0x13b] & 0x20) == 0) {
      bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
    }
    if ((param_3 != 0) && (bVar3)) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x16c);
      puVar8 = __ptr;
      uVar12 = uVar7;
      do {
        uVar9 = uVar12 & 0xffffffff;
        if ((int)uVar12 == 0) {
          uVar9 = 0xffffffff;
        }
        uVar5 = zlibNamespace::crc32_z((uint)uVar5,puVar8,uVar9);
        puVar8 = (ulong *)((long)puVar8 + uVar9);
        uVar12 = uVar12 - uVar9;
      } while (uVar12 != 0);
      *(int *)(param_1 + 0x16c) = (int)uVar5;
    }
    uVar6 = png_crc_finish(param_1,0);
    if ((int)uVar6 == 0) {
      *(undefined1 *)((long)__ptr + uVar7) = 0;
      lVar13 = uVar7 + 1;
      lVar4 = (long)__ptr + -1;
      do {
        lVar11 = lVar4;
        lVar13 = lVar13 + -1;
        lVar4 = lVar11 + 1;
      } while (*(char *)(lVar11 + 1) != '\0');
      local_58 = (char *)((lVar11 + 2) - (ulong)(lVar13 == 0));
      local_68[0] = -1;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_60 = __ptr;
      local_50 = strlen(local_58);
      uVar6 = png_set_text_2(param_1,param_2,local_68);
      if ((int)uVar6 != 0) {
        png_warning((long)param_1,"Insufficient memory to process text chunk");
      }
    }
    return;
  }
LAB_003a31e8:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


