// Function : allpass_2nd_perform
// Namespace: 
// Entry    : 00561df0
// Prototype: long allpass_2nd_perform(long param_1)
// Body     : 00561df0 - 0056210c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long allpass_2nd_perform(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double local_78;
  double local_70;
  double local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 uStack_40;
  
  lVar4 = *(long *)(param_1 + 8);
  local_58 = *(double *)(lVar4 + 0x60);
  dVar13 = *(double *)(lVar4 + 0x68);
  dVar24 = *(double *)(lVar4 + 0x70);
  local_68 = *(double *)(lVar4 + 0x78);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x10);
  if (iVar11 != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(param_1 + 0x20);
    dVar12 = (double)*(float *)(lVar4 + 0x50) + DAT_0065ac80;
    iVar3 = *(int *)(lVar4 + 0x54);
    lVar10 = 0;
    dVar20 = dVar13;
    uVar9 = 0;
    uVar21 = 0;
    uStack_60 = 0;
    dVar14 = DAT_00656ba0;
    do {
      while( true ) {
        uStack_40 = uVar21;
        local_48 = dVar24;
        uVar21 = uVar9;
        uVar22 = 0;
        uVar23 = 0;
        fVar1 = *(float *)(lVar7 + lVar10 * 4);
        dVar13 = (double)*(float *)(lVar8 + lVar10 * 4);
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        if (iVar3 != 0) break;
        dVar24 = (double)*(float *)(lVar6 + lVar10 * 4);
        if (dVar12 <= dVar13) {
          dVar13 = dVar12;
        }
        if ((dVar13 == *(double *)(lVar4 + 0x80)) && (dVar24 == *(double *)(lVar4 + 0x88))) {
          dVar18 = *(double *)(lVar4 + 0x90);
          dVar19 = *(double *)(lVar4 + 0x98);
          auVar2 = *(undefined1 (*) [16])(lVar4 + 0xa0);
          uVar16 = auVar2._0_4_;
          uVar17 = auVar2._4_4_;
          dVar15 = auVar2._8_8_;
          dVar13 = local_58;
        }
        else {
          *(double *)(lVar4 + 0x80) = dVar13;
          *(double *)(lVar4 + 0x88) = dVar24;
          dVar13 = (dVar13 * DAT_00652e70) / (double)*(float *)(lVar4 + 0x50);
          uStack_50 = 0;
          if (*(int *)(lVar4 + 0x58) != 0) {
            if (dVar24 <= dVar14) {
              dVar24 = dVar14;
            }
            dVar24 = dVar24 * DAT_0065ac78;
            dVar14 = sin(dVar13);
            dVar24 = sinh((dVar24 * dVar13) / dVar14);
            uVar22 = (undefined4)uStack_50;
            uVar23 = (undefined4)((ulong)uStack_50 >> 0x20);
            uVar21 = 0;
            dVar24 = DAT_005db338 / dVar24;
            dVar14 = DAT_00656ba0;
          }
          uVar16 = 0;
          uVar17 = 0;
          dVar15 = 0.0;
          dVar19 = 0.0;
          dVar18 = _DAT_005d9000;
          if (dVar14 <= dVar24) {
            sincos(dVar13,&local_70,&local_78);
            uVar22 = (undefined4)uStack_50;
            uVar23 = (undefined4)((ulong)uStack_50 >> 0x20);
            uVar21 = 0;
            dVar13 = local_70 / (dVar24 + dVar24);
            dVar19 = _DAT_005d9000 / (dVar13 + _DAT_005d9000);
            dVar15 = (dVar13 + DAT_00651e70) * dVar19;
            dVar18 = dVar19 * (_DAT_005d9000 - dVar13);
            dVar19 = dVar19 * local_78 * DAT_0065ac98;
            uVar16 = (undefined4)((ulong)dVar19 ^ _DAT_00652d10);
            uVar17 = (undefined4)(((ulong)dVar19 ^ _DAT_00652d10) >> 0x20);
            dVar14 = DAT_00656ba0;
          }
          *(undefined4 *)(lVar4 + 0xa0) = uVar16;
          *(undefined4 *)(lVar4 + 0xa4) = uVar17;
          *(double *)(lVar4 + 0xa8) = dVar15;
          *(double *)(lVar4 + 0x90) = dVar18;
          *(double *)(lVar4 + 0x98) = dVar19;
          dVar13 = local_58;
        }
        local_58 = (double)fVar1;
        dVar24 = dVar20 + local_68 * dVar15 + dVar13 * dVar19 +
                          local_48 * (double)CONCAT44(uVar17,uVar16) + local_58 * dVar18;
        *(float *)(lVar5 + lVar10 * 4) = (float)dVar24;
        lVar10 = lVar10 + 1;
        dVar20 = dVar13;
        uVar9 = CONCAT44(uVar23,uVar22);
        local_68 = local_48;
        uStack_60 = uStack_40;
        if (iVar11 == (int)lVar10) goto LAB_005620dd;
      }
      *(float *)(lVar5 + lVar10 * 4) = fVar1;
      lVar10 = lVar10 + 1;
      dVar13 = dVar20;
      uVar9 = uVar21;
      dVar24 = local_48;
      uVar21 = uStack_40;
    } while (iVar11 != (int)lVar10);
  }
LAB_005620dd:
  *(double *)(lVar4 + 0x60) = local_58;
  *(double *)(lVar4 + 0x68) = dVar13;
  *(double *)(lVar4 + 0x70) = dVar24;
  *(double *)(lVar4 + 0x78) = local_68;
  return param_1 + 0x38;
}


