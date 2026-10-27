// Function : toggle_draw_new
// Namespace: 
// Entry    : 005ac920
// Prototype: undefined toggle_draw_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005ac920 - 005acaea


void toggle_draw_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 extraout_RDX;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  char local_138 [128];
  char local_b8 [136];
  
  uVar1 = glist_getcanvas(param_10);
  sprintf(local_138,"%pOBJ",(void *)param_9);
  sprintf(local_b8,"%pBASE",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiii rS",uVar1,"create","rectangle",0,0);
  sprintf(local_b8,"%pX1",param_9);
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiii rS",uVar1,"create","line",0,0);
  sprintf(local_b8,"%pX2",param_9);
  pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiii rS",uVar1,"create","line",0,0);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  pcVar2 = "create";
  pcVar3 = "text";
  uVar4 = 0;
  uVar1 = pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crr ii rs rS",uVar1,"create","text",0,0);
  toggle_draw_config(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     extraout_RDX,pcVar2,pcVar3,uVar4);
  (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),6);
  return;
}


