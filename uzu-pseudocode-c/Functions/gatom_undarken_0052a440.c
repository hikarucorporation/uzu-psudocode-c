// Function : gatom_undarken
// Namespace: 
// Entry    : 0052a440
// Prototype: undefined gatom_undarken(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0052a440 - 0052a4ba


void gatom_undarken(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14,undefined1 param_15)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  if ((~*(byte *)((long)param_9 + 0x2e) & 3) == 0) {
    *(byte *)(param_9 + 0xf) = *(byte *)(param_9 + 0xf) & 0xe7;
    plVar2 = (long *)glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_9[7],(long)param_9,param_11,param_12,param_13,param_14);
    uVar1 = param_9[7];
    lVar3 = rtext_gettag((long)plVar2);
    rtext_width(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2);
    rtext_height(plVar2);
    text_drawborder(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,uVar1,lVar3,param_12,param_13,0);
    return;
  }
  bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gatom_undarken",param_10,
      param_11,param_12,param_13,param_14,param_15);
  return;
}


