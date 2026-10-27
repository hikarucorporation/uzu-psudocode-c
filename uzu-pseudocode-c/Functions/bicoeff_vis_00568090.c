// Function : bicoeff_vis
// Namespace: 
// Entry    : 00568090
// Prototype: undefined bicoeff_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00568090 - 005681b7


void bicoeff_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10,int param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  float fVar2;
  ulong param3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  
  param3 = glist_getcanvas(param_10);
  snprintf((char *)(param_9 + 0x58),1000,".x%lx.c",param3);
  if (param_11 == 0) {
    sys_vgui(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "%s delete %s\n");
    sys_getsr();
    fVar2 = extraout_XMM0_Da_00;
  }
  else {
    lVar1 = *(long *)(param_9 + 0x30);
    text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,lVar1
              ,extraout_RDX,param3,param_13,param_14);
    text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              lVar1,extraout_RDX_00,param3,param_13,param_14);
    text_xpix(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              lVar1,extraout_RDX_01,param3,param_13,param_14);
    text_ypix(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              lVar1,extraout_RDX_02,param3,param_13,param_14);
    sys_vgui(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "bicoeff::drawme %s %s %s %s %d %d %d %d %s\n");
    sys_getsr();
    fVar2 = extraout_XMM0_Da;
  }
  if (0.0 < fVar2) {
    sys_vgui((double)fVar2,0,param_3,param_4,param_5,param_6,param_7,param_8,
             "set ::samplerate %.0f\n");
    return;
  }
  return;
}


