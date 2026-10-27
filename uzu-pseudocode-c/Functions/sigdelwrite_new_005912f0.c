// Function : sigdelwrite_new
// Namespace: 
// Entry    : 005912f0
// Prototype: long * sigdelwrite_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005912f0 - 00591372


long * sigdelwrite_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 *param_9,undefined8 param_10,undefined8 param_11,
                      undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar5;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigdelwrite_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar3 = extraout_RDX;
  uVar4 = extraout_XMM0_Da;
  uVar5 = extraout_XMM0_Db;
  if (*(char *)*param_9 == '\0') {
    param_9 = gensym("delwrite~");
    uVar3 = extraout_RDX_00;
    uVar4 = extraout_XMM0_Da_00;
    uVar5 = extraout_XMM0_Db_00;
  }
  pd_bind(CONCAT44(uVar5,uVar4),param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
          (long)param_9,uVar3,param_12,param_13,param_14);
  plVar1[6] = (long)param_9;
  *(int *)(plVar1 + 7) = (int)param_1;
  *(undefined4 *)(plVar1 + 8) = 0;
  pvVar2 = getbytes(0x10);
  plVar1[9] = (long)pvVar2;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  *(undefined8 *)((long)plVar1 + 100) = 0;
  return plVar1;
}


