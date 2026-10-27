// Function : sigsqrt_perform
// Namespace: 
// Entry    : 004f3380
// Prototype: long sigsqrt_perform(long param_1)
// Body     : 004f3380 - 004f34df


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigsqrt_perform(long param_1)

{
  uint *puVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  undefined1 in_XMM5 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  fVar21 = _UNK_0065340c;
  fVar20 = _UNK_00653408;
  fVar19 = _UNK_00653404;
  fVar18 = _DAT_00653400;
  fVar17 = _UNK_006533fc;
  fVar16 = _UNK_006533f8;
  fVar15 = _UNK_006533f4;
  fVar31 = _DAT_006533f0;
  fVar2 = _UNK_006533ec;
  fVar14 = _UNK_006533e8;
  fVar13 = _UNK_006533e4;
  fVar12 = _DAT_006533e0;
  uVar11 = _UNK_005d91cc;
  uVar10 = _UNK_005d91c8;
  uVar29 = _UNK_005d91c4;
  uVar9 = _DAT_005d91c0;
  iVar26 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar26 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if ((iVar26 - 1U < 3) ||
       ((uVar4 < uVar3 + (ulong)(iVar26 - 1) * 4 + 4 &&
        (uVar3 < uVar4 + (ulong)(iVar26 - 1) * 4 + 4)))) {
      uVar22 = uVar3;
      uVar24 = uVar4;
    }
    else {
      uVar27 = (ulong)(iVar26 - 1U) + 1;
      uVar28 = uVar27 & 0xfffffffffffffffc;
      uVar22 = uVar3 + uVar28 * 4;
      iVar26 = iVar26 - (int)uVar28;
      uVar24 = uVar4 + uVar28 * 4;
      uVar23 = 0;
      do {
        auVar30 = *(undefined1 (*) [16])(uVar3 + uVar23);
        fVar5 = auVar30._0_4_;
        fVar6 = auVar30._4_4_;
        fVar7 = auVar30._8_4_;
        fVar8 = auVar30._12_4_;
        auVar30 = rsqrtps(in_XMM5,auVar30);
        fVar32 = fVar5 * auVar30._0_4_;
        fVar33 = fVar6 * auVar30._4_4_;
        fVar34 = fVar7 * auVar30._8_4_;
        fVar35 = fVar8 * auVar30._12_4_;
        in_XMM5._4_4_ = -(uint)(0.0 <= fVar6);
        in_XMM5._0_4_ = -(uint)(0.0 <= fVar5);
        in_XMM5._8_4_ = -(uint)(0.0 <= fVar7);
        in_XMM5._12_4_ = -(uint)(0.0 <= fVar8);
        puVar1 = (uint *)(uVar4 + uVar23);
        *puVar1 = -(uint)(fVar18 <= (float)((uint)fVar5 & uVar9) && 0.0 <= fVar5) &
                  (uint)((fVar32 * auVar30._0_4_ + fVar31) * fVar32 * fVar12);
        puVar1[1] = -(uint)(fVar19 <= (float)((uint)fVar6 & uVar29) && 0.0 <= fVar6) &
                    (uint)((fVar33 * auVar30._4_4_ + fVar15) * fVar33 * fVar13);
        puVar1[2] = -(uint)(fVar20 <= (float)((uint)fVar7 & uVar10) && 0.0 <= fVar7) &
                    (uint)((fVar34 * auVar30._8_4_ + fVar16) * fVar34 * fVar14);
        puVar1[3] = -(uint)(fVar21 <= (float)((uint)fVar8 & uVar11) && 0.0 <= fVar8) &
                    (uint)((fVar35 * auVar30._12_4_ + fVar17) * fVar35 * fVar2);
        uVar23 = uVar23 + 0x10;
      } while ((uVar27 * 4 & 0xfffffffffffffff0) != uVar23);
      if (uVar27 == uVar28) goto LAB_004f34da;
    }
    fVar14 = DAT_00652610;
    fVar13 = DAT_005d98c8;
    fVar12 = DAT_005d94cc;
    uVar9 = _DAT_005d91c0;
    lVar25 = 0;
    do {
      fVar2 = *(float *)(uVar22 + lVar25 * 4);
      uVar29 = 0;
      if (0.0 <= fVar2) {
        auVar30 = rsqrtss(ZEXT816(0),ZEXT416((uint)fVar2));
        fVar31 = fVar2 * auVar30._0_4_;
        uVar29 = ~-(uint)((float)((uint)fVar2 & uVar9) < fVar12) &
                 (uint)((fVar31 * auVar30._0_4_ + fVar14) * fVar31 * fVar13);
      }
      *(uint *)(uVar24 + lVar25 * 4) = uVar29;
      lVar25 = lVar25 + 1;
    } while (iVar26 != (int)lVar25);
  }
LAB_004f34da:
  return param_1 + 0x20;
}


