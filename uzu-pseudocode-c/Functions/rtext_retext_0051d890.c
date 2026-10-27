// Function : rtext_retext
// Namespace: 
// Entry    : 0051d890
// Prototype: undefined rtext_retext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 0051d890 - 0051d913


void rtext_retext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,byte *param_14)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  uint local_24 [3];
  
  local_24[1] = 0;
  local_24[0] = 0;
  lVar1 = param_9[5];
  uVar3 = freebytes((void *)*param_9);
  uVar3 = binbuf_gettext(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(int **)(lVar1 + 0x10),param_9,(int *)(param_9 + 1),param_12,param_13,
                         param_14);
  pvVar2 = resizebytes(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)*param_9,(long)(int)param_9[1],(long)(int)param_9[1] + 1);
  *param_9 = (long)pvVar2;
  *(undefined1 *)((long)pvVar2 + (long)(int)param_9[1]) = 0;
  rtext_senditup(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,
                 local_24 + 1,local_24,(int *)(local_24 + 2),param_14);
  return;
}


