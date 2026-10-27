// Function : canvas_undo_doit
// Namespace: 
// Entry    : 0052e960
// Prototype: undefined8 canvas_undo_doit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long param_10, ulong param_11, long * param_12, uint * param_13, undefined4 * param_14)
// Body     : 0052e960 - 0052ea6b


undefined8
canvas_undo_doit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                long param_10,ulong param_11,long *param_12,uint *param_13,undefined4 *param_14)

{
  int iVar1;
  undefined8 uVar2;
  uint switchD_0052e981::switchdataD_00655be4;
  
  uVar2 = 1;
  iVar1 = (int)param_11;
  switch(*(uint *)(param_10 + 8)) {
  case 0:
    param_13 = &switchD_0052e981::switchdataD_00655be4;
    if (iVar1 == 0) {
      return 1;
    }
  default:
    uVar2 = 0;
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: unsupported undo command %d",param_12,(ulong)*(uint *)(param_10 + 8),
             (char *)param_13,param_14);
    break;
  case 1:
    uVar2 = canvas_undo_connect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (long)param_9,*(int **)(param_10 + 0x10),iVar1);
    return uVar2;
  case 2:
    uVar2 = canvas_undo_disconnect
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9
                       ,*(int **)(param_10 + 0x10),iVar1);
    return uVar2;
  case 3:
    uVar2 = canvas_undo_cut(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            *(long **)(param_10 + 0x10),param_11,param_12,
                            (char *)&switchD_0052e981::switchdataD_00655be4,(undefined *)param_14);
    return uVar2;
  case 4:
    uVar2 = canvas_undo_move(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,*(char **)(param_10 + 0x10),param_11,param_12,
                             (char *)&switchD_0052e981::switchdataD_00655be4,param_14);
    return uVar2;
  case 5:
    uVar2 = canvas_undo_paste(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,*(long **)(param_10 + 0x10),param_11,param_12,
                              (char *)&switchD_0052e981::switchdataD_00655be4,(undefined *)param_14)
    ;
    return uVar2;
  case 6:
    uVar2 = canvas_undo_apply(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,*(long **)(param_10 + 0x10),param_11,param_12,
                              (char *)&switchD_0052e981::switchdataD_00655be4,(undefined *)param_14)
    ;
    return uVar2;
  case 7:
    uVar2 = canvas_undo_arrange(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,*(long **)(param_10 + 0x10),param_11,param_12,
                                (char *)&switchD_0052e981::switchdataD_00655be4,
                                (undefined *)param_14);
    return uVar2;
  case 8:
    uVar2 = canvas_undo_canvas_apply
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       *(long **)(param_10 + 0x10),iVar1,param_12,
                       &switchD_0052e981::switchdataD_00655be4,(undefined *)param_14);
    return uVar2;
  case 9:
    uVar2 = canvas_undo_create(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,*(long **)(param_10 + 0x10),param_11,param_12,
                               (char *)&switchD_0052e981::switchdataD_00655be4,(undefined *)param_14
                              );
    return uVar2;
  case 10:
    uVar2 = canvas_undo_recreate
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       *(uint **)(param_10 + 0x10),iVar1,param_12,
                       (char *)&switchD_0052e981::switchdataD_00655be4,(undefined *)param_14);
    return uVar2;
  case 0xb:
    uVar2 = canvas_undo_font((long)param_9,*(int **)(param_10 + 0x10),iVar1,param_12,
                             (char *)&switchD_0052e981::switchdataD_00655be4,param_14);
    return uVar2;
  case 0xc:
  case 0xd:
    break;
  case 0xe:
    canvas_undo_objectstate((long)param_9,*(int **)(param_10 + 0x10),iVar1);
  }
  return uVar2;
}


