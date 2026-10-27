// Function : blocksize_new
// Namespace: 
// Entry    : 00562240
// Prototype: long * blocksize_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00562240 - 0056230d


long * blocksize_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar6;
  undefined8 extraout_RDX_01;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,blocksize_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar1 + 9) = 0;
  *(undefined4 *)(plVar1 + 7) = 0;
  sys_getsr();
  *(undefined4 *)((long)plVar1 + 0x44) = extraout_XMM0_Da;
  *(undefined4 *)(plVar1 + 8) = extraout_XMM0_Da;
  if ((int)param_10 != 0) {
    uVar6 = extraout_RDX;
    uVar7 = extraout_XMM0_Da;
    uVar8 = extraout_XMM0_Db;
    if (*param_11 != 2) {
LAB_005622b0:
      pd_error(CONCAT44(uVar8,uVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (long)plVar1,"[blocksize~]: improper args",uVar6,param_12,param_13,param_14);
      return (long *)0x0;
    }
    puVar2 = (undefined8 *)atom_getsymbolarg(0,(int)param_10,(long)param_11);
    puVar3 = gensym("-ms");
    if (puVar2 == puVar3) {
      uVar7 = 1;
    }
    else {
      puVar3 = gensym("-hz");
      uVar6 = extraout_RDX_00;
      uVar7 = extraout_XMM0_Da_00;
      uVar8 = extraout_XMM0_Db_00;
      if (puVar2 != puVar3) goto LAB_005622b0;
      uVar7 = 2;
    }
    *(undefined4 *)(plVar1 + 9) = uVar7;
  }
  lVar4 = clock_new(plVar1,blocksize_tick);
  plVar1[6] = lVar4;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,*plVar5 + 0x78,extraout_RDX_01,param_12,param_13,
             param_14);
  return plVar1;
}


