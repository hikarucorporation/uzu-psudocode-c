// Function : elem_float
// Namespace: 
// Entry    : 005af3c0
// Prototype: undefined elem_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005af3c0 - 005af553


void elem_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_RAX;
  undefined8 uVar7;
  long extraout_RAX_00;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined8 extraout_RDX;
  long lVar11;
  char *pcVar12;
  int iVar13;
  undefined8 **ppuVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_02;
  int local_38;
  int local_34;
  undefined8 *local_30;
  
  puVar6 = *(undefined8 **)(param_9 + 0x38);
  plVar1 = (long *)(param_9 + 0x58);
  bVar4 = gpointer_check(plVar1,0);
  if ((int)CONCAT71(extraout_var,bVar4) == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"element: empty pointer",extraout_RDX,param_12,param_13,
             param_14);
    return;
  }
  puVar3 = *(undefined8 **)(param_9 + 0x30);
  cVar2 = *(char *)*puVar3;
  puVar5 = (undefined8 *)gpointer_gettemplatesym(plVar1);
  if ((cVar2 != '\0') && (bVar4 = puVar3 != puVar5, puVar5 = puVar3, bVar4)) {
    uVar15 = *puVar3;
    puVar6 = (undefined8 *)gpointer_gettemplatesym(plVar1);
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"element %s: got wrong template (%s)",uVar15,*puVar6,
             param_13,param_14);
    return;
  }
  uVar15 = template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,(long)puVar5);
  if (extraout_RAX == 0) {
    pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "element: couldn\'t find template %s",*puVar5,param_12,param_13,param_14);
    return;
  }
  if (*(int *)(*(long *)(param_9 + 0x68) + 8) == 2) {
    lVar11 = *plVar1;
  }
  else {
    lVar11 = *plVar1 + 0x18;
  }
  piVar10 = &local_38;
  ppuVar14 = &local_30;
  uVar7 = template_find_field(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              extraout_RAX,(long)puVar6,&local_34,piVar10,(char *)ppuVar14,param_14)
  ;
  uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  if ((int)uVar7 == 0) {
    uVar7 = *puVar6;
    pcVar12 = "element: couldn\'t find array field %s";
  }
  else if (local_38 == 3) {
    uVar15 = template_findbyname(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,(long)local_30);
    if (extraout_RAX_00 != 0) {
      piVar10 = *(int **)(lVar11 + local_34);
      iVar13 = 0;
      if (-1 < (int)param_1) {
        iVar13 = (int)param_1;
      }
      iVar8 = *piVar10 + -1;
      if (iVar13 < *piVar10) {
        iVar8 = iVar13;
      }
      uVar9 = iVar8 * *(int *)(extraout_RAX_00 + 0x18) * 8;
      uVar15 = gpointer_setarray(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (undefined8 *)(param_9 + 0x40),(long)piVar10,
                                 (long)(int)uVar9 + *(long *)(piVar10 + 2),(ulong)uVar9,
                                 (char *)ppuVar14,param_14);
      outlet_pointer(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long **)(param_9 + 0x18));
      return;
    }
    uVar7 = *local_30;
    pcVar12 = "element: couldn\'t find field template %s";
  }
  else {
    uVar7 = *puVar6;
    pcVar12 = "element: field %s not of type array";
    uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  }
  pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar12,uVar7,
           piVar10,(char *)ppuVar14,param_14);
  return;
}


