// Function : snake_tilde_new
// Namespace: 
// Entry    : 00597e10
// Prototype: long * snake_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597e10 - 0059801a


long * snake_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,uint param_10,int *param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar7;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  
  uVar5 = (ulong)param_10;
  if ((param_10 == 0) || (*param_11 != 2)) {
    fVar7 = (float)atom_getfloatarg(0,param_10,(long)param_11);
    plVar3 = pd_new(CONCAT44(extraout_XMM0_Db_00,fVar7),param_2,param_3,param_4,param_5,param_6,
                    param_7,param_8,snake_in_tilde_class,uVar5,extraout_RDX,param_12,param_13,
                    param_14);
    uVar5 = 2;
    if (0 < (int)fVar7) {
      uVar5 = (ulong)(uint)(int)fVar7;
    }
    *(uint *)((long)plVar3 + 0x34) = (uint)uVar5;
    if (1 < (uint)uVar5) {
      iVar1 = 1;
      do {
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        uVar5 = *plVar2 + 0xf0;
        inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,(long)plVar3,(long)plVar3,uVar5,uVar5,param_13,param_14);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((long)plVar3 + 0x34));
    }
  }
  else {
    __s1 = (char *)**(undefined8 **)(param_11 + 2);
    iVar1 = strcmp(__s1,"in");
    if (iVar1 != 0) {
      iVar1 = strcmp(__s1,"out");
      if (iVar1 == 0) {
        fVar7 = (float)atom_getfloatarg(1,param_10,(long)param_11);
        plVar3 = pd_new(CONCAT44(extraout_XMM0_Db_05,fVar7),param_2,param_3,param_4,param_5,param_6,
                        param_7,param_8,snake_out_tilde_class,uVar5,extraout_RDX_02,param_12,
                        param_13,param_14);
        uVar4 = (uint)fVar7;
        uVar5 = (ulong)uVar4;
        uVar6 = 2;
        if (0 < (int)uVar4) {
          uVar6 = uVar4;
        }
        *(uint *)((long)plVar3 + 0x34) = uVar6;
        iVar1 = 0;
        do {
          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
          outlet_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)plVar3,*plVar2 + 0xf0,extraout_RDX_03,
                     uVar5,param_13,param_14);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((long)plVar3 + 0x34));
      }
      else {
        plVar3 = (long *)0x0;
        pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,0,"list %s: unknown function",__s1,param_12,param_13,param_14);
      }
      goto LAB_00597f0c;
    }
    iVar1 = 1;
    fVar7 = (float)atom_getfloatarg(1,param_10,(long)param_11);
    plVar3 = pd_new(CONCAT44(extraout_XMM0_Db_03,fVar7),param_2,param_3,param_4,param_5,param_6,
                    param_7,param_8,snake_in_tilde_class,uVar5,extraout_RDX_01,param_12,param_13,
                    param_14);
    uVar5 = 2;
    if (0 < (int)fVar7) {
      uVar5 = (ulong)(uint)(int)fVar7;
    }
    *(uint *)((long)plVar3 + 0x34) = (uint)uVar5;
    if (1 < (uint)uVar5) {
      do {
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        uVar5 = *plVar2 + 0xf0;
        inlet_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,(long)plVar3,(long)plVar3,uVar5,uVar5,param_13,param_14);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((long)plVar3 + 0x34));
    }
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar3,*plVar2 + 0xf0,extraout_RDX_00,uVar5,param_13,
             param_14);
LAB_00597f0c:
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(long **)(*plVar2 + 0x58) = plVar3;
  return plVar3;
}


