// Function : pack_new
// Namespace: 
// Entry    : 0054d2e0
// Prototype: long * pack_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 0054d2e0 - 0054d5c7


long * pack_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,int *param_11,char *param_12,char *param_13,
               undefined8 param_14)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  char *extraout_RDX;
  char *extraout_RDX_00;
  char *extraout_RDX_01;
  char *extraout_RDX_02;
  undefined8 extraout_RDX_03;
  char *extraout_RDX_04;
  char *extraout_RDX_05;
  undefined8 extraout_RDX_06;
  char *extraout_RDX_07;
  undefined8 extraout_RDX_08;
  char *extraout_RDX_09;
  long lVar10;
  int *piVar11;
  uint uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined8 *local_60;
  int local_58 [2];
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  
  uVar12 = (uint)param_10;
  plVar5 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pack_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (uVar12 == 0) {
    param_11 = local_58;
    local_58[0] = 1;
    uStack_50 = 0;
    local_48 = 1;
    uStack_40 = 0;
    uVar12 = 2;
  }
  *(uint *)(plVar5 + 8) = uVar12;
  piVar6 = getbytes((long)(int)uVar12 << 4);
  plVar5[6] = (long)piVar6;
  if ((int)uVar12 < 1) {
    iVar4 = 0;
  }
  else {
    if (uVar12 == 1) {
      pcVar9 = (char *)0x0;
      iVar4 = 0;
    }
    else {
      param_13 = (char *)(ulong)(uVar12 & 0xfffffffe);
      piVar11 = param_11 + 6;
      pcVar9 = (char *)0x0;
      iVar4 = 0;
      do {
        if (piVar11[-6] == 2) {
          iVar4 = iVar4 + (uint)(*(char *)**(undefined8 **)(piVar11 + -4) == 'p');
          iVar2 = piVar11[-2];
        }
        else {
          iVar2 = piVar11[-2];
        }
        if (iVar2 == 2) {
          iVar4 = iVar4 + (uint)(*(char *)**(undefined8 **)piVar11 == 'p');
        }
        pcVar9 = pcVar9 + 2;
        piVar11 = piVar11 + 8;
      } while (param_13 != pcVar9);
    }
    param_12 = pcVar9;
    if (((uVar12 & 1) != 0) &&
       (param_12 = (char *)((long)pcVar9 * 0x10), param_11[(long)pcVar9 * 4] == 2)) {
      param_12 = (char *)**(undefined8 **)(param_11 + 2 + (long)pcVar9 * 4);
      iVar4 = iVar4 + (uint)(*param_12 == 'p');
    }
  }
  local_60 = getbytes((long)iVar4 * 0x18);
  uVar13 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  plVar5[7] = (long)local_60;
  *(int *)((long)plVar5 + 0x44) = iVar4;
  if ((int)uVar12 < 1) goto LAB_0054d4bb;
  pcVar9 = extraout_RDX;
  if (*param_11 == 1) {
    iVar4 = param_11[1];
    uVar13 = *(undefined8 *)param_11;
    iVar2 = param_11[2];
    iVar3 = param_11[3];
    *piVar6 = *param_11;
    piVar6[1] = iVar4;
    piVar6[2] = iVar2;
    piVar6[3] = iVar3;
  }
  else if (*param_11 == 2) {
    pcVar9 = (char *)**(undefined8 **)(param_11 + 2);
    cVar1 = *pcVar9;
    if (cVar1 == 'f') {
LAB_0054d4a8:
      *piVar6 = 1;
      piVar6[2] = 0;
    }
    else if (cVar1 == 's') {
      *piVar6 = 2;
      plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar13 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      param_12 = (char *)(*plVar7 + 0x90);
      *(char **)(piVar6 + 2) = param_12;
      pcVar9 = extraout_RDX_01;
    }
    else {
      if (cVar1 != 'p') {
        uVar13 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar5,"pack: %s: bad type",pcVar9,
                          param_12,param_13,param_14);
        pcVar9 = extraout_RDX_02;
        goto LAB_0054d4a8;
      }
      *piVar6 = 3;
      *(undefined8 **)(piVar6 + 2) = local_60;
      uVar13 = gpointer_init(local_60);
      local_60 = local_60 + 3;
      pcVar9 = extraout_RDX_00;
    }
  }
  if (uVar12 != 1) {
    plVar7 = (long *)(piVar6 + 6);
    lVar10 = (ulong)uVar12 - 1;
    do {
      piVar6 = param_11 + 4;
      if (*piVar6 == 2) {
        pcVar9 = (char *)**(undefined8 **)(param_11 + 6);
        cVar1 = *pcVar9;
        if (cVar1 == 'f') {
LAB_0054d50f:
          *(int *)(plVar7 + -1) = 1;
          *(int *)plVar7 = 0;
          goto LAB_0054d51c;
        }
        if (cVar1 == 'p') {
          *(int *)(plVar7 + -1) = 3;
          *plVar7 = (long)local_60;
          uVar13 = gpointer_init(local_60);
          pointerinlet_new(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar5,(long)local_60,extraout_RDX_08,param_12,param_13,param_14);
          uVar13 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
          local_60 = local_60 + 3;
          pcVar9 = extraout_RDX_09;
        }
        else {
          if (cVar1 != 's') {
            uVar13 = pd_error(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)plVar5,"pack: %s: bad type",pcVar9,param_12,param_13,param_14);
            pcVar9 = extraout_RDX_04;
            goto LAB_0054d50f;
          }
          *(int *)(plVar7 + -1) = 2;
          plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
          param_12 = (char *)0x90;
          *plVar7 = *plVar8 + 0x90;
          symbolinlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar5,(long)plVar7,extraout_RDX_06,
                          0x90,param_13,param_14);
          uVar13 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
          pcVar9 = extraout_RDX_07;
        }
      }
      else {
        if (*piVar6 != 1) goto LAB_0054d527;
        iVar4 = param_11[5];
        uVar13 = *(undefined8 *)piVar6;
        iVar2 = param_11[6];
        iVar3 = param_11[7];
        *(int *)(plVar7 + -1) = *piVar6;
        *(int *)((long)plVar7 + -4) = iVar4;
        *(int *)plVar7 = iVar2;
        *(int *)((long)plVar7 + 4) = iVar3;
LAB_0054d51c:
        floatinlet_new(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar5,
                       (long)plVar7,pcVar9,param_12,param_13,param_14);
        uVar13 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        pcVar9 = extraout_RDX_05;
      }
LAB_0054d527:
      plVar7 = plVar7 + 2;
      lVar10 = lVar10 + -1;
      param_11 = piVar6;
    } while (lVar10 != 0);
  }
LAB_0054d4bb:
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar5,*plVar7 + 0xc0,extraout_RDX_03,param_12,param_13,
             param_14);
  return plVar5;
}


