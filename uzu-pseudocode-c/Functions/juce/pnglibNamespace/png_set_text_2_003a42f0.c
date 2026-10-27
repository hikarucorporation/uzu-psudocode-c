// Function : png_set_text_2
// Namespace: juce:pnglibNamespace
// Entry    : 003a42f0
// Prototype: undefined8 png_set_text_2(pnglibNamespace * param_1, long param_2, int * param_3)
// Body     : 003a42f0 - 003a4730


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_set_text_2(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_info_def*, juce::pnglibNamespace::png_text_struct const*, int) */

undefined8 __cdecl
juce::pnglibNamespace::png_set_text_2(pnglibNamespace *param_1,long param_2,int *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  size_t sVar5;
  size_t __n;
  size_t __n_00;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  size_t __size;
  uint uVar10;
  long *plVar11;
  size_t local_50;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (param_1 == (pnglibNamespace *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = *(uint *)(param_2 + 0x94);
  if (*(int *)(param_2 + 0x98) <= (int)uVar8) {
    if (uVar8 + 0x80000001 != 0) {
      uVar7 = 0x7fffffff;
      if ((int)uVar8 < 0x7ffffff6) {
        uVar7 = uVar8 + 9 & 0xfffffff8;
      }
      if ((((int)uVar8 < 0) || (uVar10 = uVar7 - uVar8, (int)uVar10 < 1)) ||
         ((pvVar6 = *(void **)(param_2 + 0xa0), uVar8 != 0 && (pvVar6 == (void *)0x0))))
      goto LAB_003a4729;
      if (((uVar7 != 0) && (uVar10 <= -(uVar8 + 0x80000001))) &&
         (__dest = malloc((ulong)uVar7 * 0x38), __dest != (void *)0x0)) {
        if (uVar8 == 0) {
          sVar5 = 0;
        }
        else {
          sVar5 = (ulong)uVar8 * 0x38;
          memcpy(__dest,pvVar6,sVar5);
        }
        memset((void *)((long)__dest + sVar5),0,(ulong)uVar10 * 0x38);
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
          uVar8 = *(uint *)(param_2 + 0x94);
        }
        *(void **)(param_2 + 0xa0) = __dest;
        *(byte *)(param_2 + 0x11d) = *(byte *)(param_2 + 0x11d) | 0x40;
        *(uint *)(param_2 + 0x98) = uVar7;
        pcVar9 = *(char **)(param_3 + 2);
        goto joined_r0x003a46a2;
      }
    }
    if (((byte)param_1[0x4d] & 0x80) != 0) {
      pcVar9 = "too many text chunks";
      goto LAB_003a463e;
    }
    if (((byte)param_1[0x52] & 0x40) == 0) goto LAB_003a4729;
    pcVar9 = "too many text chunks";
    goto LAB_003a4625;
  }
  __dest = *(void **)(param_2 + 0xa0);
  pcVar9 = *(char **)(param_3 + 2);
joined_r0x003a46a2:
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  iVar3 = *param_3;
  if (iVar3 - 3U < 0xfffffffc) {
    if (((byte)param_1[0x4d] & 0x80) != 0) {
      png_chunk_warning((long)param_1,0x5e491f);
      return 0;
    }
    if (((byte)param_1[0x52] & 0x40) != 0) {
      png_warning((long)param_1,"text compression mode is out of range");
      return 0;
    }
    goto LAB_003a4729;
  }
  lVar4 = (long)(int)uVar8 * 0x38;
  sVar5 = strlen(pcVar9);
  if (iVar3 < 1) {
    local_50 = 0;
    __n = 0;
  }
  else {
    if (*(char **)(param_3 + 10) == (char *)0x0) {
      local_50 = 0;
      pcVar9 = *(char **)(param_3 + 0xc);
      if (pcVar9 != (char *)0x0) goto LAB_003a4492;
    }
    else {
      local_50 = strlen(*(char **)(param_3 + 10));
      pcVar9 = *(char **)(param_3 + 0xc);
      if (pcVar9 != (char *)0x0) {
LAB_003a4492:
        __n = strlen(pcVar9);
        goto LAB_003a44df;
      }
    }
    __n = 0;
  }
LAB_003a44df:
  piVar1 = (int *)((long)__dest + lVar4);
  pcVar9 = *(char **)(param_3 + 4);
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
    if (iVar3 < 1) {
      *piVar1 = -1;
    }
    else {
      *piVar1 = 1;
    }
    __n_00 = 0;
  }
  else {
    __n_00 = strlen(pcVar9);
    *piVar1 = iVar3;
  }
  __size = sVar5 + local_50 + __n + __n_00 + 4;
  if (__size == 0) {
    *(undefined8 *)((long)__dest + lVar4 + 8) = 0;
  }
  else {
    pvVar6 = malloc(__size);
    *(void **)((long)__dest + lVar4 + 8) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      plVar11 = (long *)((long)__dest + lVar4 + 8);
      memcpy(pvVar6,*(void **)(param_3 + 2),sVar5);
      *(undefined1 *)(*plVar11 + sVar5) = 0;
      if (*param_3 < 1) {
        puVar2 = (undefined8 *)((long)__dest + lVar4 + 0x28);
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        pvVar6 = (void *)(*plVar11 + sVar5 + 1);
        *(void **)((long)__dest + lVar4 + 0x28) = pvVar6;
        memcpy(pvVar6,*(void **)(param_3 + 10),local_50);
        *(undefined1 *)(*(long *)((long)__dest + lVar4 + 0x28) + local_50) = 0;
        pvVar6 = (void *)(*(long *)((long)__dest + lVar4 + 0x28) + local_50 + 1);
        plVar11 = (long *)((long)__dest + lVar4 + 0x30);
        *(void **)((long)__dest + lVar4 + 0x30) = pvVar6;
        memcpy(pvVar6,*(void **)(param_3 + 0xc),__n);
        *(undefined1 *)(*(long *)((long)__dest + lVar4 + 0x30) + __n) = 0;
        sVar5 = __n;
      }
      pvVar6 = (void *)(*plVar11 + sVar5 + 1);
      *(void **)((long)__dest + lVar4 + 0x10) = pvVar6;
      if (__n_00 != 0) {
        memcpy(pvVar6,*(void **)(param_3 + 4),__n_00);
        pvVar6 = *(void **)((long)__dest + lVar4 + 0x10);
      }
      *(undefined1 *)((long)pvVar6 + __n_00) = 0;
      if (*piVar1 < 1) {
        sVar5 = 0;
      }
      else {
        sVar5 = __n_00;
        __n_00 = 0;
      }
      *(size_t *)((long)__dest + lVar4 + 0x18) = __n_00;
      *(size_t *)((long)__dest + lVar4 + 0x20) = sVar5;
      *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
      return 0;
    }
  }
  if (((byte)param_1[0x4d] & 0x80) != 0) {
    pcVar9 = "text chunk: out of memory";
LAB_003a463e:
    png_chunk_warning((long)param_1,(long)pcVar9);
    return 1;
  }
  if (((byte)param_1[0x52] & 0x40) == 0) {
LAB_003a4729:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  pcVar9 = "text chunk: out of memory";
LAB_003a4625:
  png_warning((long)param_1,pcVar9);
  return 1;
}


