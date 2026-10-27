// Function : glob_open
// Namespace: 
// Entry    : 00502740
// Prototype: undefined glob_open(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, undefined * * param_10, undefined8 * param_11, long * param_12, char * param_13, undefined8 * param_14, undefined1 param_15)
// Body     : 00502740 - 005027cb


void glob_open(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
              double param_6,double param_7,undefined8 param_8,undefined8 param_9,
              undefined **param_10,undefined8 *param_11,long *param_12,char *param_13,
              undefined8 *param_14,undefined1 param_15)

{
  long *plVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined **ppuVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if ((float)param_1 != 0.0) {
    ppuVar3 = param_10;
    plVar1 = (long *)pd_getcanvaslist();
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0x1b]) {
      if ((((undefined **)plVar1[0x19] == param_10) &&
          (param_12 = (long *)plVar1[0x1c], param_12 != (long *)0x0)) &&
         ((undefined8 *)*param_12 == param_11)) {
        canvas_vis((ulong)DAT_005d9038,CONCAT44(uVar5,uVar4),param_3,param_4,param_5,param_6,param_7
                   ,param_8,plVar1,(char *)ppuVar3,extraout_RDX,(undefined *)param_12,param_13,
                   (undefined *)param_14,param_15);
        return;
      }
    }
  }
  lVar2 = glob_evalfile(param_1,CONCAT44(uVar5,uVar4),param_3,param_4,param_5,param_6,param_7,
                        param_8,param_9,param_10,param_11,param_12,param_13,param_14);
  if (lVar2 == 0) {
    pdgui_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar5,uVar4),param_3,
                param_4,param_5,param_6,param_7,param_8,0x65418f,(char *)0x0,extraout_RDX_00,
                param_12,param_13,param_14,param_15);
    return;
  }
  return;
}


