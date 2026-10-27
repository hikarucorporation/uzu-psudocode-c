// Function : text_tolist_bang
// Namespace: 
// Entry    : 00559420
// Prototype: undefined text_tolist_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00559420 - 0055948b


void text_tolist_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined4 uVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar3 = (uint *)text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,param_9,param_10,param_11,param_12,param_13,param_14);
  if (puVar3 == (uint *)0x0) {
    return;
  }
  piVar4 = binbuf_new();
  binbuf_addbinbuf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,
                   puVar3,extraout_RDX,(ulong)param_12,param_13,param_14);
  plVar1 = *(long **)(param_9 + 0x18);
  uVar2 = binbuf_getnatom(piVar4);
  uVar5 = binbuf_getvec((long)piVar4);
  outlet_list(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,0,
              uVar2,uVar5,param_13,param_14);
  binbuf_free(piVar4);
  return;
}


