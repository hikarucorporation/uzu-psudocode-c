// Function : socketreceiver_new
// Namespace: 
// Entry    : 0053e8e0
// Prototype: undefined8 * socketreceiver_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053e8e0 - 0053e95f


undefined8 *
socketreceiver_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined1 unaff_BL;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  
  iVar3 = (int)param_12;
  uVar4 = param_10;
  puVar1 = getbytes(0x40);
  puVar1[1] = 0;
  puVar1[2] = param_9;
  puVar1[5] = param_10;
  puVar1[6] = param_11;
  *(int *)(puVar1 + 3) = iVar3;
  puVar1[4] = 0;
  puVar1[7] = 0;
  if (iVar3 == 0) {
    pvVar2 = malloc(0x1000);
    *puVar1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          "t_socketreceiver",uVar4,extraout_RDX,param_12,param_13,param_14,unaff_BL);
    }
  }
  else {
    *puVar1 = 0;
  }
  return puVar1;
}


