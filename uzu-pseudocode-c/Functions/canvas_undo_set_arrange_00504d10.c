// Function : canvas_undo_set_arrange
// Namespace: 
// Entry    : 00504d10
// Prototype: undefined canvas_undo_set_arrange(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, ulong param_9, long * param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00504d10 - 00504e5d


void canvas_undo_set_arrange
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               ulong param_9,long *param_10,int param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  undefined1 in_AL;
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar5 = param_10;
  if ((*(byte *)(param_9 + 0xe8) & 0x20) == 0) {
    canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  if (*(long *)(param_9 + 0xc0) != 0) {
    for (plVar4 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar4 != (long *)0x0;
        plVar4 = (long *)plVar4[1]) {
      if ((long *)*plVar4 == param_10) goto LAB_00504dd9;
    }
    puVar1 = getbytes(0x10);
    lVar2 = *(long *)(param_9 + 0xc0);
    plVar4 = *(long **)(lVar2 + 0x20);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar7 = plVar4;
      do {
        if ((long *)*plVar7 == param_10) {
          bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,"glist_select",plVar5,plVar7,plVar4,param_13,param_14,in_AL);
          lVar2 = *(long *)(param_9 + 0xc0);
          plVar4 = *(long **)(lVar2 + 0x20);
          break;
        }
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
    }
    puVar1[1] = plVar4;
    *puVar1 = param_10;
    *(undefined8 **)(lVar2 + 0x20) = puVar1;
    gobj_select(param_10,param_9);
  }
LAB_00504dd9:
  piVar3 = getbytes(8);
  if (param_11 == 0) {
    piVar3[1] = 0;
    plVar5 = *(long **)(param_9 + 0x30);
  }
  else {
    plVar5 = *(long **)(param_9 + 0x30);
    iVar6 = -1;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5;
      do {
        plVar4 = (long *)plVar4[1];
        iVar6 = iVar6 + 1;
      } while (plVar4 != (long *)0x0);
    }
    piVar3[1] = iVar6;
  }
  iVar6 = 0;
  if ((plVar5 != (long *)0x0) && (iVar6 = 0, plVar5 != param_10)) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      plVar5 = (long *)plVar5[1];
      if (plVar5 == (long *)0x0) break;
    } while (plVar5 != param_10);
  }
  *piVar3 = iVar6;
  return;
}


