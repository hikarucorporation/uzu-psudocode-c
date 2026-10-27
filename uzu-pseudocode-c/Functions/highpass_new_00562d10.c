// Function : highpass_new
// Namespace: 
// Entry    : 00562d10
// Prototype: long * highpass_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, double param_4, double param_5, double param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00562d10 - 00562ff6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * highpass_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                   double param_5,double param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

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
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  ulong uVar11;
  ulong extraout_XMM0_Qa;
  double dVar12;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar13;
  double dVar14;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined1 auVar15 [16];
  double dVar16;
  long lVar17;
  undefined1 auVar18 [16];
  float local_58;
  float local_54;
  double local_40;
  double local_38;
  
  uVar9 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,highpass_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 < 1) {
    uVar7 = 0;
    local_54 = DAT_005d9038;
    local_58 = DAT_0065ac74;
  }
  else {
    local_58 = DAT_0065ac74;
    uVar11 = (ulong)(uint)DAT_005d9038;
    local_54 = DAT_005d9038;
    iVar6 = 0;
    uVar7 = 0;
    uVar13 = extraout_RDX;
    do {
      iVar8 = (int)uVar9;
      if (*param_11 == 1) {
        fVar10 = (float)atom_getfloatarg(0,iVar8,(long)param_11);
        uVar11 = CONCAT44(extraout_XMM0_Db,fVar10);
        if (iVar6 == 1) {
          local_54 = fVar10;
        }
        else if (iVar6 == 0) {
          local_58 = fVar10;
        }
        iVar6 = iVar6 + 1;
        uVar13 = extraout_RDX_00;
      }
      else {
        if ((*param_11 != 2) || (iVar6 != 0)) {
LAB_00562dd2:
          pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                   "[highpass~]: improper args",uVar13,param_12,param_13,param_14);
          return (long *)0x0;
        }
        iVar6 = 0;
        puVar2 = (undefined8 *)atom_getsymbolarg(0,iVar8,(long)param_11);
        puVar3 = gensym("-bw");
        uVar7 = 1;
        uVar13 = extraout_RDX_01;
        uVar11 = extraout_XMM0_Qa;
        if (puVar2 != puVar3) goto LAB_00562dd2;
      }
      param_11 = param_11 + 4;
      uVar9 = (ulong)(iVar8 - 1);
    } while (1 < iVar8);
  }
  *(undefined4 *)(plVar1 + 10) = uVar7;
  sys_getsr();
  fVar10 = extraout_XMM0_Da * DAT_005d9044;
  *(float *)(plVar1 + 9) = fVar10;
  dVar14 = (double)local_54;
  plVar1[0xf] = (long)(double)local_58;
  plVar1[0x10] = (long)dVar14;
  dVar16 = ((double)local_58 * DAT_00652e70) / (double)fVar10;
  if ((int)plVar1[10] != 0) {
    if (dVar14 <= DAT_00656ba0) {
      dVar14 = DAT_00656ba0;
    }
    dVar14 = dVar14 * DAT_0065ac78;
    dVar12 = sin(dVar16);
    dVar14 = sinh((dVar14 * dVar16) / dVar12);
    dVar14 = DAT_005db338 / dVar14;
  }
  if (DAT_00656ba0 <= dVar14) {
    sincos(dVar16,&local_38,&local_40);
    local_38 = local_38 / (dVar14 + dVar14);
    param_4 = local_38 + _DAT_0065ad60;
    local_38 = local_38 + _UNK_0065ad68;
    auVar15._8_8_ = local_40 + local_40;
    auVar15._0_8_ = local_40 + _DAT_005d9000;
    dVar16 = _DAT_005d9000 / local_38;
    param_5 = local_38 + local_38;
    param_6 = (double)((ulong)(local_40 + _DAT_005d9000) ^ _DAT_00652d10) * dVar16;
    plVar1[0x12] = (long)param_6;
    auVar18._8_8_ = local_38;
    auVar18._0_8_ = param_5;
    auVar18 = divpd(auVar15,auVar18);
    dVar16 = dVar16 * param_4;
    dVar12 = auVar18._0_8_;
    lVar17 = auVar18._8_8_;
    dVar14 = dVar12;
  }
  else {
    dVar12 = 0.0;
    lVar17 = 0;
    dVar16 = 0.0;
    dVar14 = _DAT_005d9000;
  }
  plVar1[0x11] = (long)dVar14;
  plVar1[0x15] = (long)dVar16;
  plVar1[0x13] = (long)dVar12;
  plVar1[0x14] = lVar17;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = inlet_new(extraout_XMM0_Qa_00,extraout_XMM1_Qa,dVar12,param_4,param_5,param_6,param_7,
                     param_8,(long)plVar1,(long)plVar1,*plVar4 + 0xf0,*plVar4 + 0xf0,param_13,
                     param_14);
  plVar1[6] = (long)plVar5;
  auVar18 = pd_float(plVar5);
  lVar17 = *plVar4 + 0xf0;
  plVar5 = inlet_new(auVar18._0_8_,auVar18._8_8_,dVar12,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar1,(long)plVar1,lVar17,lVar17,param_13,param_14);
  plVar1[7] = (long)plVar5;
  uVar13 = pd_float(plVar5);
  plVar4 = outlet_new(uVar13,extraout_XMM1_Qa_00,dVar12,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar4 + 0xf0,extraout_RDX_02,lVar17,param_13,param_14);
  plVar1[8] = (long)plVar4;
  return plVar1;
}


