// Function : signalinlet_new
// Namespace: 
// Entry    : 00538450
// Prototype: undefined signalinlet_new(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00538450 - 005384ef


void signalinlet_new(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 *puVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *plVar2;
  lVar1 = lVar4 + 0xf0;
  plVar3 = pd_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,inlet_class,param_10,extraout_RDX,param_12,param_13,
                  param_14);
  plVar3[2] = param_9;
  plVar3[3] = param_9;
  if (*plVar2 == lVar4) {
    *(undefined4 *)(plVar3 + 5) = 0;
  }
  else {
    plVar3[5] = lVar1;
  }
  plVar3[4] = lVar1;
  plVar3[1] = 0;
  lVar1 = *(long *)(param_9 + 0x20);
  if (*(long *)(param_9 + 0x20) == 0) {
    puVar5 = (undefined8 *)(param_9 + 0x20);
  }
  else {
    do {
      lVar4 = lVar1;
      lVar1 = *(long *)(lVar4 + 8);
    } while (lVar1 != 0);
    puVar5 = (undefined8 *)(lVar4 + 8);
  }
  *puVar5 = plVar3;
  *(undefined4 *)(plVar3 + 5) = param_1;
  return;
}


