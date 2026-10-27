// Function : collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
// Namespace: OT:Layout:Common:Coverage
// Entry    : 003d0d70
// Prototype: bool collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>(Coverage * this, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>> * param_1)
// Body     : 003d0d70 - 003d1294


/* WARNING: Removing unreachable block (ram,0x003d127e) */
/* WARNING: Removing unreachable block (ram,0x003d1293) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   OT::Layout::Common::Coverage::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned
   long, 4u>, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >*) const */

bool __thiscall
OT::Layout::Common::Coverage::
collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
          (Coverage *this,
          hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *param_1)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  Coverage *pCVar14;
  uint uVar15;
  Coverage *pCVar16;
  ulong uVar17;
  undefined1 auVar18 [14];
  ulong uVar19;
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar1 = *(ushort *)this;
  uVar3 = uVar1 << 8 | uVar1 >> 8;
  if (uVar3 == 2) {
    uVar1 = *(ushort *)(this + 2);
    cVar2 = (char)uVar1;
    if (uVar1 != 0) {
      pCVar16 = this + 4;
      do {
        uVar4 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                ::add_range(param_1,(uint)(ushort)(*(ushort *)pCVar16 << 8 | *(ushort *)pCVar16 >> 8
                                                  ),
                            (uint)(ushort)(*(ushort *)(pCVar16 + 2) << 8 |
                                          *(ushort *)(pCVar16 + 2) >> 8));
        cVar2 = (char)uVar4;
        if (cVar2 == '\0') {
          return false;
        }
        pCVar16 = pCVar16 + 6;
      } while (pCVar16 != this + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) * 6 + 4);
    }
    return (bool)cVar2;
  }
  if (uVar3 != 1) {
    return (bool)(char)(uVar1 >> 8);
  }
  uVar1 = *(ushort *)(this + 2);
  if (uVar1 == 0) {
    return false;
  }
  uVar3 = uVar1 << 8 | uVar1 >> 8;
  pCVar16 = this + 4;
  uVar6 = *(ulong *)param_1;
  uVar15 = (uint)uVar3;
  pCVar14 = pCVar16;
  if (uVar1 != 0x100) {
    uVar9 = uVar15 & 0xfffffffe;
    do {
      uVar6 = uVar6 | 1L << ((ulong)((ushort)(*(ushort *)pCVar14 << 8 | *(ushort *)pCVar14 >> 8) >>
                                    4) & 0x3f) |
              1L << ((ulong)((ushort)(*(ushort *)(pCVar14 + 2) << 8 | *(ushort *)(pCVar14 + 2) >> 8)
                            >> 4) & 0x3f);
      pCVar14 = pCVar14 + 4;
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar6 = uVar6 | 1L << ((ulong)((ushort)(*(ushort *)pCVar14 << 8 | *(ushort *)pCVar14 >> 8) >> 4)
                          & 0x3f);
  }
  *(ulong *)param_1 = uVar6;
  uVar7 = *(ulong *)(param_1 + 8);
  uVar9 = uVar3 - 1;
  uVar6 = (ulong)uVar9 + 1;
  uVar12 = 0;
  if (uVar9 < 3) {
    pCVar14 = pCVar16;
LAB_003d1048:
    lVar11 = 0;
    do {
      uVar7 = uVar7 | 1L << ((ulong)(byte)pCVar14[lVar11 * 2 + 1] & 0x3f);
      lVar11 = lVar11 + 1;
    } while (uVar15 - (int)uVar12 != (int)lVar11);
  }
  else {
    uVar12 = uVar6 & 0xfffffffffffffffc;
    uVar10 = 0;
    uVar5 = (uVar12 - 4 >> 2) + 1;
    auVar21 = DAT_005de000._0_14_;
    pCVar14 = pCVar16;
    if (uVar12 - 4 == 0) {
      uVar17 = 0;
      uVar19 = 0;
LAB_003d0fb4:
      auVar18 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)pCVar14 >> 0x18),
                                 (ushort)*(undefined4 *)pCVar14 >> 8)) & auVar21;
      auVar21 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 4) >> 0x18),
                                 (ushort)*(undefined4 *)(pCVar14 + 4) >> 8)) & auVar21;
      auVar23._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar23._0_4_ = auVar21._0_4_ & 0xffff;
      uVar7 = uVar7 | _DAT_0065ada0 << (ulong)(auVar18._0_4_ & 0xffff);
      uVar10 = uVar10 | _UNK_0065ada8 << (ulong)auVar18._2_2_;
      uVar17 = uVar17 | _DAT_0065ada0 << auVar23._0_8_;
      uVar19 = uVar19 | _UNK_0065ada8 << (ulong)auVar21._2_2_;
    }
    else {
      uVar13 = uVar5 & 0xfffffffffffffffe;
      uVar17 = 0;
      uVar19 = 0;
      do {
        auVar25 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)pCVar14 >> 0x18),
                                   (ushort)*(undefined4 *)pCVar14 >> 8)) & auVar21;
        auVar26 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 4) >> 0x18),
                                   (ushort)*(undefined4 *)(pCVar14 + 4) >> 8)) & auVar21;
        auVar18 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 8) >> 0x18),
                                   (ushort)*(undefined4 *)(pCVar14 + 8) >> 8)) & auVar21;
        auVar20 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 0xc) >> 0x18),
                                   (ushort)*(undefined4 *)(pCVar14 + 0xc) >> 8)) & auVar21;
        auVar27._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar27._0_4_ = auVar20._0_4_ & 0xffff;
        uVar7 = _DAT_0065ada0 << (ulong)(auVar18._0_4_ & 0xffff) |
                _DAT_0065ada0 << (ulong)(auVar25._0_4_ & 0xffff) | uVar7;
        uVar10 = _UNK_0065ada8 << (ulong)auVar18._2_2_ |
                 _UNK_0065ada8 << (ulong)auVar25._2_2_ | uVar10;
        uVar17 = _DAT_0065ada0 << auVar27._0_8_ |
                 _DAT_0065ada0 << (ulong)(auVar26._0_4_ & 0xffff) | uVar17;
        uVar19 = _UNK_0065ada8 << (ulong)auVar20._2_2_ |
                 _UNK_0065ada8 << (ulong)auVar26._2_2_ | uVar19;
        pCVar14 = pCVar14 + 0x10;
        uVar13 = uVar13 - 2;
      } while (uVar13 != 0);
      if ((uVar5 & 1) != 0) goto LAB_003d0fb4;
    }
    uVar7 = uVar10 | uVar19 | uVar7 | uVar17;
    if (uVar6 != uVar12) {
      pCVar14 = pCVar16 + uVar12 * 2;
      goto LAB_003d1048;
    }
  }
  uVar12 = 0;
  *(ulong *)(param_1 + 8) = uVar7;
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (2 < uVar9) {
    uVar12 = uVar6 & 0xfffffffffffffffc;
    uVar17 = 0;
    uVar5 = uVar12 - 4;
    uVar10 = (uVar5 >> 2) + 1;
    auVar21 = DAT_005de000._0_14_;
    pCVar14 = pCVar16;
    if (uVar5 == 0) {
      uVar19 = 0;
      uVar13 = 0;
LAB_003d11b6:
      auVar18 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)pCVar14 >> 0x11),
                                 (ushort)*(undefined4 *)pCVar14 >> 1)) & auVar21;
      auVar21 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 4) >> 0x11),
                                 (ushort)*(undefined4 *)(pCVar14 + 4) >> 1)) & auVar21;
      auVar24._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar24._0_4_ = auVar21._0_4_ & 0xffff;
      uVar7 = uVar7 | _DAT_0065ada0 << (ulong)(auVar18._0_4_ & 0xffff);
      uVar17 = uVar17 | _UNK_0065ada8 << (ulong)auVar18._2_2_;
      uVar19 = uVar19 | _DAT_0065ada0 << auVar24._0_8_;
      uVar13 = uVar13 | _UNK_0065ada8 << (ulong)auVar21._2_2_;
    }
    else {
      uVar8 = uVar10 & 0xfffffffffffffffe;
      uVar19 = 0;
      uVar13 = 0;
      do {
        auVar25 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)pCVar14 >> 0x11),
                                   (ushort)*(undefined4 *)pCVar14 >> 1)) & auVar21;
        auVar26 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 4) >> 0x11),
                                   (ushort)*(undefined4 *)(pCVar14 + 4) >> 1)) & auVar21;
        auVar22._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar22._0_4_ = auVar26._0_4_ & 0xffff;
        auVar18 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 8) >> 0x11),
                                   (ushort)*(undefined4 *)(pCVar14 + 8) >> 1)) & auVar21;
        auVar20 = ZEXT414(CONCAT22((ushort)((uint)*(undefined4 *)(pCVar14 + 0xc) >> 0x11),
                                   (ushort)*(undefined4 *)(pCVar14 + 0xc) >> 1)) & auVar21;
        auVar28._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar28._0_4_ = auVar20._0_4_ & 0xffff;
        uVar7 = _DAT_0065ada0 << (ulong)(auVar18._0_4_ & 0xffff) |
                _DAT_0065ada0 << (ulong)(auVar25._0_4_ & 0xffff) | uVar7;
        uVar17 = _UNK_0065ada8 << (ulong)auVar18._2_2_ |
                 _UNK_0065ada8 << (ulong)auVar25._2_2_ | uVar17;
        uVar19 = _DAT_0065ada0 << auVar28._0_8_ | _DAT_0065ada0 << auVar22._0_8_ | uVar19;
        uVar13 = _UNK_0065ada8 << (ulong)auVar20._2_2_ |
                 _UNK_0065ada8 << (ulong)auVar26._2_2_ | uVar13;
        pCVar14 = pCVar14 + 0x10;
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
      if ((uVar10 & 1) != 0) goto LAB_003d11b6;
    }
    uVar7 = uVar17 | uVar13 | uVar7 | uVar19;
    if (uVar6 == uVar12) goto LAB_003d1264;
    pCVar16 = pCVar16 + uVar12 * 2;
  }
  uVar5 = 0;
  do {
    uVar7 = uVar7 | 1L << ((ulong)((byte)pCVar16[uVar5 * 2] >> 1) & 0x3f);
    uVar5 = uVar5 + 1;
  } while (uVar15 - (int)uVar12 != (int)uVar5);
LAB_003d1264:
  *(ulong *)(param_1 + 0x10) = uVar7;
  return SUB81(uVar5,0);
}


