// Function : glob_initfromgui
// Namespace: 
// Entry    : 00542680
// Prototype: undefined glob_initfromgui(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00542680 - 00542b86


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void glob_initfromgui(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,uint param_11,long param_12,
                     char *param_13,undefined8 param_14)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined8 uVar15;
  undefined1 in_stack_ffffffffffffffb8;
  
  uVar6 = (ulong)param_11;
  fVar13 = (float)atom_getfloatarg(1,param_11,param_12);
  puVar3 = PTR_sys_oldtclversion_00715a28;
  *(int *)PTR_sys_oldtclversion_00715a28 = (int)fVar13;
  if (param_11 != 0x26) {
    bug(CONCAT44(extraout_XMM0_Db,fVar13),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
        "glob_initfromgui",uVar6,extraout_RDX,puVar3,param_13,param_14,in_stack_ffffffffffffffb8);
  }
  fVar13 = (float)atom_getfloatarg(2,param_11,param_12);
  iVar7 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(3,param_11,param_12);
  iVar8 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(4,param_11,param_12);
  iVar2 = (int)fVar13;
  bVar10 = iVar7 != 0;
  uVar4 = CONCAT71((int7)((ulong)puVar3 >> 8),bVar10);
  bVar11 = iVar8 != 0;
  bVar12 = iVar2 == 0;
  if (bVar12 || (!bVar11 || !bVar10)) {
    logpost(CONCAT44(extraout_XMM0_Db_00,fVar13),param_2,param_3,param_4,param_5,param_6,param_7,
            param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,param_13,param_14,
            in_stack_ffffffffffffffb8);
    iVar2 = 0xb;
    iVar8 = 5;
    iVar7 = 8;
  }
  bVar1 = bVar12 || (!bVar11 || !bVar10);
  sys_gotfonts = iVar7;
  DAT_00718f34 = iVar8;
  DAT_00718f38 = iVar2;
  fVar13 = (float)atom_getfloatarg(5,param_11,param_12);
  iVar2 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(6,param_11,param_12);
  fVar14 = (float)atom_getfloatarg(7,param_11,param_12);
  if (((iVar2 == 0) || (iVar7 = (int)fVar13, iVar7 == 0)) || (iVar8 = (int)fVar14, iVar8 == 0)) {
    iVar8 = 0xd;
    iVar2 = 10;
    bVar1 = true;
    if (!bVar12 && (bVar11 && bVar10)) {
      logpost(CONCAT44(extraout_XMM0_Db_01,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,param_13,param_14,
              in_stack_ffffffffffffffb8);
    }
    iVar7 = 6;
  }
  _DAT_00718f3c = iVar2;
  DAT_00718f40 = iVar7;
  DAT_00718f44 = iVar8;
  fVar13 = (float)atom_getfloatarg(8,param_11,param_12);
  iVar2 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(9,param_11,param_12);
  fVar14 = (float)atom_getfloatarg(10,param_11,param_12);
  if (((iVar2 == 0) || (iVar7 = (int)fVar13, iVar7 == 0)) || (iVar8 = (int)fVar14, iVar8 == 0)) {
    iVar8 = 0x10;
    iVar7 = 7;
    iVar2 = 0xc;
    bVar10 = !bVar1;
    bVar1 = true;
    if (bVar10) {
      logpost(CONCAT44(extraout_XMM0_Db_02,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,param_13,param_14,
              in_stack_ffffffffffffffb8);
    }
  }
  _DAT_00718f48 = iVar2;
  DAT_00718f4c = iVar7;
  DAT_00718f50 = iVar8;
  fVar13 = (float)atom_getfloatarg(0xb,param_11,param_12);
  iVar2 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(0xc,param_11,param_12);
  fVar14 = (float)atom_getfloatarg(0xd,param_11,param_12);
  if (((iVar2 == 0) || (iVar7 = (int)fVar13, iVar7 == 0)) || (iVar8 = (int)fVar14, iVar8 == 0)) {
    iVar8 = 0x13;
    iVar7 = 10;
    iVar2 = 0x10;
    bVar10 = !bVar1;
    bVar1 = true;
    if (bVar10) {
      logpost(CONCAT44(extraout_XMM0_Db_03,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,param_13,param_14,
              in_stack_ffffffffffffffb8);
    }
  }
  iVar9 = 0xe;
  _DAT_00718f54 = iVar2;
  DAT_00718f58 = iVar7;
  DAT_00718f5c = iVar8;
  fVar13 = (float)atom_getfloatarg(0xe,param_11,param_12);
  iVar2 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(0xf,param_11,param_12);
  fVar14 = (float)atom_getfloatarg(0x10,param_11,param_12);
  if (((iVar2 == 0) || ((int)fVar13 == 0)) || (iVar7 = (int)fVar14, iVar7 == 0)) {
    iVar7 = 0x1d;
    iVar2 = 0x18;
    bVar10 = true;
    if (!bVar1) {
      logpost(CONCAT44(extraout_XMM0_Db_04,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,param_13,param_14,
              in_stack_ffffffffffffffb8);
    }
  }
  else {
    iVar9 = (int)fVar13;
    bVar10 = bVar1;
  }
  _DAT_00718f60 = iVar2;
  _DAT_00718f64 = iVar9;
  _DAT_00718f68 = iVar7;
  fVar13 = (float)atom_getfloatarg(0x11,param_11,param_12);
  iVar2 = (int)fVar13;
  fVar13 = (float)atom_getfloatarg(0x12,param_11,param_12);
  fVar14 = (float)atom_getfloatarg(0x13,param_11,param_12);
  if (((iVar2 == 0) || (iVar7 = (int)fVar13, iVar7 == 0)) || (iVar8 = (int)fVar14, iVar8 == 0)) {
    iVar8 = 0x2c;
    iVar7 = 0x16;
    iVar2 = 0x24;
    bVar11 = !bVar10;
    bVar10 = true;
    if (bVar11) {
      logpost(CONCAT44(extraout_XMM0_Db_05,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,param_13,param_14,
              in_stack_ffffffffffffffb8);
    }
  }
  lVar5 = -0x12;
  _DAT_00718f6c = iVar2;
  _DAT_00718f70 = iVar7;
  _DAT_00718f74 = iVar8;
  do {
    iVar2 = (int)lVar5;
    fVar13 = (float)atom_getfloatarg(iVar2 + 0x26,param_11,param_12);
    iVar7 = (int)fVar13;
    fVar13 = (float)atom_getfloatarg(iVar2 + 0x27,param_11,param_12);
    fVar14 = (float)atom_getfloatarg(iVar2 + 0x28,param_11,param_12);
    uVar15 = CONCAT44(extraout_XMM0_Db_06,fVar14);
    if (((iVar7 == 0) || (iVar2 = (int)fVar13, iVar2 == 0)) || (iVar8 = (int)fVar14, iVar8 == 0)) {
      iVar7 = *(int *)(&DAT_00657c58 + lVar5 * 4) * 2;
      iVar2 = *(int *)(&UNK_00657c5c + lVar5 * 4) * 2;
      iVar8 = *(int *)(&UNK_00657c60 + lVar5 * 4) * 2;
      bVar11 = !bVar10;
      bVar10 = true;
      uVar15 = CONCAT44(extraout_XMM0_Db_06,fVar14);
      if (bVar11) {
        uVar15 = logpost(CONCAT44(extraout_XMM0_Db_06,fVar14),param_2,param_3,param_4,param_5,
                         param_6,param_7,param_8,0,4,"ignoring invalid font-metrics from GUI",uVar4,
                         param_13,param_14,in_stack_ffffffffffffffb8);
      }
    }
    (&sys_usestdpath)[lVar5] = iVar7;
    (&array_random_new_random_nextseed)[lVar5] = iVar2;
    *(int *)(lVar5 * 4 + 0x718fc8) = iVar8;
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0);
  sys_doneglobinit(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


