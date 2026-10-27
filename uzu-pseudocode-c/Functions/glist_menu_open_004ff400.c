// Function : glist_menu_open
// Namespace: 
// Entry    : 004ff400
// Prototype: undefined glist_menu_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 004ff400 - 004ff4f7


void glist_menu_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,long *param_10,undefined8 param_11,undefined *param_12,
                    char *param_13,undefined *param_14,undefined1 param_15)

{
  undefined1 in_AL;
  bool bVar1;
  long lVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  long *plVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar4;
  
  if ((*(byte *)(param_9 + 0x1d) & 8) == 0) {
    lVar2 = glist_getcanvas((long)param_9);
    param_11 = extraout_RDX;
    if (((*(byte *)(lVar2 + 0xe8) & 2) != 0) && ((*(ushort *)(param_9 + 0x1d) & 0x101) == 0x100)) {
      plVar3 = (long *)param_9[9];
      if (plVar3 == (long *)0x0) {
        bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,"glist_menu_open",param_10,extraout_RDX,param_12,param_13,param_14,in_AL
           );
        param_11 = extraout_RDX_05;
      }
      else {
        uVar4 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        if ((*(long *)(*param_9 + 0x68) != 0) &&
           (uVar4 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),
           *(long *)(*(long *)(*param_9 + 0x68) + 0x28) != 0)) {
          param_10 = plVar3;
          bVar1 = gobj_shouldvis(param_9,plVar3);
          uVar4 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          param_11 = extraout_RDX_00;
          if ((int)CONCAT71(extraout_var,bVar1) != 0) {
            param_10 = plVar3;
            uVar4 = (**(code **)(*(long *)(*param_9 + 0x68) + 0x28))(param_9,plVar3,0);
            param_11 = extraout_RDX_01;
          }
        }
        if (param_9[0x18] != 0) {
          canvas_destroy_editor
                    (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     param_11,param_12,param_13,param_14);
          param_11 = extraout_RDX_02;
        }
        *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) | 1;
        if ((*(long *)(*param_9 + 0x68) != 0) && (*(long *)(*(long *)(*param_9 + 0x68) + 0x28) != 0)
           ) {
          param_10 = plVar3;
          bVar1 = gobj_shouldvis(param_9,plVar3);
          param_11 = extraout_RDX_03;
          if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
            (**(code **)(*(long *)(*param_9 + 0x68) + 0x28))(param_9,plVar3,1);
            param_11 = extraout_RDX_04;
            param_10 = plVar3;
          }
        }
      }
    }
  }
  canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             (char *)param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}


