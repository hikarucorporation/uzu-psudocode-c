// Function : glist_addglist
// Namespace: 
// Entry    : 004fe800
// Prototype: long * glist_addglist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, uint * param_13, undefined4 * param_14)
// Body     : 004fe800 - 004febe8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * glist_addglist(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                     uint *param_13,undefined4 *param_14)

{
  int *piVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar14;
  char *pcVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  char local_418 [999];
  undefined1 local_31;
  
  puVar3 = PTR_canvas_class_00715918;
  fVar30 = (float)param_8;
  fVar20 = (float)param_6;
  fVar22 = (float)param_4;
  fVar19 = (float)param_3;
  fVar17 = (float)param_2;
  fVar33 = (float)param_1;
  plVar5 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_canvas_class_00715918,param_10,param_11,param_12,(char *)param_13,
                  param_14);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1e] = 0;
  lVar6 = gstub_new((long)plVar5,0);
  plVar5[7] = lVar6;
  uVar11 = *(int *)PTR_glist_valid_007157f8 + 1;
  pcVar12 = (char *)(ulong)uVar11;
  *(uint *)PTR_glist_valid_007157f8 = uVar11;
  *(uint *)(plVar5 + 8) = uVar11;
  pvVar7 = getbytes(0);
  plVar5[0x12] = (long)pvVar7;
  pvVar7 = getbytes(0);
  plVar5[0x16] = (long)pvVar7;
  pvVar7 = getbytes(0x20);
  plVar5[0x1e] = (long)pvVar7;
  *(byte *)((long)plVar5 + 0x2e) = *(byte *)((long)plVar5 + 0x2e) & 0xfc | 1;
  pcVar13 = (char *)*param_10;
  if (*pcVar13 == '\0') {
    glist_addglist_gcount = glist_addglist_gcount + 1;
    bVar2 = false;
    sprintf(local_418,"graph%d",glist_addglist_gcount);
    param_10 = gensym(local_418);
  }
  else {
    iVar4 = strncmp(pcVar13,"graph",5);
    bVar2 = true;
    if (iVar4 == 0) {
      lVar6 = strtol(pcVar13 + 5,(char **)0x0,10);
      if (glist_addglist_gcount < (int)lVar6) {
        glist_addglist_gcount = (int)lVar6;
      }
    }
  }
  if (fVar20 <= fVar30) {
    fVar27 = fVar22;
    fVar31 = fVar20;
    fVar22 = fVar17;
    fVar20 = fVar30;
  }
  else {
    fVar27 = fVar17;
    fVar31 = fVar30;
  }
  if ((fVar33 == fVar19) || (fVar22 == fVar27)) {
    fVar33 = 0.0;
    fVar27 = DAT_005d9054;
    fVar22 = DAT_005d9038;
    fVar19 = DAT_005d94c4;
  }
  uVar29 = 0;
  uVar28 = 0;
  uVar18 = 0;
  if (((float)param_7 <= (float)param_5) ||
     (fVar23 = (float)param_7, fVar25 = (float)param_5, fVar20 <= fVar31)) {
    fVar20 = DAT_00653f00;
    fVar23 = DAT_00653f04;
    fVar25 = DAT_005d94c4;
    fVar31 = DAT_005d98f4;
  }
  uVar32 = 0;
  uVar26 = 0;
  uVar24 = 0;
  uVar21 = 0;
  plVar5[0x19] = (long)param_10;
  *(float *)(plVar5 + 0xb) = fVar33;
  *(float *)(plVar5 + 0xc) = fVar19;
  *(float *)((long)plVar5 + 0x5c) = fVar22;
  *(float *)((long)plVar5 + 100) = fVar27;
  *(short *)(plVar5 + 5) = (short)(int)fVar25;
  *(short *)((long)plVar5 + 0x2a) = (short)(int)fVar31;
  fVar23 = fVar23 - fVar25;
  *(int *)(plVar5 + 10) = (int)fVar23;
  fVar20 = fVar20 - fVar31;
  *(int *)((long)plVar5 + 0x54) = (int)fVar20;
  fVar19 = fVar17;
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar8 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar18,fVar17),
                          CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),CONCAT44(uVar26,fVar25),
                          CONCAT44(uVar28,fVar27),CONCAT44(uVar29,fVar22),CONCAT44(uVar32,fVar31),
                          *plVar8 + 0x120,*(long *)puVar3);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)PTR_sys_defaultfont_00715900;
  }
  else {
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar8 = pd_findbyclass(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),
                            CONCAT44(uVar18,fVar17),CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),
                            CONCAT44(uVar26,fVar25),CONCAT44(uVar28,fVar27),CONCAT44(uVar29,fVar22),
                            CONCAT44(uVar32,fVar31),*plVar8 + 0x120,*(long *)puVar3);
    plVar8 = plVar8 + 0x1a;
  }
  *(int *)(plVar5 + 0x1a) = (int)*plVar8;
  *(undefined4 *)((long)plVar5 + 0xec) = *(undefined4 *)((long)param_9 + 0xec);
  lVar6 = _UNK_00653f48;
  plVar5[0xd] = _DAT_00653f40;
  plVar5[0xe] = lVar6;
  plVar5[9] = (long)param_9;
  pcVar13 = *(char **)plVar5[0x19];
  pcVar15 = "Pd";
  iVar4 = strcmp(pcVar13,"Pd");
  if (iVar4 != 0) {
    pd_snprintf(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar18,fVar17),
                CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),CONCAT44(uVar26,fVar25),
                CONCAT44(uVar28,fVar27),CONCAT44(uVar29,fVar22),CONCAT44(uVar32,fVar31),local_418,
                999,"pd-%s",pcVar13,param_13,param_14,SUB41(fVar19,0));
    local_31 = 0;
    pcVar15 = (char *)gensym(local_418);
    pd_bind(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar18,fVar17),
            CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),CONCAT44(uVar26,fVar25),
            CONCAT44(uVar28,fVar27),CONCAT44(uVar29,fVar22),CONCAT44(uVar32,fVar31),plVar5,
            (long)pcVar15,extraout_RDX,pcVar13,(char *)param_13,param_14);
    pcVar12 = pcVar13;
  }
  *(ushort *)(plVar5 + 0x1d) = (ushort)plVar5[0x1d] & 0xfe7f | 0x100;
  puVar9 = binbuf_new();
  plVar5[2] = (long)puVar9;
  canvas_undo_init(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),CONCAT44(uVar18,fVar17),
                   CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),(double)CONCAT44(uVar26,fVar25),
                   (double)CONCAT44(uVar28,fVar27),(double)CONCAT44(uVar29,fVar22),
                   CONCAT44(uVar32,fVar31),plVar5,pcVar15,extraout_RDX_00,pcVar12,param_13,param_14)
  ;
  piVar1 = (int *)plVar5[2];
  puVar10 = gensym("graph");
  binbuf_addv(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),CONCAT44(uVar18,fVar17),
              CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),CONCAT44(uVar26,fVar25),
              CONCAT44(uVar28,fVar27),CONCAT44(uVar29,fVar22),CONCAT44(uVar32,fVar31),piVar1,
              0x6552a4,puVar10,pcVar12,(char *)param_13,param_14,(double)CONCAT44(fVar30,fVar19));
  uVar16 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
  uVar14 = extraout_RDX_01;
  if (bVar2) {
    uVar16 = pd_pushsym(plVar5);
    uVar14 = extraout_RDX_02;
  }
  glist_add(uVar16,CONCAT44(uVar18,fVar17),CONCAT44(uVar21,fVar20),CONCAT44(uVar24,fVar23),
            CONCAT44(uVar26,fVar25),CONCAT44(uVar28,fVar27),CONCAT44(uVar29,fVar22),
            CONCAT44(uVar32,fVar31),param_9,plVar5,uVar14,pcVar12,(char *)param_13,param_14);
  return plVar5;
}


