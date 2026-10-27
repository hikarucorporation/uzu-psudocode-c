// Function : vu_draw_new
// Namespace: 
// Entry    : 005b1050
// Prototype: undefined vu_draw_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005b1050 - 005b13df


void vu_draw_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 extraout_RDX;
  char *pcVar3;
  char *pcVar4;
  int param3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  char local_1b8 [128];
  char local_138 [128];
  char local_b8 [136];
  
  uVar1 = glist_getcanvas(param_10);
  sprintf(local_b8,"%pOBJ",(void *)param_9);
  sprintf(local_138,"%pBASE",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiii rS",uVar1,"create","rectangle",0,0);
  param3 = 1;
  do {
    sprintf(local_138,"%pRLED",(void *)param_9);
    sprintf(local_1b8,"%pRLED%d",(void *)param_9,param3);
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crr iiii rS",uVar1,"create","line",0,0);
    sprintf(local_138,"%pSCALE",(void *)param_9);
    sprintf(local_1b8,"%pSCALE%d",(void *)param_9,param3);
    pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crr ii rs rS",uVar1,"create","text",0,0);
    param3 = param3 + 1;
  } while (param3 != 0x29);
  sprintf(local_138,"%pSCALE",(void *)param_9);
  sprintf(local_1b8,"%pSCALE%d",(void *)param_9,0x29);
  pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr ii rs rS",uVar1,"create","text",0,0);
  sprintf(local_138,"%pRCOVER",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiii rS",uVar1,"create","rectangle",0,0);
  sprintf(local_138,"%pPLED",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiii rS",uVar1,"create","line",0,0);
  sprintf(local_138,"%pLABEL",(void *)param_9);
  builtin_strncpy(local_1b8,"label",6);
  pcVar2 = "create";
  pcVar3 = "text";
  pcVar4 = (char *)0x0;
  uVar1 = pdgui_vmess(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crr ii rs rS",uVar1,"create","text",0,0);
  uVar1 = vu_draw_config(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,extraout_RDX,pcVar2,pcVar3,pcVar4);
  vu_draw_io(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0,pcVar2
             ,pcVar3,pcVar4);
  sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5b1ee0);
  return;
}


