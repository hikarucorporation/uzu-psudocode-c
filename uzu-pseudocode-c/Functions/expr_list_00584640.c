// Function : expr_list
// Namespace: 
// Entry    : 00584640
// Prototype: undefined expr_list(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00584640 - 00584898


void expr_list(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
              undefined8 param_14)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  
  if (0 < (int)param_11) {
    uVar8 = 100;
    if (param_11 < 100) {
      uVar8 = (ulong)param_11;
    }
    uVar6 = 1;
    lVar5 = 0;
    lVar7 = param_12;
    do {
      if (*(int *)(param_12 + lVar5) == 2) {
        lVar2 = *(long *)(param_9 + 0x6a0 + lVar5 * 2);
        if (lVar2 != 0) {
          if (lVar2 == 0xd) {
            *(undefined8 *)(param_9 + 0x698 + lVar5 * 2) = *(undefined8 *)(param_12 + 8 + lVar5);
          }
          else {
LAB_0058467a:
            param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,"expr: type mismatch for inlet %d",uVar6,lVar7,param_13,
                               param_14);
          }
        }
      }
      else if ((*(int *)(param_12 + lVar5) == 1) &&
              (lVar2 = *(long *)(param_9 + 0x6a0 + lVar5 * 2), lVar2 != 0)) {
        if (lVar2 == 0xb) {
          *(long *)(param_9 + 0x698 + lVar5 * 2) = (long)*(float *)(param_12 + 8 + lVar5);
        }
        else {
          if (lVar2 != 0xc) goto LAB_0058467a;
          uVar1 = *(uint *)(param_12 + 8 + lVar5);
          param_1 = (ulong)uVar1;
          *(uint *)(param_9 + 0x698 + lVar5 * 2) = uVar1;
        }
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar5 = lVar5 + 0x10;
    } while (uVar8 * 0x10 != lVar5);
  }
  if (((*(byte *)(param_9 + 0x30) & 6) == 0) && (0 < (int)*(uint *)(param_9 + 0x38))) {
    uVar8 = (ulong)*(uint *)(param_9 + 0x38) + 1;
    do {
      uVar6 = (ulong)((int)uVar8 - 2);
      lVar7 = uVar6 * 0x20;
      pfVar9 = (float *)(lVar7 + 0x1318 + param_9);
      ex_eval(param_1,param_2,param_5,param_6,param_7,param_8,param_9,
              *(ulong **)(param_9 + 0x378 + uVar6 * 8),pfVar9,(undefined *)0x0,param_13,param_14);
      uVar3 = *(undefined8 *)(param_9 + 0x1320 + lVar7);
      switch(uVar3) {
      case 1:
        outlet_float((ulong)(uint)(float)*(long *)pfVar9,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8,*(long **)(param_9 + 0x50 + uVar6 * 8));
        param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        break;
      case 2:
        outlet_float((ulong)(uint)*pfVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long **)(param_9 + 0x50 + uVar6 * 8));
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        break;
      default:
        param_1 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,param_9,
                           "expr:\'%s\': bang: unrecognized result %ld\n",
                           *(undefined8 *)(param_9 + 0x40),uVar3,param_13,param_14);
        break;
      case 7:
        plVar4 = *(long **)(param_9 + 0x50 + uVar6 * 8);
        if ((*(byte *)(param_9 + 0x1330 + lVar7) & 1) == 0) {
          outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,plVar4);
          param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        }
        else {
          gensym(*(char **)pfVar9);
          outlet_symbol(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,plVar4);
          free(*(void **)pfVar9);
          param_1 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
        }
        break;
      case 0xd:
        plVar4 = *(long **)(param_9 + 0x50 + uVar6 * 8);
        if (*(long *)(param_9 + 0x698 + *(long *)pfVar9 * 0x20) == 0) {
          gensym("");
          outlet_symbol(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,plVar4);
          param_1 = CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07);
        }
        else {
          outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,plVar4);
          param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
        }
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  return;
}


