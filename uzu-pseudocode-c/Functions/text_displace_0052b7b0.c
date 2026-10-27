// Function : text_displace
// Namespace: 
// Entry    : 0052b7b0
// Prototype: undefined text_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052b7b0 - 0052b844


void text_displace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,ulong param_10,int param_11,undefined8 param_12,char *param_13,
                  undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar4;
  
  *(short *)(param_9 + 5) = (short)param_9[5] + (short)param_11;
  *(short *)((long)param_9 + 0x2a) = *(short *)((long)param_9 + 0x2a) + (short)param_12;
  uVar4 = param_12;
  uVar1 = glist_isvisible(param_10);
  if (uVar1 == 0) {
    return;
  }
  plVar2 = (long *)glist_findrtext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                   param_8,param_10,(long)param_9,extraout_RDX,uVar4,param_13,
                                   param_14);
  rtext_displace(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar2,param_11 * *(int *)(param_10 + 0xec),
                 (char)param_12 * (char)*(int *)(param_10 + 0xec));
  lVar3 = rtext_gettag((long)plVar2);
  rtext_width(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2);
  rtext_height(plVar2);
  uVar4 = text_drawborder(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,param_10,lVar3,uVar4,param_13,0);
  canvas_fixlinesfor(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                     (long)param_9);
  return;
}


