// Function : canvas_new
// Namespace: 
// Entry    : 004fd3d0
// Prototype: long * canvas_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, long param_12, uint * param_13, undefined4 * param_14)
// Body     : 004fd3d0 - 004fd983


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * canvas_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,long param_12,uint *param_13,
                 undefined4 *param_14)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  char *__s1;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined4 extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 uVar23;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined1 uVar24;
  int iStack_474;
  uint uStack_470;
  uint uStack_46c;
  char local_418 [999];
  undefined1 local_31;
  
  puVar14 = PTR_canvas_class_00715918;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_canvas_class_00715918,param_10,param_11,param_12,(char *)param_13,
                  param_14);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar6 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),extraout_XMM1_Qa,param_3,
                          param_4,param_5,param_6,param_7,param_8,*plVar5 + 0x120,*(long *)puVar14);
  if (plVar6 == (long *)0x0) {
    puVar7 = (uint *)PTR_sys_defaultfont_00715900;
  }
  else {
    puVar7 = (uint *)(plVar6 + 0x1a);
  }
  puVar16 = (undefined8 *)(*plVar5 + 0x168);
  uVar15 = *puVar7;
  plVar4[0x1d] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  puVar14 = (undefined *)0x0;
  lVar8 = gstub_new((long)plVar4,0);
  plVar4[7] = lVar8;
  uVar11 = *(int *)PTR_glist_valid_007157f8 + 1;
  uVar12 = (ulong)uVar11;
  *(uint *)PTR_glist_valid_007157f8 = uVar11;
  *(uint *)(plVar4 + 8) = uVar11;
  pvVar9 = getbytes(0);
  plVar4[0x12] = (long)pvVar9;
  pvVar9 = getbytes(0);
  plVar4[0x16] = (long)pvVar9;
  pvVar9 = getbytes(0x20);
  pcVar13 = (char *)(CONCAT71((int7)(uVar12 >> 8),*(undefined1 *)((long)plVar4 + 0x2e)) &
                     0xfffffffffffffffc | 1);
  plVar4[0x1e] = (long)pvVar9;
  *(char *)((long)plVar4 + 0x2e) = (char)pcVar13;
  if (plVar6 == (long *)0x0) {
    plVar5 = (long *)__tls_get_addr();
    lVar8 = *plVar5;
    pcVar13 = *(char **)(lVar8 + 0x10);
    plVar4[0x1b] = (long)pcVar13;
    *(long **)(lVar8 + 0x10) = plVar4;
  }
  if ((int)param_11 == 6) {
    fVar17 = (float)atom_getfloatarg(0,6,param_12);
    fVar18 = (float)atom_getfloatarg(1,6,param_12);
    fVar19 = (float)atom_getfloatarg(2,6,param_12);
    fVar20 = (float)atom_getfloatarg(3,6,param_12);
    iVar21 = (int)fVar19;
    iStack_474 = (int)fVar20;
    uStack_470 = (uint)fVar17;
    uStack_46c = (uint)fVar18;
    puVar16 = (undefined8 *)atom_getsymbolarg(4,6,param_12);
    puVar14 = (undefined *)0x6;
    fVar17 = (float)atom_getfloatarg(5,6,param_12);
    param_3 = CONCAT44(fVar20,fVar19);
    uVar11 = (uint)fVar17;
  }
  else {
    if ((int)param_11 == 5) {
      fVar17 = (float)atom_getfloatarg(0,5,param_12);
      fVar18 = (float)atom_getfloatarg(1,5,param_12);
      fVar19 = (float)atom_getfloatarg(2,5,param_12);
      fVar20 = (float)atom_getfloatarg(3,5,param_12);
      iVar21 = (int)fVar19;
      iStack_474 = (int)fVar20;
      uStack_470 = (uint)fVar17;
      uStack_46c = (uint)fVar18;
      puVar14 = (undefined *)0x5;
      fVar17 = (float)atom_getfloatarg(4,5,param_12);
      param_3 = CONCAT44(fVar20,fVar19);
      uVar15 = (uint)fVar17;
    }
    else {
      iVar21 = _DAT_00653f10;
      iStack_474 = _UNK_00653f14;
      uStack_470 = _UNK_00653f18;
      uStack_46c = _UNK_00653f1c;
    }
    uVar11 = 0;
  }
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar10 = *(undefined8 **)(*(long *)(*plVar5 + 0x48) + 0x18);
  if ((puVar10 == (undefined8 *)0x0) || (*(char *)*puVar10 == '\0')) {
    plVar4[0x1c] = 0;
    uVar12 = extraout_RDX;
    uVar3 = extraout_XMM0_Da_00;
    uVar22 = extraout_XMM0_Db_00;
    uVar23 = extraout_XMM1_Qa_00;
  }
  else {
    puVar10 = getbytes(0x28);
    plVar4[0x1c] = (long)puVar10;
    plVar5 = (long *)__tls_get_addr();
    lVar8 = *(long *)(*plVar5 + 0x48);
    if (*(long *)(lVar8 + 0x28) == 0) {
      pvVar9 = getbytes(0);
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar8 = *(long *)(*plVar5 + 0x48);
      *(void **)(lVar8 + 0x28) = pvVar9;
    }
    *puVar10 = *(undefined8 *)(lVar8 + 0x18);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar8 = *plVar5;
    pcVar13 = *(char **)(lVar8 + 0x48);
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(pcVar13 + 0x20);
    puVar10[2] = *(undefined8 *)(pcVar13 + 0x28);
    uVar1 = *(uint *)(pcVar13 + 0x3c);
    uVar12 = (ulong)uVar1;
    puVar14 = (undefined *)(ulong)(uVar1 + 1);
    *(uint *)(pcVar13 + 0x3c) = uVar1 + 1;
    *(uint *)(puVar10 + 3) = uVar1;
    puVar10[4] = 0;
    *(long *)(pcVar13 + 0x18) = lVar8 + 0x168;
    pcVar13[0x20] = '\0';
    pcVar13[0x21] = '\0';
    pcVar13[0x22] = '\0';
    pcVar13[0x23] = '\0';
    pcVar13[0x28] = '\0';
    pcVar13[0x29] = '\0';
    pcVar13[0x2a] = '\0';
    pcVar13[0x2b] = '\0';
    pcVar13[0x2c] = '\0';
    pcVar13[0x2d] = '\0';
    pcVar13[0x2e] = '\0';
    pcVar13[0x2f] = '\0';
    uVar3 = extraout_XMM0_Da_01;
    uVar22 = extraout_XMM0_Db_01;
    uVar23 = extraout_XMM1_Qa_01;
  }
  canvas_undo_init(CONCAT44(uVar22,uVar3),uVar23,param_3,param_4,param_5,param_6,param_7,param_8,
                   plVar4,puVar14,uVar12,pcVar13,param_13,param_14);
  lVar8 = _UNK_00653f28;
  plVar4[0xb] = _DAT_00653f20;
  plVar4[0xc] = lVar8;
  pcVar13 = (char *)(ulong)(iStack_474 + uStack_46c);
  canvas_dosetbounds(CONCAT44(uStack_46c,uStack_46c),CONCAT44(iStack_474,iVar21),param_3,param_4,
                     param_5,param_6,param_7,param_8,plVar4,(long *)(ulong)uStack_470,
                     (ulong)uStack_46c,(undefined *)(ulong)(iVar21 + uStack_470),pcVar13,
                     (undefined *)param_14,(char)iVar21);
  uVar24 = (undefined1)iVar21;
  plVar4[9] = (long)plVar6;
  *(byte *)((long)plVar4 + 0xe9) = *(byte *)((long)plVar4 + 0xe9) & 0xf7;
  uVar23 = extraout_XMM1_Qa_02;
  if (*(char *)*puVar16 == '\0') {
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar16 = *(undefined8 **)(*(long *)(*plVar5 + 0x48) + 0x10);
    uVar23 = extraout_XMM1_Qa_03;
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = gensym("Pd");
    }
  }
  plVar4[0x19] = (long)puVar16;
  __s1 = (char *)*puVar16;
  iVar21 = strcmp(__s1,"Pd");
  if (iVar21 != 0) {
    pd_snprintf(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),uVar23,param_3,param_4,param_5,
                param_6,param_7,param_8,local_418,999,"pd-%s",__s1,pcVar13,param_14,uVar24);
    local_31 = 0;
    uVar23 = extraout_XMM1_Qa_04;
    puVar16 = gensym(local_418);
    pd_bind(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),uVar23,param_3,param_4,param_5,param_6
            ,param_7,param_8,plVar4,(long)puVar16,extraout_RDX_00,__s1,pcVar13,param_14);
  }
  *(ushort *)(plVar4 + 0x1d) = (ushort)plVar4[0x1d] & 0xff77 | 8;
  if (uVar11 == 0) {
    uVar11 = 0;
  }
  else {
    puVar16 = gensym("#X");
    if ((puVar16[1] != 0) &&
       (puVar16 = gensym("#X"), *(long *)puVar16[1] == *(long *)PTR_canvas_class_00715918)) {
      puVar16 = gensym("#X");
      lVar8 = puVar16[1];
      do {
        if (lVar8 == 0) goto LAB_004fd8f4;
        plVar5 = (long *)(lVar8 + 0xe0);
        lVar8 = *(long *)(lVar8 + 0x48);
      } while (*plVar5 == 0);
      uVar1 = 0;
      if (lVar8 == 0) {
        uVar1 = uVar11;
      }
      uVar11 = uVar1;
    }
  }
LAB_004fd8f4:
  lVar8 = plVar4[0x1d];
  uVar2 = (ushort)((uVar11 & 1) << 4);
  *(ushort *)(plVar4 + 0x1d) = (ushort)lVar8 & 0xffef | uVar2;
  iVar21 = strncmp(*(char **)plVar4[0x19],"PDUNTITLED",10);
  *(ushort *)(plVar4 + 0x1d) = (ushort)lVar8 & 0xffcf | uVar2 | (ushort)(iVar21 == 0) << 5;
  uVar3 = sys_nearestfontsize(uVar15);
  *(undefined4 *)(plVar4 + 0x1a) = uVar3;
  if (plVar6 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined4 *)((long)plVar6 + 0xec);
  }
  *(undefined4 *)((long)plVar4 + 0xec) = uVar3;
  pd_pushsym(plVar4);
  return plVar4;
}


