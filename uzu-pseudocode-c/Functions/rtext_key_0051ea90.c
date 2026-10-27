// Function : rtext_key
// Namespace: 
// Entry    : 0051ea90
// Prototype: undefined rtext_key(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, undefined8 * param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 0051ea90 - 0051ee62


void rtext_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,uint param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
              byte *param_14)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  char *__s1;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
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
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 uVar16;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = 0;
  local_34 = 0;
  if (param_10 == 0) {
    __s1 = (char *)*param_11;
    iVar4 = strcmp(__s1,"Home");
    if (iVar4 == 0) {
      iVar4 = *(int *)((long)param_9 + 0xc);
      *(undefined4 *)((long)param_9 + 0xc) = 0;
      uVar15 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if ((int)param_9[2] == iVar4) {
        *(undefined4 *)(param_9 + 2) = 0;
        uVar15 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      }
      goto LAB_0051edac;
    }
    iVar4 = strcmp(__s1,"End");
    if (iVar4 == 0) {
      uVar5 = *(uint *)(param_9 + 1);
      uVar15 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      if ((int)param_9[2] == *(int *)((long)param_9 + 0xc)) {
        *(uint *)((long)param_9 + 0xc) = uVar5;
        uVar15 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      }
    }
    else {
      iVar4 = strcmp(__s1,"Right");
      if (iVar4 == 0) {
        iVar4 = (int)param_9[2];
        if ((iVar4 != *(int *)((long)param_9 + 0xc)) || ((int)param_9[1] <= iVar4)) {
          *(int *)((long)param_9 + 0xc) = iVar4;
          uVar15 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          goto LAB_0051edac;
        }
        uVar15 = u8_inc(*param_9,(int *)((long)param_9 + 0xc));
LAB_0051ee1f:
        *(undefined4 *)(param_9 + 2) = *(undefined4 *)((long)param_9 + 0xc);
        goto LAB_0051edac;
      }
      iVar4 = strcmp(__s1,"Left");
      if (iVar4 == 0) {
        uVar5 = *(uint *)((long)param_9 + 0xc);
        uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        if ((*(uint *)(param_9 + 2) == uVar5) &&
           (uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02), 0 < (int)uVar5)) {
          uVar15 = u8_dec(*param_9,(int *)((long)param_9 + 0xc));
          goto LAB_0051ee1f;
        }
      }
      else {
        iVar4 = strcmp(__s1,"Up");
        if (iVar4 != 0) {
          iVar4 = strcmp(__s1,"Down");
          uVar15 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
          if (iVar4 == 0) {
            iVar4 = (int)param_9[2];
            if (iVar4 < (int)param_9[1]) {
              do {
                cVar3 = *(char *)(*param_9 + (long)iVar4);
                uVar15 = u8_inc(*param_9,(int *)(param_9 + 2));
                iVar4 = (int)param_9[2];
                if (cVar3 == '\n') break;
              } while (iVar4 < (int)param_9[1]);
            }
            *(int *)((long)param_9 + 0xc) = iVar4;
          }
          goto LAB_0051edac;
        }
        if (*(int *)((long)param_9 + 0xc) == 0) {
          uVar5 = 0;
          uVar15 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
        }
        else {
          puVar1 = (uint *)((long)param_9 + 0xc);
          uVar15 = u8_dec(*param_9,(int *)puVar1);
          uVar5 = *(uint *)((long)param_9 + 0xc);
          while ((0 < (int)uVar5 && (*(char *)(*param_9 + (ulong)uVar5) != '\n'))) {
            uVar15 = u8_dec(*param_9,(int *)puVar1);
            uVar5 = *puVar1;
          }
        }
      }
    }
    *(uint *)(param_9 + 2) = uVar5;
    goto LAB_0051edac;
  }
  if ((param_10 == 10) && ((~*(byte *)(param_9[5] + 0x2e) & 3) == 0)) {
    gatom_key((ulong)DAT_0065260c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              (long *)param_9[5],param_11,param_11,param_12,param_13,param_14);
    return;
  }
  uVar5 = 10;
  if (param_10 != 0xd) {
    uVar5 = param_10;
  }
  if (uVar5 == 0x7f) {
    if (((int)param_9[2] < (int)param_9[1]) && (*(int *)((long)param_9 + 0xc) == (int)param_9[2])) {
      param_1 = u8_inc(*param_9,(int *)(param_9 + 2));
    }
  }
  else if (((uVar5 == 8) && (*(int *)((long)param_9 + 0xc) != 0)) &&
          (*(int *)((long)param_9 + 0xc) == (int)param_9[2])) {
    param_1 = u8_dec(*param_9,(int *)((long)param_9 + 0xc));
  }
  iVar4 = (int)param_9[2];
  lVar7 = (long)iVar4;
  iVar11 = (int)param_9[1];
  iVar9 = *(int *)((long)param_9 + 0xc);
  iVar13 = iVar4 - iVar9;
  if (iVar4 < iVar11) {
    do {
      *(undefined1 *)(*param_9 + (long)iVar9) = *(undefined1 *)(*param_9 + lVar7);
      lVar7 = lVar7 + 1;
      iVar11 = (int)param_9[1];
      iVar9 = iVar9 + 1;
    } while (lVar7 < iVar11);
  }
  iVar13 = iVar11 - iVar13;
  uVar10 = (ulong)iVar13;
  uVar12 = uVar10 + 1;
  pvVar6 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)*param_9,(long)iVar11,uVar12);
  *param_9 = (long)pvVar6;
  *(undefined1 *)((long)pvVar6 + uVar10) = 0;
  *(int *)(param_9 + 1) = iVar13;
  if ((uVar5 == 10) || (uVar5 - 0x20 < 0x5f)) {
    pvVar6 = resizebytes(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,(void *)*param_9,uVar10,(long)(iVar13 + 2))
    ;
    *param_9 = (long)pvVar6;
    lVar7 = (long)(int)param_9[1];
    iVar4 = *(int *)((long)param_9 + 0xc);
    if (iVar4 < (int)param_9[1]) {
      lVar8 = lVar7 + -1;
      *(undefined1 *)((long)pvVar6 + lVar7) = *(undefined1 *)((long)pvVar6 + lVar7 + -1);
      iVar4 = *(int *)((long)param_9 + 0xc);
      if (iVar4 < lVar8) {
        do {
          *(undefined1 *)(*param_9 + lVar8) = *(undefined1 *)(*param_9 + -1 + lVar8);
          lVar8 = lVar8 + -1;
          iVar4 = *(int *)((long)param_9 + 0xc);
        } while (iVar4 < lVar8);
      }
      pvVar6 = (void *)*param_9;
    }
    *(char *)((long)pvVar6 + (long)iVar4) = (char)uVar5;
    *(undefined1 *)(*param_9 + uVar12) = 0;
    *(int *)(param_9 + 1) = (int)uVar12;
    iVar4 = *(int *)((long)param_9 + 0xc) + 1;
    uVar14 = extraout_XMM0_Da_08;
    uVar16 = extraout_XMM0_Db_08;
LAB_0051ed77:
    *(int *)((long)param_9 + 0xc) = iVar4;
  }
  else {
    if (0x7f < (int)uVar5) {
      lVar7 = u8_wc_nbytes(uVar5);
      iVar4 = (int)lVar7;
      uVar12 = (ulong)(int)param_9[1];
      lVar7 = uVar12 + (long)iVar4;
      pvVar6 = resizebytes(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(void *)*param_9,uVar12,
                           uVar12 + (long)iVar4 + 1);
      *param_9 = (long)pvVar6;
      iVar11 = (int)lVar7;
      iVar9 = iVar11 + -1;
      if (*(int *)((long)param_9 + 0xc) < iVar9) {
        lVar8 = (long)iVar9;
        do {
          *(undefined1 *)((long)pvVar6 + lVar8) = *(undefined1 *)((long)pvVar6 + (lVar8 - iVar4));
          lVar8 = lVar8 + -1;
          pvVar6 = (void *)*param_9;
        } while (*(int *)((long)param_9 + 0xc) < lVar8);
      }
      *(undefined1 *)((long)pvVar6 + lVar7) = 0;
      *(int *)(param_9 + 1) = iVar11;
      strncpy((char *)((long)*(int *)((long)param_9 + 0xc) + *param_9),(char *)*param_11,(long)iVar4
             );
      iVar4 = *(int *)((long)param_9 + 0xc) + iVar4;
      uVar14 = extraout_XMM0_Da_07;
      uVar16 = extraout_XMM0_Db_07;
      goto LAB_0051ed77;
    }
    iVar4 = *(int *)((long)param_9 + 0xc);
    uVar14 = extraout_XMM0_Da_05;
    uVar16 = extraout_XMM0_Db_05;
  }
  *(int *)(param_9 + 2) = iVar4;
  pbVar2 = (byte *)(*(long *)(param_9[6] + 0xc0) + 0x88);
  *pbVar2 = *pbVar2 | 0x10;
  uVar15 = CONCAT44(uVar16,uVar14);
LAB_0051edac:
  rtext_senditup(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,&local_30,
                 &local_34,(int *)&local_2c,param_14);
  return;
}


