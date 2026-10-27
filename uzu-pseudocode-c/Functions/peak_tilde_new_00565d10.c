// Function : peak_tilde_new
// Namespace: 
// Entry    : 00565d10
// Prototype: long * peak_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00565d10 - 00565e70


long * peak_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  int *extraout_RDX;
  int *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar10;
  undefined *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  float fVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  if ((int)param_10 < 1) {
    uVar1 = 0;
    uVar12 = 1;
  }
  else {
    uVar9 = param_10 & 0xffffffff;
    uVar12 = 1;
    iVar14 = 0;
    uVar1 = 0;
    uVar13 = 0;
    piVar15 = param_11;
    do {
      iVar10 = (int)uVar9;
      if (*piVar15 == 2) {
        puVar6 = (undefined8 *)atom_getsymbolarg(0,iVar10,(long)piVar15);
        puVar11 = &DAT_0065aed6;
        param_10 = uVar9;
        puVar3 = gensym("-lin");
        param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da);
        if ((puVar6 != puVar3) || (iVar14 != 0)) {
          pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,(long)puVar11,"[peak~]: improper args",extraout_RDX_00,
                   param_12,param_13,param_14);
          return (long *)0x0;
        }
        uVar9 = (ulong)(iVar10 - 1);
        piVar15 = piVar15 + 4;
        uVar12 = 0;
        iVar14 = 0;
        param_11 = extraout_RDX_00;
      }
      else if (*piVar15 == 1) {
        param_10 = uVar9;
        fVar16 = (float)atom_getfloatarg(0,iVar10,(long)piVar15);
        param_1 = CONCAT44(extraout_XMM0_Db,fVar16);
        if (iVar14 == 1) {
          uVar1 = (uint)fVar16;
        }
        else if (iVar14 == 0) {
          uVar13 = (uint)fVar16;
        }
        iVar14 = iVar14 + 1;
        uVar9 = (ulong)(iVar10 - 1);
        piVar15 = piVar15 + 4;
        param_11 = extraout_RDX;
      }
    } while (0 < (int)uVar9);
    if (0 < (int)uVar13) goto LAB_00565dd5;
  }
  uVar13 = 0x400;
LAB_00565dd5:
  uVar2 = uVar13 >> 1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar8 = uVar13 >> 5;
  uVar9 = (ulong)uVar8;
  uVar1 = uVar8 + 1;
  if (uVar8 < uVar2) {
    uVar1 = uVar2;
  }
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_peak_tilde_class_00715828,param_10,param_11,uVar9,param_13,param_14);
  *(uint *)((long)plVar4 + 0x4c) = uVar13;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)((long)plVar4 + 0x5c) = 0;
  *(uint *)((long)plVar4 + 0x44) = uVar1;
  lVar5 = clock_new(plVar4,peak_tilde_tick);
  plVar4[7] = lVar5;
  puVar6 = gensym("float");
  plVar7 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar4,(long)puVar6,extraout_RDX_01,
                      uVar9,param_13,param_14);
  plVar4[6] = (long)plVar7;
  *(undefined4 *)((long)plVar4 + 0x54) = 0x40;
  *(undefined4 *)(plVar4 + 0xc) = uVar12;
  return plVar4;
}


