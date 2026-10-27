// Function : png_set_sPLT
// Namespace: juce:pnglibNamespace
// Entry    : 003a4b50
// Prototype: undefined png_set_sPLT(pnglibNamespace * param_1, long param_2, undefined8 * param_3)
// Body     : 003a4b50 - 003a4d9f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_set_sPLT(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_info_def*, juce::pnglibNamespace::png_sPLT_struct const*, int) */

void __cdecl
juce::pnglibNamespace::png_set_sPLT(pnglibNamespace *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  uint uVar7;
  
  if (((param_3 == (undefined8 *)0x0) || (param_1 == (pnglibNamespace *)0x0)) || (param_2 == 0)) {
    return;
  }
  uVar7 = *(uint *)(param_2 + 0x138);
  if (((int)uVar7 < 0) ||
     ((pvVar3 = *(void **)(param_2 + 0x130), pvVar3 == (void *)0x0 && (uVar7 != 0))))
  goto LAB_003a4d98;
  if (uVar7 != 0x7fffffff) {
    sVar5 = (ulong)uVar7 * 0x20;
    __dest = malloc(sVar5 + 0x20);
    if (__dest != (void *)0x0) {
      if (uVar7 == 0) {
        sVar5 = 0;
      }
      else {
        memcpy(__dest,pvVar3,sVar5);
      }
      puVar1 = (undefined8 *)((long)__dest + sVar5 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)__dest + sVar5) = 0;
      ((undefined8 *)((long)__dest + sVar5))[1] = 0;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        uVar7 = *(uint *)(param_2 + 0x138);
      }
      *(void **)(param_2 + 0x130) = __dest;
      *(byte *)(param_2 + 0x11c) = *(byte *)(param_2 + 0x11c) | 0x20;
      pcVar6 = (char *)*param_3;
      if ((pcVar6 == (char *)0x0) || (pvVar3 = (void *)param_3[2], pvVar3 == (void *)0x0)) {
        if (((byte)param_1[0x52] & 0x40) == 0) goto LAB_003a4d98;
        pcVar6 = "png_set_sPLT: invalid sPLT";
        goto LAB_003a4d62;
      }
      lVar4 = (long)(int)uVar7 * 0x20;
      *(undefined1 *)((long)__dest + lVar4 + 8) = *(undefined1 *)(param_3 + 1);
      sVar5 = strlen(pcVar6);
      sVar5 = sVar5 + 1;
      if (sVar5 == 0) {
LAB_003a4c94:
        *(undefined8 *)((long)__dest + lVar4) = 0;
      }
      else {
        __dest_00 = malloc(sVar5);
        *(undefined8 *)((long)__dest + lVar4) = __dest_00;
        if (__dest_00 != (void *)0x0) {
          memcpy(__dest_00,pcVar6,sVar5);
          uVar2 = *(uint *)(param_3 + 3);
          if ((int)uVar2 < 1) goto LAB_003a4d98;
          __dest_01 = malloc((ulong)uVar2 * 10);
          *(void **)((long)__dest + lVar4 + 0x10) = __dest_01;
          if (__dest_01 != (void *)0x0) {
            *(uint *)((long)__dest + lVar4 + 0x18) = uVar2;
            memcpy(__dest_01,pvVar3,(ulong)uVar2 * 10);
            *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x20;
            *(uint *)(param_2 + 0x138) = uVar7 + 1;
            return;
          }
          free(__dest_00);
          goto LAB_003a4c94;
        }
      }
      if (((byte)param_1[0x4d] & 0x80) != 0) {
        pcVar6 = "sPLT out of memory";
        goto LAB_003a4c0b;
      }
      if (((byte)param_1[0x52] & 0x40) == 0) goto LAB_003a4d98;
      pcVar6 = "sPLT out of memory";
      goto LAB_003a4d62;
    }
  }
  if (((byte)param_1[0x4d] & 0x80) != 0) {
    pcVar6 = "too many sPLT chunks";
LAB_003a4c0b:
    png_chunk_warning((long)param_1,(long)pcVar6);
    return;
  }
  if (((byte)param_1[0x52] & 0x40) == 0) {
LAB_003a4d98:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  pcVar6 = "too many sPLT chunks";
LAB_003a4d62:
  png_warning((long)param_1,pcVar6);
  return;
}


