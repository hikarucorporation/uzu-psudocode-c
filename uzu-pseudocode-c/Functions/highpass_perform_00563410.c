// Function : highpass_perform
// Namespace: 
// Entry    : 00563410
// Prototype: long highpass_perform(long param_1)
// Body     : 00563410 - 00563734


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long highpass_perform(long param_1)

{
  float fVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double local_78;
  double local_70;
  double local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_1 + 8);
  local_68 = *(double *)(lVar3 + 0x58);
  dVar11 = *(double *)(lVar3 + 0x60);
  dVar14 = *(double *)(lVar3 + 0x68);
  dStack_50 = 0.0;
  iVar9 = (int)*(undefined8 *)(param_1 + 0x10);
  dVar19 = *(double *)(lVar3 + 0x70);
  if (iVar9 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x18);
    dVar10 = (double)*(float *)(lVar3 + 0x48) + DAT_0065ac80;
    lVar7 = *(long *)(param_1 + 0x20);
    iVar2 = *(int *)(lVar3 + 0x4c);
    lVar8 = 0;
    local_48 = dVar11;
    uStack_40 = 0;
    dVar12 = DAT_00656ba0;
    do {
      while( true ) {
        local_58 = dVar14;
        uStack_60 = 0;
        fVar1 = *(float *)(lVar6 + lVar8 * 4);
        dVar11 = (double)*(float *)(lVar7 + lVar8 * 4);
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        if (iVar2 != 0) break;
        dVar14 = (double)*(float *)(lVar5 + lVar8 * 4);
        if (dVar10 <= dVar11) {
          dVar11 = dVar10;
        }
        if ((dVar11 == *(double *)(lVar3 + 0x78)) && (dVar14 == *(double *)(lVar3 + 0x80))) {
          dVar14 = *(double *)(lVar3 + 0x88);
          dVar17 = *(double *)(lVar3 + 0x98);
          dVar18 = *(double *)(lVar3 + 0xa0);
          dVar13 = *(double *)(lVar3 + 0xa8);
          dVar11 = local_68;
        }
        else {
          *(double *)(lVar3 + 0x78) = dVar11;
          *(double *)(lVar3 + 0x80) = dVar14;
          dVar11 = (dVar11 * DAT_00652e70) / (double)*(float *)(lVar3 + 0x48);
          uStack_60 = 0;
          if (*(int *)(lVar3 + 0x50) != 0) {
            if (dVar14 <= dVar12) {
              dVar14 = dVar12;
            }
            dVar14 = dVar14 * DAT_0065ac78;
            dVar12 = sin(dVar11);
            dVar14 = sinh((dVar14 * dVar11) / dVar12);
            dVar14 = DAT_005db338 / dVar14;
            dVar12 = DAT_00656ba0;
          }
          if (dVar12 <= dVar14) {
            sincos(dVar11,&local_70,&local_78);
            dVar12 = DAT_00656ba0;
            dVar11 = local_70 / (dVar14 + dVar14);
            dVar14 = dVar11 + _DAT_0065ad60;
            dVar11 = dVar11 + _UNK_0065ad68;
            auVar15._8_8_ = local_78 + local_78;
            auVar15._0_8_ = local_78 + _DAT_005d9000;
            dVar13 = _DAT_005d9000 / dVar11;
            *(double *)(lVar3 + 0x90) =
                 (double)((ulong)(local_78 + _DAT_005d9000) ^ _DAT_00652d10) * dVar13;
            auVar16._8_4_ = SUB84(dVar11,0);
            auVar16._0_8_ = dVar11 + dVar11;
            auVar16._12_4_ = (int)((ulong)dVar11 >> 0x20);
            auVar16 = divpd(auVar15,auVar16);
            dVar13 = dVar13 * dVar14;
            dVar17 = auVar16._0_8_;
            dVar18 = auVar16._8_8_;
            dVar14 = dVar17;
          }
          else {
            dVar17 = 0.0;
            dVar18 = 0.0;
            dVar13 = 0.0;
            dVar14 = _DAT_005d9000;
          }
          *(double *)(lVar3 + 0x88) = dVar14;
          *(double *)(lVar3 + 0xa8) = dVar13;
          *(double *)(lVar3 + 0x98) = dVar17;
          *(double *)(lVar3 + 0xa0) = dVar18;
          dVar11 = local_68;
        }
        local_68 = (double)fVar1;
        dStack_50 = local_68 * dVar14 + local_58 * dVar18;
        dVar14 = dStack_50 + dVar11 * *(double *)(lVar3 + 0x90) + local_48 * dVar17 +
                 dVar13 * dVar19;
        *(float *)(lVar4 + lVar8 * 4) = (float)dVar14;
        lVar8 = lVar8 + 1;
        local_48 = dVar11;
        uStack_40 = uStack_60;
        dVar19 = local_58;
        if (iVar9 == (int)lVar8) goto LAB_00563705;
      }
      *(float *)(lVar4 + lVar8 * 4) = fVar1;
      lVar8 = lVar8 + 1;
      dVar11 = local_48;
      dVar14 = local_58;
    } while (iVar9 != (int)lVar8);
  }
LAB_00563705:
  *(double *)(lVar3 + 0x58) = local_68;
  *(double *)(lVar3 + 0x60) = dVar11;
  *(double *)(lVar3 + 0x68) = dVar14;
  *(double *)(lVar3 + 0x70) = dVar19;
  return param_1 + 0x38;
}


