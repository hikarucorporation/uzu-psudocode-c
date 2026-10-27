// Function : expr_ff
// Namespace: 
// Entry    : 00584560
// Prototype: undefined expr_ff(long param_1)
// Body     : 00584560 - 00584632


void expr_ff(long param_1)

{
  long *plVar1;
  char *__s;
  void *pvVar2;
  int iVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x370);
  while (plVar1 != (long *)0x0) {
    *(long *)(param_1 + 0x370) = plVar1[3];
    pd_free(plVar1);
    plVar1 = *(long **)(param_1 + 0x370);
  }
  __s = *(char **)(param_1 + 0x40);
  strlen(__s);
  freebytes(__s);
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      pvVar2 = *(void **)(param_1 + 0x378 + lVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
        iVar3 = *(int *)(param_1 + 0x38);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar4 = -100;
  do {
    pvVar2 = *(void **)(param_1 + 0x22b8 + lVar4 * 8);
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
    }
    pvVar2 = *(void **)(param_1 + 0x25d8 + lVar4 * 8);
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
    }
    pvVar2 = *(void **)(param_1 + 0x28f8 + lVar4 * 8);
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0);
  return;
}


