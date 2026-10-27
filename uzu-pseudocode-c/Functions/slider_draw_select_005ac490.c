// Function : slider_draw_select
// Namespace: 
// Entry    : 005ac490
// Prototype: undefined slider_draw_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005ac490 - 005ac55d


void slider_draw_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_b8 [136];
  
  uVar2 = glist_getcanvas(param_10);
  uVar1 = *(uint *)(param_9 + 0x440);
  uVar3 = 0xff;
  if ((uVar1 & 0x1000000) == 0) {
    uVar3 = (char)*(undefined4 *)(param_9 + 0x454);
  }
  sprintf(local_b8,"%pBASE",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk",
              uVar2,"itemconfigure",local_b8,"-outline",(char)((int)(uVar1 << 7) >> 0x1f));
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk"
              ,uVar2,"itemconfigure",local_b8,"-fill",uVar3);
  return;
}


