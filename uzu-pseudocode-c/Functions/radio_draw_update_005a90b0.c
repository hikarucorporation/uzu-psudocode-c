// Function : radio_draw_update
// Namespace: 
// Entry    : 005a90b0
// Prototype: undefined radio_draw_update(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005a90b0 - 005a91b0


void radio_draw_update(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long param_10)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char acStack_b8 [136];
  
  uVar1 = glist_isvisible(param_10);
  if (uVar1 != 0) {
    uVar2 = glist_getcanvas(param_10);
    sprintf(acStack_b8,"%pBUT%d",(void *)param_9,*(int *)(param_9 + 0x4a0));
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs rk rk",uVar2,"itemconfigure",acStack_b8,"-fill",
                (char)*(undefined4 *)(param_9 + 0x450));
    sprintf(acStack_b8,"%pBUT%d",(void *)param_9,*(int *)(param_9 + 0x490));
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs rk rk",uVar2,"itemconfigure",acStack_b8,"-fill",
                (char)*(undefined4 *)(param_9 + 0x44c));
    *(undefined4 *)(param_9 + 0x4a0) = *(undefined4 *)(param_9 + 0x490);
  }
  return;
}


