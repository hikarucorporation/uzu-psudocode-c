// Function : signal_setborrowed
// Namespace: 
// Entry    : 004f67c0
// Prototype: undefined signal_setborrowed(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 * param_9, undefined4 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f67c0 - 004f6870


void signal_setborrowed(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined4 *param_9,undefined4 *param_10,undefined8 param_11,
                       undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined1 unaff_BL;
  undefined4 *puVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  puVar2 = param_10;
  if ((param_9[8] == 0) || (*(long *)(param_9 + 10) != 0)) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "signal_setborrowed",param_10,param_11,param_12,param_13,param_14,unaff_BL);
    param_11 = extraout_RDX;
  }
  if (param_9 == param_10) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"signal_setborrowed 2",
        puVar2,param_11,param_12,param_13,param_14,unaff_BL);
  }
  *(undefined4 **)(param_9 + 10) = param_10;
  *(undefined8 *)(param_9 + 2) = *(undefined8 *)(param_10 + 2);
  *param_9 = *param_10;
  param_9[5] = param_10[5];
  param_9[4] = param_10[4];
  param_9[6] = param_10[6];
  param_9[0x10] = param_10[0x10];
  param_10[7] = param_10[7] + 1;
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*(long *)(*plVar1 + 0x40) + 0x134) == 0) {
    return;
  }
  post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7,
       param_8,"set borrowed %lx: from %lx vec %lx");
  return;
}


