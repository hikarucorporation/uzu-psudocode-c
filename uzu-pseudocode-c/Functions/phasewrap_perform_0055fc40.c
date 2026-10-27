// Function : phasewrap_perform
// Namespace: 
// Entry    : 0055fc40
// Prototype: long phasewrap_perform(long param_1)
// Body     : 0055fc40 - 0055ff24


/* WARNING: Removing unreachable block (ram,0x0055ff20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long phasewrap_perform(long param_1)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  
  dVar13 = _UNK_0065aba8;
  dVar12 = _DAT_0065aba0;
  dVar6 = _UNK_0065ab98;
  dVar5 = _DAT_0065ab90;
  dVar4 = _UNK_005d9a98;
  dVar3 = _DAT_005d9a90;
  uVar21 = (uint)*(ulong *)(param_1 + 8);
  if (uVar21 == 0) goto LAB_0055ff0e;
  pfVar14 = *(float **)(param_1 + 0x10);
  pfVar15 = *(float **)(param_1 + 0x18);
  if ((uVar21 - 1 < 3) ||
     ((pfVar15 < pfVar14 + (ulong)(uVar21 - 1) + 1 && (pfVar14 < pfVar15 + (ulong)(uVar21 - 1) + 1))
     )) {
    uVar11 = uVar21;
    dVar3 = DAT_005d9098;
    dVar4 = DAT_0065abb0;
    dVar5 = _DAT_0065abb8;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
LAB_0055fe2e:
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + 1;
      *pfVar15 = (float)(((double)fVar2 * DAT_0065abb0 -
                         (double)SUB84(DAT_005d9098 + (double)fVar2 * DAT_0065abb0,0)) *
                        _DAT_0065abb8);
      pfVar15 = pfVar15 + 1;
      uVar11 = uVar21 - 1;
      dVar3 = DAT_005d9098;
      dVar4 = DAT_0065abb0;
      dVar5 = _DAT_0065abb8;
    }
  }
  else {
    uVar19 = (ulong)(uVar21 - 1) + 1;
    uVar18 = uVar19 & 0xfffffffffffffffc;
    uVar20 = (uVar18 - 4 >> 2) + 1;
    if (uVar18 - 4 == 0) {
      lVar17 = 0;
LAB_0055fdaa:
      dVar5 = (double)(float)*(undefined8 *)(pfVar14 + lVar17 + 2) * _DAT_0065ab90;
      dVar6 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar17 + 2) >> 0x20) * _UNK_0065ab98;
      dVar3 = (double)(float)*(undefined8 *)(pfVar14 + lVar17) * _DAT_0065ab90;
      dVar4 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar17) >> 0x20) * _UNK_0065ab98;
      dVar4 = (dVar4 - (double)SUB84(dVar4 + _UNK_005d9a98,0)) * _UNK_0065aba8;
      dVar5 = (dVar5 - (double)SUB84(_DAT_005d9a90 + dVar5,0)) * _DAT_0065aba0;
      dVar6 = (dVar6 - (double)SUB84(_UNK_005d9a98 + dVar6,0)) * _UNK_0065aba8;
      pfVar1 = pfVar15 + lVar17;
      *pfVar1 = (float)((dVar3 - (double)SUB84(dVar3 + _DAT_005d9a90,0)) * _DAT_0065aba0);
      pfVar1[1] = (float)dVar4;
      pfVar1[2] = (float)dVar5;
      pfVar1[3] = (float)dVar6;
    }
    else {
      uVar16 = uVar20 & 0xfffffffffffffffe;
      lVar17 = 0;
      do {
        dVar9 = (double)(float)*(undefined8 *)(pfVar14 + lVar17 + 2) * dVar5;
        dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar17 + 2) >> 0x20) * dVar6;
        dVar7 = (double)(float)*(undefined8 *)(pfVar14 + lVar17) * dVar5;
        dVar8 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar17) >> 0x20) * dVar6;
        pfVar1 = pfVar15 + lVar17;
        *pfVar1 = (float)((dVar7 - (double)SUB84(dVar7 + dVar3,0)) * dVar12);
        pfVar1[1] = (float)((dVar8 - (double)SUB84(dVar8 + dVar4,0)) * dVar13);
        pfVar1[2] = (float)((dVar9 - (double)SUB84(dVar9 + dVar3,0)) * dVar12);
        pfVar1[3] = (float)((dVar10 - (double)SUB84(dVar10 + dVar4,0)) * dVar13);
        dVar9 = (double)(float)*(undefined8 *)(pfVar14 + lVar17 + 6) * dVar5;
        dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar17 + 6) >> 0x20) * dVar6;
        dVar7 = (double)(float)*(undefined8 *)(pfVar14 + lVar17 + 4) * dVar5;
        dVar8 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar17 + 4) >> 0x20) * dVar6;
        pfVar1 = pfVar15 + lVar17 + 4;
        *pfVar1 = (float)((dVar7 - (double)SUB84(dVar7 + dVar3,0)) * dVar12);
        pfVar1[1] = (float)((dVar8 - (double)SUB84(dVar8 + dVar4,0)) * dVar13);
        pfVar1[2] = (float)((dVar9 - (double)SUB84(dVar9 + dVar3,0)) * dVar12);
        pfVar1[3] = (float)((dVar10 - (double)SUB84(dVar10 + dVar4,0)) * dVar13);
        lVar17 = lVar17 + 8;
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
      if ((uVar20 & 1) != 0) goto LAB_0055fdaa;
    }
    if (uVar19 == uVar18) goto LAB_0055ff0e;
    uVar21 = uVar21 - (int)uVar18;
    pfVar14 = pfVar14 + uVar18;
    pfVar15 = pfVar15 + uVar18;
    uVar11 = uVar21;
    dVar3 = DAT_005d9098;
    dVar4 = DAT_0065abb0;
    dVar5 = _DAT_0065abb8;
    if ((uVar21 & 1) != 0) goto LAB_0055fe2e;
  }
  DAT_005d9098 = dVar3;
  DAT_0065abb0 = dVar4;
  _DAT_0065abb8 = dVar5;
  if (uVar21 != 1) {
    lVar17 = 0;
    do {
      pfVar15[lVar17] =
           (float)(((double)pfVar14[lVar17] * dVar4 -
                   (double)SUB84((double)pfVar14[lVar17] * dVar4 + dVar3,0)) * dVar5);
      pfVar15[lVar17 + 1] =
           (float)(((double)pfVar14[lVar17 + 1] * dVar4 -
                   (double)SUB84((double)pfVar14[lVar17 + 1] * dVar4 + dVar3,0)) * dVar5);
      lVar17 = lVar17 + 2;
    } while (uVar11 != (uint)lVar17);
  }
LAB_0055ff0e:
  return param_1 + 0x20;
}


