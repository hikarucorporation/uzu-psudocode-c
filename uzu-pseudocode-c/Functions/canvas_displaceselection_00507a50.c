// Function : canvas_displaceselection
// Namespace: 
// Entry    : 00507a50
// Prototype: undefined canvas_displaceselection(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00507a50 - 00507bb5


void canvas_displaceselection
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  long lVar1;
  bool bVar2;
  undefined1 in_AL;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 *puVar4;
  char *pcVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  puVar4 = *(undefined8 **)(param_9[0x18] + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    if (*(int *)(**(long **)(*plVar3 + 0x48) + 0x40) == 0) {
      param_12 = canvas_undo_set_move((long)param_9,1);
      canvas_undo_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)param_9,4,"motion",param_12,param_13,param_14);
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      *(undefined4 *)(**(long **)(*plVar3 + 0x48) + 0x40) = 1;
      puVar4 = *(undefined8 **)(param_9[0x18] + 0x20);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00507b63;
    }
    plVar3 = (long *)0x0;
    bVar2 = false;
    do {
      lVar1 = *(long *)*puVar4;
      param_1 = gobj_displace((long *)*puVar4);
      param_12 = (long *)0x1;
      if (lVar1 != *(long *)PTR_voutlet_class_00715fc0) {
        param_12 = plVar3;
      }
      if (lVar1 == *(long *)PTR_vinlet_class_00715ab8) {
        bVar2 = true;
      }
      else {
        plVar3 = param_12;
      }
      puVar4 = (undefined8 *)puVar4[1];
    } while (puVar4 != (undefined8 *)0x0);
    if (bVar2) {
      param_1 = canvas_resortinlets(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9);
    }
    if ((int)plVar3 != 0) {
      param_1 = canvas_resortoutlets
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    }
  }
LAB_00507b63:
  pcVar5 = "c";
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654044,"c",param_9,
              param_12,param_13,param_14,in_AL);
  if (*(long *)(param_9[0x18] + 0x20) == 0) {
    return;
  }
  canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
               pcVar5,extraout_RDX,param_12,param_13,param_14);
  return;
}


