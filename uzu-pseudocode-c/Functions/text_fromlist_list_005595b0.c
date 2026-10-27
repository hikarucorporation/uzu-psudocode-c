// Function : text_fromlist_list
// Namespace: 
// Entry    : 005595b0
// Prototype: undefined text_fromlist_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005595b0 - 005595ff


void text_fromlist_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,ulong param_11,int *param_12,char *param_13,
                       undefined8 param_14,undefined1 param_15)

{
  int *piVar1;
  int *piVar2;
  undefined8 extraout_RDX;
  ulong uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  uVar3 = param_11 & 0xffffffff;
  piVar2 = param_12;
  piVar1 = (int *)text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_9,param_10,param_11,param_12,param_13,param_14);
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar4 = binbuf_clear(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       piVar1);
  uVar4 = binbuf_restore(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                         (int)param_11,param_12,piVar2,param_13,param_14);
  text_client_senditup
            (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar3,
             extraout_RDX,piVar2,param_13,param_14,param_15);
  return;
}


