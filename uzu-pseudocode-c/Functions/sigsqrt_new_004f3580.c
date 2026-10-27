// Function : sigsqrt_new
// Namespace: 
// Entry    : 004f3580
// Prototype: long * sigsqrt_new(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, char * param_11, undefined8 param_12)
// Body     : 004f3580 - 004f36cb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * sigsqrt_new(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,char *param_11,undefined8 param_12)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  void *pvVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 extraout_RDX;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 extraout_XMM0_Qa;
  double dVar14;
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM5 [16];
  
  plVar7 = pd_new(param_1,param_2,param_3,in_XMM3._0_8_,param_4,in_XMM5._0_8_,param_5,param_6,
                  sigsqrt_class,param_8,param_9,param_10,param_11,param_12);
  if (rsqrt_exptab == (void *)0x0) {
    rsqrt_exptab = getbytes(0x400);
    pvVar8 = getbytes(0x1000);
    pvVar6 = rsqrt_exptab;
    dVar5 = DAT_00653398;
    dVar4 = DAT_00653390;
    dVar1 = _DAT_005d9000;
    fVar10 = 0.0;
    lVar11 = 0;
    rsqrt_mantissatab = pvVar8;
    do {
      dVar14 = dVar4;
      if (lVar11 != 0x3fc) {
        dVar14 = (double)fVar10;
      }
      dVar2 = dVar5;
      if (lVar11 != 0) {
        dVar2 = dVar14;
      }
      *(float *)((long)pvVar6 + lVar11) = (float)(dVar1 / SQRT(dVar2));
      dVar14 = _UNK_006533d8;
      param_2 = _DAT_006533d0;
      in_XMM3 = _DAT_00651fa0;
      auVar3 = _DAT_00651e80;
      lVar11 = lVar11 + 4;
      fVar10 = (float)((int)fVar10 + 0x800000);
    } while (lVar11 != 0x400);
    param_10 = 0;
    param_3 = (double)DAT_00651e80;
    dVar1 = DAT_00651e80._8_8_;
    iVar12 = _DAT_00651f90;
    iVar13 = _UNK_00651f94;
    do {
      auVar15._0_8_ = (double)(float)((double)iVar12 * param_2 + param_3);
      auVar15._8_8_ = (double)(float)((double)iVar13 * dVar14 + dVar1);
      auVar15 = sqrtpd(auVar15,auVar15);
      in_XMM5 = divpd(auVar3,auVar15);
      param_4 = CONCAT44((float)in_XMM5._8_8_,(float)in_XMM5._0_8_);
      *(undefined8 *)((long)pvVar8 + param_10 * 4) = param_4;
      param_10 = param_10 + 2;
      iVar12 = iVar12 + in_XMM3._0_4_;
      iVar13 = iVar13 + in_XMM3._4_4_;
    } while (param_10 != 0x400);
  }
  puVar9 = gensym("signal");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,in_XMM3._0_8_,param_4,in_XMM5._0_8_,param_5,param_6,
             (long)plVar7,(long)puVar9,extraout_RDX,param_10,param_11,param_12);
  *(undefined4 *)(plVar7 + 6) = 0;
  return plVar7;
}


