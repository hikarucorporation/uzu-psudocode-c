// Function : netsend_new
// Namespace: 
// Entry    : 00581560
// Prototype: long * netsend_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00581560 - 0058172a


long * netsend_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14)

{
  int *piVar1;
  int *piVar2;
  char *__s1;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar6;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  uint uVar7;
  ulong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db_03;
  
  uVar8 = param_10 & 0xffffffff;
  uVar7 = (uint)param_10;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,netsend_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar4,*plVar5 + 0x78,extraout_RDX,param_12,param_13,param_14);
  uVar9 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  *(undefined8 *)((long)plVar4 + 0x4c) = 1;
  if (uVar7 != 0) {
    if (*param_11 == 1) {
      *(uint *)((long)plVar4 + 0x4c) = ((float)param_11[2] != 0.0) + 1;
    }
    else {
      uVar6 = extraout_RDX_00;
      if (*param_11 == 2) {
        do {
          uVar7 = (uint)uVar8;
          __s1 = (char *)**(undefined8 **)(param_11 + 2);
          if (*__s1 != '-') break;
          iVar3 = strcmp(__s1,"-b");
          uVar9 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          if (iVar3 == 0) {
            *(undefined4 *)(plVar4 + 10) = 1;
            uVar6 = extraout_RDX_01;
          }
          else {
            iVar3 = strcmp(__s1,"-u");
            uVar9 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
            if (iVar3 == 0) {
              *(undefined4 *)((long)plVar4 + 0x4c) = 2;
              uVar6 = extraout_RDX_02;
            }
            else {
              uVar9 = pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                               "netsend: unknown flag ...",extraout_RDX_02,param_12,param_13,
                               param_14);
              uVar9 = postatom(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar7,
                               param_11,extraout_RDX_03,param_12,param_13,param_14);
              uVar9 = endpost(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
              uVar6 = extraout_RDX_04;
            }
          }
          if (uVar7 == 1) goto LAB_005816a3;
          piVar1 = param_11 + 4;
          uVar7 = uVar7 - 1;
          uVar8 = (ulong)uVar7;
          piVar2 = param_11 + 4;
          param_11 = piVar1;
        } while (*piVar2 == 2);
      }
      uVar9 = pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                       "netsend: extra arguments ignored:",uVar6,param_12,param_13,param_14);
      uVar9 = postatom(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar7,param_11,
                       extraout_RDX_05,param_12,param_13,param_14);
      endpost(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
LAB_005816a3:
  *(undefined4 *)(plVar4 + 9) = 0xffffffff;
  plVar4[0xb] = 0;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar4,*plVar5 + 0xd8,extraout_RDX_06,
                      param_12,param_13,param_14);
  plVar4[6] = (long)plVar5;
  plVar4[7] = 0;
  plVar4[8] = 0;
  *(undefined4 *)(plVar4 + 0x1c) = 0x41200000;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  return plVar4;
}


