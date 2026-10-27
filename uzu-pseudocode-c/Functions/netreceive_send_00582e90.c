// Function : netreceive_send
// Namespace: 
// Entry    : 00582e90
// Prototype: undefined netreceive_send(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, double param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, sockaddr * param_13, undefined8 param_14)
// Body     : 00582e90 - 00582f1c


void netreceive_send(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    double param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                    sockaddr *param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  long lVar3;
  undefined8 extraout_XMM0_Qa;
  
  if (*(int *)((long)param_9 + 0x4c) != 1) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
             "netreceive: \'send\' only works for TCP",param_11,param_12,(char *)param_13,param_14);
    return;
  }
  if (0 < *(int *)((long)param_9 + 0xe8)) {
    lVar3 = 0;
    do {
      puVar2 = param_12;
      iVar1 = netsend_dosend(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,*(int *)(*(long *)((long)param_9 + 0xf0) + lVar3 * 4),(uint)param_11,
                             param_12,param_13,param_14);
      param_1 = extraout_XMM0_Qa;
      if (iVar1 != 0) {
        param_1 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)param_9,"netreceive: send message failed",extraout_RDX,puVar2,
                           (char *)param_13,param_14);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)((long)param_9 + 0xe8));
  }
  return;
}


