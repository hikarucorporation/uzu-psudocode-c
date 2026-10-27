// Function : canvas_atom
// Namespace: 
// Entry    : 0052adb0
// Prototype: undefined canvas_atom(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052adb0 - 0052b1e5


void canvas_atom(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  char cVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  char *pcVar10;
  undefined8 extraout_RDX;
  undefined8 uVar11;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  char *pcVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined4 extraout_XMM0_Da;
  float fVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar19;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  double in_stack_ffffffffffffffb8;
  int local_3c;
  int local_38;
  undefined2 local_34 [2];
  undefined2 local_30 [2];
  uint local_2c;
  
  pcVar12 = param_13;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,gatom_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined2 *)((long)plVar3 + 0x2c) = 0;
  *(byte *)((long)plVar3 + 0x2e) = *(byte *)((long)plVar3 + 0x2e) | 3;
  puVar4 = binbuf_new();
  plVar3[2] = (long)puVar4;
  plVar3[7] = (long)param_9;
  *(int *)(plVar3 + 6) = (int)param_10;
  plVar3[8] = 0x3f800000;
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar9 = *plVar5 + 0x168;
  plVar3[10] = lVar9;
  plVar3[0xb] = lVar9;
  plVar3[0x10] = lVar9;
  plVar3[0xc] = lVar9;
  *(byte *)(plVar3 + 0xf) = *(byte *)(plVar3 + 0xf) & 0xf1;
  plVar3[0xd] = 0;
  *(undefined4 *)((long)plVar3 + 0x74) = 0;
  uVar18 = gatom_getatom(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,(long)plVar3);
  iVar15 = (int)param_12;
  if (iVar15 < 2) {
    piVar8 = (int *)local_34;
    piVar13 = &local_38;
    piVar14 = &local_3c;
    canvas_howputnew(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     &local_2c,(int *)local_30,piVar8,piVar13,piVar14);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar9 = *plVar5 + 0x78;
    if ((int)plVar3[6] != 1) {
      lVar9 = *plVar5 + 0x90;
    }
    outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar3,lVar9,extraout_RDX,piVar8,(char *)piVar13,
               piVar14);
    inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,(long)plVar3,(long)plVar3,0,0,(char *)piVar13,piVar14);
    puVar6 = gensym("editmode");
    uVar19 = pd_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)param_9,puVar6,0x65522c,1,piVar13,
                      piVar14,in_stack_ffffffffffffffb8);
    *(undefined2 *)(plVar3 + 5) = local_30[0];
    *(undefined2 *)((long)plVar3 + 0x2a) = local_34[0];
    uVar18 = 10;
    uVar11 = 0x14;
    if ((int)plVar3[6] == 2) {
      uVar11 = 10;
    }
    uVar2 = 5;
    if ((int)plVar3[6] != 1) {
      uVar2 = (short)uVar11;
    }
    *(undefined2 *)((long)plVar3 + 0x2c) = uVar2;
    plVar5 = plVar3;
    uVar11 = glist_add(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar3
                       ,uVar11,10,(char *)piVar13,piVar14);
    uVar11 = glist_noselect(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            plVar5,extraout_RDX_00,uVar18,(char *)piVar13,piVar14);
    glist_select(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,plVar3
                 ,extraout_RDX_01,uVar18,(char *)piVar13,piVar14);
    if (local_2c == 0) {
      lVar9 = glist_getcanvas((long)param_9);
      canvas_startmotion(lVar9);
    }
    else {
      uVar21 = 0;
      fVar16 = (float)local_3c;
      uVar17 = 0;
      uVar20 = 0;
      uVar22 = 0;
      uVar23 = 0;
      canvas_connect((float)local_38,0,(ulong)(uint)fVar16,0,param_5,param_6,param_7,param_8,
                     (long)param_9);
      param_4 = CONCAT44(uVar23,uVar22);
      param_3 = CONCAT44(uVar21,fVar16);
      param_2 = CONCAT44(uVar20,uVar17);
    }
    lVar9 = glist_getcanvas((long)param_9);
    lVar7 = glist_getcanvas((long)param_9);
    piVar8 = canvas_undo_set_create
                       (CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_09),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,lVar7);
    pcVar12 = (char *)0x9;
    canvas_undo_add(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_10),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,lVar9,9,"create",piVar8,piVar13,piVar14);
    auVar24 = glist_getcanvas((long)param_9);
    canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auVar24._0_8_,
                 pcVar12,auVar24._8_8_,piVar8,(char *)piVar13,piVar14);
    return;
  }
  fVar16 = (float)atom_getfloatarg(0,iVar15,(long)param_13);
  *(short *)(plVar3 + 5) = (short)(int)fVar16;
  fVar16 = (float)atom_getfloatarg(1,iVar15,(long)param_13);
  *(short *)((long)plVar3 + 0x2a) = (short)(int)fVar16;
  fVar16 = (float)atom_getfloatarg(2,iVar15,(long)param_13);
  uVar2 = (undefined2)(int)fVar16;
  if (500 < ((int)fVar16 & 0xffffU)) {
    uVar2 = 4;
  }
  *(undefined2 *)((long)plVar3 + 0x2c) = uVar2;
  uVar17 = atom_getfloatarg(3,iVar15,(long)param_13);
  *(undefined4 *)(plVar3 + 9) = uVar17;
  uVar17 = atom_getfloatarg(4,iVar15,(long)param_13);
  *(undefined4 *)((long)plVar3 + 0x44) = uVar17;
  fVar16 = (float)atom_getfloatarg(5,iVar15,(long)param_13);
  *(byte *)(plVar3 + 0xf) = *(byte *)(plVar3 + 0xf) & 0xf9 | (char)(int)fVar16 * '\x02' & 6U;
  puVar6 = (undefined8 *)atom_getsymbolarg(6,iVar15,(long)param_13);
  if (*(char *)*puVar6 == '-') {
    puVar6 = gensym((char *)*puVar6 + 1);
  }
  else {
    puVar6 = iemgui_raute2dollar(puVar6);
  }
  plVar3[10] = (long)puVar6;
  puVar6 = (undefined8 *)atom_getsymbolarg(7,iVar15,(long)param_13);
  if (*(char *)*puVar6 == '-') {
    puVar6 = gensym((char *)*puVar6 + 1);
    plVar3[0xb] = (long)puVar6;
    pcVar10 = (char *)*puVar6;
    cVar1 = *pcVar10;
    uVar18 = extraout_RDX_02;
    uVar17 = extraout_XMM0_Da_03;
    uVar20 = extraout_XMM0_Db_03;
  }
  else {
    puVar6 = iemgui_raute2dollar(puVar6);
    plVar3[0xb] = (long)puVar6;
    pcVar10 = (char *)*puVar6;
    cVar1 = *pcVar10;
    uVar18 = extraout_RDX_03;
    uVar17 = extraout_XMM0_Da_04;
    uVar20 = extraout_XMM0_Db_04;
  }
  if (cVar1 != '\0') {
    puVar6 = canvas_realizedollar
                       (CONCAT44(uVar20,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,plVar3[7],puVar6,uVar18,pcVar10,pcVar12,param_14);
    pd_bind(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,plVar3,(long)puVar6,extraout_RDX_04,pcVar10,pcVar12,param_14);
  }
  puVar6 = (undefined8 *)atom_getsymbolarg(8,iVar15,(long)param_13);
  if (*(char *)*puVar6 == '-') {
    puVar6 = gensym((char *)*puVar6 + 1);
    uVar18 = extraout_RDX_05;
    uVar17 = extraout_XMM0_Da_06;
    uVar20 = extraout_XMM0_Db_06;
  }
  else {
    puVar6 = iemgui_raute2dollar(puVar6);
    uVar18 = extraout_RDX_06;
    uVar17 = extraout_XMM0_Da_07;
    uVar20 = extraout_XMM0_Db_07;
  }
  plVar3[0xc] = (long)puVar6;
  puVar6 = canvas_realizedollar
                     (CONCAT44(uVar20,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,plVar3[7],puVar6,uVar18,pcVar10,pcVar12,param_14);
  plVar3[0x10] = (long)puVar6;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar9 = *plVar5;
  if (plVar3[0xc] == lVar9 + 0x168) {
    lVar7 = lVar9 + 0x78;
    if ((int)plVar3[6] != 1) {
      lVar7 = lVar9 + 0x90;
    }
    outlet_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar3,lVar7,extraout_RDX_07,pcVar10,pcVar12,param_14);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar17 = extraout_XMM0_Da_11;
    uVar20 = extraout_XMM0_Db_12;
    if (plVar3[0xb] != *plVar5 + 0x168) goto LAB_0052b0fe;
  }
  else {
    uVar17 = extraout_XMM0_Da_08;
    uVar20 = extraout_XMM0_Db_08;
    if (plVar3[0xb] != lVar9 + 0x168) goto LAB_0052b0fe;
  }
  pcVar10 = (char *)0x0;
  inlet_new(CONCAT44(uVar20,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            (long)plVar3,(long)plVar3,0,0,pcVar12,param_14);
LAB_0052b0fe:
  fVar16 = (float)atom_getfloatarg(9,iVar15,(long)param_13);
  *(int *)((long)plVar3 + 0x74) = (int)fVar16;
  glist_add(CONCAT44(extraout_XMM0_Db_09,fVar16),param_2,param_3,param_4,param_5,param_6,param_7,
            param_8,param_9,plVar3,extraout_RDX_08,pcVar10,pcVar12,param_14);
  return;
}


