// Function : array_resize
// Namespace: 
// Entry    : 004f95a0
// Prototype: undefined array_resize(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, int param_10)
// Body     : 004f95a0 - 004f9669


void array_resize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int *param_9,int param_10)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 extraout_XMM0_Qa;
  
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9 + 4));
  iVar5 = 1;
  if (0 < param_10) {
    iVar5 = param_10;
  }
  iVar4 = *param_9;
  iVar6 = *(int *)(lVar1 + 0x18) * 8;
  pvVar2 = resizebytes(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),(long)(iVar6 * iVar4),(long)(iVar6 * iVar5));
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_9 + 2) = pvVar2;
    *param_9 = iVar5;
    if ((iVar4 < iVar5) && (iVar5 != iVar4)) {
      lVar3 = (long)pvVar2 + (long)(iVar6 * iVar4);
      iVar4 = iVar4 - iVar5;
      do {
        word_init(lVar3,lVar1,param_9 + 8);
        lVar3 = lVar3 + iVar6;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0);
    }
    iVar5 = *(int *)PTR_glist_valid_007157f8;
    *(int *)PTR_glist_valid_007157f8 = iVar5 + 1;
    param_9[6] = iVar5 + 1;
  }
  return;
}


