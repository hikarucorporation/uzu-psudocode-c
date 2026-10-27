// Function : unpack_list
// Namespace: 
// Entry    : 0054da60
// Prototype: undefined unpack_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0054da60 - 0054db0f


void unpack_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,ulong param_11,long param_12,char *param_13,
                undefined8 param_14)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_var;
  undefined4 uVar6;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  uVar3 = param_11;
  if ((long)*(ulong *)(param_9 + 0x30) < (long)(int)param_11) {
    uVar3 = *(ulong *)(param_9 + 0x30);
  }
  uVar9 = uVar3 & 0xffffffff;
  if ((int)uVar3 != 0) {
    lVar2 = *(long *)(param_9 + 0x38);
    lVar7 = (long)(int)uVar3 * 0x10 + -8;
    lVar4 = param_12;
    do {
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar8;
      iVar1 = *(int *)(lVar2 + -8 + lVar7);
      if (iVar1 == *(int *)(param_12 + -8 + lVar7)) {
        if (iVar1 == 2) {
          outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long **)(lVar2 + lVar7));
          param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          uVar5 = extraout_EDX_01;
          uVar6 = extraout_var_01;
        }
        else if (iVar1 == 1) {
          outlet_float((ulong)*(uint *)(param_12 + lVar7),param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8,*(long **)(lVar2 + lVar7));
          param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          uVar5 = extraout_EDX_00;
          uVar6 = extraout_var_00;
        }
        else {
          outlet_pointer(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(long **)(lVar2 + lVar7));
          param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          uVar5 = extraout_EDX_02;
          uVar6 = extraout_var_02;
        }
      }
      else {
        param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           "unpack: type mismatch",param_11,lVar4,param_13,param_14);
        uVar5 = extraout_EDX;
        uVar6 = extraout_var;
      }
      param_11 = CONCAT44(uVar6,uVar5);
      lVar7 = lVar7 + -0x10;
    } while (uVar8 != 0);
  }
  return;
}


