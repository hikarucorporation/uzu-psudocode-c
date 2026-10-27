// Function : list_split_list
// Namespace: 
// Entry    : 00552ec0
// Prototype: undefined list_split_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00552ec0 - 00552f50


void list_split_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
                    undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar4 = 0;
  if (-1 < (int)*(float *)(param_9 + 0x30)) {
    uVar4 = (int)*(float *)(param_9 + 0x30);
  }
  if ((int)param_11 < (int)uVar4) {
    puVar3 = (undefined8 *)(param_9 + 0x48);
    uVar4 = param_11;
  }
  else {
    plVar1 = *(long **)(param_9 + 0x40);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                *plVar2 + 0xc0,param_11 - uVar4,(ulong)uVar4 * 0x10 + param_12,param_13,param_14);
    puVar3 = (undefined8 *)(param_9 + 0x38);
  }
  plVar1 = (long *)*puVar3;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_list(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
              *plVar2 + 0xc0,uVar4,param_12,param_13,param_14);
  return;
}


