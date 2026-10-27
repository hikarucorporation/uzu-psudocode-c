// Function : trigger_list
// Namespace: 
// Entry    : 0054ddd0
// Prototype: undefined trigger_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0054ddd0 - 0054dfce


void trigger_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 undefined8 *param_10,undefined8 param_11,int *param_12,uint *param_13,
                 uint *param_14)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  int iVar8;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  
  uVar6 = *(ulong *)(param_9 + 0x30);
  if ((int)uVar6 != 0) {
    uVar5 = (uint)param_11;
    piVar3 = (int *)((long)(int)uVar6 * 0x10);
    if (uVar5 == 0) {
      puVar7 = (undefined8 *)((long)piVar3 + *(long *)(param_9 + 0x38) + -8);
      do {
        switch(*(undefined4 *)(puVar7 + -1)) {
        case 0:
          outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long *)*puVar7);
          param_1 = CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_08);
          param_11 = extraout_RDX_07;
          break;
        case 1:
          outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)*puVar7);
          param_1 = CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_09);
          param_11 = extraout_RDX_08;
          break;
        case 2:
          plVar1 = (long *)*puVar7;
          uVar9 = __tls_get_addr(&PTR_007159b0);
          outlet_symbol(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
          param_1 = CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_10);
          param_11 = extraout_RDX_09;
          break;
        case 3:
          param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,"trigger: bad pointer",param_11,piVar3,(char *)param_13,param_14);
          param_11 = extraout_RDX_10;
          break;
        case 4:
          plVar1 = (long *)*puVar7;
          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
          piVar3 = param_12;
          outlet_list(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_11),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,plVar1,*plVar2 + 0xc0,0,param_12,
                      (char *)param_13,param_14);
          param_1 = CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_12);
          param_11 = extraout_RDX_11;
          break;
        default:
          piVar3 = param_12;
          outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long *)*puVar7,param_10,0,param_12,param_13,param_14);
          param_1 = CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_07);
          param_11 = extraout_RDX_06;
        }
        puVar7 = puVar7 + -2;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 != 0);
    }
    else {
      puVar7 = (undefined8 *)((long)piVar3 + *(long *)(param_9 + 0x38) + -8);
      do {
        switch(*(undefined4 *)(puVar7 + -1)) {
        case 0:
          outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long *)*puVar7);
          param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          param_11 = extraout_RDX_00;
          break;
        case 1:
          plVar1 = (long *)*puVar7;
          iVar8 = atom_getfloat(param_12);
          outlet_float(CONCAT44(extraout_XMM0_Db_01,iVar8),param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8,plVar1);
          param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01);
          param_11 = extraout_RDX_01;
          break;
        case 2:
          plVar1 = (long *)*puVar7;
          atom_getsymbol(param_12);
          outlet_symbol(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,plVar1);
          param_1 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03);
          param_11 = extraout_RDX_02;
          break;
        case 3:
          if (*param_12 == 3) {
            outlet_pointer(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long *)*puVar7);
            param_1 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04);
            param_11 = extraout_RDX_03;
          }
          else {
            param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,"trigger: bad pointer",param_11,piVar3,(char *)param_13,
                               param_14);
            param_11 = extraout_RDX_05;
          }
          break;
        case 4:
          plVar1 = (long *)*puVar7;
          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
          piVar3 = param_12;
          outlet_list(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_05),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,plVar1,*plVar2 + 0xc0,uVar5,param_12,
                      (char *)param_13,param_14);
          param_1 = CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_06);
          param_11 = extraout_RDX_04;
          break;
        default:
          piVar3 = param_12;
          outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long *)*puVar7,param_10,uVar5,param_12,param_13,param_14);
          param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          param_11 = extraout_RDX;
        }
        puVar7 = puVar7 + -2;
        uVar4 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar4;
      } while (uVar4 != 0);
    }
  }
  return;
}


