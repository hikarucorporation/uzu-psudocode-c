// Function : q8_rsqrt
// Namespace: 
// Entry    : 004f2ab0
// Prototype: undefined8 q8_rsqrt(float param_1)
// Body     : 004f2ab0 - 004f2c18


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 q8_rsqrt(float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  double dVar7;
  void *pvVar8;
  undefined8 in_RAX;
  void *pvVar9;
  float fVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if (rsqrt_exptab == (void *)0x0) {
    uStack_8 = CONCAT44(param_1,(int)in_RAX);
    rsqrt_exptab = getbytes(0x400);
    pvVar9 = getbytes(0x1000);
    pvVar8 = rsqrt_exptab;
    dVar7 = DAT_00653398;
    dVar2 = DAT_00653390;
    dVar1 = _DAT_005d9000;
    fVar10 = 0.0;
    lVar11 = 0;
    rsqrt_mantissatab = pvVar9;
    do {
      dVar14 = dVar2;
      if (lVar11 != 0x3fc) {
        dVar14 = (double)fVar10;
      }
      dVar3 = dVar7;
      if (lVar11 != 0) {
        dVar3 = dVar14;
      }
      *(float *)((long)pvVar8 + lVar11) = (float)(dVar1 / SQRT(dVar3));
      dVar3 = _UNK_006533d8;
      dVar14 = _DAT_006533d0;
      iVar6 = _UNK_00651fa4;
      iVar5 = _DAT_00651fa0;
      auVar4 = _DAT_00651e80;
      lVar11 = lVar11 + 4;
      fVar10 = (float)((int)fVar10 + 0x800000);
    } while (lVar11 != 0x400);
    lVar11 = 0;
    dVar1 = (double)DAT_00651e80;
    dVar2 = DAT_00651e80._8_8_;
    iVar12 = _DAT_00651f90;
    iVar13 = _UNK_00651f94;
    do {
      auVar15._0_8_ = (double)(float)((double)iVar12 * dVar14 + dVar1);
      auVar15._8_8_ = (double)(float)((double)iVar13 * dVar3 + dVar2);
      auVar15 = sqrtpd(auVar15,auVar15);
      auVar15 = divpd(auVar4,auVar15);
      *(ulong *)((long)pvVar9 + lVar11 * 4) = CONCAT44((float)auVar15._8_8_,(float)auVar15._0_8_);
      lVar11 = lVar11 + 2;
      iVar12 = iVar12 + iVar5;
      iVar13 = iVar13 + iVar6;
    } while (lVar11 != 0x400);
  }
  if (0.0 <= param_1) {
    return uStack_8;
  }
  return uStack_8;
}


