// Function : gtemplate_donew
// Namespace: 
// Entry    : 00528090
// Prototype: long * gtemplate_donew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, ulong param_10, int * param_11, ulong param_12, long * param_13, long param_14)
// Body     : 00528090 - 0052830e


long * gtemplate_donew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 *param_9,ulong param_10,int *param_11,ulong param_12,long *param_13
                      ,long param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long extraout_RAX;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  int extraout_XMM0_Da_01;
  int iVar17;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int extraout_XMM0_Db_01;
  int iVar19;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  
  plVar7 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,gtemplate_class,
                  param_10,param_11,param_12,(char *)param_13,param_14);
  plVar8 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)param_9,template_class);
  gensym("x");
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  plVar7[7] = extraout_RAX;
  plVar7[9] = 0;
  plVar7[8] = (long)param_9;
  iVar16 = (int)param_10;
  *(int *)(plVar7 + 10) = iVar16;
  piVar9 = getbytes((long)iVar16 << 4);
  plVar7[0xb] = (long)piVar9;
  iVar17 = extraout_XMM0_Da_01;
  iVar19 = extraout_XMM0_Db_01;
  if (0 < iVar16) {
    iVar17 = *param_11;
    iVar19 = param_11[1];
    iVar5 = param_11[2];
    iVar6 = param_11[3];
    *piVar9 = iVar17;
    piVar9[1] = iVar19;
    piVar9[2] = iVar5;
    piVar9[3] = iVar6;
    if (iVar16 != 1) {
      uVar10 = (param_10 & 0xffffffff) - 1;
      uVar13 = 1;
      if (iVar16 != 2) {
        uVar13 = 1;
        lVar15 = 0;
        do {
          puVar2 = (undefined8 *)((long)param_11 + lVar15 + 0x10);
          uVar18 = puVar2[1];
          puVar3 = (undefined8 *)(plVar7[0xb] + 0x10 + lVar15);
          *puVar3 = *puVar2;
          puVar3[1] = uVar18;
          piVar9 = (int *)((long)param_11 + lVar15 + 0x20);
          iVar17 = *piVar9;
          iVar19 = piVar9[1];
          iVar16 = piVar9[2];
          iVar5 = piVar9[3];
          piVar9 = (int *)(plVar7[0xb] + 0x20 + lVar15);
          *piVar9 = iVar17;
          piVar9[1] = iVar19;
          piVar9[2] = iVar16;
          piVar9[3] = iVar5;
          lVar15 = lVar15 + 0x20;
          lVar1 = uVar13 - (uVar10 & 0xfffffffffffffffe);
          uVar13 = uVar13 + 2;
        } while (lVar1 != -1);
      }
      param_12 = uVar13;
      if ((uVar10 & 1) != 0) {
        param_12 = uVar13 * 0x10;
        piVar9 = param_11 + uVar13 * 4;
        iVar17 = *piVar9;
        iVar19 = piVar9[1];
        iVar16 = piVar9[2];
        iVar5 = piVar9[3];
        piVar9 = (int *)(plVar7[0xb] + param_12);
        *piVar9 = iVar17;
        piVar9[1] = iVar19;
        piVar9[2] = iVar16;
        piVar9[3] = iVar5;
      }
    }
  }
  if (plVar8 == (long *)0x0) {
    plVar8 = template_new(CONCAT44(iVar19,iVar17),param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,param_10 & 0xffffffff,param_11,param_12,(char *)param_13,
                          param_14);
    uVar18 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    plVar7[6] = (long)plVar8;
    plVar8[1] = (long)plVar7;
    uVar14 = extraout_RDX_00;
  }
  else {
    plVar7[6] = (long)plVar8;
    uVar10 = plVar8[1];
    if (plVar8[1] == 0) {
      plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar11 = template_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,
                             (undefined8 *)(*plVar11 + 0x168),param_10 & 0xffffffff,param_11,
                             param_12,(char *)param_13,param_14);
      uVar18 = canvas_redrawallfortemplate
                         (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar8,2);
      uVar12 = *(uint *)(plVar8 + 3);
      piVar9 = (int *)(ulong)uVar12;
      uVar4 = *(uint *)(plVar11 + 3);
      param_12 = (ulong)(uVar12 - uVar4);
      if ((int)uVar12 < (int)uVar4) {
LAB_00528221:
        template_conform(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar8
                         ,plVar11,piVar9,param_12,param_13,param_14);
        uVar18 = pd_free(plVar8);
        plVar8 = template_new(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                              ,param_10 & 0xffffffff,param_11,param_12,(char *)param_13,param_14);
        plVar7[6] = (long)plVar8;
      }
      else {
        if ((int)uVar4 < (int)uVar12) {
          piVar9 = (int *)((long)(int)uVar4 * 0x18 + plVar8[4]);
          do {
            if (*piVar9 == 3) goto LAB_00528221;
            piVar9 = piVar9 + 6;
            uVar12 = (int)param_12 - 1;
            param_12 = (ulong)uVar12;
          } while (uVar12 != 0);
        }
        if (0 < (int)uVar4) {
          param_12 = plVar8[4];
          piVar9 = (int *)plVar11[4];
          lVar15 = 0;
          do {
            if (((*(long *)(param_12 + 8 + lVar15) != *(long *)((long)piVar9 + lVar15 + 8)) ||
                (*(int *)(param_12 + lVar15) != *(int *)((long)piVar9 + lVar15))) ||
               ((*(int *)(param_12 + lVar15) == 3 &&
                (*(long *)(param_12 + 0x10 + lVar15) != *(long *)((long)piVar9 + lVar15 + 0x10)))))
            goto LAB_00528221;
            lVar15 = lVar15 + 0x18;
          } while ((ulong)uVar4 * 0x18 != lVar15);
        }
      }
      uVar18 = pd_free(plVar11);
      plVar8[1] = (long)plVar7;
      uVar18 = canvas_redrawallfortemplate
                         (uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)plVar8,1);
      uVar14 = extraout_RDX_01;
    }
    else {
      do {
        param_12 = uVar10;
        uVar10 = *(ulong *)(param_12 + 0x48);
      } while (*(ulong *)(param_12 + 0x48) != 0);
      *(long **)(param_12 + 0x48) = plVar7;
      uVar18 = post(CONCAT44(iVar19,iVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "template %s: warning: already exists.");
      uVar14 = extraout_RDX;
    }
  }
  outlet_new(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar7,0,uVar14,
             param_12,(char *)param_13,param_14);
  return plVar7;
}


