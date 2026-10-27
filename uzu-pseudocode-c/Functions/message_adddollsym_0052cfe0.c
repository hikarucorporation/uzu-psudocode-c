// Function : message_adddollsym
// Namespace: 
// Entry    : 0052cfe0
// Prototype: undefined message_adddollsym(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 0052cfe0 - 0052d045


void message_adddollsym(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,byte *param_14)

{
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar1;
  undefined4 local_408 [2];
  undefined8 *local_400;
  char local_3f8;
  char local_3f7 [998];
  undefined1 local_11;
  
  local_3f8 = '$';
  strncpy(local_3f7,(char *)*param_10,0x3e6);
  local_11 = 0;
  local_408[0] = 9;
  local_400 = gensym(&local_3f8);
  uVar1 = binbuf_add(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x10),1,(undefined8 *)local_408,param_12,param_13,param_14)
  ;
  glist_retext(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x40),param_9,extraout_RDX,param_12,param_13,param_14);
  return;
}


