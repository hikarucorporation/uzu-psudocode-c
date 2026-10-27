// Function : curve_new
// Namespace: 
// Entry    : 00528310
// Prototype: long * curve_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00528310 - 00528803


long * curve_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long extraout_RAX;
  undefined2 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  
  uVar10 = param_10 & 0xffffffff;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_curve_class_00715840,param_10,param_11,param_12,param_13,param_14);
  pcVar2 = (char *)*param_9;
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  plVar4[0x1d] = extraout_RAX;
  bVar12 = *pcVar2 == 'f';
  uVar9 = bVar12 + 2;
  if (pcVar2[(ulong)bVar12 * 2 + 4] != 'c') {
    uVar9 = (uint)bVar12;
  }
  *(undefined2 *)(plVar4 + 0x16) = 1;
  *(undefined4 *)(plVar4 + 0x17) = 0x3f800000;
  uVar13 = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  *(undefined4 *)(plVar4 + 0x1a) = 0;
  if ((int)param_10 != 0) {
    do {
      iVar8 = (int)uVar10;
      iVar3 = *param_11;
      if ((iVar3 != 2) || (pcVar2 = (char *)**(undefined8 **)(param_11 + 2), *pcVar2 != '-')) {
        *(uint *)(plVar4 + 6) = uVar9;
        piVar7 = param_11;
        if ((uVar9 & 1) == 0) goto LAB_00528556;
        piVar7 = param_11 + 4;
        if (iVar8 < 1) {
          *(undefined2 *)(plVar4 + 7) = 1;
          *(undefined4 *)(plVar4 + 8) = 0;
          plVar4[9] = 0;
          plVar4[10] = 0;
          *(undefined4 *)(plVar4 + 0xb) = 0;
          goto LAB_005286c7;
        }
        iVar8 = iVar8 + -1;
        if (iVar3 == 2) {
          uVar13 = fielddesc_setfloat_var
                             (uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (undefined2 *)(plVar4 + 7),*(undefined8 **)(param_11 + 2));
        }
        else {
          iVar3 = param_11[2];
          *(undefined2 *)(plVar4 + 7) = 1;
          *(int *)(plVar4 + 8) = iVar3;
          uVar13 = 0;
          plVar4[9] = 0;
          plVar4[10] = 0;
          *(undefined4 *)(plVar4 + 0xb) = 0;
        }
        goto LAB_00528578;
      }
      iVar3 = strcmp(pcVar2,"-n");
      if (iVar3 == 0) {
        *(undefined2 *)(plVar4 + 0x16) = 1;
        *(undefined4 *)(plVar4 + 0x17) = 0;
        uVar13 = 0;
        plVar4[0x18] = 0;
        plVar4[0x19] = 0;
        *(undefined4 *)(plVar4 + 0x1a) = 0;
      }
      else {
        iVar3 = strcmp(pcVar2,"-v");
        if ((iVar3 == 0) && (1 < iVar8)) {
          if (param_11[4] == 2) {
            uVar13 = fielddesc_setfloat_var
                               (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,
                                (undefined2 *)(plVar4 + 0x16),*(undefined8 **)(param_11 + 6));
          }
          else {
            iVar3 = param_11[6];
            *(undefined2 *)(plVar4 + 0x16) = 1;
            *(int *)(plVar4 + 0x17) = iVar3;
            uVar13 = 0;
            plVar4[0x18] = 0;
            plVar4[0x19] = 0;
            *(undefined4 *)(plVar4 + 0x1a) = 0;
          }
          iVar8 = iVar8 + -1;
          param_11 = param_11 + 4;
        }
        else {
          iVar3 = strcmp(pcVar2,"-x");
          uVar13 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          if (iVar3 == 0) {
            uVar9 = uVar9 | 0xc;
          }
          else {
            iVar3 = strcmp(pcVar2,"-xr");
            uVar13 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
            if (iVar3 == 0) {
              uVar9 = uVar9 | 4;
            }
            else {
              iVar3 = strcmp(pcVar2,"-xe");
              uVar13 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
              if (iVar3 == 0) {
                uVar9 = uVar9 | 8;
              }
              else {
                iVar3 = strcmp(pcVar2,"-xv");
                uVar13 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
                if (iVar3 == 0) {
                  uVar9 = uVar9 | 0x10;
                }
                else {
                  uVar13 = pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,
                                    param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                                    "%s: unknown flag \'%s\'...",*param_9,pcVar2,param_13,param_14);
                }
              }
            }
          }
        }
      }
      param_11 = param_11 + 4;
      uVar10 = (ulong)(iVar8 - 1U);
    } while (iVar8 - 1U != 0);
  }
  *(uint *)(plVar4 + 6) = uVar9;
  iVar8 = 0;
  piVar7 = param_11;
LAB_00528556:
  *(undefined2 *)(plVar4 + 7) = 1;
  *(undefined4 *)(plVar4 + 8) = 0;
  uVar13 = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined4 *)(plVar4 + 0xb) = 0;
LAB_00528578:
  if (iVar8 == 0) {
    *(undefined2 *)(plVar4 + 0xc) = 1;
    *(undefined4 *)(plVar4 + 0xd) = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    *(undefined4 *)(plVar4 + 0x10) = 0;
LAB_00528654:
    *(undefined2 *)(plVar4 + 0x11) = 1;
    *(undefined4 *)(plVar4 + 0x12) = 0x3f800000;
    piVar6 = piVar7;
  }
  else {
    if (0 < iVar8) {
      if (*piVar7 == 2) {
        uVar13 = fielddesc_setfloat_var
                           (uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (undefined2 *)(plVar4 + 0xc),*(undefined8 **)(piVar7 + 2));
      }
      else {
        iVar3 = piVar7[2];
        *(undefined2 *)(plVar4 + 0xc) = 1;
        *(int *)(plVar4 + 0xd) = iVar3;
        uVar13 = 0;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0;
        *(undefined4 *)(plVar4 + 0x10) = 0;
      }
      if (iVar8 != 1) {
        uVar9 = iVar8 - 2;
        piVar6 = piVar7 + 8;
        if (piVar7[4] == 2) {
          fielddesc_setfloat_var
                    (uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     (undefined2 *)(plVar4 + 0x11),*(undefined8 **)(piVar7 + 6));
        }
        else {
          iVar3 = piVar7[6];
          *(undefined2 *)(plVar4 + 0x11) = 1;
          *(int *)(plVar4 + 0x12) = iVar3;
          plVar4[0x13] = 0;
          plVar4[0x14] = 0;
          *(undefined4 *)(plVar4 + 0x15) = 0;
        }
        goto LAB_0052871b;
      }
      piVar7 = piVar7 + 4;
      goto LAB_00528654;
    }
LAB_005286c7:
    *(undefined1 *)(plVar4 + 0xc) = 1;
    *(undefined1 *)((long)plVar4 + 0x61) = 0;
    *(undefined4 *)(plVar4 + 0xd) = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    *(undefined4 *)(plVar4 + 0x10) = 0;
    piVar6 = piVar7 + 8;
    *(undefined2 *)(plVar4 + 0x11) = 1;
    *(undefined4 *)(plVar4 + 0x12) = 0;
  }
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  *(undefined4 *)(plVar4 + 0x15) = 0;
  uVar9 = 0;
LAB_0052871b:
  uVar11 = uVar9 & 1;
  uVar1 = uVar11 + uVar9;
  *(uint *)(plVar4 + 0x1b) = uVar1 >> 1;
  puVar5 = getbytes((ulong)uVar1 * 0x28);
  uVar13 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
  plVar4[0x1c] = (long)puVar5;
  if (uVar9 != 0) {
    piVar6 = piVar6 + 2;
    do {
      while (piVar6[-2] != 2) {
        iVar3 = *piVar6;
        *puVar5 = 1;
        *(int *)(puVar5 + 4) = iVar3;
        uVar13 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 0xc) = 0;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        puVar5 = puVar5 + 0x14;
        piVar6 = piVar6 + 4;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_005287aa;
      }
      uVar13 = fielddesc_setfloat_var
                         (uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar5,
                          *(undefined8 **)piVar6);
      puVar5 = puVar5 + 0x14;
      piVar6 = piVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_005287aa:
  if (uVar11 != 0) {
    *puVar5 = 1;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
  }
  return plVar4;
}


