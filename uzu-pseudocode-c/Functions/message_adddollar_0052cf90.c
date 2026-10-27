// Function : message_adddollar
// Namespace: 
// Entry    : 0052cf90
// Prototype: undefined message_adddollar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0052cf90 - 0052cfd0


void message_adddollar(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  ulong uVar1;
  undefined8 extraout_RDX;
  char *in_R8;
  byte *in_R9;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  uVar1 = 0;
  if (-1 < (int)(float)param_1) {
    uVar1 = (ulong)(uint)(int)(float)param_1;
  }
  local_18[0] = 8;
  local_10 = (undefined4)uVar1;
  uVar2 = binbuf_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x10),1,(undefined8 *)local_18,uVar1,in_R8,in_R9);
  glist_retext(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x40),param_9,extraout_RDX,uVar1,in_R8,in_R9);
  return;
}


