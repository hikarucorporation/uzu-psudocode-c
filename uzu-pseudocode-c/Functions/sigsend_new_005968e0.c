// Function : sigsend_new
// Namespace: 
// Entry    : 005968e0
// Prototype: long * sigsend_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005968e0 - 00596957


long * sigsend_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  long extraout_RAX;
  undefined8 extraout_RDX;
  ulong uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigsend_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (*(char *)*param_9 != '\0') {
    pd_bind(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,plVar1,(long)param_9,extraout_RDX,param_12,param_13,param_14);
  }
  plVar1[6] = (long)param_9;
  uVar3 = 1;
  if (0 < (int)(float)param_1) {
    uVar3 = (ulong)(uint)(int)(float)param_1;
  }
  *(int *)((long)plVar1 + 0x44) = (int)uVar3;
  *(int *)(plVar1 + 9) = (int)uVar3;
  *(undefined4 *)(plVar1 + 8) = 1;
  pvVar2 = getbytes(uVar3 << 2);
  plVar1[10] = (long)pvVar2;
  *(undefined4 *)((long)plVar1 + 0x4c) = 0;
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  plVar1[7] = extraout_RAX;
  return plVar1;
}


