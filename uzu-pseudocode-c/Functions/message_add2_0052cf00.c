// Function : message_add2
// Namespace: 
// Entry    : 0052cf00
// Prototype: undefined message_add2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 * param_12, char * param_13, byte * param_14)
// Body     : 0052cf00 - 0052cf1e


void message_add2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,uint param_11,undefined8 *param_12,char *param_13,
                 byte *param_14)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  uVar1 = binbuf_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x10),param_11,param_12,param_12,param_13,param_14);
  glist_retext(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x40),param_9,extraout_RDX,param_12,param_13,param_14);
  return;
}


