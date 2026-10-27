// Function : gverb_spread
// Namespace: 
// Entry    : 0056cc60
// Prototype: undefined gverb_spread(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0056cc60 - 0056d138


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gverb_spread(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,ulong param_12,char *param_13,
                 undefined8 param_14)

{
  long *plVar1;
  uint *puVar2;
  void *pvVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar14 = (float)*(int *)(*(long *)(param_9 + 0x88) + 0xc);
  fVar11 = 0.0;
  if (0.0 <= param_1) {
    fVar11 = param_1;
  }
  fVar9 = DAT_0065b228 * fVar11;
  uVar8 = (uint)(DAT_0065b214 * fVar14);
  puVar2 = getbytes(0x18);
  if (puVar2 == (uint *)0x0) {
LAB_0056cd0d:
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar8;
    puVar2[1] = 0x3f400000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar8 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0056cd0d;
    if (-1 < (int)uVar8) {
      param_12 = (ulong)uVar8;
      memset(pvVar3,0,param_12 * 4 + 4);
    }
  }
  uVar17 = 0;
  uVar16 = 0;
  fVar15 = DAT_0065b22c * fVar11;
  iVar6 = (int)fVar9;
  fVar14 = fVar14 * DAT_0065b208;
  **(undefined8 **)(param_9 + 0x98) = puVar2;
  fVar10 = fVar15;
  puVar2 = getbytes(0x18);
  if (puVar2 == (uint *)0x0) {
LAB_0056cdb4:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar5 = (uint)((float)(iVar6 + 0x9f) * fVar14);
    *puVar2 = uVar5;
    puVar2[1] = 0x3f400000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar5 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0056cdb4;
    if (-1 < (int)uVar5) {
      param_12 = (ulong)uVar5;
      memset(pvVar3,0,param_12 * 4 + 4);
    }
  }
  iVar7 = (int)fVar15;
  *(uint **)(*(long *)(param_9 + 0x98) + 8) = puVar2;
  puVar2 = getbytes(0x18);
  if (puVar2 == (uint *)0x0) {
LAB_0056ce37:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar5 = (uint)((float)((iVar7 - iVar6) + 0x232) * fVar14);
    *puVar2 = uVar5;
    puVar2[1] = 0x3f200000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar5 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0056ce37;
    if (-1 < (int)uVar5) {
      param_12 = (ulong)uVar5;
      memset(pvVar3,0,param_12 * 4 + 4);
    }
  }
  *(uint **)(*(long *)(param_9 + 0x98) + 0x10) = puVar2;
  puVar2 = getbytes(0x18);
  uVar4 = extraout_RDX;
  uVar12 = extraout_XMM0_Da;
  uVar13 = extraout_XMM0_Db;
  if (puVar2 == (uint *)0x0) {
LAB_0056ceac:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar5 = (uint)((float)(0x19a - iVar7) * fVar14);
    *puVar2 = uVar5;
    puVar2[1] = 0x3f200000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar5 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    uVar4 = extraout_RDX_00;
    uVar12 = extraout_XMM0_Da_00;
    uVar13 = extraout_XMM0_Db_00;
    if (pvVar3 == (void *)0x0) goto LAB_0056ceac;
    if (-1 < (int)uVar5) {
      param_12 = (ulong)uVar5;
      memset(pvVar3,0,param_12 * 4 + 4);
      uVar4 = extraout_RDX_01;
      uVar12 = extraout_XMM0_Da_01;
      uVar13 = extraout_XMM0_Db_01;
    }
  }
  *(uint **)(*(long *)(param_9 + 0x98) + 0x18) = puVar2;
  plVar1 = *(long **)(param_9 + 0x98);
  if ((((*plVar1 == 0) || (plVar1[1] == 0)) || (plVar1[2] == 0)) || (plVar1[3] == 0))
  goto LAB_0056d11a;
  fVar10 = DAT_0065b230 * fVar11;
  puVar2 = getbytes(0x18);
  if (puVar2 == (uint *)0x0) {
LAB_0056cf51:
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar8;
    puVar2[1] = 0x3f400000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar8 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0056cf51;
    if (-1 < (int)uVar8) {
      param_12 = (ulong)uVar8;
      memset(pvVar3,0,param_12 * 4 + 4);
    }
  }
  uVar16 = 0;
  fVar11 = fVar11 * _DAT_0065b234;
  iVar6 = (int)fVar10;
  **(undefined8 **)(param_9 + 0xa0) = puVar2;
  puVar2 = getbytes(0x18);
  if (puVar2 == (uint *)0x0) {
LAB_0056cfe4:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar8 = (uint)((float)(iVar6 + 0x9f) * fVar14);
    *puVar2 = uVar8;
    puVar2[1] = 0x3f400000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar8 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0056cfe4;
    if (-1 < (int)uVar8) {
      param_12 = (ulong)uVar8;
      memset(pvVar3,0,param_12 * 4 + 4);
    }
  }
  *(uint **)(*(long *)(param_9 + 0xa0) + 8) = puVar2;
  puVar2 = getbytes(0x18);
  if (puVar2 == (uint *)0x0) {
LAB_0056d063:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar8 = (uint)((float)(((int)fVar11 - iVar6) + 0x232) * fVar14);
    *puVar2 = uVar8;
    puVar2[1] = 0x3f200000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar8 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0056d063;
    if (-1 < (int)uVar8) {
      param_12 = (ulong)uVar8;
      memset(pvVar3,0,param_12 * 4 + 4);
    }
  }
  *(uint **)(*(long *)(param_9 + 0xa0) + 0x10) = puVar2;
  puVar2 = getbytes(0x18);
  uVar4 = extraout_RDX_02;
  uVar12 = extraout_XMM0_Da_02;
  uVar13 = extraout_XMM0_Db_02;
  if (puVar2 == (uint *)0x0) {
LAB_0056d0dc:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar16 = 0;
    fVar10 = fVar14 * (float)(0x19a - (int)fVar11);
    uVar8 = (uint)fVar10;
    *puVar2 = uVar8;
    puVar2[1] = 0x3f200000;
    puVar2[2] = 0;
    pvVar3 = getbytes((long)(int)uVar8 * 4 + 4);
    *(void **)(puVar2 + 4) = pvVar3;
    uVar4 = extraout_RDX_03;
    uVar12 = extraout_XMM0_Da_03;
    uVar13 = extraout_XMM0_Db_03;
    if (pvVar3 == (void *)0x0) goto LAB_0056d0dc;
    if (-1 < (int)uVar8) {
      param_12 = (ulong)uVar8;
      memset(pvVar3,0,param_12 * 4 + 4);
      uVar4 = extraout_RDX_04;
      uVar12 = extraout_XMM0_Da_04;
      uVar13 = extraout_XMM0_Db_04;
    }
  }
  *(uint **)(*(long *)(param_9 + 0xa0) + 0x18) = puVar2;
  plVar1 = *(long **)(param_9 + 0xa0);
  if (((*plVar1 != 0) && (plVar1[1] != 0)) && ((plVar1[2] != 0 && (plVar1[3] != 0)))) {
    return;
  }
LAB_0056d11a:
  pd_error(CONCAT44(uVar13,uVar12),CONCAT44(uVar16,fVar10),CONCAT44(uVar17,fVar9),param_4,param_5,
           param_6,param_7,param_8,param_9,"[giga.rev~]: out of memory",uVar4,param_12,param_13,
           param_14);
  return;
}


