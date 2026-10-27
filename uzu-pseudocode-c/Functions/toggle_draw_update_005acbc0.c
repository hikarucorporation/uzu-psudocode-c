// Function : toggle_draw_update
// Namespace: 
// Entry    : 005acbc0
// Prototype: undefined toggle_draw_update(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005acbc0 - 005acc95


void toggle_draw_update(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined1 uVar4;
  char local_b8 [136];
  
  uVar2 = glist_isvisible(param_10);
  if (uVar2 != 0) {
    uVar3 = glist_getcanvas(param_10);
    uVar1 = *(undefined4 *)(param_9 + 0x44c + (ulong)(*(float *)(param_9 + 0x490) == 0.0) * 4);
    sprintf(local_b8,"%pX1",param_9);
    uVar4 = (undefined1)uVar1;
    pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,0,"crs rk",uVar3,"itemconfigure",local_b8,"-fill",uVar4);
    sprintf(local_b8,"%pX2",param_9);
    pdgui_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,0,"crs rk",uVar3,"itemconfigure",local_b8,"-fill",uVar4);
  }
  return;
}


