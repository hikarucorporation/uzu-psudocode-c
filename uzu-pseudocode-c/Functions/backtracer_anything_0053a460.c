// Function : backtracer_anything
// Namespace: 
// Entry    : 0053a460
// Prototype: undefined backtracer_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0053a460 - 0053a55e


void backtracer_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,double param_5,double param_6,double param_7,undefined8 param_8,
                        long param_9,undefined8 *param_10,uint param_11,int *param_12,uint *param_13
                        ,uint *param_14)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int extraout_XMM0_Da;
  int iVar6;
  int extraout_XMM0_Db;
  int iVar8;
  undefined8 uVar7;
  
  plVar5 = getbytes(0x70);
  plVar5[0xd] = (long)backtracer_stack;
  backtracer_stack = plVar5;
  plVar5[1] = (long)param_10;
  *(uint *)(plVar5 + 2) = param_11;
  iVar6 = extraout_XMM0_Da;
  iVar8 = extraout_XMM0_Db;
  if (0 < (int)param_11) {
    uVar4 = 5;
    if (param_11 < 5) {
      uVar4 = param_11;
    }
    iVar6 = *param_12;
    iVar8 = param_12[1];
    iVar2 = param_12[2];
    iVar3 = param_12[3];
    *(int *)(plVar5 + 3) = iVar6;
    *(int *)((long)plVar5 + 0x1c) = iVar8;
    *(int *)(plVar5 + 4) = iVar2;
    *(int *)((long)plVar5 + 0x24) = iVar3;
    if (uVar4 != 1) {
      iVar6 = param_12[4];
      iVar8 = param_12[5];
      iVar2 = param_12[6];
      iVar3 = param_12[7];
      *(int *)(plVar5 + 5) = iVar6;
      *(int *)((long)plVar5 + 0x2c) = iVar8;
      *(int *)(plVar5 + 6) = iVar2;
      *(int *)((long)plVar5 + 0x34) = iVar3;
      if (uVar4 != 2) {
        iVar6 = param_12[8];
        iVar8 = param_12[9];
        iVar2 = param_12[10];
        iVar3 = param_12[0xb];
        *(int *)(plVar5 + 7) = iVar6;
        *(int *)((long)plVar5 + 0x3c) = iVar8;
        *(int *)(plVar5 + 8) = iVar2;
        *(int *)((long)plVar5 + 0x44) = iVar3;
        if (uVar4 != 3) {
          iVar6 = param_12[0xc];
          iVar8 = param_12[0xd];
          iVar2 = param_12[0xe];
          iVar3 = param_12[0xf];
          *(int *)(plVar5 + 9) = iVar6;
          *(int *)((long)plVar5 + 0x4c) = iVar8;
          *(int *)(plVar5 + 10) = iVar2;
          *(int *)((long)plVar5 + 0x54) = iVar3;
          if (uVar4 != 4) {
            iVar6 = param_12[0x10];
            iVar8 = param_12[0x11];
            iVar2 = param_12[0x12];
            iVar3 = param_12[0x13];
            *(int *)(plVar5 + 0xb) = iVar6;
            *(int *)((long)plVar5 + 0x5c) = iVar8;
            *(int *)(plVar5 + 0xc) = iVar2;
            *(int *)((long)plVar5 + 100) = iVar3;
          }
        }
      }
    }
  }
  uVar7 = CONCAT44(iVar8,iVar6);
  *plVar5 = param_9;
  if (*(int *)PTR_backtracer_tracing_007157a0 != 0) {
    uVar7 = backtracer_printmsg(CONCAT44(iVar8,iVar6),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,*(undefined8 **)(param_9 + 0x10),param_10,param_11,
                                param_12,param_13,param_14);
  }
  for (puVar1 = *(undefined8 **)(param_9 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    uVar7 = pd_typedmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (long *)puVar1[1],param_10,param_11,param_12,param_13,param_14);
  }
  backtracer_stack = (long *)plVar5[0xd];
  freebytes(plVar5);
  return;
}


