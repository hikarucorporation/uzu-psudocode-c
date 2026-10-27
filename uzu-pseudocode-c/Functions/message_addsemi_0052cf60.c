// Function : message_addsemi
// Namespace: 
// Entry    : 0052cf60
// Prototype: undefined message_addsemi(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 0052cf60 - 0052cf86


void message_addsemi(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,byte *param_14)

{
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = binbuf_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x10),0,(undefined8 *)0x0,param_12,param_13,param_14);
  uVar2 = binbuf_addsemi(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(int **)(param_9 + 0x10),uVar2,extraout_RDX,param_12,param_13,param_14);
  glist_retext(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x40),param_9,extraout_RDX_00,param_12,param_13,param_14);
  return;
}


