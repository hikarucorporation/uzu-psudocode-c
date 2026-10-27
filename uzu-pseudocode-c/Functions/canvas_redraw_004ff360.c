// Function : canvas_redraw
// Namespace: 
// Entry    : 004ff360
// Prototype: undefined canvas_redraw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 004ff360 - 004ff3f7


void canvas_redraw(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,char *param_10,undefined8 param_11,undefined *param_12,
                  char *param_13,undefined *param_14,undefined1 param_15)

{
  long lVar1;
  char *pcVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined8 extraout_RDX_01;
  undefined1 unaff_BL;
  char *pcVar4;
  char *pcVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar6 [16];
  
  if ((*(byte *)(param_9 + 0x1d) & 8) == 0) {
    auVar6 = glist_getcanvas((long)param_9);
    uVar3 = auVar6._8_8_;
    if ((*(byte *)(auVar6._0_8_ + 0xe8) & 2) != 0) {
      if ((*(byte *)(param_9 + 0x1d) & 8) == 0) {
        lVar1 = glist_getcanvas((long)param_9);
        uVar3 = extraout_RDX;
        if ((*(byte *)(lVar1 + 0xe8) & 2) != 0) {
          if ((*(byte *)(param_9 + 0x1d) & 1) != 0) {
            pcVar4 = "crs";
            pcVar2 = "delete";
            pcVar5 = "all";
            pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,0,"crs",param_9,"delete","all",param_14,unaff_BL);
            *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) & 0xfd;
            canvas_map((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,pcVar4,extraout_RDX_01,pcVar2,pcVar5,param_14,param_15);
            return;
          }
          bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,"canvas_map",param_10,extraout_RDX,param_12,param_13,param_14,unaff_BL
             );
          uVar3 = extraout_RDX_00;
        }
      }
      canvas_map((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                 ,param_10,uVar3,param_12,param_13,param_14,param_15);
      return;
    }
  }
  return;
}


