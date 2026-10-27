// Function : ugen_start
// Namespace: 
// Entry    : 004f6be0
// Prototype: undefined ugen_start(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004f6be0 - 004f6c4d


void ugen_start(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14,undefined1 param_15)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 extraout_XMM0_Qa;
  
  ugen_stop();
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  piVar1 = (int *)(*(long *)(*plVar4 + 0x40) + 0x18);
  *piVar1 = *piVar1 + 1;
  pvVar5 = getbytes(8);
  **(undefined8 **)(*plVar4 + 0x40) = pvVar5;
  puVar2 = *(undefined8 **)(*plVar4 + 0x40);
  puVar3 = (undefined8 *)*puVar2;
  *puVar3 = dsp_done;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (puVar2[0x27] == 0) {
    return;
  }
  bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"ugen_start",param_10
      ,dsp_done,puVar3,param_13,param_14,param_15);
  return;
}


