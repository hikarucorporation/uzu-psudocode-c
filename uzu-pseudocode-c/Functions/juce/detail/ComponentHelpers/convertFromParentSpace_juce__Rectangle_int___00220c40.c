// Function : convertFromParentSpace<juce::Rectangle<int>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00220c40
// Prototype: undefined1[16] convertFromParentSpace<juce::Rectangle<int>>(ComponentHelpers * this, double param_2, double param_3)
// Body     : 00220c40 - 002212ff


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Rectangle<int> juce::detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>
   >(juce::Component const&, juce::Rectangle<int>) */

undefined1  [16] __thiscall
juce::detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>>
          (ComponentHelpers *this,double param_2,double param_3)

{
  int iVar1;
  float *pfVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  int iVar5;
  Desktop *pDVar6;
  long lVar7;
  int iVar8;
  double dVar9;
  int iVar10;
  undefined1 auVar11 [16];
  double dVar12;
  float fVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  
  pfVar2 = *(float **)(this + 0x50);
  local_38 = param_2;
  local_30 = param_3;
  if (pfVar2 != (float *)0x0) {
    fVar26 = *pfVar2 * pfVar2[4] - pfVar2[3] * pfVar2[1];
    dVar25 = (double)fVar26;
    dVar20 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar25 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar25,0));
    if (dVar20 == DAT_005d94e0) {
      if ((fVar26 == 0.0) && (!NAN(fVar26))) goto LAB_00220d85;
LAB_00220cd9:
      dVar25 = _DAT_005d9000 / dVar25;
      fVar22 = (float)((double)pfVar2[4] * dVar25);
      fVar21 = (float)((double)(float)((uint)pfVar2[3] ^ _DAT_006524b0) * dVar25);
      fVar13 = (float)((double)(float)((uint)pfVar2[1] ^ _DAT_006524b0) * dVar25);
      fVar26 = (float)((double)*pfVar2 * dVar25);
      local_78 = CONCAT44(fVar13,fVar22);
      uStack_70 = CONCAT44(fVar21,(float)((uint)pfVar2[2] ^ _DAT_006524b0) * fVar22 -
                                  fVar13 * pfVar2[5]);
      local_68 = CONCAT44((float)((uint)pfVar2[2] ^ _DAT_006524b0) * fVar21 - pfVar2[5] * fVar26,
                          fVar26);
    }
    else {
      if ((DAT_005db368 < dVar20) && (DAT_005db370 * dVar20 < dVar20)) goto LAB_00220cd9;
LAB_00220d85:
      local_68 = *(undefined8 *)(pfVar2 + 4);
      local_78 = *(ulong *)pfVar2;
      uStack_70 = *(ulong *)(pfVar2 + 2);
    }
    auVar27 = Rectangle<int>::transformedBy((Rectangle<int> *)&local_38,(float *)&local_78);
    param_2 = auVar27._0_8_;
    param_3 = auVar27._8_8_;
  }
  iVar8 = SUB84(param_2,0);
  iVar5 = (int)((ulong)param_2 >> 0x20);
  iVar10 = (int)((ulong)param_3 >> 0x20);
  if ((*(ushort *)(this + 0xe8) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00220ee9 to 00220ef2 has its CatchHandler @ 00221342 */
      pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00220ef6 to 00220efd has its CatchHandler @ 0022132f */
      Desktop::Desktop(pDVar6);
      iVar1 = *(int *)(pDVar6 + 0xdc);
      Desktop::instance = pDVar6;
    }
    else {
      iVar1 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar1 != 0) {
      lVar7 = 0;
      do {
        plVar3 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar7);
        if ((ComponentHelpers *)plVar3[1] == this) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00220f4d to 00220f56 has its CatchHandler @ 00221302 */
            pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00220f5a to 00220f61 has its CatchHandler @ 00221300 */
            Desktop::Desktop(pDVar6);
            Desktop::instance = pDVar6;
          }
          fVar26 = *(float *)(Desktop::instance + 0x130);
          dVar25 = (double)((ulong)param_2 >> 0x20);
          fVar13 = (float)(_DAT_005d91c0 & (uint)fVar26);
          if (fVar13 == DAT_005d94c8) {
            if ((fVar26 == DAT_005d9038) && (!NAN(fVar26) && !NAN(DAT_005d9038))) goto LAB_002211ad;
LAB_00220fd1:
            param_2 = (double)((float)iVar8 * fVar26) + _DAT_005d9a90;
            param_3 = (double)((float)SUB84(param_3,0) * fVar26) + _UNK_005d9a98;
            dVar25 = (double)((float)iVar5 * fVar26) + _DAT_005d9a90;
            dVar20 = (double)((float)iVar10 * fVar26) + _UNK_005d9a98;
          }
          else {
            fVar21 = (float)((uint)(DAT_005d9054 + fVar26) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar21) {
              fVar22 = DAT_005d9038;
              if (DAT_005d9038 <= fVar13) {
                fVar22 = fVar13;
              }
              if (fVar22 * DAT_005d94d0 < fVar21) goto LAB_00220fd1;
            }
LAB_002211ad:
            dVar20 = (double)((ulong)param_3 >> 0x20);
          }
          local_78 = (ulong)param_2 & _DAT_005d9aa0 | (long)dVar25 << 0x20;
          uStack_70 = (ulong)param_3 & _UNK_005d9aa8 | (long)dVar20 << 0x20;
          auVar28 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_78);
          dVar25 = auVar28._8_8_;
                    /* try { // try from 002211f8 to 00221200 has its CatchHandler @ 0022131f */
          auVar27._0_4_ = (float)(**(code **)(*(long *)this + 0x88))(this);
          fVar26 = (float)(_DAT_005d91c0 & (uint)auVar27._0_4_);
          if (fVar26 == DAT_005d94c8) {
            if ((auVar27._0_4_ == DAT_005d9038) && (!NAN(auVar27._0_4_) && !NAN(DAT_005d9038)))
            goto LAB_0022129b;
LAB_00221256:
            auVar17._0_4_ = (float)auVar28._4_4_;
            auVar17._4_4_ = (float)auVar28._0_4_;
            auVar17._8_8_ = 0;
            auVar27._4_4_ = auVar27._0_4_;
            auVar27._8_4_ = auVar27._0_4_;
            auVar27._12_4_ = auVar27._0_4_;
            auVar17 = divps(auVar17,auVar27);
            auVar18._0_8_ = (double)auVar17._0_4_ + _DAT_005d9a90;
            auVar18._8_8_ = (double)auVar17._4_4_ + _UNK_005d9a98;
            auVar14 = auVar18._0_12_;
            auVar24._0_4_ = (float)auVar28._8_4_;
            auVar24._4_4_ = (float)auVar28._12_4_;
            auVar24._8_8_ = 0;
            auVar27 = divps(auVar24,auVar27);
            dVar25 = (double)auVar27._0_4_ + _DAT_005d9a90;
            dVar20 = (double)auVar27._4_4_ + _UNK_005d9a98;
          }
          else {
            fVar13 = (float)((uint)(auVar27._0_4_ + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar13) {
              fVar21 = DAT_005d9038;
              if (DAT_005d9038 <= fVar26) {
                fVar21 = fVar26;
              }
              if (fVar21 * DAT_005d94d0 < fVar13) goto LAB_00221256;
            }
LAB_0022129b:
            auVar19._8_8_ = auVar28._0_8_;
            auVar19._0_8_ = auVar28._0_8_ >> 0x20;
            auVar14 = auVar19._0_12_;
            dVar20 = (double)((ulong)dVar25 >> 0x20);
          }
          param_2 = (double)((ulong)auVar14._8_4_ | auVar14._0_8_ << 0x20);
          param_3 = (double)((ulong)dVar25 & 0xffffffff | (long)dVar20 << 0x20);
          break;
        }
        lVar7 = lVar7 + 8;
      } while ((long)iVar1 * 8 != lVar7);
    }
    goto LAB_002212ec;
  }
  if (*(long *)(this + 0x30) != 0) {
    param_2 = (double)((long)param_2 - (*(ulong *)(this + 0x38) & 0xffffffff00000000) &
                       0xffffffff00000000 | (ulong)(uint)(iVar8 - (int)*(ulong *)(this + 0x38)));
    goto LAB_002212ec;
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00220e10 to 00220e19 has its CatchHandler @ 00221317 */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00220e1d to 00220e24 has its CatchHandler @ 00221304 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  fVar26 = *(float *)(Desktop::instance + 0x130);
  local_58 = (double)((ulong)param_2 >> 0x20);
  fVar13 = (float)(_DAT_005d91c0 & (uint)fVar26);
  if (fVar13 == DAT_005d94c8) {
    if ((fVar26 == DAT_005d9038) && (!NAN(fVar26) && !NAN(DAT_005d9038))) goto LAB_0022102e;
LAB_00220e93:
    dStack_40 = (double)((float)SUB84(param_3,0) * fVar26) + _UNK_005d9a98;
    local_58 = (double)((float)iVar5 * fVar26) + _DAT_005d9a90;
    dStack_50 = (double)((float)iVar10 * fVar26) + _UNK_005d9a98;
    local_48 = (double)((float)iVar8 * fVar26) + _DAT_005d9a90;
  }
  else {
    fVar21 = (float)((uint)(DAT_005d9054 + fVar26) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar21) {
      fVar22 = DAT_005d9038;
      if (DAT_005d9038 <= fVar13) {
        fVar22 = fVar13;
      }
      if (fVar22 * DAT_005d94d0 < fVar21) goto LAB_00220e93;
    }
LAB_0022102e:
    dStack_50 = (double)((ulong)param_3 >> 0x20);
    local_48 = param_2;
    dStack_40 = param_3;
  }
                    /* try { // try from 0022105d to 00221065 has its CatchHandler @ 00221327 */
  auVar11._0_4_ = (float)(**(code **)(*(long *)this + 0x88))(this);
  auVar15._0_8_ = (long)local_58 << 0x20;
  auVar15._8_8_ = (long)dStack_50 << 0x20;
  auVar4._8_8_ = dStack_40;
  auVar4._0_8_ = local_48;
  auVar28._8_8_ = _UNK_005d9aa8;
  auVar28._0_8_ = _DAT_005d9aa0;
  auVar15 = auVar4 & auVar28 | auVar15;
  dVar9 = auVar15._0_8_;
  dVar20 = auVar15._8_8_;
  dVar25 = (double)((ulong)dVar9 >> 0x20);
  fVar26 = (float)(_DAT_005d91c0 & (uint)auVar11._0_4_);
  if (fVar26 == DAT_005d94c8) {
    if ((auVar11._0_4_ == DAT_005d9038) && (!NAN(auVar11._0_4_) && !NAN(DAT_005d9038)))
    goto LAB_00221149;
LAB_002210eb:
    auVar16._0_4_ = (float)auVar15._0_4_;
    auVar16._4_4_ = (float)auVar15._8_4_;
    auVar16._8_8_ = 0;
    auVar11._4_4_ = auVar11._0_4_;
    auVar11._8_4_ = auVar11._0_4_;
    auVar11._12_4_ = auVar11._0_4_;
    auVar27 = divps(auVar16,auVar11);
    dVar9 = (double)auVar27._0_4_ + _DAT_005d9a90;
    dVar20 = (double)auVar27._4_4_ + _UNK_005d9a98;
    auVar23._0_4_ = (float)auVar15._4_4_;
    auVar23._4_4_ = (float)auVar15._12_4_;
    auVar23._8_8_ = 0;
    auVar27 = divps(auVar23,auVar11);
    dVar25 = (double)auVar27._0_4_ + _DAT_005d9a90;
    dVar12 = (double)auVar27._4_4_ + _UNK_005d9a98;
  }
  else {
    fVar13 = (float)((uint)(auVar11._0_4_ + DAT_005d9054) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar13) {
      fVar21 = DAT_005d9038;
      if (DAT_005d9038 <= fVar26) {
        fVar21 = fVar26;
      }
      if (fVar21 * DAT_005d94d0 < fVar13) goto LAB_002210eb;
    }
LAB_00221149:
    dVar12 = (double)((ulong)dVar20 >> 0x20);
  }
  param_3 = (double)((ulong)dVar20 & 0xffffffff | (long)dVar12 << 0x20);
  param_2 = (double)((ulong)(uint)(SUB84(dVar9,0) - (int)*(ulong *)(this + 0x38)) |
                    ((long)dVar25 << 0x20) - (*(ulong *)(this + 0x38) & 0xffffffff00000000));
LAB_002212ec:
  auVar29._8_8_ = param_3;
  auVar29._0_8_ = param_2;
  return auVar29;
}


