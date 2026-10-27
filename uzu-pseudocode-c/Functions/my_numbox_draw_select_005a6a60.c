// Function : my_numbox_draw_select
// Namespace: 
// Entry    : 005a6a60
// Prototype: undefined my_numbox_draw_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005a6a60 - 005a6be3


void my_numbox_draw_select
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 local_c0;
  undefined1 local_bc;
  char local_b8 [136];
  
  uVar2 = glist_getcanvas(param_10);
  uVar1 = *(uint *)(param_9 + 0x440);
  if ((uVar1 & 0x1000000) == 0) {
    local_bc = (undefined1)*(undefined4 *)(param_9 + 0x44c);
    local_c0 = (undefined1)*(undefined4 *)(param_9 + 0x454);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xff;
    if ((uVar1 & 0x8000000) != 0) {
      *(uint *)(param_9 + 0x440) = uVar1 & 0xf7ffffff;
      *(undefined1 *)(param_9 + 0x4c4) = 0;
      sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
    }
    local_c0 = 0xff;
    local_bc = 0xff;
  }
  sprintf(local_b8,"%pBASE1",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk",
              uVar2,"itemconfigure",local_b8,"-outline",uVar3);
  sprintf(local_b8,"%pBASE2",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk"
              ,uVar2,"itemconfigure",local_b8,"-fill",local_bc);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk"
              ,uVar2,"itemconfigure",local_b8,"-fill",local_c0);
  sprintf(local_b8,"%pNUMBER",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk"
              ,uVar2,"itemconfigure",local_b8,"-fill",local_bc);
  return;
}


