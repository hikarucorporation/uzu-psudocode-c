// Function : openpanel_new
// Namespace: 
// Entry    : 0054f8d0
// Prototype: long * openpanel_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054f8d0 - 0054f975


long * openpanel_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long extraout_RAX;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar7;
  char local_48 [56];
  
  fVar6 = (float)param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,openpanel_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar4 = 0;
  iVar5 = (int)fVar6;
  uVar7 = 0;
  if (DAT_005d9078 < fVar6) {
    iVar5 = 0;
  }
  if (fVar6 < 0.0) {
    iVar5 = 0;
  }
  *(int *)(plVar1 + 8) = iVar5;
  sprintf(local_48,"d%lx",plVar1);
  puVar2 = gensym(local_48);
  plVar1[7] = (long)puVar2;
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar7,fVar6),param_3,
                    param_4,param_5,param_6,param_7,param_8);
  plVar1[6] = extraout_RAX;
  pd_bind(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar7,fVar6),param_3,param_4,
          param_5,param_6,param_7,param_8,plVar1,plVar1[7],extraout_RDX,uVar4,param_13,param_14);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar7,fVar6),param_3,param_4
             ,param_5,param_6,param_7,param_8,(long)plVar1,*plVar3 + 0x90,extraout_RDX_00,uVar4,
             param_13,param_14);
  return plVar1;
}


