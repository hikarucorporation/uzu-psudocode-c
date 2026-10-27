// Function : array_resize_and_redraw
// Namespace: 
// Entry    : 004f9670
// Prototype: undefined array_resize_and_redraw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, long * param_10, int param_11)
// Body     : 004f9670 - 004f9848


void array_resize_and_redraw
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int *param_9,long *param_10,int param_11)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  uVar3 = glist_isvisible((long)param_10);
  plVar1 = *(long **)(param_9 + 0xc);
  iVar9 = (int)plVar1[1];
  piVar2 = param_9;
  while (iVar9 == 2) {
    piVar2 = (int *)*plVar1;
    plVar1 = *(long **)(piVar2 + 0xc);
    iVar9 = (int)plVar1[1];
  }
  if (uVar3 == 0) {
    lVar4 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,*(long *)(param_9 + 4));
    iVar9 = 1;
    if (0 < param_11) {
      iVar9 = param_11;
    }
    iVar8 = *param_9;
    iVar6 = *(int *)(lVar4 + 0x18) * 8;
    pvVar5 = resizebytes(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 2),(long)(iVar6 * iVar8),(long)(iVar6 * iVar9));
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_9 + 2) = pvVar5;
      *param_9 = iVar9;
      if ((iVar8 < iVar9) && (iVar9 != iVar8)) {
        lVar7 = (long)pvVar5 + (long)(iVar6 * iVar8);
        iVar8 = iVar8 - iVar9;
        do {
          word_init(lVar7,lVar4,param_9 + 8);
          lVar7 = lVar7 + iVar6;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0);
      }
      iVar9 = *(int *)PTR_glist_valid_007157f8;
      *(int *)PTR_glist_valid_007157f8 = iVar9 + 1;
      param_9[6] = iVar9 + 1;
    }
    return;
  }
  uVar10 = gobj_vis(*(long **)(piVar2 + 8),param_10,0);
  lVar4 = template_findbyname(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9 + 4));
  iVar9 = 1;
  if (0 < param_11) {
    iVar9 = param_11;
  }
  iVar8 = *param_9;
  iVar6 = *(int *)(lVar4 + 0x18) * 8;
  pvVar5 = resizebytes(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),(long)(iVar6 * iVar8),(long)(iVar6 * iVar9));
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_9 + 2) = pvVar5;
    *param_9 = iVar9;
    if ((iVar8 < iVar9) && (iVar9 != iVar8)) {
      lVar7 = (long)pvVar5 + (long)(iVar6 * iVar8);
      iVar8 = iVar8 - iVar9;
      do {
        word_init(lVar7,lVar4,param_9 + 8);
        lVar7 = lVar7 + iVar6;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0);
    }
    iVar9 = *(int *)PTR_glist_valid_007157f8;
    *(int *)PTR_glist_valid_007157f8 = iVar9 + 1;
    param_9[6] = iVar9 + 1;
  }
  gobj_vis(*(long **)(piVar2 + 8),param_10,1);
  return;
}


