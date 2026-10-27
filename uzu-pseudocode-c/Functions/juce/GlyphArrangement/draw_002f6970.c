// Function : draw
// Namespace: juce:GlyphArrangement
// Entry    : 002f6970
// Prototype: undefined draw(long * param_1, long param_2, undefined8 param_3, undefined8 param_4, uint * param_5, undefined8 * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)
// Body     : 002f6970 - 002f7352


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::GlyphArrangement::draw(juce::Graphics const&, juce::AffineTransform) const */

void __cdecl
juce::GlyphArrangement::draw
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  SharedFontInternal *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  char cVar10;
  undefined2 *puVar11;
  uint *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  uint *puVar18;
  float *pfVar19;
  long lVar20;
  undefined8 extraout_RDX;
  undefined8 uVar21;
  undefined8 extraout_RDX_00;
  long lVar22;
  long *plVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  uint uVar31;
  undefined2 *puVar32;
  ulong uVar33;
  float fVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined2 *local_d0;
  uint *local_c8;
  SharedFontInternal *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined1 uStack_9c;
  undefined1 local_98 [24];
  long *local_80;
  float *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar26 = (long)*(int *)((long)param_1 + 0xc);
  if (lVar26 < 0) {
                    /* try { // try from 002f7338 to 002f7352 has its CatchHandler @ 002f7363 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (*(int *)((long)param_1 + 0xc) == 0) {
    local_d0 = (undefined2 *)0x0;
    puVar11 = (undefined2 *)0x0;
  }
  else {
                    /* try { // try from 002f69a5 to 002f69db has its CatchHandler @ 002f7363 */
    puVar11 = operator_new(lVar26 * 2);
    lVar22 = (long)*(int *)((long)param_1 + 0xc);
    if (lVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
    }
    local_d0 = puVar11 + lVar26;
    if (*(int *)((long)param_1 + 0xc) != 0) {
      puVar12 = operator_new(lVar22 * 8);
      local_c8 = puVar12 + lVar22 * 2;
      goto LAB_002f6a0c;
    }
  }
  local_c8 = (uint *)0x0;
  puVar12 = (uint *)0x0;
LAB_002f6a0c:
  plVar6 = *(long **)(param_2 + 8);
                    /* try { // try from 002f6a18 to 002f6a1f has its CatchHandler @ 002f735b */
  (**(code **)(*plVar6 + 0x70))();
  local_50 = (long *)*param_1 + (long)*(int *)((long)param_1 + 0xc) * 4;
  plVar29 = (long *)*param_1;
  while (plVar9 = local_50, plVar29 != local_50) {
    plVar23 = plVar29 + 4;
    plVar13 = plVar9;
    if (plVar23 != local_50) {
      do {
                    /* try { // try from 002f6a8d to 002f6a91 has its CatchHandler @ 002f73d9 */
        if ((plVar23[-4] != *plVar23) &&
           (uVar14 = FontOptions::operator==
                               ((FontOptions *)(plVar23[-4] + 0x18),(undefined8 *)(*plVar23 + 0x18))
           , (char)uVar14 == '\0')) {
          plVar13 = plVar23 + -4;
          break;
        }
        plVar23 = plVar23 + 4;
      } while (plVar23 != plVar9);
    }
    plVar13 = plVar13 + (ulong)(plVar13 != plVar9) * 4;
    puVar24 = puVar12;
    puVar32 = puVar11;
    local_80 = plVar29;
    if (plVar29 != plVar13) {
      do {
        while (uVar5 = *(undefined2 *)((long)plVar29 + 0xc), puVar32 != local_d0) {
          *puVar32 = uVar5;
          puVar32 = puVar32 + 1;
          plVar29 = plVar29 + 4;
          if (plVar29 == plVar13) goto LAB_002f6cf1;
        }
        lVar26 = (long)local_d0 - (long)puVar11;
        if (lVar26 == 0x7ffffffffffffffe) {
                    /* try { // try from 002f7310 to 002f7334 has its CatchHandler @ 002f73e1 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar27 = lVar26 >> 1;
        uVar14 = uVar27;
        if (lVar26 == 0) {
          uVar14 = 1;
        }
        uVar28 = uVar14 + uVar27;
        if (0x3fffffffffffffff < uVar28) {
          uVar28 = 0x3fffffffffffffff;
        }
        if (CARRY8(uVar14,uVar27)) {
          uVar28 = 0x3fffffffffffffff;
        }
        local_98._0_8_ = uVar28;
        if (uVar28 == 0) {
          puVar15 = (undefined2 *)0x0;
          *(undefined2 *)(uVar27 * 2) = uVar5;
          if (lVar26 < 1) goto LAB_002f6be4;
LAB_002f6b82:
          puVar32 = puVar15;
          if (puVar11 != local_d0) {
            puVar16 = puVar11;
            if (0x1d < lVar26 - 2U) {
              uVar30 = (lVar26 - 2U >> 1) + 1;
              uVar14 = uVar30 & 0xfffffffffffffff0;
              uVar28 = (uVar14 - 0x10 >> 4) + 1;
              uVar27 = (ulong)((uint)uVar28 & 3);
              if (uVar14 - 0x10 < 0x30) {
                lVar26 = 0;
              }
              else {
                uVar28 = uVar28 & 0xfffffffffffffffc;
                lVar26 = 0;
                do {
                  uVar21 = *(undefined8 *)((long)(puVar11 + lVar26) + 8);
                  uVar7 = *(undefined8 *)(puVar11 + lVar26 + 8);
                  uVar8 = *(undefined8 *)((long)(puVar11 + lVar26 + 8) + 8);
                  *(undefined8 *)(puVar15 + lVar26) = *(undefined8 *)(puVar11 + lVar26);
                  *(undefined8 *)((long)(puVar15 + lVar26) + 8) = uVar21;
                  *(undefined8 *)(puVar15 + lVar26 + 8) = uVar7;
                  *(undefined8 *)((long)(puVar15 + lVar26 + 8) + 8) = uVar8;
                  uVar21 = *(undefined8 *)((long)(puVar11 + lVar26 + 0x10) + 8);
                  uVar7 = *(undefined8 *)(puVar11 + lVar26 + 0x18);
                  uVar8 = *(undefined8 *)((long)(puVar11 + lVar26 + 0x18) + 8);
                  *(undefined8 *)(puVar15 + lVar26 + 0x10) =
                       *(undefined8 *)(puVar11 + lVar26 + 0x10);
                  *(undefined8 *)((long)(puVar15 + lVar26 + 0x10) + 8) = uVar21;
                  *(undefined8 *)(puVar15 + lVar26 + 0x18) = uVar7;
                  *(undefined8 *)((long)(puVar15 + lVar26 + 0x18) + 8) = uVar8;
                  uVar21 = *(undefined8 *)((long)(puVar11 + lVar26 + 0x20) + 8);
                  uVar7 = *(undefined8 *)(puVar11 + lVar26 + 0x28);
                  uVar8 = *(undefined8 *)((long)(puVar11 + lVar26 + 0x28) + 8);
                  *(undefined8 *)(puVar15 + lVar26 + 0x20) =
                       *(undefined8 *)(puVar11 + lVar26 + 0x20);
                  *(undefined8 *)((long)(puVar15 + lVar26 + 0x20) + 8) = uVar21;
                  *(undefined8 *)(puVar15 + lVar26 + 0x28) = uVar7;
                  *(undefined8 *)((long)(puVar15 + lVar26 + 0x28) + 8) = uVar8;
                  uVar21 = *(undefined8 *)((long)(puVar11 + lVar26 + 0x30) + 8);
                  uVar7 = *(undefined8 *)(puVar11 + lVar26 + 0x38);
                  uVar8 = *(undefined8 *)((long)(puVar11 + lVar26 + 0x38) + 8);
                  *(undefined8 *)(puVar15 + lVar26 + 0x30) =
                       *(undefined8 *)(puVar11 + lVar26 + 0x30);
                  *(undefined8 *)((long)(puVar15 + lVar26 + 0x30) + 8) = uVar21;
                  *(undefined8 *)(puVar15 + lVar26 + 0x38) = uVar7;
                  *(undefined8 *)((long)(puVar15 + lVar26 + 0x38) + 8) = uVar8;
                  lVar26 = lVar26 + 0x40;
                  uVar28 = uVar28 - 4;
                } while (uVar28 != 0);
              }
              if (uVar27 != 0) {
                lVar22 = 0;
                do {
                  puVar3 = (undefined8 *)((long)puVar11 + lVar22 + lVar26 * 2);
                  uVar21 = puVar3[1];
                  puVar2 = (undefined8 *)((long)puVar11 + lVar22 + lVar26 * 2 + 0x10);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)((long)puVar15 + lVar22 + lVar26 * 2);
                  *puVar2 = *puVar3;
                  puVar2[1] = uVar21;
                  puVar2 = (undefined8 *)((long)puVar15 + lVar22 + lVar26 * 2 + 0x10);
                  *puVar2 = uVar7;
                  puVar2[1] = uVar8;
                  lVar22 = lVar22 + 0x20;
                } while (uVar27 * 0x20 != lVar22);
              }
              puVar32 = puVar15 + uVar14;
              if (uVar30 == uVar14) goto LAB_002f6cc5;
              puVar16 = puVar11 + uVar14;
            }
            do {
              *puVar32 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar32 = puVar32 + 1;
            } while (puVar16 != local_d0);
          }
        }
        else {
                    /* try { // try from 002f6b69 to 002f6b6d has its CatchHandler @ 002f73ca */
          puVar15 = operator_new(uVar28 * 2);
          puVar15[uVar27] = uVar5;
          if (0 < lVar26) goto LAB_002f6b82;
LAB_002f6be4:
          puVar32 = puVar15 + uVar27;
        }
LAB_002f6cc5:
        if (puVar11 != (undefined2 *)0x0) {
          operator_delete(puVar11);
        }
        local_d0 = puVar15 + local_98._0_8_;
        puVar32 = puVar32 + 1;
        plVar29 = plVar29 + 4;
        puVar11 = puVar15;
      } while (plVar29 != plVar13);
LAB_002f6cf1:
      plVar29 = local_80;
      do {
        while (lVar26 = plVar29[2], puVar12 != local_c8) {
          *(long *)puVar12 = lVar26;
          puVar12 = puVar12 + 2;
          plVar29 = plVar29 + 4;
          if (plVar29 == plVar13) goto LAB_002f6f27;
        }
        lVar22 = (long)local_c8 - (long)puVar24;
        if (lVar22 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        local_98._0_8_ = plVar29;
        uVar27 = lVar22 >> 3;
        uVar14 = uVar27;
        if (lVar22 == 0) {
          uVar14 = 1;
        }
        uVar28 = uVar14 + uVar27;
        if (0xfffffffffffffff < uVar28) {
          uVar28 = 0xfffffffffffffff;
        }
        if (CARRY8(uVar14,uVar27)) {
          uVar28 = 0xfffffffffffffff;
        }
        if (uVar28 == 0) {
          puVar17 = (uint *)0x0;
        }
        else {
                    /* try { // try from 002f6d99 to 002f6d9d has its CatchHandler @ 002f73c2 */
          puVar17 = operator_new(uVar28 * 8);
        }
        *(long *)(puVar17 + uVar27 * 2) = lVar26;
        puVar12 = puVar17;
        if (puVar24 != local_c8) {
          puVar18 = puVar24;
          if (0x17 < lVar22 - 8U) {
            uVar33 = (lVar22 - 8U >> 3) + 1;
            uVar14 = uVar33 & 0x3ffffffffffffffc;
            uVar30 = (uVar14 - 4 >> 2) + 1;
            uVar27 = (ulong)((uint)uVar30 & 3);
            if (uVar14 - 4 < 0xc) {
              lVar26 = 0;
            }
            else {
              uVar30 = uVar30 & 0x7ffffffffffffffc;
              lVar26 = 0;
              do {
                uVar21 = *(undefined8 *)(puVar24 + lVar26 * 2 + 2);
                uVar7 = *(undefined8 *)(puVar24 + lVar26 * 2 + 4);
                uVar8 = *(undefined8 *)(puVar24 + lVar26 * 2 + 4 + 2);
                *(undefined8 *)(puVar17 + lVar26 * 2) = *(undefined8 *)(puVar24 + lVar26 * 2);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 2) = uVar21;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 4) = uVar7;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 4 + 2) = uVar8;
                uVar21 = *(undefined8 *)(puVar24 + lVar26 * 2 + 8 + 2);
                uVar7 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0xc);
                uVar8 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0xc + 2);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 8) =
                     *(undefined8 *)(puVar24 + lVar26 * 2 + 8);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 8 + 2) = uVar21;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0xc) = uVar7;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0xc + 2) = uVar8;
                uVar21 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0x10 + 2);
                uVar7 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0x14);
                uVar8 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0x14 + 2);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x10) =
                     *(undefined8 *)(puVar24 + lVar26 * 2 + 0x10);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x10 + 2) = uVar21;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x14) = uVar7;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x14 + 2) = uVar8;
                uVar21 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0x18 + 2);
                uVar7 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0x1c);
                uVar8 = *(undefined8 *)(puVar24 + lVar26 * 2 + 0x1c + 2);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x18) =
                     *(undefined8 *)(puVar24 + lVar26 * 2 + 0x18);
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x18 + 2) = uVar21;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x1c) = uVar7;
                *(undefined8 *)(puVar17 + lVar26 * 2 + 0x1c + 2) = uVar8;
                lVar26 = lVar26 + 0x10;
                uVar30 = uVar30 - 4;
              } while (uVar30 != 0);
            }
            if (uVar27 != 0) {
              lVar22 = 0;
              do {
                puVar3 = (undefined8 *)((long)puVar24 + lVar22 + lVar26 * 8);
                uVar21 = puVar3[1];
                puVar2 = (undefined8 *)((long)puVar24 + lVar22 + lVar26 * 8 + 0x10);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar2 = (undefined8 *)((long)puVar17 + lVar22 + lVar26 * 8);
                *puVar2 = *puVar3;
                puVar2[1] = uVar21;
                puVar2 = (undefined8 *)((long)puVar17 + lVar22 + lVar26 * 8 + 0x10);
                *puVar2 = uVar7;
                puVar2[1] = uVar8;
                lVar22 = lVar22 + 0x20;
              } while (uVar27 * 0x20 != lVar22);
            }
            puVar12 = puVar17 + uVar14 * 2;
            if (uVar33 == uVar14) goto LAB_002f6ef3;
            puVar18 = puVar24 + uVar14 * 2;
          }
          do {
            *(long *)puVar12 = *(long *)puVar18;
            puVar18 = puVar18 + 2;
            puVar12 = puVar12 + 2;
          } while (puVar18 != local_c8);
        }
LAB_002f6ef3:
        if (puVar24 != (uint *)0x0) {
          operator_delete(puVar24);
        }
        local_c8 = puVar17 + uVar28 * 2;
        puVar12 = puVar12 + 2;
        plVar29 = (long *)(local_98._0_8_ + 0x20);
        puVar24 = puVar17;
      } while (plVar29 != plVar13);
LAB_002f6f27:
    }
                    /* try { // try from 002f6f4b to 002f6f88 has its CatchHandler @ 002f73c0 */
    (**(code **)(*plVar6 + 0xf8))(plVar6,local_80);
    param_6 = &param_7;
    param_5 = puVar24;
    (**(code **)(*plVar6 + 0x108))
              (plVar6,(long)puVar32 - (long)puVar11 >> 1,puVar11,(long)puVar12 - (long)puVar24 >> 3)
    ;
    puVar12 = puVar24;
    plVar29 = plVar13;
  }
  if ((long)*(int *)((long)param_1 + 0xc) == 0) {
LAB_002f72d9:
                    /* try { // try from 002f72e1 to 002f72e3 has its CatchHandler @ 002f7353 */
    (**(code **)(*plVar6 + 0x78))();
    if (puVar12 != (uint *)0x0) {
      operator_delete(puVar12);
    }
    if (puVar11 != (undefined2 *)0x0) {
      operator_delete(puVar11);
    }
    return;
  }
  lVar26 = *param_1;
  lVar25 = (long)*(int *)((long)param_1 + 0xc) * 0x20 + lVar26;
  uVar31 = 0;
  lVar22 = lVar26;
  do {
    local_38 = param_9;
    local_48 = param_7;
    uStack_40 = param_8;
    lVar20 = (long)((ulong)uVar31 << 0x20) >> 0x1b;
    local_b8 = *(SharedFontInternal **)(lVar26 + lVar20);
    LOCK();
    *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
    UNLOCK();
    uVar21 = *(undefined8 *)(lVar26 + 0x15 + lVar20);
    fStack_a0 = (float)((ulong)uVar21 >> 0x18);
    uStack_9c = (undefined1)((ulong)uVar21 >> 0x38);
    puVar4 = (undefined4 *)(lVar26 + 8 + lVar20);
    local_b0 = *puVar4;
    uStack_ac = puVar4[1];
    fStack_a8 = (float)puVar4[2];
    fStack_a4 = (float)puVar4[3];
    if (local_b8[0x7d] == (SharedFontInternal)0x0) {
LAB_002f72b2:
      LOCK();
      pSVar1 = local_b8 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)local_b8 + 8))();
      }
    }
    else {
      fVar34 = *(float *)(local_b8 + 100);
      if (fVar34 <= DAT_005d9058) {
        fVar34 = *(float *)(local_b8 + 0x68);
                    /* try { // try from 002f704d to 002f7056 has its CatchHandler @ 002f737f */
        uVar21 = Font::SharedFontInternal::getAscentDescent
                           (local_b8,(long *)&local_b8,uVar21,lVar20,param_5,(ulong)param_6);
        fVar34 = fVar34 * ((float)((ulong)uVar21 >> 0x20) + (float)uVar21);
        uVar21 = extraout_RDX;
      }
                    /* try { // try from 002f7077 to 002f7080 has its CatchHandler @ 002f7387 */
      uVar21 = Font::SharedFontInternal::getAscentDescent
                         (local_b8,(long *)&local_b8,uVar21,lVar20,param_5,(ulong)param_6);
      fVar36 = *(float *)(local_b8 + 100);
      fVar35 = (float)uVar21;
      fVar37 = (float)((ulong)uVar21 >> 0x20);
      if (fVar36 <= DAT_005d9058) {
        local_98._8_4_ = extraout_XMM0_Dc;
        local_98._0_8_ = uVar21;
        local_98._12_4_ = extraout_XMM0_Dd;
        fVar36 = *(float *)(local_b8 + 0x68);
                    /* try { // try from 002f70a4 to 002f70ad has its CatchHandler @ 002f7377 */
        uVar21 = Font::SharedFontInternal::getAscentDescent
                           (local_b8,(long *)&local_b8,extraout_RDX_00,lVar20,param_5,(ulong)param_6
                           );
        fVar36 = fVar36 * ((float)((ulong)uVar21 >> 0x20) + (float)uVar21);
        fVar35 = (float)local_98._0_4_;
        fVar37 = (float)local_98._4_4_;
      }
      fVar36 = (fVar34 + (DAT_005d9054 / (fVar37 + fVar35)) * fVar35 * fVar36) * DAT_005d9088;
      fVar34 = fStack_a0 + fStack_a8;
      if ((int)uVar31 < *(int *)((long)param_1 + 0xc) + -1) {
        lVar26 = ((ulong)uVar31 << 0x20) + 0x100000000;
        fVar35 = *(float *)(*param_1 + 0x14 + (lVar26 >> 0x1b));
        fVar37 = (float)((uint)fVar35 & _DAT_005d91c0);
        if ((fVar37 == DAT_005d94c8) ||
           (fVar38 = (float)((uint)fStack_a4 & _DAT_005d91c0), fVar38 == DAT_005d94c8)) {
          if ((fVar35 != fStack_a4) || (NAN(fVar35) || NAN(fStack_a4))) goto LAB_002f71bf;
        }
        else {
          fVar35 = (float)((uint)(fVar35 - fStack_a4) & _DAT_005d91c0);
          if (DAT_005d94cc < fVar35) {
            if (fVar38 <= fVar37) {
              fVar38 = fVar37;
            }
            if (fVar38 * DAT_005d94d0 < fVar35) goto LAB_002f71bf;
          }
        }
        fVar34 = *(float *)(*param_1 + 0x10 + (lVar26 >> 0x20) * 0x20);
      }
LAB_002f71bf:
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (float *)0x0;
      uStack_70 = 0;
      local_58 = 1;
      Path::addRectangle(fStack_a8,fVar36 + fVar36 + fStack_a4,fVar34 - fStack_a8,fVar36,
                         (Path *)&local_78);
                    /* try { // try from 002f7203 to 002f728e has its CatchHandler @ 002f738c */
      cVar10 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
      if (cVar10 == '\0') {
        if ((long)uStack_70._4_4_ != 0) {
          pfVar19 = local_78;
          do {
            fVar34 = *pfVar19;
            if ((fVar34 != DAT_005de3d0) || (NAN(fVar34) || NAN(DAT_005de3d0))) {
              if ((fVar34 != DAT_005de3d4) || (NAN(fVar34) || NAN(DAT_005de3d4))) {
                if (((fVar34 != DAT_005de3d8) || (NAN(fVar34) || NAN(DAT_005de3d8))) &&
                   ((fVar34 != DAT_005de3dc || (NAN(fVar34) || NAN(DAT_005de3dc)))))
                goto LAB_002f7234;
              }
              (**(code **)(**(long **)(param_2 + 8) + 200))
                        (*(long **)(param_2 + 8),&local_78,&local_48);
              break;
            }
            pfVar19 = pfVar19 + 2;
LAB_002f7234:
            pfVar19 = pfVar19 + 1;
          } while (pfVar19 != local_78 + uStack_70._4_4_);
        }
      }
      uStack_70 = uStack_70 & 0xffffffff;
      free(local_78);
      if (local_b8 != (SharedFontInternal *)0x0) goto LAB_002f72b2;
    }
    lVar22 = lVar22 + 0x20;
    if (lVar22 == lVar25) goto LAB_002f72d9;
    uVar31 = uVar31 + 1;
    lVar26 = *param_1;
  } while( true );
}


