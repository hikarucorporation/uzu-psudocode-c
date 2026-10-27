// Function : pd_tilde_new
// Namespace: 
// Entry    : 004e2c10
// Prototype: long * pd_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, long param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 004e2c10 - 004e2fd4


long * pd_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,ulong param_10,long param_11,long param_12,char *param_13,
                   undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined4 *puVar7;
  long *plVar8;
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
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar14;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_10;
  undefined4 local_4c;
  int local_48;
  float local_44;
  undefined8 *local_40;
  long local_38;
  
  uVar11 = param_10 & 0xffffffff;
  uVar10 = (uint)param_10;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pd_tilde_class,
                  param_10,param_11,param_12,param_13,param_14);
  sys_getsr();
  local_38 = *(long *)PTR_sys_libdir_00715520;
  pcVar3 = (char *)class_gethelpdir(pd_tilde_class);
  local_40 = gensym(pcVar3);
  local_44 = extraout_XMM0_Da;
  if ((int)uVar10 < 1) {
    local_4c = 1;
    local_48 = 5;
    iVar12 = 2;
    iVar13 = 2;
    uVar16 = extraout_RDX;
    fVar14 = extraout_XMM0_Da_00;
    uVar15 = extraout_XMM0_Db;
  }
  else {
    iVar13 = 2;
    local_48 = 5;
    local_4c = 1;
    iVar12 = 2;
    do {
      while( true ) {
        iVar9 = (int)uVar11;
        puVar4 = (undefined8 *)atom_getsymbolarg(0,iVar9,param_11);
        pcVar3 = (char *)*puVar4;
        iVar1 = strcmp(pcVar3,"-sr");
        if ((iVar1 != 0) || (iVar9 == 1)) break;
        fVar14 = (float)atom_getfloatarg(1,iVar9,param_11);
        uVar16 = extraout_RDX_00;
        uVar15 = extraout_XMM0_Db_00;
        local_44 = fVar14;
LAB_004e2de0:
        param_12 = 0xfffffffe;
        param_11 = param_11 + 0x20;
        uVar10 = iVar9 - 2;
        uVar11 = (ulong)uVar10;
        if (uVar10 == 0 || iVar9 < 2) goto LAB_004e2e4d;
      }
      iVar1 = strcmp(pcVar3,"-ninsig");
      if ((iVar1 == 0) && (iVar9 != 1)) {
        fVar14 = (float)atom_getfloatarg(1,iVar9,param_11);
        iVar12 = (int)fVar14;
        uVar16 = extraout_RDX_01;
        uVar15 = extraout_XMM0_Db_01;
        goto LAB_004e2de0;
      }
      iVar1 = strcmp(pcVar3,"-noutsig");
      if ((iVar1 == 0) && (iVar9 != 1)) {
        fVar14 = (float)atom_getfloatarg(1,iVar9,param_11);
        iVar13 = (int)fVar14;
        uVar16 = extraout_RDX_02;
        uVar15 = extraout_XMM0_Db_02;
        goto LAB_004e2de0;
      }
      iVar1 = strcmp(pcVar3,"-fifo");
      if ((iVar1 == 0) && (iVar9 != 1)) {
        fVar14 = (float)atom_getfloatarg(1,iVar9,param_11);
        local_48 = (int)fVar14;
        uVar16 = extraout_RDX_03;
        uVar15 = extraout_XMM0_Db_03;
        goto LAB_004e2de0;
      }
      iVar1 = strcmp(pcVar3,"-pddir");
      if ((iVar1 == 0) && (iVar9 != 1)) {
        local_38 = atom_getsymbolarg(1,iVar9,param_11);
        uVar16 = extraout_RDX_04;
        fVar14 = extraout_XMM0_Da_01;
        uVar15 = extraout_XMM0_Db_04;
        goto LAB_004e2de0;
      }
      iVar1 = strcmp(pcVar3,"-scheddir");
      if ((iVar1 == 0) && (iVar9 != 1)) {
        local_40 = (undefined8 *)atom_getsymbolarg(1,iVar9,param_11);
        uVar16 = extraout_RDX_05;
        fVar14 = extraout_XMM0_Da_02;
        uVar15 = extraout_XMM0_Db_05;
        goto LAB_004e2de0;
      }
      iVar1 = strcmp(pcVar3,"-ascii");
      uVar16 = extraout_RDX_06;
      fVar14 = extraout_XMM0_Da_03;
      uVar15 = extraout_XMM0_Db_06;
      if (iVar1 != 0) goto LAB_004e2e51;
      local_4c = 0;
      param_12 = 0xffffffff;
      param_11 = param_11 + 0x10;
      uVar10 = iVar9 - 1;
      uVar11 = (ulong)uVar10;
    } while (uVar10 != 0 && 0 < iVar9);
  }
LAB_004e2e4d:
  if (uVar10 != 0) {
LAB_004e2e51:
    uVar16 = pd_error(CONCAT44(uVar15,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,(long)plVar2,
                      "usage: pd~ [-sr #] [-ninsig #] [-noutsig #] [-fifo #] [-pddir <>]",uVar16,
                      param_12,param_13,param_14);
    post(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"... [-scheddir <>]");
  }
  lVar5 = clock_new(plVar2,pd_tilde_tick);
  plVar2[6] = lVar5;
  pvVar6 = getbytes((long)iVar12 * 8);
  plVar2[0x11] = (long)pvVar6;
  pvVar6 = getbytes((long)iVar13 * 8);
  plVar2[0x12] = (long)pvVar6;
  *(int *)((long)plVar2 + 100) = iVar12;
  *(int *)(plVar2 + 0xd) = iVar13;
  *(undefined4 *)(plVar2 + 0x13) = 0x40;
  *(int *)((long)plVar2 + 0x6c) = local_48;
  *(float *)((long)plVar2 + 0x74) = local_44;
  plVar2[0xf] = local_38;
  plVar2[0x10] = (long)local_40;
  plVar2[9] = 0;
  plVar2[10] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0xffffffff;
  lVar5 = canvas_getcurrent(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2[8] = lVar5;
  puVar7 = binbuf_new();
  plVar2[0xb] = (long)puVar7;
  *(undefined4 *)(plVar2 + 0xe) = local_4c;
  uVar16 = extraout_RDX_07;
  uVar15 = extraout_XMM0_Da_04;
  uVar17 = extraout_XMM0_Db_07;
  if (1 < iVar12) {
    iVar12 = iVar12 + -1;
    do {
      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
      param_12 = *plVar8 + 0xf0;
      inlet_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,(long)plVar2,(long)plVar2,param_12,param_12,param_13,
                param_14);
      iVar12 = iVar12 + -1;
      uVar16 = extraout_RDX_08;
      uVar15 = extraout_XMM0_Da_06;
      uVar17 = extraout_XMM0_Db_09;
    } while (iVar12 != 0);
  }
  plVar8 = outlet_new(CONCAT44(uVar17,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,(long)plVar2,0,uVar16,param_12,param_13,param_14);
  plVar2[7] = (long)plVar8;
  if (0 < iVar13) {
    do {
      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
      outlet_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar2,*plVar8 + 0xf0,extraout_RDX_09,param_12,
                 param_13,param_14);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  signal(0xd,(__sighandler_t)0x1);
  return plVar2;
}


