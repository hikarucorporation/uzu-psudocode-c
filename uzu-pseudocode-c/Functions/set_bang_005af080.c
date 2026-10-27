// Function : set_bang
// Namespace: 
// Entry    : 005af080
// Prototype: undefined set_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005af080 - 005af228


void set_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
             ,undefined8 param_14)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_RAX;
  undefined8 extraout_RDX;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar10;
  
  iVar9 = *(int *)(param_9 + 0x50);
  plVar1 = (long *)(param_9 + 0x30);
  plVar7 = *(long **)(param_9 + 0x40);
  bVar4 = gpointer_check(plVar1,0);
  if ((int)CONCAT71(extraout_var,bVar4) == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"set: empty pointer",extraout_RDX,param_12,param_13,param_14);
    return;
  }
  puVar6 = *(undefined8 **)(param_9 + 0x48);
  cVar2 = *(char *)*puVar6;
  puVar5 = (undefined8 *)gpointer_gettemplatesym(plVar1);
  if ((cVar2 != '\0') && (bVar4 = puVar6 != puVar5, puVar5 = puVar6, bVar4)) {
    uVar10 = *puVar6;
    puVar6 = (undefined8 *)gpointer_gettemplatesym(plVar1);
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"set %s: got wrong template (%s)",uVar10,*puVar6,
             param_13,param_14);
    return;
  }
  uVar10 = template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,(long)puVar5);
  if (extraout_RAX == 0) {
    pd_error(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "set: couldn\'t find template %s",*puVar5,param_12,param_13,param_14);
    return;
  }
  if (iVar9 == 0) {
    return;
  }
  if ((int)plVar7[1] == 2) {
    lVar8 = *plVar1;
    iVar3 = *(int *)(param_9 + 0x54);
  }
  else {
    lVar8 = *plVar1 + 0x18;
    iVar3 = *(int *)(param_9 + 0x54);
  }
  if (iVar3 == 0) {
    if (0 < iVar9) {
      puVar6 = *(undefined8 **)(param_9 + 0x58);
      do {
        template_setfloat((ulong)*(uint *)(puVar6 + 1),param_2,param_3,param_4,param_5,param_6,
                          param_7,param_8,extraout_RAX,(undefined8 *)*puVar6,lVar8,1,param_13,
                          param_14);
        puVar6 = puVar6 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (0 < iVar9) {
    puVar6 = *(undefined8 **)(param_9 + 0x58);
    do {
      uVar10 = template_setsymbol(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  extraout_RAX,(undefined8 *)*puVar6,lVar8,puVar6[1],(char *)0x1,
                                  param_14);
      puVar6 = puVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((int)plVar7[1] == 1) {
    lVar8 = *plVar1;
  }
  else {
    do {
      lVar8 = *plVar7;
      plVar7 = *(long **)(lVar8 + 0x30);
    } while ((int)plVar7[1] == 2);
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  scalar_redraw(lVar8,*plVar7);
  return;
}


