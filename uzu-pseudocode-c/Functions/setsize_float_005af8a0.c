// Function : setsize_float
// Namespace: 
// Entry    : 005af8a0
// Prototype: undefined setsize_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005af8a0 - 005afbe9


void setsize_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined7 extraout_var;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_RAX;
  undefined8 uVar8;
  long extraout_RAX_00;
  long extraout_RAX_01;
  long *plVar9;
  void *pvVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  long *plVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  undefined8 **ppuVar21;
  int iVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar23;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined1 in_stack_ffffffffffffff98;
  int local_48;
  int local_44;
  undefined8 *local_40;
  ulong local_38;
  
  puVar7 = *(undefined8 **)(param_9 + 0x38);
  plVar20 = (long *)(param_9 + 0x40);
  plVar19 = *(long **)(param_9 + 0x50);
  bVar3 = gpointer_check(plVar20,0);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"setsize: empty pointer",extraout_RDX,param_12,param_13,
             param_14);
    return;
  }
  puVar17 = *(undefined8 **)(param_9 + 0x30);
  cVar1 = *(char *)*puVar17;
  puVar6 = (undefined8 *)gpointer_gettemplatesym(plVar20);
  if ((cVar1 != '\0') && (bVar3 = puVar17 != puVar6, puVar6 = puVar17, bVar3)) {
    uVar23 = *puVar17;
    puVar7 = (undefined8 *)gpointer_gettemplatesym(plVar20);
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"setsize %s: got wrong template (%s)",uVar23,*puVar7,
             param_13,param_14);
    return;
  }
  uVar23 = template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,(long)puVar6);
  if (extraout_RAX == 0) {
    pd_error(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "setsize: couldn\'t find template %s",*puVar6,param_12,param_13,param_14);
    return;
  }
  piVar12 = &local_48;
  ppuVar21 = &local_40;
  puVar17 = puVar7;
  uVar8 = template_find_field(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              extraout_RAX,(long)puVar7,&local_44,piVar12,(char *)ppuVar21,param_14)
  ;
  uVar23 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  if ((int)uVar8 == 0) {
    uVar8 = *puVar7;
    pcVar18 = "setsize: couldn\'t find array field %s";
LAB_005afa77:
    pd_error(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar18,uVar8,
             piVar12,(char *)ppuVar21,param_14);
    return;
  }
  if (local_48 != 3) {
    uVar8 = *puVar7;
    pcVar18 = "setsize: field %s not of type array";
    uVar23 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    goto LAB_005afa77;
  }
  if ((int)plVar19[1] == 2) {
    lVar15 = *plVar20;
    uVar23 = template_findbyname(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,(long)local_40);
    lVar2 = extraout_RAX_00;
    uVar8 = extraout_RDX_00;
  }
  else {
    lVar15 = *plVar20 + 0x18;
    uVar23 = template_findbyname(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,(long)local_40);
    lVar2 = extraout_RAX_01;
    uVar8 = extraout_RDX_02;
  }
  if (lVar2 == 0) {
    uVar8 = *local_40;
    pcVar18 = "setsize: couldn\'t find field template %s";
    goto LAB_005afa77;
  }
  uVar11 = *(int *)(lVar2 + 0x18) * 8;
  piVar12 = *(int **)(lVar15 + local_44);
  if (uVar11 != piVar12[1]) {
    bug(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"setsize_gpointer",puVar17,
        uVar8,(ulong)uVar11,(char *)ppuVar21,param_14,in_stack_ffffffffffffff98);
  }
  iVar22 = *piVar12;
  iVar4 = 1;
  if (0 < (int)param_1) {
    iVar4 = (int)param_1;
  }
  if (iVar4 == iVar22) {
    return;
  }
  if ((int)plVar19[1] == 1) {
    uVar5 = glist_isvisible(*plVar19);
    uVar23 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    uVar8 = extraout_RDX_01;
    if (uVar5 == 0) goto LAB_005aface;
    plVar9 = plVar19;
    plVar14 = plVar20;
  }
  else {
    plVar9 = plVar19;
    do {
      lVar15 = *plVar9;
      plVar9 = *(long **)(lVar15 + 0x30);
    } while ((int)plVar9[1] == 2);
    uVar5 = glist_isvisible(*plVar9);
    uVar23 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
    uVar8 = extraout_RDX_03;
    if (uVar5 == 0) goto LAB_005aface;
    plVar9 = *(long **)(lVar15 + 0x30);
    plVar14 = (long *)(lVar15 + 0x20);
  }
  uVar23 = gobj_vis((long *)*plVar14,(long *)*plVar9,0);
  uVar8 = extraout_RDX_04;
LAB_005aface:
  iVar16 = iVar4 - iVar22;
  if ((iVar4 < iVar22) && (iVar16 != 0)) {
    uVar13 = (ulong)uVar11;
    lVar15 = (long)(int)(uVar11 * iVar4) + *(long *)(piVar12 + 2);
    do {
      uVar23 = word_free(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar15,lVar2
                         ,uVar8,uVar13,(char *)ppuVar21,param_14);
      lVar15 = lVar15 + (int)uVar11;
      iVar16 = iVar16 + 1;
      uVar8 = extraout_RDX_05;
    } while (iVar16 != 0);
  }
  local_38 = (ulong)(int)(iVar22 * uVar11);
  pvVar10 = resizebytes(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(void **)(piVar12 + 2),local_38,(long)(int)(uVar11 * iVar4));
  *(void **)(piVar12 + 2) = pvVar10;
  *piVar12 = iVar4;
  if ((iVar22 < iVar4) && (iVar4 != iVar22)) {
    lVar15 = (long)pvVar10 + local_38;
    iVar22 = iVar22 - iVar4;
    do {
      word_init(lVar15,lVar2,plVar20);
      lVar15 = lVar15 + (int)uVar11;
      iVar22 = iVar22 + 1;
    } while (iVar22 != 0);
  }
  piVar12[6] = piVar12[6] + 1;
  if ((int)plVar19[1] == 1) {
    uVar11 = glist_isvisible(*plVar19);
    if (uVar11 == 0) {
      return;
    }
    plVar20 = (long *)*plVar20;
    plVar19 = (long *)*plVar19;
  }
  else {
    do {
      lVar15 = *plVar19;
      plVar19 = *(long **)(lVar15 + 0x30);
    } while ((int)plVar19[1] == 2);
    uVar11 = glist_isvisible(*plVar19);
    if (uVar11 == 0) {
      return;
    }
    plVar20 = *(long **)(lVar15 + 0x20);
    plVar19 = (long *)**(undefined8 **)(lVar15 + 0x30);
  }
  gobj_vis(plVar20,plVar19,1);
  return;
}


