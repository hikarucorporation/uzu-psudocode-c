// Function : iemgui_dialog
// Namespace: 
// Entry    : 005758d0
// Prototype: uint iemgui_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong * param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 005758d0 - 00575ee5


uint iemgui_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,ulong *param_10,uint param_11,long param_12,char *param_13,
                  undefined8 param_14)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar13;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  char *__s2;
  char *pcVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  char local_c8 [152];
  
  fVar21 = (float)atom_getfloatarg(5,param_11,param_12);
  fVar22 = (float)atom_getfloatarg(10,param_11,param_12);
  fVar23 = (float)atom_getfloatarg(0xb,param_11,param_12);
  fVar24 = (float)atom_getfloatarg(0xc,param_11,param_12);
  fVar25 = (float)atom_getfloatarg(0xd,param_11,param_12);
  uVar16 = 0;
  uVar14 = 0;
  uVar3 = 0;
  if (0xe < (int)param_11) {
    uVar14 = 0;
    if (*(int *)(param_12 + 0xe0) == 2) {
      puVar7 = (undefined8 *)atom_getsymbolarg(0xe,param_11,param_12);
      if (*(char *)*puVar7 == '#') {
        lVar6 = strtol((char *)*puVar7 + 1,(char **)0x0,0x10);
        uVar14 = (uint)lVar6 & 0xffffff;
      }
    }
    else if (*(int *)(param_12 + 0xe0) == 1) {
      fVar26 = (float)atom_getfloatarg(0xe,param_11,param_12);
      uVar14 = (uint)fVar26;
    }
    uVar16 = 0;
    if (param_11 < 0x10) goto LAB_00575a8e;
    uVar16 = 0;
    if (*(int *)(param_12 + 0xf0) == 2) {
      puVar7 = (undefined8 *)atom_getsymbolarg(0xf,param_11,param_12);
      if (*(char *)*puVar7 == '#') {
        lVar6 = strtol((char *)*puVar7 + 1,(char **)0x0,0x10);
        uVar16 = (uint)lVar6 & 0xffffff;
      }
    }
    else if (*(int *)(param_12 + 0xf0) == 1) {
      fVar26 = (float)atom_getfloatarg(0xf,param_11,param_12);
      uVar16 = (uint)fVar26;
    }
    uVar3 = 0;
    if (0x10 < param_11) {
      if (*(int *)(param_12 + 0x100) == 2) {
        puVar7 = (undefined8 *)atom_getsymbolarg(0x10,param_11,param_12);
        if (*(char *)*puVar7 != '#') goto LAB_00575a8e;
        lVar6 = strtol((char *)*puVar7 + 1,(char **)0x0,0x10);
        uVar3 = (uint)lVar6 & 0xffffff;
      }
      else if (*(int *)(param_12 + 0x100) == 1) {
        fVar26 = (float)atom_getfloatarg(0x10,param_11,param_12);
        uVar3 = (uint)fVar26;
      }
      else {
LAB_00575a8e:
        uVar3 = 0;
      }
    }
  }
  uVar1 = *(uint *)(param_9 + 0x88);
  if (*(int *)(param_12 + 0x70) == 1) {
    puVar7 = gensym("empty");
LAB_00575acc:
    *param_10 = (ulong)puVar7;
  }
  else if (*(int *)(param_12 + 0x70) == 2) {
    puVar7 = (undefined8 *)atom_getsymbolarg(7,param_11,param_12);
    goto LAB_00575acc;
  }
  if (*(int *)(param_12 + 0x80) == 1) {
    puVar7 = gensym("empty");
LAB_00575afe:
    param_10[1] = (ulong)puVar7;
  }
  else if (*(int *)(param_12 + 0x80) == 2) {
    puVar7 = (undefined8 *)atom_getsymbolarg(8,param_11,param_12);
    goto LAB_00575afe;
  }
  if (*(int *)(param_12 + 0x90) == 1) {
    fVar26 = (float)atom_getfloatarg(9,param_11,param_12);
    sprintf(local_c8,"%g",(double)fVar26);
    puVar7 = gensym(local_c8);
LAB_00575b67:
    param_10[2] = (ulong)puVar7;
  }
  else if (*(int *)(param_12 + 0x90) == 2) {
    puVar7 = (undefined8 *)atom_getsymbolarg(9,param_11,param_12);
    goto LAB_00575b67;
  }
  uVar10 = *(uint *)(param_9 + 0x89) & 0xfffffffe | (uint)((int)fVar21 != 0);
  uVar11 = (ulong)uVar10;
  *(uint *)(param_9 + 0x89) = uVar10;
  puVar9 = (undefined8 *)*param_10;
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar6 = *plVar8;
  puVar7 = (undefined8 *)(lVar6 + 0x168);
  if ((puVar9 == (undefined8 *)0x0) || (puVar7 == puVar9)) {
LAB_00575bbf:
    *param_10 = (ulong)puVar7;
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar6 = *plVar8;
    uVar13 = extraout_RDX_00;
    puVar9 = puVar7;
    uVar12 = extraout_XMM0_Qa_00;
  }
  else {
    iVar4 = strcmp((char *)*puVar9,"empty");
    uVar13 = extraout_RDX;
    uVar12 = extraout_XMM0_Qa;
    if (iVar4 == 0) goto LAB_00575bbf;
  }
  puVar7 = (undefined8 *)param_10[1];
  puVar15 = (undefined8 *)(lVar6 + 0x168);
  if ((puVar7 == (undefined8 *)0x0) || (puVar15 == puVar7)) {
LAB_00575c00:
    param_10[1] = (ulong)puVar15;
  }
  else {
    iVar4 = strcmp((char *)*puVar7,"empty");
    uVar13 = extraout_RDX_01;
    uVar12 = extraout_XMM0_Qa_01;
    if (iVar4 == 0) goto LAB_00575c00;
  }
  puVar7 = (undefined8 *)param_10[2];
  if ((puVar7 == (undefined8 *)0x0) || (puVar15 == puVar7)) {
LAB_00575c25:
    param_10[2] = (ulong)puVar15;
  }
  else {
    iVar4 = strcmp((char *)*puVar7,"empty");
    uVar13 = extraout_RDX_02;
    uVar12 = extraout_XMM0_Qa_02;
    if (iVar4 == 0) goto LAB_00575c25;
  }
  puVar7 = canvas_realizedollar
                     (uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[6],
                      puVar9,uVar13,uVar11,param_13,param_14);
  *param_10 = (ulong)puVar7;
  param_9[0x8e] = (long)puVar9;
  puVar7 = (undefined8 *)param_10[1];
  uVar13 = extraout_RDX_03;
  uVar12 = extraout_XMM0_Qa_03;
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = canvas_realizedollar
                       (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9[6],puVar7,extraout_RDX_03,uVar11,param_13,param_14);
    param_10[1] = (ulong)puVar9;
    uVar13 = extraout_RDX_04;
    uVar12 = extraout_XMM0_Qa_04;
  }
  param_9[0x8f] = (long)puVar7;
  puVar7 = (undefined8 *)param_10[2];
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = canvas_realizedollar
                       (uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[6],
                        puVar7,uVar13,uVar11,param_13,param_14);
    param_10[2] = (ulong)puVar9;
  }
  uVar10 = (uint)fVar24;
  param_9[0x90] = (long)puVar7;
  puVar9 = (undefined8 *)param_9[0x8c];
  plVar8 = (long *)__tls_get_addr();
  lVar6 = *plVar8;
  puVar7 = (undefined8 *)(lVar6 + 0x168);
  puVar15 = (undefined8 *)param_10[1];
  bVar19 = puVar15 == (undefined8 *)0x0;
  bVar20 = puVar7 == puVar15;
  uVar12 = CONCAT71((int7)(uVar11 >> 8),bVar20 || bVar19);
  uVar13 = extraout_XMM0_Qa_05;
  if ((puVar9 == (undefined8 *)0x0) || (puVar7 == puVar9)) {
    if (bVar20 || bVar19) goto LAB_00575d04;
  }
  else {
    if ((!bVar20 && !bVar19) && (puVar9 == puVar15)) {
LAB_00575d04:
      bVar19 = true;
      goto LAB_00575d0b;
    }
    pd_unbind(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              puVar9,puVar7,uVar12,param_13,param_14);
    plVar8 = (long *)__tls_get_addr();
    lVar6 = *plVar8;
    uVar13 = extraout_XMM0_Qa_06;
  }
  bVar19 = false;
LAB_00575d0b:
  uVar11 = (ulong)uVar10;
  __s2 = (char *)(ulong)(uint)(int)fVar23;
  param_9[0x8b] = *param_10;
  pcVar18 = (char *)(lVar6 + 0x168);
  uVar5 = (uint)(pcVar18 != (char *)*param_10 && (char *)*param_10 != (char *)0x0) << 7;
  uVar17 = *(uint *)(param_9 + 0x88);
  *(uint *)(param_9 + 0x88) = uVar17 & 0xffffff7f | uVar5;
  param_9[0x8c] = param_10[1];
  pcVar2 = (char *)param_10[1];
  puVar7 = (undefined8 *)CONCAT71((int7)((ulong)uVar12 >> 8),pcVar2 != (char *)0x0);
  uVar17 = uVar17 & 0xffffff3f | uVar5 | (uint)(pcVar18 != pcVar2 && pcVar2 != (char *)0x0) << 6;
  *(uint *)(param_9 + 0x88) = uVar17;
  param_9[0x8d] = param_10[2];
  *(uint *)((long)param_9 + 0x454) = uVar3 & 0xffffff;
  *(uint *)((long)param_9 + 0x44c) = uVar16 & 0xffffff;
  *(uint *)(param_9 + 0x8a) = uVar14 & 0xffffff;
  *(int *)(param_9 + 10) = (int)fVar22;
  *(int *)((long)param_9 + 0x54) = (int)fVar23;
  if (uVar10 == 2) {
    *(undefined2 *)((long)param_9 + 0x5c) = 0x73;
    *(undefined4 *)(param_9 + 0xb) = 0x656d6974;
    uVar3 = 2;
  }
  else if (uVar10 == 1) {
    param_9[0xb] = 0x63697465766c6568;
    *(undefined2 *)(param_9 + 0xc) = 0x61;
    uVar3 = 1;
  }
  else {
    __s2 = PTR_sys_font_00715cc0;
    strcpy((char *)(param_9 + 0xb),PTR_sys_font_00715cc0);
    uVar17 = *(uint *)(param_9 + 0x88);
    uVar3 = 0;
    uVar11 = extraout_RDX_05;
    uVar13 = extraout_XMM0_Qa_07;
  }
  uVar3 = uVar17 & 0xffffffc0 | uVar3;
  *(uint *)(param_9 + 0x88) = uVar3;
  iVar4 = 4;
  if (4 < (int)fVar25) {
    iVar4 = (int)fVar25;
  }
  *(int *)((long)param_9 + 0x444) = iVar4;
  if (((!bVar19) && (__s2 = (char *)param_9[0x8c], __s2 != (char *)0x0)) && (pcVar18 != __s2)) {
    pd_bind(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,(long)__s2,uVar11
            ,puVar7,param_13,param_14);
    uVar3 = *(uint *)(param_9 + 0x88);
    uVar11 = extraout_RDX_06;
  }
  *(uint *)(param_9 + 0x88) = uVar3 | 0x4000000;
  if ((~uVar3 & 0xc0) == 0) {
    puVar7 = (undefined8 *)param_9[0x8c];
    __s2 = (char *)*puVar7;
    iVar4 = strcmp(*(char **)param_9[0x8b],__s2);
    uVar11 = extraout_RDX_07;
    if (iVar4 == 0) {
      *(uint *)(param_9 + 0x88) = uVar3 & 0xfbffffff;
    }
  }
  canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[6],__s2,
               uVar11,puVar7,param_13,param_14);
  return uVar1 >> 7 & 1 | uVar1 >> 5 & 2;
}


