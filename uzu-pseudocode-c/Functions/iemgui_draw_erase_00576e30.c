// Function : iemgui_draw_erase
// Namespace: 
// Entry    : 00576e30
// Prototype: undefined iemgui_draw_erase(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10)
// Body     : 00576e30 - 00576e8a


void iemgui_draw_erase(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      void *param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  char acStack_118 [128];
  undefined1 in_stack_ffffffffffffff68;
  
  uVar1 = glist_getcanvas(param_10);
  sprintf(acStack_118 + 0x80,"%pOBJ",param_9);
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",uVar1
              ,"delete",acStack_118 + 0x80,in_R9,in_stack_ffffffffffffff68);
  return;
}


