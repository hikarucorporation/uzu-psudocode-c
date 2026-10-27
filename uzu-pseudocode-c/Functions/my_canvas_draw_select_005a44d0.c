// Function : my_canvas_draw_select
// Namespace: 
// Entry    : 005a44d0
// Prototype: undefined my_canvas_draw_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005a44d0 - 005a4545


void my_canvas_draw_select
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  char local_98 [136];
  
  uVar2 = glist_getcanvas(param_10);
  sprintf(local_98,"%pBASE",(void *)param_9);
  uVar1 = 0xff;
  if ((*(byte *)(param_9 + 0x443) & 1) == 0) {
    uVar1 = (undefined1)*(undefined4 *)(param_9 + 0x450);
  }
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk",
              uVar2,"itemconfigure",local_98,"-outline",uVar1);
  return;
}


