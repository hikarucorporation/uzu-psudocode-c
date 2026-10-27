// Function : ex_symbol
// Namespace: 
// Entry    : 005d6e90
// Prototype: undefined ex_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, float * param_11, uint * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005d6e90 - 005d73b3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,ulong param_10,float *param_11,uint *param_12,char *param_13,
              undefined8 param_14,undefined1 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Da_02;
  uint extraout_XMM0_Da_03;
  uint extraout_XMM0_Da_04;
  uint extraout_XMM0_Da_05;
  uint extraout_XMM0_Da_06;
  uint uVar18;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  uint extraout_XMM0_Db_02;
  uint extraout_XMM0_Db_03;
  uint extraout_XMM0_Db_04;
  uint extraout_XMM0_Db_05;
  uint extraout_XMM0_Db_06;
  undefined8 uVar19;
  uint uVar20;
  char acStack_d8 [128];
  undefined1 in_stack_ffffffffffffffa8;
  uint switchD_005d7187::switchdataD_00660294;
  uint switchD_005d6f11::switchdataD_00660260;
  
  if (param_10 != 1) {
    if (param_10 == 0) {
      param_12[2] = 7;
      param_12[3] = 0;
      *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
      puVar11 = param_12;
      pvVar5 = calloc(2,1);
      *(void **)param_12 = pvVar5;
      if (pvVar5 != (void *)0x0) {
        return;
      }
      uVar19 = *(undefined8 *)(param_9 + 0x40);
      pcVar14 = "expr: \'%s\' - makesymbol: no memory\n";
      uVar18 = extraout_XMM0_Da;
      uVar20 = extraout_XMM0_Db;
      goto LAB_005d72ff;
    }
    if ((param_10 & 0xfffffffffffffffe) != 2) {
      uVar19 = CONCAT44(_UNK_005d99f4,_DAT_005d99f0);
      uVar1 = CONCAT44(_UNK_005d99fc,_UNK_005d99f8);
      *(undefined8 *)param_12 = uVar19;
      *(undefined8 *)(param_12 + 2) = uVar1;
      ex_error(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: symbol/sym takes no more than 3 arguments",*(undefined8 *)(param_9 + 0x40),
               param_12,param_13,param_14,param_15);
      return;
    }
    lVar13 = *(long *)(param_11 + 10);
    fVar16 = 0.0;
    if (lVar13 == 7) {
      if (((uint)param_11[0xe] & 1) != 0) {
        free(*(void **)(param_11 + 8));
        *(byte *)(param_11 + 0xe) = *(byte *)(param_11 + 0xe) & 0xfe;
      }
    }
    else if (lVar13 == 2) {
      fVar16 = (float)(int)param_11[8];
    }
    else if (lVar13 == 1) {
      fVar16 = param_11[8];
    }
    fVar17 = -NAN;
    if (param_10 != 2) {
      lVar13 = *(long *)(param_11 + 0x12);
      fVar17 = 0.0;
      if (lVar13 == 7) {
        if (((uint)param_11[0x16] & 1) != 0) {
          free(*(void **)(param_11 + 0x10));
          *(byte *)(param_11 + 0x16) = *(byte *)(param_11 + 0x16) & 0xfe;
        }
      }
      else if (lVar13 == 2) {
        fVar17 = (float)(int)param_11[0x10];
      }
      else if (lVar13 == 1) {
        fVar17 = param_11[0x10];
      }
    }
    puVar11 = &switchD_005d7187::switchdataD_00660294;
    switch(*(undefined8 *)(param_11 + 2)) {
    case 1:
      param_12[2] = 7;
      param_12[3] = 0;
      *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
      pvVar5 = calloc(0x201,1);
      *(void **)param_12 = pvVar5;
      uVar18 = extraout_XMM0_Da_03;
      uVar20 = extraout_XMM0_Db_03;
      if (pvVar5 != (void *)0x0) {
        if (fVar17 == -NAN) {
          uVar19 = pd_snprintf(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,acStack_d8 + 0x80,0x19,
                               "%%.%dld",(ulong)(uint)fVar16,param_13,param_14,
                               in_stack_ffffffffffffffa8);
        }
        else {
          param_13 = (char *)(ulong)(uint)fVar16;
          uVar19 = pd_snprintf(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,acStack_d8 + 0x80,0x19,
                               "%%%d.%dld",(ulong)(uint)fVar17,param_13,param_14,
                               in_stack_ffffffffffffffa8);
        }
        pcVar14 = *(char **)param_12;
        puVar8 = *(undefined **)param_11;
        goto LAB_005d7373;
      }
      break;
    case 2:
      param_12[2] = 7;
      param_12[3] = 0;
      *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
      pvVar5 = calloc(0x201,1);
      *(void **)param_12 = pvVar5;
      uVar18 = extraout_XMM0_Da_04;
      uVar20 = extraout_XMM0_Db_04;
      if (pvVar5 != (void *)0x0) {
        if (fVar17 == -NAN) {
          uVar12 = (ulong)(uint)fVar16;
          pd_snprintf(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,acStack_d8 + 0x80,0x19,"%%.%df",uVar12,
                      param_13,param_14,in_stack_ffffffffffffffa8);
        }
        else {
          uVar12 = (ulong)(uint)fVar17;
          param_13 = (char *)(ulong)(uint)fVar16;
          pd_snprintf(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,acStack_d8 + 0x80,0x19,"%%%d.%df",uVar12,
                      param_13,param_14,in_stack_ffffffffffffffa8);
        }
        pd_snprintf((double)*param_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(char **)param_12,0x200,acStack_d8 + 0x80,uVar12,param_13,param_14,
                    in_stack_ffffffffffffffa8);
        return;
      }
      break;
    default:
      goto switchD_005d7187_caseD_3;
    case 7:
      if (((uint)param_11[6] & 1) == 0) {
        puVar15 = *(undefined8 **)param_11;
LAB_005d7265:
        puVar8 = (undefined *)ex_symname(puVar15);
      }
      else {
        puVar8 = *(undefined **)param_11;
      }
      if (puVar8 != (undefined *)0x0) goto LAB_005d72ac;
LAB_005d727c:
      param_12[2] = 7;
      param_12[3] = 0;
      *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
      puVar9 = calloc(2,1);
      *(undefined1 **)param_12 = puVar9;
      uVar18 = extraout_XMM0_Da_05;
      uVar20 = extraout_XMM0_Db_05;
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = 0;
        return;
      }
      break;
    case 0xd:
      puVar15 = *(undefined8 **)(param_9 + 0x698 + *(long *)param_11 * 0x20);
      if (puVar15 != (undefined8 *)0x0) goto LAB_005d7265;
      puVar8 = &DAT_005e2ee7;
LAB_005d72ac:
      param_12[2] = 7;
      param_12[3] = 0;
      *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
      pvVar5 = calloc(0x201,1);
      *(void **)param_12 = pvVar5;
      uVar18 = extraout_XMM0_Da_06;
      uVar20 = extraout_XMM0_Db_06;
      if (pvVar5 != (void *)0x0) {
        if (fVar17 == -NAN) {
          uVar19 = pd_snprintf(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,acStack_d8 + 0x80,0x19,
                               "%%.%ds",(ulong)(uint)fVar16,param_13,param_14,
                               in_stack_ffffffffffffffa8);
        }
        else {
          param_13 = (char *)(ulong)(uint)fVar16;
          uVar19 = pd_snprintf(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,acStack_d8 + 0x80,0x19,
                               "%%%d.%ds",(ulong)(uint)fVar17,param_13,param_14,
                               in_stack_ffffffffffffffa8);
        }
        pcVar14 = *(char **)param_12;
LAB_005d7373:
        pd_snprintf(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar14,0x200,
                    acStack_d8 + 0x80,puVar8,param_13,param_14,in_stack_ffffffffffffffa8);
        return;
      }
    }
    goto LAB_005d72f4;
  }
  puVar11 = &switchD_005d6f11::switchdataD_00660260;
  switch(*(undefined8 *)(param_11 + 2)) {
  case 1:
    param_12[2] = 7;
    param_12[3] = 0;
    *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
    pcVar14 = calloc(0x201,1);
    *(char **)param_12 = pcVar14;
    uVar18 = extraout_XMM0_Da_00;
    uVar20 = extraout_XMM0_Db_00;
    if (pcVar14 != (char *)0x0) {
      pd_snprintf(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,pcVar14,0x200,"%ld",*(undefined8 *)param_11,param_13,
                  param_14,param_15);
      return;
    }
    break;
  case 2:
    param_12[2] = 7;
    param_12[3] = 0;
    *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
    pcVar14 = calloc(0x201,1);
    *(char **)param_12 = pcVar14;
    uVar18 = extraout_XMM0_Da_01;
    uVar20 = extraout_XMM0_Db_01;
    if (pcVar14 != (char *)0x0) {
      pd_snprintf((double)*param_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar14,
                  0x200,"%.6f",puVar11,param_13,param_14,in_stack_ffffffffffffffa8);
      pcVar14 = *(char **)param_12;
      sVar6 = strlen(pcVar14);
      iVar10 = (int)sVar6 + -1;
      if (iVar10 == 0) {
        return;
      }
      if (pcVar14[iVar10] != '0') {
        return;
      }
      pcVar7 = pcVar14 + iVar10;
      iVar10 = (int)sVar6 + -2;
      while( true ) {
        if (pcVar14[iVar10] != '.') {
          *pcVar7 = '\0';
        }
        if (iVar10 == 0) break;
        pcVar14 = *(char **)param_12;
        pcVar7 = pcVar14 + iVar10;
        lVar13 = (long)iVar10;
        iVar10 = iVar10 + -1;
        if (pcVar14[lVar13] != '0') {
          return;
        }
      }
      return;
    }
    break;
  default:
switchD_005d7187_caseD_3:
    uVar4 = _UNK_005d99fc;
    uVar3 = _UNK_005d99f8;
    uVar20 = _UNK_005d99f4;
    uVar18 = _DAT_005d99f0;
    *param_12 = _DAT_005d99f0;
    param_12[1] = uVar20;
    param_12[2] = uVar3;
    param_12[3] = uVar4;
    pcVar14 = "expr: bad argument to tosym/sym() - \'%s\'";
    goto LAB_005d72fb;
  case 7:
    uVar19 = *(undefined8 *)param_11;
    uVar1 = *(undefined8 *)(param_11 + 2);
    uVar2 = *(undefined8 *)(param_11 + 6);
    *(undefined8 *)(param_12 + 4) = *(undefined8 *)(param_11 + 4);
    *(undefined8 *)(param_12 + 6) = uVar2;
    *(undefined8 *)param_12 = uVar19;
    *(undefined8 *)(param_12 + 2) = uVar1;
    param_11[2] = 1.4013e-45;
    param_11[3] = 0.0;
    *(undefined2 *)(param_11 + 6) = 0;
    param_11[0] = 0.0;
    param_11[1] = 0.0;
    return;
  case 0xd:
    puVar15 = *(undefined8 **)(param_9 + 0x698 + *(long *)param_11 * 0x20);
    if (puVar15 == (undefined8 *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)ex_symname(puVar15);
      if (pcVar14 == (char *)0x0) goto LAB_005d727c;
    }
    sVar6 = strlen(pcVar14);
    param_12[2] = 7;
    param_12[3] = 0;
    *(byte *)(param_12 + 6) = (byte)param_12[6] | 1;
    pcVar7 = calloc(sVar6 + 1,1);
    *(char **)param_12 = pcVar7;
    uVar18 = extraout_XMM0_Da_02;
    uVar20 = extraout_XMM0_Db_02;
    if (pcVar7 != (char *)0x0) {
      strcpy(pcVar7,pcVar14);
      return;
    }
  }
LAB_005d72f4:
  pcVar14 = "expr: \'%s\' - makesymbol: no memory\n";
LAB_005d72fb:
  uVar19 = *(undefined8 *)(param_9 + 0x40);
LAB_005d72ff:
  pd_error(CONCAT44(uVar20,uVar18),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           pcVar14,uVar19,puVar11,param_13,param_14);
  uVar19 = CONCAT44(_UNK_005d99fc,_UNK_005d99f8);
  *(ulong *)param_12 = CONCAT44(_UNK_005d99f4,_DAT_005d99f0);
  *(undefined8 *)(param_12 + 2) = uVar19;
  return;
}


