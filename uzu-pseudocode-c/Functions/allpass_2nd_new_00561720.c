// Function : allpass_2nd_new
// Namespace: 
// Entry    : 00561720
// Prototype: long * allpass_2nd_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, double param_4, double param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00561720 - 005619f7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * allpass_2nd_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                      double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  undefined1 auVar1 [16];
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  ulong uVar12;
  ulong extraout_XMM0_Qa;
  double dVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar15;
  double dVar16;
  ulong uVar17;
  float local_58;
  float local_54;
  double local_40;
  double local_38;
  
  uVar17 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,allpass_2nd_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 < 1) {
    uVar9 = 0;
    local_54 = DAT_005d9038;
    local_58 = DAT_0065ac74;
  }
  else {
    local_58 = DAT_0065ac74;
    uVar12 = (ulong)(uint)DAT_005d9038;
    local_54 = DAT_005d9038;
    iVar8 = 0;
    uVar9 = 0;
    uVar15 = extraout_RDX;
    do {
      iVar10 = (int)uVar17;
      if (*param_11 == 1) {
        fVar11 = (float)atom_getfloatarg(0,iVar10,(long)param_11);
        uVar12 = CONCAT44(extraout_XMM0_Db,fVar11);
        if (iVar8 == 1) {
          local_54 = fVar11;
        }
        else if (iVar8 == 0) {
          local_58 = fVar11;
        }
        iVar8 = iVar8 + 1;
        uVar15 = extraout_RDX_00;
      }
      else {
        if ((*param_11 != 2) || (iVar8 != 0)) {
LAB_005617e2:
          pd_error(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                   "[allpass.2nd~]: improper args",uVar15,param_12,param_13,param_14);
          return (long *)0x0;
        }
        iVar8 = 0;
        puVar3 = (undefined8 *)atom_getsymbolarg(0,iVar10,(long)param_11);
        puVar4 = gensym("-bw");
        uVar9 = 1;
        uVar15 = extraout_RDX_01;
        uVar12 = extraout_XMM0_Qa;
        if (puVar3 != puVar4) goto LAB_005617e2;
      }
      param_11 = param_11 + 4;
      uVar17 = (ulong)(iVar10 - 1);
    } while (1 < iVar10);
  }
  *(undefined4 *)(plVar2 + 0xb) = uVar9;
  sys_getsr();
  fVar11 = extraout_XMM0_Da * DAT_005d9044;
  *(float *)(plVar2 + 10) = fVar11;
  dVar14 = (double)local_54;
  plVar2[0x10] = (long)(double)local_58;
  plVar2[0x11] = (long)dVar14;
  dVar16 = ((double)local_58 * DAT_00652e70) / (double)fVar11;
  if ((int)plVar2[0xb] != 0) {
    if (dVar14 <= DAT_00656ba0) {
      dVar14 = DAT_00656ba0;
    }
    dVar14 = dVar14 * DAT_0065ac78;
    dVar13 = sin(dVar16);
    dVar14 = sinh((dVar14 * dVar16) / dVar13);
    dVar14 = DAT_005db338 / dVar14;
  }
  if (DAT_00656ba0 <= dVar14) {
    sincos(dVar16,&local_38,&local_40);
    local_38 = local_38 / (dVar14 + dVar14);
    param_4 = local_38 + _DAT_005d9000;
    param_5 = _DAT_005d9000 - local_38;
    dVar14 = (_DAT_005d9000 / param_4) * param_5;
    dVar16 = (_DAT_005d9000 / param_4) * local_40 * DAT_0065ac98;
    uVar17 = (ulong)dVar16 ^ _DAT_00652d10;
    dVar13 = (local_38 + DAT_00651e70) / param_4;
  }
  else {
    dVar16 = 0.0;
    dVar13 = 0.0;
    uVar17 = 0;
    dVar14 = _DAT_005d9000;
  }
  plVar2[0x15] = (long)dVar13;
  plVar2[0x14] = uVar17;
  auVar1._8_4_ = SUB84(dVar16,0);
  auVar1._0_8_ = dVar14;
  auVar1._12_4_ = (int)((ulong)dVar16 >> 0x20);
  *(undefined1 (*) [16])(plVar2 + 0x12) = auVar1;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar6 = inlet_new(extraout_XMM0_Qa_00,dVar14,uVar17,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar2,(long)plVar2,*plVar5 + 0xf0,*plVar5 + 0xf0,param_13,param_14);
  plVar2[7] = (long)plVar6;
  uVar15 = pd_float(plVar6);
  lVar7 = *plVar5 + 0xf0;
  plVar6 = inlet_new(uVar15,dVar14,uVar17,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,lVar7,lVar7,param_13,param_14);
  plVar2[8] = (long)plVar6;
  uVar15 = pd_float(plVar6);
  plVar5 = outlet_new(uVar15,dVar14,uVar17,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                      *plVar5 + 0xf0,extraout_RDX_02,lVar7,param_13,param_14);
  plVar2[9] = (long)plVar5;
  return plVar2;
}


