// Function : binbuf_addsemi
// Namespace: 
// Entry    : 00530090
// Prototype: undefined binbuf_addsemi(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00530090 - 005300eb


void binbuf_addsemi(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   int *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long lVar1;
  void *pvVar2;
  undefined8 extraout_RDX;
  ulong uVar3;
  undefined8 extraout_XMM0_Qa;
  
  lVar1 = (long)*param_9 + 1;
  uVar3 = (long)*param_9 * 0x10;
  pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),uVar3,lVar1 * 0x10);
  if (pvVar2 == (void *)0x0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "binbuf_addmessage: out of space",extraout_RDX,param_12,param_13,param_14);
    return;
  }
  *(void **)(param_9 + 2) = pvVar2;
  *param_9 = (int)lVar1;
  *(undefined4 *)((long)pvVar2 + uVar3) = 4;
  *(undefined4 *)((long)pvVar2 + uVar3 + 8) = 0;
  return;
}


