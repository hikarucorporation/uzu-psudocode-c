// Function : plot_readownertemplate
// Namespace: 
// Entry    : 00526c90
// Prototype: undefined8 plot_readownertemplate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, undefined8 * param_12, char * param_13, undefined4 * param_14, undefined4 * param_15, undefined4 * param_16, undefined4 * param_17, undefined4 * param_18, undefined4 * param_19, undefined4 * param_20, undefined4 * param_21, long * param_22, long * param_23, long * param_24)
// Body     : 00526c90 - 00526ec8


undefined8
plot_readownertemplate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long param_10,long param_11,undefined8 *param_12,char *param_13,undefined4 *param_14,
          undefined4 *param_15,undefined4 *param_16,undefined4 *param_17,undefined4 *param_18,
          undefined4 *param_19,undefined4 *param_20,undefined4 *param_21,long *param_22,
          long *param_23,long *param_24)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined1 in_stack_ffffffffffffffb8;
  
  if ((*(char *)(param_9 + 0x128) == '7') && (*(char *)(param_9 + 0x129) != '\0')) {
    if (param_11 == 0) {
      param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "template_find_field",param_10,0,param_12,param_13,param_14,
                    in_stack_ffffffffffffffb8);
      puVar3 = *(undefined8 **)(param_9 + 0x130);
      puVar4 = param_12;
    }
    else {
      puVar3 = *(undefined8 **)(param_9 + 0x130);
      uVar1 = *(uint *)(param_11 + 0x18);
      puVar4 = (undefined8 *)(ulong)uVar1;
      if (0 < (int)uVar1) {
        puVar5 = (undefined8 *)(*(long *)(param_11 + 0x20) + 0x10);
        puVar4 = (undefined8 *)((long)(ulong)uVar1 * 8);
        puVar7 = (undefined8 *)0x0;
        do {
          if ((undefined8 *)puVar5[-1] == puVar3) {
            if (*(int *)(puVar5 + -2) == 3) {
              uVar6 = *puVar5;
              uVar2 = *(undefined8 *)(param_10 + (int)puVar7);
              pcVar8 = param_13;
              puVar9 = param_14;
              uVar10 = fielddesc_getfloat(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                          param_8,(char *)(param_9 + 0x60),param_11,param_10,1,
                                          param_13,param_14);
              *param_14 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db,uVar10),param_2,param_3,param_4,
                                          param_5,param_6,param_7,param_8,(char *)(param_9 + 0x88),
                                          param_11,param_10,1,pcVar8,puVar9);
              *param_15 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_00,uVar10),param_2,param_3,
                                          param_4,param_5,param_6,param_7,param_8,
                                          (char *)(param_9 + 0xd8),param_11,param_10,1,pcVar8,puVar9
                                         );
              *param_16 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_01,uVar10),param_2,param_3,
                                          param_4,param_5,param_6,param_7,param_8,
                                          (char *)(param_9 + 0xb0),param_11,param_10,1,pcVar8,puVar9
                                         );
              *param_17 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_02,uVar10),param_2,param_3,
                                          param_4,param_5,param_6,param_7,param_8,
                                          (char *)(param_9 + 0x100),param_11,param_10,1,pcVar8,
                                          puVar9);
              *param_18 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_03,uVar10),param_2,param_3,
                                          param_4,param_5,param_6,param_7,param_8,
                                          (char *)(param_9 + 0x1c8),param_11,param_10,1,pcVar8,
                                          puVar9);
              *param_19 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_04,uVar10),param_2,param_3,
                                          param_4,param_5,param_6,param_7,param_8,
                                          (char *)(param_9 + 0x1f0),param_11,param_10,1,pcVar8,
                                          puVar9);
              *param_20 = uVar10;
              uVar10 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_05,uVar10),param_2,param_3,
                                          param_4,param_5,param_6,param_7,param_8,
                                          (char *)(param_9 + 0x218),param_11,param_10,1,pcVar8,
                                          puVar9);
              *param_21 = uVar10;
              *param_12 = uVar6;
              *(undefined8 *)param_13 = uVar2;
              *param_22 = param_9 + 0x150;
              *param_23 = param_9 + 0x178;
              *param_24 = param_9 + 0x1a0;
              return 0;
            }
            uVar6 = *puVar3;
            pcVar8 = "plot: %s: not an array";
            goto LAB_00526d36;
          }
          puVar5 = puVar5 + 3;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar7);
      }
    }
    uVar6 = *puVar3;
    pcVar8 = "plot: %s: no such field";
LAB_00526d36:
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar8,uVar6,puVar4,
             param_13,param_14);
  }
  else {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "plot: needs an array field",param_11,param_12,param_13,param_14);
  }
  return 0xffffffff;
}


