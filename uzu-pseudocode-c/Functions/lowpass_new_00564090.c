// Function : lowpass_new
// Namespace: 
// Entry    : 00564090
// Prototype: long * lowpass_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, double param_4, double param_5, double param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00564090 - 00564391


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * lowpass_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,double param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int iVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  ulong uVar11;
  double dVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined1 auVar16 [16];
  double dVar17;
  long lVar18;
  undefined1 auVar19 [16];
  float local_58;
  float local_54;
  double local_40;
  double local_38;
  
  uVar8 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lowpass_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 < 1) {
    fVar10 = 0.0;
    local_54 = DAT_005d9038;
    local_58 = DAT_0065ac74;
  }
  else {
    local_58 = DAT_0065ac74;
    uVar11 = (ulong)(uint)DAT_005d9038;
    uVar14 = 0;
    fVar10 = 0.0;
    iVar6 = 0;
    local_54 = DAT_005d9038;
    uVar13 = extraout_RDX;
    do {
      iVar7 = (int)uVar8;
      if (*param_11 == 1) {
        fVar9 = (float)atom_getfloatarg(0,iVar7,(long)param_11);
        uVar11 = CONCAT44(extraout_XMM0_Db,fVar9);
        if (iVar6 == 1) {
          local_54 = fVar9;
        }
        else if (iVar6 == 0) {
          local_58 = fVar9;
        }
        iVar6 = iVar6 + 1;
        uVar13 = extraout_RDX_00;
      }
      else {
        if ((*param_11 != 2) || (iVar6 != 0)) {
LAB_00564166:
          pd_error(uVar11,uVar14,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                   "[lowpass~]: improper args",uVar13,param_12,param_13,param_14);
          return (long *)0x0;
        }
        iVar6 = 0;
        puVar2 = (undefined8 *)atom_getsymbolarg(0,iVar7,(long)param_11);
        puVar3 = gensym("-bw");
        uVar11 = (ulong)(uint)DAT_005d9038;
        uVar13 = extraout_RDX_01;
        fVar10 = DAT_005d9038;
        if (puVar2 != puVar3) goto LAB_00564166;
      }
      param_11 = param_11 + 4;
      uVar8 = (ulong)(iVar7 - 1);
    } while (1 < iVar7);
  }
  *(int *)(plVar1 + 0xb) = (int)fVar10;
  sys_getsr();
  fVar10 = extraout_XMM0_Da * DAT_005d9044;
  *(float *)(plVar1 + 10) = fVar10;
  dVar15 = (double)local_54;
  plVar1[0x10] = (long)(double)local_58;
  plVar1[0x11] = (long)dVar15;
  dVar17 = ((double)local_58 * DAT_00652e70) / (double)fVar10;
  if ((int)plVar1[0xb] != 0) {
    if (dVar15 <= DAT_00656ba0) {
      dVar15 = DAT_00656ba0;
    }
    dVar15 = dVar15 * DAT_0065ac78;
    dVar12 = sin(dVar17);
    dVar15 = sinh((dVar15 * dVar17) / dVar12);
    dVar15 = DAT_005db338 / dVar15;
  }
  if (DAT_00656ba0 <= dVar15) {
    sincos(dVar17,&local_38,&local_40);
    local_38 = local_38 / (dVar15 + dVar15);
    param_4 = local_38 + _DAT_0065ad60;
    local_38 = local_38 + _UNK_0065ad68;
    auVar16._8_8_ = local_40 + local_40;
    auVar16._0_8_ = _DAT_005d9000 - local_40;
    dVar17 = _DAT_005d9000 / local_38;
    param_5 = local_38 + local_38;
    param_6 = (_DAT_005d9000 - local_40) * dVar17;
    plVar1[0x13] = (long)param_6;
    auVar19._8_8_ = local_38;
    auVar19._0_8_ = param_5;
    auVar19 = divpd(auVar16,auVar19);
    dVar17 = dVar17 * param_4;
    dVar12 = auVar19._0_8_;
    lVar18 = auVar19._8_8_;
    dVar15 = dVar12;
  }
  else {
    dVar12 = 0.0;
    lVar18 = 0;
    dVar17 = 0.0;
    dVar15 = _DAT_005d9000;
  }
  plVar1[0x12] = (long)dVar15;
  plVar1[0x16] = (long)dVar17;
  plVar1[0x14] = (long)dVar12;
  plVar1[0x15] = lVar18;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = inlet_new(extraout_XMM0_Qa,extraout_XMM1_Qa,dVar12,param_4,param_5,param_6,param_7,
                     param_8,(long)plVar1,(long)plVar1,*plVar4 + 0xf0,*plVar4 + 0xf0,param_13,
                     param_14);
  plVar1[7] = (long)plVar5;
  auVar19 = pd_float(plVar5);
  lVar18 = *plVar4 + 0xf0;
  plVar5 = inlet_new(auVar19._0_8_,auVar19._8_8_,dVar12,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar1,(long)plVar1,lVar18,lVar18,param_13,param_14);
  plVar1[8] = (long)plVar5;
  uVar13 = pd_float(plVar5);
  plVar4 = outlet_new(uVar13,extraout_XMM1_Qa_00,dVar12,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar4 + 0xf0,extraout_RDX_02,lVar18,param_13,param_14);
  plVar1[9] = (long)plVar4;
  return plVar1;
}


