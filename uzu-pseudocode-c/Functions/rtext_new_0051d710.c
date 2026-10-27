// Function : rtext_new
// Namespace: 
// Entry    : 0051d710
// Prototype: undefined8 * rtext_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051d710 - 0051d7b8


undefined8 *
rtext_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
         long param_10,undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  undefined8 *param3;
  void *pvVar1;
  ulong param2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  
  param3 = getbytes(0x78);
  param3[5] = param_10;
  param3[6] = param_9;
  param3[0xe] = *(undefined8 *)(*(long *)(param_9 + 0xc0) + 0x18);
  *(undefined8 *)((long)param3 + 0x1c) = 0;
  *(undefined4 *)((long)param3 + 0x14) = 0;
  *(undefined8 *)((long)param3 + 0xc) = 0;
  uVar2 = binbuf_gettext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(int **)(param_10 + 0x10),param3,(int *)(param3 + 1),param_12,param_13,
                         param_14);
  pvVar1 = resizebytes(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(void *)*param3
                       ,(long)*(int *)(param3 + 1),(long)*(int *)(param3 + 1) + 1);
  *param3 = pvVar1;
  *(undefined1 *)((long)pvVar1 + (long)*(int *)(param3 + 1)) = 0;
  *(undefined8 **)(*(long *)(param_9 + 0xc0) + 0x18) = param3;
  param2 = glist_getcanvas(param3[6]);
  sprintf((char *)(param3 + 7),".x%lx.t%lx",param2,(ulong)param3);
  return param3;
}


