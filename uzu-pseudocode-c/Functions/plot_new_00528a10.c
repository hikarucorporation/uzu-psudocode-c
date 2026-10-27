// Function : plot_new
// Namespace: 
// Entry    : 00528a10
// Prototype: long * plot_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00528a10 - 005292d7


long * plot_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 *param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  long extraout_RAX;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 uVar9;
  float fVar10;
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
  undefined4 uVar12;
  undefined8 uVar11;
  int local_9c;
  
  uVar6 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_plot_class_00715bb0,param_10,param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  plVar2[6] = extraout_RAX;
  puVar3 = gensym("x");
  fielddesc_setfloat_var
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x2a),puVar3);
  puVar3 = gensym("y");
  fielddesc_setfloat_var
            (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x2f),puVar3);
  puVar3 = gensym("w");
  fielddesc_setfloat_var
            (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x34),puVar3);
  *(undefined2 *)(plVar2 + 0x39) = 1;
  *(undefined4 *)(plVar2 + 0x3a) = 0x3f800000;
  plVar2[0x3b] = 0;
  plVar2[0x3c] = 0;
  *(undefined4 *)(plVar2 + 0x3d) = 0;
  *(undefined2 *)(plVar2 + 0x3e) = 1;
  *(undefined4 *)(plVar2 + 0x3f) = 0x3f800000;
  plVar2[0x40] = 0;
  plVar2[0x41] = 0;
  *(undefined4 *)(plVar2 + 0x42) = 0;
  *(undefined2 *)(plVar2 + 0x43) = 1;
  *(undefined4 *)(plVar2 + 0x44) = 0x3f800000;
  plVar2[0x45] = 0;
  plVar2[0x46] = 0;
  *(undefined4 *)(plVar2 + 0x47) = 0;
  local_9c = 1;
LAB_00528bc2:
  iVar5 = (int)uVar6;
  puVar3 = (undefined8 *)atom_getsymbolarg(0,iVar5,(long)param_11);
  __s1 = (char *)*puVar3;
  iVar1 = strcmp(__s1,"curve");
  lVar7 = 1;
  iVar8 = -1;
  if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"-c"), iVar1 == 0)) {
    local_9c = 2;
    goto LAB_00528bb8;
  }
  iVar1 = strcmp(__s1,"-v");
  if ((iVar5 < 2) || (iVar1 != 0)) {
    iVar1 = strcmp(__s1,"-vs");
    if ((iVar5 < 2) || (iVar1 != 0)) {
      iVar1 = strcmp(__s1,"-x");
      if ((iVar5 < 2) || (iVar1 != 0)) {
        iVar1 = strcmp(__s1,"-y");
        if ((iVar5 < 2) || (iVar1 != 0)) {
          iVar1 = strcmp(__s1,"-w");
          if ((iVar5 < 2) || (iVar1 != 0)) {
            iVar1 = strcmp(__s1,"-e");
            if ((iVar5 < 2) || (iVar1 != 0)) {
              iVar1 = strcmp(__s1,"-n");
              if (iVar1 == 0) {
                *(undefined2 *)(plVar2 + 0x39) = 1;
                *(undefined4 *)(plVar2 + 0x3a) = 0;
                plVar2[0x3b] = 0;
                plVar2[0x3c] = 0;
                *(undefined4 *)(plVar2 + 0x3d) = 0;
                goto LAB_00528bb8;
              }
              if (*__s1 == '-') {
                pd_error(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,(long)plVar2,"%s: unknown flag \'%s\'...",
                         *param_9,__s1,param_13,param_14);
                goto LAB_00528bb8;
              }
              if (iVar5 == 0) {
                *(undefined2 *)(plVar2 + 0x25) = 1;
                *(undefined4 *)(plVar2 + 0x26) = 0x3f800000;
                plVar2[0x27] = 0;
                plVar2[0x28] = 0;
                *(undefined4 *)(plVar2 + 0x29) = 0;
                goto LAB_00529028;
              }
              if (iVar5 < 1) {
                *(undefined2 *)(plVar2 + 0x25) = 1;
                *(undefined4 *)(plVar2 + 0x26) = 0;
                plVar2[0x27] = 0;
                plVar2[0x28] = 0;
                *(undefined4 *)(plVar2 + 0x29) = 0;
                *(undefined2 *)(plVar2 + 7) = 1;
                *(undefined4 *)(plVar2 + 8) = 0;
                plVar2[9] = 0;
                plVar2[10] = 0;
                *(undefined4 *)(plVar2 + 0xb) = 0;
                *(undefined2 *)(plVar2 + 0xc) = 1;
                *(undefined4 *)(plVar2 + 0xd) = 0;
                plVar2[0xe] = 0;
                plVar2[0xf] = 0;
                *(undefined4 *)(plVar2 + 0x10) = 0;
                *(undefined2 *)(plVar2 + 0x11) = 1;
                *(undefined4 *)(plVar2 + 0x12) = 0;
                plVar2[0x13] = 0;
                plVar2[0x14] = 0;
                *(undefined4 *)(plVar2 + 0x15) = 0;
                *(undefined2 *)(plVar2 + 0x16) = 1;
                *(undefined4 *)(plVar2 + 0x17) = 0;
                plVar2[0x18] = 0;
                plVar2[0x19] = 0;
                *(undefined4 *)(plVar2 + 0x1a) = 0;
                *(undefined2 *)(plVar2 + 0x1b) = 1;
                *(undefined4 *)(plVar2 + 0x1c) = 0;
                plVar2[0x1d] = 0;
                plVar2[0x1e] = 0;
                *(undefined4 *)(plVar2 + 0x1f) = 0;
                *(undefined2 *)(plVar2 + 0x20) = 1;
                *(undefined4 *)(plVar2 + 0x21) = 0;
                goto LAB_00529109;
              }
              if (*param_11 == 2) {
                *(undefined2 *)(plVar2 + 0x25) = 0x137;
                plVar2[0x26] = *(long *)(param_11 + 2);
                uVar9 = extraout_XMM0_Da_09;
                uVar12 = extraout_XMM0_Db_09;
                if (iVar5 == 1) goto LAB_00529028;
LAB_0052912e:
                if (param_11[4] == 2) {
                  uVar11 = fielddesc_setfloat_var
                                     (CONCAT44(uVar12,uVar9),param_2,param_3,param_4,param_5,param_6
                                      ,param_7,param_8,(undefined2 *)(plVar2 + 7),
                                      *(undefined8 **)(param_11 + 6));
                }
                else {
                  iVar1 = param_11[6];
                  *(undefined2 *)(plVar2 + 7) = 1;
                  *(int *)(plVar2 + 8) = iVar1;
                  uVar11 = 0;
                  plVar2[9] = 0;
                  plVar2[10] = 0;
                  *(undefined4 *)(plVar2 + 0xb) = 0;
                }
                if (iVar5 == 2) goto LAB_00529047;
                if (param_11[8] == 2) {
                  uVar11 = fielddesc_setfloat_var
                                     (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,(undefined2 *)(plVar2 + 0xc),*(undefined8 **)(param_11 + 10))
                  ;
                }
                else {
                  iVar1 = param_11[10];
                  *(undefined2 *)(plVar2 + 0xc) = 1;
                  *(int *)(plVar2 + 0xd) = iVar1;
                  uVar11 = 0;
                  plVar2[0xe] = 0;
                  plVar2[0xf] = 0;
                  *(undefined4 *)(plVar2 + 0x10) = 0;
                }
                if (iVar5 == 3) goto LAB_00529069;
                if (param_11[0xc] == 2) {
                  uVar11 = fielddesc_setfloat_var
                                     (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,(undefined2 *)(plVar2 + 0x11),
                                      *(undefined8 **)(param_11 + 0xe));
                }
                else {
                  iVar1 = param_11[0xe];
                  *(undefined2 *)(plVar2 + 0x11) = 1;
                  *(int *)(plVar2 + 0x12) = iVar1;
                  uVar11 = 0;
                  plVar2[0x13] = 0;
                  plVar2[0x14] = 0;
                  *(undefined4 *)(plVar2 + 0x15) = 0;
                }
                if (iVar5 == 4) goto LAB_00529094;
                if (param_11[0x10] == 2) {
                  uVar11 = fielddesc_setfloat_var
                                     (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,(undefined2 *)(plVar2 + 0x16),
                                      *(undefined8 **)(param_11 + 0x12));
                }
                else {
                  iVar1 = param_11[0x12];
                  *(undefined2 *)(plVar2 + 0x16) = 1;
                  *(int *)(plVar2 + 0x17) = iVar1;
                  uVar11 = 0;
                  plVar2[0x18] = 0;
                  plVar2[0x19] = 0;
                  *(undefined4 *)(plVar2 + 0x1a) = 0;
                }
                if (iVar5 == 5) goto LAB_005290bf;
                if (param_11[0x14] == 2) {
                  uVar11 = fielddesc_setfloat_var
                                     (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,(undefined2 *)(plVar2 + 0x1b),
                                      *(undefined8 **)(param_11 + 0x16));
                }
                else {
                  iVar1 = param_11[0x16];
                  *(undefined2 *)(plVar2 + 0x1b) = 1;
                  *(int *)(plVar2 + 0x1c) = iVar1;
                  uVar11 = 0;
                  plVar2[0x1d] = 0;
                  plVar2[0x1e] = 0;
                  *(undefined4 *)(plVar2 + 0x1f) = 0;
                }
                if (iVar5 == 6) goto LAB_005290ea;
                if (param_11[0x18] == 2) {
                  fielddesc_setfloat_var
                            (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (undefined2 *)(plVar2 + 0x20),*(undefined8 **)(param_11 + 0x1a));
                  return plVar2;
                }
                fVar10 = (float)param_11[0x1a];
              }
              else {
                iVar1 = param_11[2];
                *(undefined2 *)(plVar2 + 0x25) = 1;
                *(int *)(plVar2 + 0x26) = iVar1;
                uVar9 = 0;
                uVar12 = 0;
                plVar2[0x27] = 0;
                plVar2[0x28] = 0;
                *(undefined4 *)(plVar2 + 0x29) = 0;
                if (iVar5 != 1) goto LAB_0052912e;
LAB_00529028:
                *(undefined2 *)(plVar2 + 7) = 1;
                *(undefined4 *)(plVar2 + 8) = 0;
                plVar2[9] = 0;
                plVar2[10] = 0;
                *(undefined4 *)(plVar2 + 0xb) = 0;
LAB_00529047:
                *(undefined2 *)(plVar2 + 0xc) = 1;
                *(undefined4 *)(plVar2 + 0xd) = 0x3f800000;
                plVar2[0xe] = 0;
                plVar2[0xf] = 0;
                *(undefined4 *)(plVar2 + 0x10) = 0;
LAB_00529069:
                *(undefined2 *)(plVar2 + 0x11) = 1;
                *(undefined4 *)(plVar2 + 0x12) = 0x3f800000;
                plVar2[0x13] = 0;
                plVar2[0x14] = 0;
                *(undefined4 *)(plVar2 + 0x15) = 0;
LAB_00529094:
                *(undefined2 *)(plVar2 + 0x16) = 1;
                *(undefined4 *)(plVar2 + 0x17) = 0x3f800000;
                plVar2[0x18] = 0;
                plVar2[0x19] = 0;
                *(undefined4 *)(plVar2 + 0x1a) = 0;
LAB_005290bf:
                *(undefined2 *)(plVar2 + 0x1b) = 1;
                *(undefined4 *)(plVar2 + 0x1c) = 0x3f800000;
                plVar2[0x1d] = 0;
                plVar2[0x1e] = 0;
                *(undefined4 *)(plVar2 + 0x1f) = 0;
LAB_005290ea:
                fVar10 = (float)local_9c;
              }
              *(undefined2 *)(plVar2 + 0x20) = 1;
              *(float *)(plVar2 + 0x21) = fVar10;
LAB_00529109:
              plVar2[0x22] = 0;
              plVar2[0x23] = 0;
              *(undefined4 *)(plVar2 + 0x24) = 0;
              return plVar2;
            }
            if (param_11[4] != 2) {
              iVar1 = param_11[6];
              *(undefined2 *)(plVar2 + 0x43) = 1;
              *(int *)(plVar2 + 0x44) = iVar1;
              plVar4 = plVar2 + 0x45;
              goto LAB_00528e46;
            }
            fielddesc_setfloat_var
                      (CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x43),
                       *(undefined8 **)(param_11 + 6));
          }
          else {
            if (param_11[4] != 2) {
              iVar1 = param_11[6];
              *(undefined2 *)(plVar2 + 0x34) = 1;
              *(int *)(plVar2 + 0x35) = iVar1;
              plVar4 = plVar2 + 0x36;
              goto LAB_00528e46;
            }
            fielddesc_setfloat_var
                      (CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x34),
                       *(undefined8 **)(param_11 + 6));
          }
        }
        else {
          if (param_11[4] != 2) {
            iVar1 = param_11[6];
            *(undefined2 *)(plVar2 + 0x2f) = 1;
            *(int *)(plVar2 + 0x30) = iVar1;
            plVar4 = plVar2 + 0x31;
            goto LAB_00528e46;
          }
          fielddesc_setfloat_var
                    (CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x2f),
                     *(undefined8 **)(param_11 + 6));
        }
      }
      else {
        if (param_11[4] != 2) {
          iVar1 = param_11[6];
          *(undefined2 *)(plVar2 + 0x2a) = 1;
          *(int *)(plVar2 + 0x2b) = iVar1;
          plVar4 = plVar2 + 0x2c;
          goto LAB_00528e46;
        }
        fielddesc_setfloat_var
                  (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x2a),
                   *(undefined8 **)(param_11 + 6));
      }
    }
    else {
      if (param_11[4] != 2) {
        iVar1 = param_11[6];
        *(undefined2 *)(plVar2 + 0x3e) = 1;
        *(int *)(plVar2 + 0x3f) = iVar1;
        plVar4 = plVar2 + 0x40;
        goto LAB_00528e46;
      }
      fielddesc_setfloat_var
                (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x3e),
                 *(undefined8 **)(param_11 + 6));
    }
  }
  else if (param_11[4] == 2) {
    fielddesc_setfloat_var
              (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(undefined2 *)(plVar2 + 0x39),*(undefined8 **)(param_11 + 6))
    ;
  }
  else {
    iVar1 = param_11[6];
    *(undefined2 *)(plVar2 + 0x39) = 1;
    *(int *)(plVar2 + 0x3a) = iVar1;
    plVar4 = plVar2 + 0x3b;
LAB_00528e46:
    *plVar4 = 0;
    plVar4[1] = 0;
    *(undefined4 *)(plVar4 + 2) = 0;
  }
  lVar7 = 2;
  iVar8 = -2;
LAB_00528bb8:
  uVar6 = (ulong)(uint)(iVar5 + iVar8);
  param_11 = param_11 + lVar7 * 4;
  goto LAB_00528bc2;
}


