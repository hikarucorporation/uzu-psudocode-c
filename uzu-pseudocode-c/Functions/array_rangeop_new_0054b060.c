// Function : array_rangeop_new
// Namespace: 
// Entry    : 0054b060
// Prototype: long * array_rangeop_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, uint * param_10, long * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054b060 - 0054b35a


long * array_rangeop_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 *param_9,uint *param_10,long *param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  char *__s1;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_RAX;
  long *plVar9;
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
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  ulong uVar16;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  
  iVar4 = (int)param_13;
  uVar13 = *param_10;
  piVar11 = (int *)*param_11;
  plVar5 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                  param_10,param_11,param_12,param_13,param_14);
  plVar5[6] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  gpointer_init(plVar5 + 7);
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar6 = (long *)(*plVar6 + 0x168);
  plVar5[0xf] = (long)plVar6;
  puVar7 = gensym("y");
  plVar5[0xe] = (long)puVar7;
  plVar5[0xd] = -0x4080000000000000;
  uVar8 = extraout_RDX;
  uVar15 = extraout_XMM0_Da;
  uVar17 = extraout_XMM0_Db;
  if ((int)param_12 != 0) {
    floatinlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,(long)plVar5,(long)(plVar5 + 0xd),extraout_RDX,plVar6,
                   param_13,param_14);
    uVar8 = extraout_RDX_00;
    uVar15 = extraout_XMM0_Da_00;
    uVar17 = extraout_XMM0_Db_00;
  }
  if (iVar4 != 0) {
    floatinlet_new(CONCAT44(uVar17,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar5,(long)plVar5 + 0x6c,uVar8,plVar6,param_13,param_14);
    uVar8 = extraout_RDX_01;
    uVar15 = extraout_XMM0_Da_01;
    uVar17 = extraout_XMM0_Db_01;
  }
  uVar16 = CONCAT44(uVar17,uVar15);
  plVar1 = plVar5 + 6;
  if (uVar13 != 0) {
    plVar9 = plVar5 + 10;
    piVar10 = piVar11;
    do {
      iVar4 = *piVar10;
      if (iVar4 != 2) {
LAB_0054b27e:
        if (iVar4 != 1) {
          piVar11 = piVar10;
          uVar14 = uVar13;
          goto LAB_0054b2c8;
        }
        uVar16 = (ulong)(uint)piVar10[2];
        *(int *)(plVar5 + 0xd) = piVar10[2];
        piVar11 = piVar10 + 4;
        uVar12 = 0;
        uVar14 = uVar12;
        if (uVar13 - 1 == 0) {
LAB_0054b2f5:
          uVar12 = uVar14;
        }
        else {
          uVar14 = uVar13 - 1;
          if (*piVar11 != 1) {
LAB_0054b2c8:
            class_getname(param_9);
            uVar8 = post(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,"warning: %s ignoring extra argument: ");
            uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar14,
                             piVar11,extraout_RDX_08,plVar6,param_13,param_14);
            uVar16 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            uVar8 = extraout_RDX_09;
            goto LAB_0054b2f5;
          }
          uVar16 = (ulong)(uint)piVar10[6];
          *(int *)((long)plVar5 + 0x6c) = piVar10[6];
          piVar11 = piVar10 + 8;
          uVar14 = uVar13 - 2;
          if (uVar13 - 2 != 0) goto LAB_0054b2c8;
        }
        lVar3 = plVar5[10];
        goto joined_r0x0054b2fd;
      }
      __s1 = (char *)**(undefined8 **)(piVar10 + 2);
      if (*__s1 != '-') {
        if (*plVar9 == 0) {
          *plVar1 = (long)*(undefined8 **)(piVar10 + 2);
          plVar6 = plVar1;
        }
        else {
          uVar8 = class_getname(param_9);
          uVar8 = pd_error(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar5,
                           "%s: extra names after -s..",uVar8,plVar9,param_13,param_14);
          uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar13,
                           piVar10,extraout_RDX_06,plVar9,param_13,param_14);
          uVar16 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          plVar6 = plVar9;
          uVar8 = extraout_RDX_07;
        }
        piVar11 = piVar10 + 4;
        if (uVar13 != 1) {
          uVar13 = uVar13 - 1;
          piVar10 = piVar10 + 4;
          iVar4 = *piVar10;
          goto LAB_0054b27e;
        }
        break;
      }
      iVar4 = strcmp(__s1,"-s");
      if ((((iVar4 == 0) && (2 < (int)uVar13)) && (piVar10[4] == 2)) && (piVar10[8] == 2)) {
        uVar16 = canvas_makebindsym(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,
                                    param_3,param_4,param_5,param_6,param_7,param_8,
                                    *(undefined8 **)(piVar10 + 6));
        plVar5[10] = extraout_RAX;
        plVar5[0xb] = *(long *)(piVar10 + 10);
        uVar13 = uVar13 - 2;
        uVar8 = extraout_RDX_04;
        piVar10 = piVar10 + 8;
      }
      else {
        iVar4 = strcmp(__s1,"-f");
        uVar16 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
        if (((iVar4 == 0) && (2 < (int)uVar13)) && ((piVar10[4] == 2 && (piVar10[8] == 2)))) {
          plVar5[0xf] = *(long *)(piVar10 + 6);
          plVar2 = (long *)(piVar10 + 10);
          piVar10 = piVar10 + 8;
          plVar5[0xe] = *plVar2;
          uVar13 = uVar13 - 2;
          uVar8 = extraout_RDX_05;
        }
        else {
          uVar8 = class_getname(param_9);
          uVar8 = pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar5,"%s: unknown flag ...",
                           uVar8,plVar6,param_13,param_14);
          uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar13,
                           piVar10,extraout_RDX_02,plVar6,param_13,param_14);
          uVar16 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar8 = extraout_RDX_03;
        }
      }
      piVar11 = piVar10 + 4;
      uVar13 = uVar13 - 1;
      piVar10 = piVar11;
    } while (uVar13 != 0);
  }
  uVar12 = 0;
  lVar3 = plVar5[10];
joined_r0x0054b2fd:
  if (lVar3 == 0) {
    symbolinlet_new(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar5,
                    (long)plVar1,uVar8,plVar6,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar5,
                     (long)(plVar5 + 7),uVar8,plVar6,param_13,param_14);
  }
  *param_10 = uVar12;
  *param_11 = (long)piVar11;
  return plVar5;
}


