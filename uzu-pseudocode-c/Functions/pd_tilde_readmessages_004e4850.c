// Function : pd_tilde_readmessages
// Namespace: 
// Entry    : 004e4850
// Prototype: undefined8 pd_tilde_readmessages(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, FILE * param_10, undefined8 param_11, FILE * param_12, char * param_13, undefined8 param_14)
// Body     : 004e4850 - 004e4aad


undefined8
pd_tilde_readmessages
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          FILE *param_10,undefined8 param_11,FILE *param_12,char *param_13,undefined8 param_14)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  ushort **ppuVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar13;
  int local_430 [2];
  undefined8 *local_428;
  undefined4 local_41c;
  byte local_418 [1000];
  
  if (*(int *)(param_9 + 0x70) != 0) {
    bVar11 = false;
switchD_004e48a8_caseD_0:
    iVar2 = getc(param_10);
    switch(iVar2) {
    default:
      goto switchD_004e48a8_caseD_0;
    case 1:
      param_12 = param_10;
      sVar4 = fread(&local_41c,4,1,param_10);
      if (sVar4 == 0) {
        return 0;
      }
      local_430[0] = 1;
      uVar14 = 0;
      local_428 = (undefined8 *)CONCAT44(local_428._4_4_,local_41c);
      uVar12 = local_41c;
      goto LAB_004e4960;
    case 2:
      lVar8 = 0;
      while( true ) {
        iVar2 = getc(param_10);
        if (iVar2 == -1) {
          return 0;
        }
        local_418[lVar8] = (byte)iVar2;
        if (iVar2 == 0) break;
        lVar8 = lVar8 + 1;
        if (lVar8 == 1000) {
          return 0;
        }
      }
      local_430[0] = 2;
      local_428 = gensym((char *)local_418);
      uVar12 = extraout_XMM0_Da_00;
      uVar14 = extraout_XMM0_Db_00;
      break;
    case 4:
      local_430[0] = 4;
      local_428 = (undefined8 *)((ulong)local_428 & 0xffffffff00000000);
      uVar12 = extraout_XMM0_Da;
      uVar14 = extraout_XMM0_Db;
      break;
    case -1:
      goto LAB_004e4a9c;
    }
    if ((!bVar11) && (local_430[0] == 4)) goto LAB_004e4a87;
LAB_004e4960:
    bVar11 = local_430[0] != 4;
    binbuf_add(CONCAT44(uVar14,uVar12),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int **)(param_9 + 0x58),1,(undefined8 *)local_430,param_12,param_13,param_14);
    goto switchD_004e48a8_caseD_0;
  }
  puVar5 = binbuf_new();
  ppuVar6 = __ctype_b_loc();
LAB_004e49a0:
  do {
    puVar1 = *ppuVar6;
    iVar2 = getc(param_10);
    if (iVar2 != -1) {
      param_12 = (FILE *)(ulong)(puVar1[iVar2] & 0x2000);
      if ((short)(puVar1[iVar2] & 0x2000) != 0) goto LAB_004e49a0;
    }
    if (iVar2 == -1) {
LAB_004e4a9c:
      return 0;
    }
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
      local_418[uVar9] = (byte)iVar2;
      puVar1 = *ppuVar6;
      iVar2 = getc(param_10);
      if (((iVar2 == -1) || (iVar2 == 0x3b)) ||
         (param_12 = (FILE *)(ulong)(puVar1[iVar2] & 0x2000), (short)(puVar1[iVar2] & 0x2000) != 0))
      break;
    } while (uVar9 < 0x3e6);
    if ((iVar2 == 0x3b) && (uVar9 < 0x3e6)) {
      local_418[uVar9 + 1] = 0x3b;
      uVar10 = uVar9 + 2;
    }
    binbuf_text(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,puVar5,local_418,uVar10);
    uVar3 = binbuf_getnatom(puVar5);
    piVar7 = (int *)binbuf_getvec((long)puVar5);
    uVar13 = binbuf_add(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,*(int **)(param_9 + 0x58),uVar3,
                        (undefined8 *)piVar7,param_12,param_13,param_14);
    if (uVar3 == 0) {
      post(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"bug: pd~");
      goto LAB_004e4a7f;
    }
    if (*piVar7 == 4) {
LAB_004e4a7f:
      binbuf_free(puVar5);
LAB_004e4a87:
      clock_delay(0.0,*(double **)(param_9 + 0x30));
      return 1;
    }
  } while( true );
}


