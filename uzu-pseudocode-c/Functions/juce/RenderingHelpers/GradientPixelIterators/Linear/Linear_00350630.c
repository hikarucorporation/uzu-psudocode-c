// Function : Linear
// Namespace: juce:RenderingHelpers:GradientPixelIterators:Linear
// Entry    : 00350630
// Prototype: undefined Linear(Linear * this, undefined8 * param_1, float * param_2, undefined8 param_3, undefined4 param_4)
// Body     : 00350630 - 00350cb0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::GradientPixelIterators::Linear::Linear(juce::ColourGradient const&,
   juce::AffineTransform const&, juce::PixelARGB const*, int) */

void __thiscall
juce::RenderingHelpers::GradientPixelIterators::Linear::Linear
          (Linear *this,undefined8 *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  Linear LVar7;
  undefined4 in_EAX;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  *(undefined8 *)this = param_3;
  *(undefined4 *)(this + 8) = param_4;
  fVar22 = (float)*param_1;
  fVar24 = (float)((ulong)*param_1 >> 0x20);
  fVar12 = (float)param_1[1];
  fVar20 = (float)((ulong)param_1[1] >> 0x20);
  auVar15._4_4_ = -(uint)(param_2[1] != 0.0);
  auVar15._0_4_ = -(uint)(DAT_005d9038 != *param_2);
  auVar15._8_4_ = -(uint)(param_2[2] != 0.0);
  auVar15._12_4_ = -(uint)(param_2[3] != 0.0);
  iVar8 = movmskps(in_EAX,auVar15);
  if (iVar8 == 0) {
    if ((((param_2[4] == DAT_005d9038) && (!NAN(param_2[4]) && !NAN(DAT_005d9038))) &&
        (param_2[5] == 0.0)) && (!NAN(param_2[5]))) goto LAB_003508e6;
  }
  fVar26 = fVar22 - fVar12;
  fVar27 = fVar24 - fVar20;
  dVar3 = hypot((double)fVar26,(double)fVar27);
  fVar11 = fVar12;
  fVar19 = fVar20;
  if (0.0 < dVar3) {
    auVar14._0_8_ = (double)(fVar26 * 0.0 + _UNK_005dd3e4 * fVar27);
    auVar14._8_8_ = (double)(fVar27 * 0.0 + _DAT_005dd3e0 * fVar26);
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar3;
    auVar1._12_4_ = (int)((ulong)dVar3 >> 0x20);
    auVar15 = divpd(auVar14,auVar1);
    fVar11 = (float)auVar15._0_8_ + fVar12;
    fVar19 = (float)auVar15._8_8_ + fVar20;
  }
  fVar26 = *param_2;
  fVar27 = param_2[1];
  fVar13 = param_2[2];
  fVar21 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar23 = fVar22 * fVar21;
  fVar22 = fVar22 * fVar26 + fVar24 * fVar27 + fVar13;
  fVar24 = fVar23 + fVar24 * fVar5 + fVar6;
  fVar23 = fVar12 * fVar26 + fVar20 * fVar27 + fVar13;
  fVar25 = fVar12 * fVar21 + fVar20 * fVar5 + fVar6;
  fVar12 = fVar11 * fVar26 + fVar19 * fVar27 + fVar13;
  fVar20 = fVar11 * fVar21 + fVar19 * fVar5 + fVar6;
  fVar26 = fVar12 - fVar23;
  fVar27 = fVar20 - fVar25;
  dVar3 = hypot((double)fVar26,(double)fVar27);
  fVar11 = fVar23;
  fVar19 = fVar25;
  if (0.0 < dVar3) {
    auVar16._0_8_ = (double)(fVar26 * 0.0 + (float)(_DAT_006524b0 ^ (uint)fVar27));
    auVar16._8_8_ = (double)(fVar27 * 0.0 + fVar26);
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulong)dVar3 >> 0x20);
    auVar15 = divpd(auVar16,auVar2);
    fVar11 = (float)auVar15._0_8_ + fVar23;
    fVar19 = (float)auVar15._8_8_ + fVar25;
  }
  if ((fVar12 == fVar22) && (!NAN(fVar12) && !NAN(fVar22))) {
    if ((fVar20 == fVar24) && (!NAN(fVar20) && !NAN(fVar24))) goto LAB_003508e6;
  }
  fVar13 = ((fVar11 + fVar22) - fVar23) - fVar22;
  fVar19 = ((fVar19 + fVar24) - fVar25) - fVar24;
  fVar11 = fVar19 * fVar26 - fVar27 * fVar13;
  fVar21 = (float)(_DAT_005d91c0 & (uint)fVar11);
  if (fVar21 == DAT_005d94c8) {
    if ((fVar11 == 0.0) && (!NAN(fVar11))) goto LAB_003508a7;
  }
  else if ((fVar21 <= DAT_005d94cc) || (fVar21 <= DAT_005d94d0 * fVar21)) {
LAB_003508a7:
    if (((((fVar26 == 0.0) && (!NAN(fVar26))) && (fVar27 == 0.0)) && (!NAN(fVar27))) ||
       (((fVar13 == 0.0 && (!NAN(fVar13))) && ((fVar19 == 0.0 && (!NAN(fVar19)))))))
    goto LAB_003508db;
    fVar11 = (float)(_DAT_005d91c0 & (uint)fVar27);
    if (fVar11 == DAT_005d94c8) {
      if ((fVar27 != 0.0) || (NAN(fVar27))) goto LAB_00350aa0;
LAB_00350a6a:
      fVar21 = (float)(_DAT_005d91c0 & (uint)fVar19);
      if (fVar21 != DAT_005d94c8) {
        if ((DAT_005d94cc < fVar21) && (DAT_005d94d0 * fVar21 < fVar21)) goto LAB_00350b3a;
        goto LAB_00350aa0;
      }
      if ((fVar19 != 0.0) || (NAN(fVar19))) {
LAB_00350b3a:
        fVar12 = ((fVar25 - fVar24) / fVar19) * fVar13 + fVar22;
        fVar20 = fVar25;
        goto LAB_003508e6;
      }
LAB_00350af4:
      if (fVar11 == DAT_005d94c8) {
        if ((fVar27 != 0.0) || (NAN(fVar27))) goto LAB_00350b1b;
      }
      else if ((DAT_005d94cc < fVar11) && (DAT_005d94d0 * fVar11 < fVar11)) {
LAB_00350b1b:
        fVar12 = ((fVar24 - fVar25) / fVar27) * fVar26 + fVar23;
        fVar20 = fVar24;
        goto LAB_003508e6;
      }
    }
    else {
      if ((fVar11 <= DAT_005d94cc) || (fVar11 <= DAT_005d94d0 * fVar11)) goto LAB_00350a6a;
LAB_00350aa0:
      fVar21 = (float)(_DAT_005d91c0 & (uint)fVar19);
      if (fVar21 == DAT_005d94c8) {
        if ((fVar19 == 0.0) && (!NAN(fVar19))) goto LAB_00350af4;
      }
      else if ((fVar21 <= DAT_005d94cc) || (fVar21 <= DAT_005d94d0 * fVar21)) goto LAB_00350af4;
    }
    fVar11 = (float)(_DAT_005d91c0 & (uint)fVar26);
    if (fVar11 == DAT_005d94c8) {
      if ((fVar26 == 0.0) && (!NAN(fVar26))) goto LAB_00350ba2;
LAB_00350bd7:
      fVar19 = (float)(_DAT_005d91c0 & (uint)fVar13);
      if (fVar19 == DAT_005d94c8) {
        if ((fVar13 == 0.0) && (!NAN(fVar13))) goto LAB_00350c2b;
      }
      else if ((fVar19 <= DAT_005d94cc) || (fVar19 <= DAT_005d94d0 * fVar19)) goto LAB_00350c2b;
    }
    else {
      if ((DAT_005d94cc < fVar11) && (DAT_005d94d0 * fVar11 < fVar11)) goto LAB_00350bd7;
LAB_00350ba2:
      fVar21 = (float)(_DAT_005d91c0 & (uint)fVar13);
      if (fVar21 != DAT_005d94c8) {
        if ((fVar21 <= DAT_005d94cc) || (fVar21 <= DAT_005d94d0 * fVar21)) goto LAB_00350bd7;
LAB_00350c5b:
        fVar12 = fVar23;
        fVar20 = ((fVar23 - fVar22) / fVar13) * fVar19 + fVar24;
        goto LAB_003508e6;
      }
      if ((fVar13 != 0.0) || (NAN(fVar13))) goto LAB_00350c5b;
LAB_00350c2b:
      if (fVar11 == DAT_005d94c8) {
        if ((fVar26 != 0.0) || (NAN(fVar26))) goto LAB_00350c8d;
      }
      else if ((DAT_005d94cc < fVar11) && (DAT_005d94d0 * fVar11 < fVar11)) {
LAB_00350c8d:
        fVar12 = fVar22;
        fVar20 = ((fVar22 - fVar23) / fVar26) * fVar27 + fVar25;
        goto LAB_003508e6;
      }
    }
LAB_003508db:
    fVar12 = (fVar12 + fVar22) * _DAT_005d9920;
    fVar20 = (fVar20 + fVar24) * _UNK_005d9924;
    goto LAB_003508e6;
  }
  fVar11 = ((fVar25 - fVar24) * fVar13 - (fVar23 - fVar22) * fVar19) / fVar11;
  fVar12 = fVar26 * fVar11 + fVar23;
  fVar20 = fVar27 * fVar11 + fVar25;
LAB_003508e6:
  iVar8 = -(uint)((float)(_DAT_005d91c0 & (uint)(fVar22 - fVar12)) < _DAT_005dd3f0);
  iVar10 = -(uint)((float)(_UNK_005d91c4 & (uint)(fVar24 - fVar20)) < _UNK_005dd3f4);
  auVar18._4_4_ = iVar10;
  auVar18._0_4_ = iVar8;
  auVar18._8_4_ = iVar10;
  auVar18._12_4_ = iVar10;
  auVar17._8_8_ = auVar18._8_8_;
  auVar17._4_4_ = iVar8;
  auVar17._0_4_ = iVar8;
  uVar9 = movmskpd((int)param_3,auVar17);
  LVar7 = (Linear)((byte)uVar9 >> 1);
  this[0x28] = (Linear)((byte)uVar9 & 1);
  this[0x29] = LVar7;
  dVar3 = DAT_005d9098;
  if ((uVar9 & 1) == 0) {
    if (LVar7 == (Linear)0x0) {
      dVar4 = (double)(fVar20 - fVar24) / (double)(fVar22 - fVar12);
      dVar3 = (double)fVar24 - (double)fVar22 / dVar4;
      *(double *)(this + 0x20) = dVar3;
      iVar8 = SUB84((double)((long)*(int *)(this + 8) << 0xc) /
                    (dVar3 * dVar4 - ((double)fVar20 * dVar4 - (double)fVar12)) + DAT_005d9098,0);
      *(int *)(this + 0x14) = iVar8;
      *(double *)(this + 0x18) = (double)iVar8 * dVar4;
      return;
    }
    iVar8 = *(int *)(this + 8);
    fVar20 = fVar12 - fVar22;
  }
  else {
    iVar8 = *(int *)(this + 8);
    fVar20 = fVar20 - fVar24;
    fVar22 = fVar24;
  }
  iVar8 = SUB84((double)((long)iVar8 << 0xc) / (double)fVar20 + DAT_005d9098,0);
  *(int *)(this + 0x14) = iVar8;
  *(int *)(this + 0x10) = SUB84((double)((float)iVar8 * fVar22) + dVar3,0);
  return;
}


