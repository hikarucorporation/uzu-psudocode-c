// Function : gatom_param
// Namespace: 
// Entry    : 0052d3b0
// Prototype: undefined gatom_param(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12)
// Body     : 0052d3b0 - 0052d87c


void gatom_param(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                undefined8 param_10,uint param_11,undefined8 *param_12)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined7 extraout_var;
  undefined8 uVar10;
  byte bVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  char *pcVar14;
  uint *puVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar21;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint local_128 [2];
  float local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  float local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  float local_b0;
  float local_a8;
  char local_98;
  char local_97 [98];
  undefined1 local_35;
  
  fVar17 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  fVar18 = (float)atom_getfloatarg(1,param_11,(long)param_12);
  local_a8 = (float)atom_getfloatarg(2,param_11,(long)param_12);
  puVar6 = (undefined8 *)atom_getsymbolarg(3,param_11,(long)param_12);
  if (*(char *)*puVar6 == '-') {
    puVar6 = gensym((char *)*puVar6 + 1);
  }
  else {
    puVar6 = iemgui_raute2dollar(puVar6);
  }
  fVar19 = (float)atom_getfloatarg(4,param_11,(long)param_12);
  puVar7 = (undefined8 *)atom_getsymbolarg(5,param_11,(long)param_12);
  if (*(char *)*puVar7 == '-') {
    puVar7 = gensym((char *)*puVar7 + 1);
  }
  else {
    puVar7 = iemgui_raute2dollar(puVar7);
  }
  puVar8 = (undefined8 *)atom_getsymbolarg(6,param_11,(long)param_12);
  if (*(char *)*puVar8 == '-') {
    plVar9 = gensym((char *)*puVar8 + 1);
  }
  else {
    plVar9 = iemgui_raute2dollar(puVar8);
  }
  fVar20 = (float)atom_getfloatarg(7,param_11,(long)param_12);
  uVar5 = glist_isvisible(param_9[7]);
  bVar4 = gobj_shouldvis(param_9,(long *)param_9[7]);
  local_128[0] = 1;
  local_120 = (float)(int)*(short *)((long)param_9 + 0x2c);
  local_118 = 1;
  local_110 = (undefined4)param_9[9];
  local_108 = 1;
  local_100 = *(undefined4 *)((long)param_9 + 0x44);
  local_f8 = 2;
  local_f0 = (undefined8 *)param_9[10];
  cVar1 = *(char *)*local_f0;
  if (cVar1 == '-') {
    local_98 = '-';
    strncpy(local_97,(char *)*local_f0,99);
    local_35 = 0;
    pcVar14 = &local_98;
LAB_0052d56b:
    local_f0 = gensym(pcVar14);
  }
  else if (cVar1 == '\0') {
    pcVar14 = "-";
    goto LAB_0052d56b;
  }
  local_e8 = 1;
  local_e0 = (float)(*(byte *)(param_9 + 0xf) >> 1 & 3);
  local_d8 = 2;
  local_d0 = (undefined8 *)param_9[0xb];
  cVar1 = *(char *)*local_d0;
  if (cVar1 == '-') {
    local_98 = '-';
    strncpy(local_97,(char *)*local_d0,99);
    local_35 = 0;
    pcVar14 = &local_98;
LAB_0052d5e3:
    local_d0 = gensym(pcVar14);
  }
  else if (cVar1 == '\0') {
    pcVar14 = "-";
    goto LAB_0052d5e3;
  }
  local_c8 = 2;
  local_c0 = (undefined8 *)param_9[0xc];
  cVar1 = *(char *)*local_c0;
  if (cVar1 == '-') {
    local_98 = '-';
    strncpy(local_97,(char *)*local_c0,99);
    local_35 = 0;
    pcVar14 = &local_98;
  }
  else {
    if (cVar1 != '\0') goto LAB_0052d645;
    pcVar14 = "-";
  }
  local_c0 = gensym(pcVar14);
LAB_0052d645:
  local_b8 = 1;
  local_b0 = (float)*(int *)((long)param_9 + 0x74);
  plVar2 = (long *)param_9[7];
  pcVar14 = (char *)gensym("param");
  puVar15 = local_128;
  uVar10 = 8;
  uVar16 = (ulong)param_11;
  uVar21 = pd_undo_set_objectstate
                     (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,plVar2,(long)param_9,pcVar14,8,puVar15,uVar16,param_12
                     );
  uVar13 = extraout_RDX;
  if (uVar5 != 0) {
    uVar21 = gobj_vis(param_9,(long *)param_9[7],0);
    uVar13 = extraout_RDX_00;
  }
  if (*(char *)*puVar7 == '\0') {
    if (**(char **)param_9[0xb] != '\0') {
      uVar10 = 0;
      inlet_new(uVar21,param_2,(ulong)(uint)fVar18,param_4,param_5,param_6,param_7,param_8,
                (long)param_9,(long)param_9,0,0,(char *)puVar15,uVar16);
      uVar21 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      uVar13 = extraout_RDX_02;
    }
  }
  else if (**(char **)param_9[0xb] == '\0') {
    uVar13 = 0;
    if (param_9[4] != 0) {
      uVar10 = 0;
      canvas_deletelinesforio
                (uVar21,param_2,(ulong)(uint)fVar18,param_4,param_5,param_6,param_7,param_8,
                 param_9[7],param_9,param_9[4],0,puVar15,uVar16);
      uVar21 = inlet_free((void *)param_9[4]);
      uVar13 = extraout_RDX_01;
    }
  }
  if (*(char *)*plVar9 == '\0') {
    if (**(char **)param_9[0xc] != '\0') {
      outlet_new(uVar21,param_2,(ulong)(uint)fVar18,param_4,param_5,param_6,param_7,param_8,
                 (long)param_9,0,uVar13,uVar10,(char *)puVar15,uVar16);
      uVar13 = extraout_RDX_04;
    }
  }
  else if ((**(char **)param_9[0xc] == '\0') && (param_9[3] != 0)) {
    canvas_deletelinesforio
              (uVar21,param_2,(ulong)(uint)fVar18,param_4,param_5,param_6,param_7,param_8,param_9[7]
               ,param_9,0,param_9[3],puVar15,uVar16);
    outlet_free((long *)param_9[3]);
    uVar13 = extraout_RDX_03;
  }
  bVar3 = fVar18 < local_a8;
  uVar23 = 0;
  uVar24 = 0;
  if (local_a8 <= fVar18) {
    fVar18 = 0.0;
  }
  uVar25 = 0;
  *(float *)(param_9 + 9) = fVar18;
  *(uint *)((long)param_9 + 0x44) = -(uint)bVar3 & (uint)local_a8;
  if (0.0 <= fVar17) {
    if (DAT_005d94d8 < fVar17) {
      fVar17 = DAT_005d94d8;
    }
  }
  else {
    fVar17 = DAT_005d94d4;
  }
  uVar22 = 0;
  *(short *)((long)param_9 + 0x2c) = (short)(int)fVar17;
  uVar12 = CONCAT71((int7)((ulong)uVar13 >> 8),(char)param_9[0xf]) & 0xfffffffffffffff9;
  bVar11 = (byte)uVar12 | (char)(int)fVar19 * '\x02' & 6U;
  uVar13 = CONCAT71((int7)(uVar12 >> 8),bVar11);
  *(byte *)(param_9 + 0xf) = bVar11;
  param_9[10] = (long)puVar6;
  *(int *)((long)param_9 + 0x74) = (int)fVar20;
  if (**(char **)param_9[0xb] != '\0') {
    puVar8 = canvas_realizedollar
                       ((ulong)(uint)fVar17,0,(ulong)(uint)fVar18,param_4,param_5,param_6,param_7,
                        param_8,param_9[7],(undefined8 *)param_9[0xb],uVar13,puVar6,(char *)puVar15,
                        uVar16);
    pd_unbind(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar24,uVar23),
              CONCAT44(uVar25,fVar18),param_4,param_5,param_6,param_7,param_8,param_9,puVar8,
              extraout_RDX_05,puVar6,(char *)puVar15,uVar16);
    uVar13 = extraout_RDX_06;
    fVar17 = extraout_XMM0_Da_02;
    uVar22 = extraout_XMM0_Db_02;
  }
  param_9[0xb] = (long)puVar7;
  if (*(char *)*puVar7 != '\0') {
    puVar7 = canvas_realizedollar
                       (CONCAT44(uVar22,fVar17),CONCAT44(uVar24,uVar23),CONCAT44(uVar25,fVar18),
                        param_4,param_5,param_6,param_7,param_8,param_9[7],puVar7,uVar13,puVar6,
                        (char *)puVar15,uVar16);
    pd_bind(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),CONCAT44(uVar24,uVar23),
            CONCAT44(uVar25,fVar18),param_4,param_5,param_6,param_7,param_8,param_9,(long)puVar7,
            extraout_RDX_07,puVar6,(char *)puVar15,uVar16);
    uVar13 = extraout_RDX_08;
    fVar17 = extraout_XMM0_Da_04;
    uVar22 = extraout_XMM0_Db_04;
  }
  param_9[0xc] = (long)plVar9;
  puVar7 = canvas_realizedollar
                     (CONCAT44(uVar22,fVar17),CONCAT44(uVar24,uVar23),CONCAT44(uVar25,fVar18),
                      param_4,param_5,param_6,param_7,param_8,param_9[7],plVar9,uVar13,puVar6,
                      (char *)puVar15,uVar16);
  param_9[0x10] = (long)puVar7;
  uVar13 = extraout_RDX_09;
  if ((uVar5 != 0) && ((int)CONCAT71(extraout_var,bVar4) != 0)) {
    plVar9 = (long *)param_9[7];
    gobj_vis(param_9,plVar9,1);
    uVar13 = extraout_RDX_10;
  }
  canvas_dirty(DAT_005d9038,CONCAT44(uVar24,uVar23),CONCAT44(uVar25,fVar18),param_4,param_5,param_6,
               param_7,param_8,param_9[7],(char *)plVar9,uVar13,puVar6,(char *)puVar15,uVar16);
  if (uVar5 != 0) {
    canvas_fixlinesfor(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),CONCAT44(uVar24,uVar23),
                       CONCAT44(uVar25,fVar18),param_4,param_5,param_6,param_7,param_8,param_9[7],
                       (long)param_9);
  }
  return;
}


