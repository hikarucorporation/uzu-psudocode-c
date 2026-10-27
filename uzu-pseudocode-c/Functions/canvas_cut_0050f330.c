// Function : canvas_cut
// Namespace: 
// Entry    : 0050f330
// Prototype: undefined canvas_cut(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, char * param_13, byte * param_14)
// Body     : 0050f330 - 0050f448


void canvas_cut(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
               char *param_13,byte *param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  char *pcVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar5;
  undefined1 in_stack_ffffffffffffffd8;
  int local_1c;
  long local_18;
  
  lVar1 = param_9[0x18];
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x88) & 0x20) != 0) {
      canvas_clearline((long)param_9);
      return;
    }
    if (*(long **)(lVar1 + 0x28) == (long *)0x0) {
      if (*(long *)(lVar1 + 0x20) != 0) {
LAB_0050f3f5:
        plVar3 = canvas_undo_set_cut(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,(long)param_9,1);
        pcVar4 = (char *)0x3;
        canvas_undo_add(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)param_9,3,"cut",plVar3,param_13,
                        param_14);
        uVar5 = canvas_copy(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)param_9,pcVar4,
                            extraout_RDX_01,plVar3,param_13,param_14);
        uVar5 = canvas_doclear(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                               ,pcVar4,extraout_RDX_02,plVar3,param_13,param_14);
        pdgui_vmess(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654044,"c",
                    param_9,plVar3,param_13,param_14,in_stack_ffffffffffffffd8);
        return;
      }
    }
    else {
      plVar3 = &local_18;
      param_1 = rtext_getseltext(*(long **)(lVar1 + 0x28),plVar3,&local_1c);
      if (local_1c == 0) {
        param_12 = *(undefined8 **)(param_9[0x18] + 0x20);
        if ((param_12 != (undefined8 *)0x0) && (param_12[1] == 0)) {
          *(undefined8 *)(param_9[0x18] + 0x28) = 0;
          goto LAB_0050f3f5;
        }
      }
      canvas_copy(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                  plVar3,extraout_RDX,param_12,param_13,param_14);
      plVar3 = *(long **)(param_9[0x18] + 0x28);
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      pcVar4 = (char *)0x7f;
      rtext_key(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,plVar3,0x7f,(undefined8 *)(*plVar2 + 0x168),param_12,param_13,
                param_14);
      canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)param_9,pcVar4,extraout_RDX_00,param_12,param_13,param_14);
    }
  }
  return;
}


