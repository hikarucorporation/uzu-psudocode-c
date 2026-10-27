// Function : justifyGlyphs
// Namespace: juce:GlyphArrangement
// Entry    : 00307770
// Prototype: undefined justifyGlyphs(float param_1, undefined8 param_2_00, GlyphArrangement * param_3_00, uint param_4, uint param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00307770 - 00307ac8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::GlyphArrangement::justifyGlyphs(int, int, float, float, float, float, juce::Justification)
    */

void __cdecl
juce::GlyphArrangement::justifyGlyphs
          (float param_1,undefined8 param_2_00,GlyphArrangement *param_3_00,uint param_4,
          uint param_5,undefined8 param_6,uint *param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = (float)param_2_00;
  if ((int)param_4 < 1) {
    return;
  }
  if (*(int *)(param_3_00 + 0xc) < 1) {
    return;
  }
  uVar9 = getBoundingBox(param_3_00,0,(ulong)param_4,(ulong)((param_5 & 0x44) == 0),param_7,param_8)
  ;
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  fVar12 = (float)uVar9;
  fVar11 = (float)((ulong)param_2_00 >> 0x20);
  if ((param_5 & 0x40) == 0) {
    if ((param_5 & 4) == 0) {
      if ((param_5 & 2) == 0) goto LAB_003077d0;
      fVar12 = param_1 - (fVar12 + (float)param_2_00);
    }
    else {
      fVar12 = (param_1 - (float)param_2_00) * DAT_005d9044 - fVar12;
    }
    fVar12 = fVar12 + 0.0;
    if ((param_5 & 8) != 0) goto LAB_0030788c;
LAB_003077e1:
    if ((param_5 & 0x10) == 0) {
      fVar14 = (fVar14 - fVar11) * DAT_005d9044;
    }
    else {
      fVar10 = fVar10 + fVar11;
    }
    fVar10 = (fVar14 - fVar10) + 0.0;
    fVar14 = (float)(_DAT_005d91c0 & (uint)fVar12);
    if (fVar14 != DAT_005d94c8) goto LAB_00307846;
LAB_003078aa:
    if ((fVar12 == 0.0) && (!NAN(fVar12))) {
LAB_003078b4:
      fVar14 = (float)(_DAT_005d91c0 & (uint)fVar10);
      if (fVar14 == DAT_005d94c8) {
        if ((fVar10 == 0.0) && (!NAN(fVar10))) goto LAB_003079a3;
      }
      else if ((fVar14 <= DAT_005d94cc) || (fVar14 <= DAT_005d94d0 * fVar14)) goto LAB_003079a3;
    }
  }
  else {
LAB_003077d0:
    fVar12 = 0.0 - fVar12;
    if ((param_5 & 8) == 0) goto LAB_003077e1;
LAB_0030788c:
    fVar10 = 0.0 - fVar10;
    fVar14 = (float)(_DAT_005d91c0 & (uint)fVar12);
    if (fVar14 == DAT_005d94c8) goto LAB_003078aa;
LAB_00307846:
    if ((fVar14 <= DAT_005d94cc) || (fVar14 <= DAT_005d94d0 * fVar14)) goto LAB_003078b4;
  }
  uVar1 = *(uint *)(param_3_00 + 0xc);
  uVar2 = param_4;
  if (((int)param_4 <= (int)uVar1) || (uVar2 = uVar1, 0 < (int)uVar1)) {
    uVar1 = (uVar2 - (uVar2 != 0)) + 1;
    lVar8 = *(long *)param_3_00;
    if (uVar2 == (uVar2 != 0)) {
      lVar6 = 0;
    }
    else {
      pfVar7 = (float *)(lVar8 + 0x34);
      lVar6 = 0;
      do {
        pfVar7[-9] = pfVar7[-9] + fVar12;
        pfVar7[-8] = pfVar7[-8] + fVar10;
        lVar6 = lVar6 + 2;
        pfVar7[-1] = pfVar7[-1] + fVar12;
        *pfVar7 = *pfVar7 + fVar10;
        pfVar7 = pfVar7 + 0x10;
      } while ((uVar1 & 0xfffffffe) != (uint)lVar6);
    }
    if ((uVar1 & 1) != 0) {
      lVar6 = lVar6 * 0x20;
      *(float *)(lVar8 + 0x10 + lVar6) = fVar12 + *(float *)(lVar8 + 0x10 + lVar6);
      *(float *)(lVar8 + 0x14 + lVar6) = fVar10 + *(float *)(lVar8 + 0x14 + lVar6);
    }
  }
LAB_003079a3:
  if ((param_5 & 0x40) == 0) {
    return;
  }
  lVar8 = *(long *)param_3_00;
  fVar14 = *(float *)(lVar8 + 0x14);
  uVar5 = 0;
  lVar6 = 0x34;
  uVar4 = 0;
  fVar11 = (float)((uint)fVar14 & _DAT_005d91c0);
  uVar1 = _DAT_005d91c0;
  fVar10 = DAT_005d94c8;
  fVar12 = fVar14;
  if (fVar11 == DAT_005d94c8) goto LAB_00307a30;
  do {
    iVar3 = (int)uVar4;
    fVar13 = (float)((uint)fVar14 & uVar1);
    if (fVar13 == fVar10) goto LAB_00307a30;
    fVar15 = (float)((uint)(fVar12 - fVar14) & uVar1);
    if (DAT_005d94cc < fVar15) {
      if (fVar13 <= fVar11) {
        fVar13 = fVar11;
      }
      if (fVar13 * DAT_005d94d0 < fVar15) goto LAB_00307a37;
    }
    while( true ) {
      if ((ulong)param_4 - 1 == uVar5) {
        iVar3 = (int)uVar4;
        if (iVar3 < (int)param_4) {
          spreadOutLine(param_1,*(long *)param_3_00,*(int *)(param_3_00 + 0xc),iVar3,param_4 - iVar3
                       );
          return;
        }
        return;
      }
      lVar8 = *(long *)param_3_00;
      fVar12 = *(float *)(lVar8 + lVar6);
      lVar6 = lVar6 + 0x20;
      uVar5 = uVar5 + 1;
      fVar11 = (float)((uint)fVar12 & uVar1);
      if (fVar11 != fVar10) break;
LAB_00307a30:
      iVar3 = (int)uVar4;
      if ((fVar12 != fVar14) || (NAN(fVar12) || NAN(fVar14))) {
LAB_00307a37:
        fVar14 = fVar12;
        spreadOutLine(param_1,lVar8,*(int *)(param_3_00 + 0xc),iVar3,(int)uVar5 - iVar3);
        uVar4 = uVar5 & 0xffffffff;
        uVar1 = _DAT_005d91c0;
        fVar10 = DAT_005d94c8;
      }
    }
  } while( true );
}


