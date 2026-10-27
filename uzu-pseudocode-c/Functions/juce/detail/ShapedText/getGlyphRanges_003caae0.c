// Function : getGlyphRanges
// Namespace: juce:detail:ShapedText
// Entry    : 003caae0
// Prototype: undefined getGlyphRanges(long param_1, long param_2, long param_3, long * param_4)
// Body     : 003caae0 - 003cb559


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedText::getGlyphRanges(juce::Range<long long>, std::vector<juce::Range<long
   long>, std::allocator<juce::Range<long long> > >&) const */

void __cdecl
juce::detail::ShapedText::getGlyphRanges(long param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  void *pvVar23;
  long *plVar24;
  void *pvVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  bool bVar29;
  long *local_138;
  long *plStack_130;
  undefined8 local_128;
  void *pvStack_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  long local_108;
  ulong local_100;
  void *local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long local_e0;
  void *local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  ulong *local_58;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  
  local_b8 = *param_4;
  if (param_4[1] != local_b8) {
    param_4[1] = local_b8;
  }
  local_a8 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  local_d8 = (void *)0x0;
  pvStack_d0 = (void *)0x0;
  local_c8 = 0;
                    /* try { // try from 003cab53 to 003cab5f has its CatchHandler @ 003cb55a */
  lStack_b0 = local_b8;
  Ranges::getIntersectionsWith
            (&local_60,*(long **)(param_1 + 0x118),*(long **)(param_1 + 0x120),param_2,param_3);
  local_118 = (undefined8 *)0x0;
  puStack_110 = (undefined8 *)0x0;
  local_128 = 0;
  pvStack_120 = (void *)0x0;
  local_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = 0;
  local_68 = local_58;
  puVar21 = local_60;
  local_e0 = param_1;
  local_78 = param_4;
  if (local_60 != local_58) {
    do {
      pvVar6 = pvStack_f0;
      pvVar23 = local_f8;
      uVar9 = *puVar21;
      plVar14 = *(long **)(param_1 + 0x118);
      uVar8 = (long)*(long **)(param_1 + 0x120) - (long)plVar14;
      plVar24 = plVar14;
      if (0 < (long)uVar8) {
        uVar12 = uVar8 >> 4;
        do {
          uVar4 = uVar12 >> 1;
          uVar5 = uVar4;
          if (plVar24[uVar4 * 2 + 1] <= (long)uVar9) {
            uVar5 = ~uVar4 + uVar12;
            plVar24 = plVar24 + uVar4 * 2 + 2;
          }
          uVar12 = uVar5;
        } while (0 < (long)uVar5);
      }
      if ((plVar24 != *(long **)(param_1 + 0x120)) && (*plVar24 <= (long)uVar9)) {
        uVar8 = (long)plVar24 - (long)plVar14;
      }
      local_88 = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x10 + ((long)uVar8 >> 4) * 0x18);
      puVar26 = (undefined8 *)(*(long *)(param_1 + 0x130) + ((long)uVar8 >> 4) * 0x18);
      local_98 = *puVar26;
      uStack_90 = puVar26[1];
                    /* try { // try from 003cac8d to 003cac9b has its CatchHandler @ 003cb57b */
      Ranges::set((Ranges *)&local_138,uVar9,puVar21[1],&local_f8);
      if ((long)pvStack_f0 - (long)local_f8 == 0) {
LAB_003cabc0:
        puVar22 = puVar21;
        if (pvStack_f0 != local_f8) {
LAB_003cabc8:
          puVar22 = puVar21;
          pvStack_f0 = local_f8;
        }
      }
      else {
        lVar13 = (long)pvVar6 - (long)pvVar23 >> 4;
        uVar9 = ((long)pvStack_f0 - (long)local_f8 >> 4) * -0x5555555555555555;
        bVar29 = uVar9 < (ulong)(lVar13 * -0x5555555555555555);
        lVar10 = uVar9 + lVar13 * 0x5555555555555555;
        if (bVar29 || lVar10 == 0) goto LAB_003cabc0;
        if (bVar29) {
          lVar10 = 0;
        }
        plVar24 = (long *)((long)local_f8 + lVar13 * 0x10);
        plVar14 = plVar24 + lVar10 * 6;
        puVar18 = puStack_110;
        pvVar23 = pvStack_120;
        puVar26 = local_118;
        local_70 = puVar21;
        do {
          cVar1 = (char)plVar24[5];
          if (cVar1 == '\x02') {
            lVar10 = *plVar24;
            lVar13 = plVar24[1];
            if (lVar10 != lVar13) {
              uVar9 = (long)puVar26 - (long)((long)pvVar23 + lVar13 * 0x18);
              if (uVar9 == 0) {
                uVar9 = 0;
              }
              else if (0 < (long)uVar9) {
                uVar8 = uVar9 / 0x18 + 1;
                pvVar6 = pvVar23;
                do {
                  *(undefined1 *)((long)pvVar6 + lVar10 * 0x18 + 0x10) =
                       *(undefined1 *)((long)pvVar6 + lVar13 * 0x18 + 0x10);
                  puVar26 = (undefined8 *)((long)pvVar6 + lVar13 * 0x18);
                  uVar3 = puVar26[1];
                  puVar27 = (undefined8 *)((long)pvVar6 + lVar10 * 0x18);
                  *puVar27 = *puVar26;
                  puVar27[1] = uVar3;
                  uVar8 = uVar8 - 1;
                  pvVar6 = (void *)((long)pvVar6 + 0x18);
                } while (1 < uVar8);
              }
              puVar26 = (undefined8 *)((long)pvVar23 + uVar9 + lVar10 * 0x18);
            }
          }
          else if (cVar1 == '\x01') {
            lVar10 = *plVar24;
            lVar13 = lVar10 * 3;
            puVar27 = (undefined8 *)((long)pvVar23 + lVar10 * 0x18);
            if (puVar26 == puVar18) {
              lVar17 = (long)puVar18 - (long)pvVar23;
              if (lVar17 == 0x7ffffffffffffff8) {
                pvStack_120 = pvVar23;
                local_118 = puVar18;
                puStack_110 = puVar18;
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar8 = (lVar17 >> 3) * -0x5555555555555555;
              uVar9 = uVar8;
              if (lVar17 == 0) {
                uVar9 = 1;
              }
              local_100 = uVar9 + uVar8;
              if (0x555555555555555 < local_100) {
                local_100 = 0x555555555555555;
              }
              if (CARRY8(uVar9,uVar8)) {
                local_100 = 0x555555555555555;
              }
              if (local_100 == 0) {
                pvVar6 = (void *)0x0;
              }
              else {
                local_108 = lVar13;
                    /* try { // try from 003cafaf to 003cb043 has its CatchHandler @ 003cb57d */
                pvVar6 = operator_new(local_100 * 0x18);
                lVar13 = local_108;
              }
              *(undefined8 *)((long)pvVar6 + lVar13 * 8 + 0x10) = puVar27[2];
              uVar3 = puVar27[1];
              puVar26 = (undefined8 *)((long)pvVar6 + lVar13 * 8);
              *puVar26 = *puVar27;
              puVar26[1] = uVar3;
              pvVar25 = pvVar6;
              if (lVar10 != 0) {
                lVar13 = 0;
                do {
                  *(undefined8 *)((long)pvVar6 + lVar13 + 0x10) =
                       *(undefined8 *)((long)pvVar23 + lVar13 + 0x10);
                  uVar3 = ((undefined8 *)((long)pvVar23 + lVar13))[1];
                  *(undefined8 *)((long)pvVar6 + lVar13) = *(undefined8 *)((long)pvVar23 + lVar13);
                  ((undefined8 *)((long)pvVar6 + lVar13))[1] = uVar3;
                  lVar13 = lVar13 + 0x18;
                } while (lVar10 * 0x18 != lVar13);
                pvVar25 = (void *)(lVar13 + (long)pvVar6);
              }
              puVar26 = (undefined8 *)((long)pvVar25 + 0x18);
              for (; puVar18 != puVar27; puVar27 = puVar27 + 3) {
                puVar26[2] = puVar27[2];
                uVar3 = puVar27[1];
                *puVar26 = *puVar27;
                puVar26[1] = uVar3;
                puVar26 = puVar26 + 3;
              }
LAB_003cb17c:
              if (pvVar23 != (void *)0x0) {
                operator_delete(pvVar23);
              }
              puVar18 = (undefined8 *)(local_100 * 0x18 + (long)pvVar6);
              pvVar23 = pvVar6;
            }
            else if (puVar26 == puVar27) {
              puVar26 = puVar26 + 3;
            }
            else {
              uVar2 = *(undefined1 *)puVar27;
              uStack_38 = (undefined7)((ulong)puVar27[2] >> 8);
              local_48 = *(undefined8 *)((long)puVar27 + 1);
              uVar3 = *(undefined8 *)((long)puVar27 + 9);
              uStack_40 = (undefined7)uVar3;
              uStack_39 = (undefined1)((ulong)uVar3 >> 0x38);
              puVar11 = puVar26 + -3;
              puVar26[2] = puVar26[-1];
              *puVar26 = puVar26[-3];
              puVar26[1] = puVar26[-2];
              if (0 < (long)puVar11 - (long)puVar27) {
                uVar9 = (ulong)((long)puVar11 - (long)puVar27) / 0x18 + 1;
                do {
                  *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(puVar11 + -1);
                  *puVar11 = puVar11[-3];
                  puVar11[1] = puVar11[-2];
                  puVar11 = puVar11 + -3;
                  uVar9 = uVar9 - 1;
                } while (1 < uVar9);
              }
              puVar26 = puVar26 + 3;
              *(undefined1 *)puVar27 = uVar2;
              *(undefined8 *)((long)puVar27 + 1) = local_48;
              *(undefined8 *)((long)puVar27 + 9) = uVar3;
            }
          }
          else if (cVar1 == '\0') {
            lVar10 = *plVar24;
            lVar13 = lVar10 * 3;
            puVar27 = (undefined8 *)((long)pvVar23 + lVar10 * 0x18);
            if (puVar26 == puVar18) {
              lVar17 = (long)puVar18 - (long)pvVar23;
              if (lVar17 == 0x7ffffffffffffff8) {
                pvStack_120 = pvVar23;
                local_118 = puVar18;
                puStack_110 = puVar18;
                    /* try { // try from 003cb533 to 003cb559 has its CatchHandler @ 003cb591 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar8 = (lVar17 >> 3) * -0x5555555555555555;
              uVar9 = uVar8;
              if (lVar17 == 0) {
                uVar9 = 1;
              }
              local_100 = uVar9 + uVar8;
              if (0x555555555555555 < local_100) {
                local_100 = 0x555555555555555;
              }
              if (CARRY8(uVar9,uVar8)) {
                local_100 = 0x555555555555555;
              }
              if (local_100 == 0) {
                pvVar6 = (void *)0x0;
              }
              else {
                local_108 = lVar13;
                pvVar6 = operator_new(local_100 * 0x18);
                lVar13 = local_108;
              }
              *(undefined8 *)((long)pvVar6 + lVar13 * 8 + 0x10) = local_88;
              puVar26 = (undefined8 *)((long)pvVar6 + lVar13 * 8);
              *puVar26 = local_98;
              puVar26[1] = uStack_90;
              pvVar25 = pvVar6;
              if (lVar10 != 0) {
                lVar13 = 0;
                do {
                  *(undefined8 *)((long)pvVar6 + lVar13 + 0x10) =
                       *(undefined8 *)((long)pvVar23 + lVar13 + 0x10);
                  uVar3 = ((undefined8 *)((long)pvVar23 + lVar13))[1];
                  *(undefined8 *)((long)pvVar6 + lVar13) = *(undefined8 *)((long)pvVar23 + lVar13);
                  ((undefined8 *)((long)pvVar6 + lVar13))[1] = uVar3;
                  lVar13 = lVar13 + 0x18;
                } while (lVar10 * 0x18 != lVar13);
                pvVar25 = (void *)(lVar13 + (long)pvVar6);
              }
              puVar26 = (undefined8 *)((long)pvVar25 + 0x18);
              for (; puVar18 != puVar27; puVar27 = puVar27 + 3) {
                puVar26[2] = puVar27[2];
                uVar3 = puVar27[1];
                *puVar26 = *puVar27;
                puVar26[1] = uVar3;
                puVar26 = puVar26 + 3;
              }
              goto LAB_003cb17c;
            }
            if (puVar26 == puVar27) {
              puVar26[2] = local_88;
              *puVar26 = local_98;
              puVar26[1] = uStack_90;
              puVar26 = puVar26 + 3;
            }
            else {
              puVar11 = puVar26 + -3;
              puVar26[2] = puVar26[-1];
              *puVar26 = puVar26[-3];
              puVar26[1] = puVar26[-2];
              if (0 < (long)puVar11 - (long)puVar27) {
                uVar9 = (ulong)((long)puVar11 - (long)puVar27) / 0x18 + 1;
                do {
                  *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(puVar11 + -1);
                  *puVar11 = puVar11[-3];
                  puVar11[1] = puVar11[-2];
                  puVar11 = puVar11 + -3;
                  uVar9 = uVar9 - 1;
                } while (1 < uVar9);
              }
              puVar26 = puVar26 + 3;
              *(undefined1 *)(puVar27 + 2) = (undefined1)local_88;
              *puVar27 = local_98;
              puVar27[1] = uStack_90;
            }
          }
          plVar24 = plVar24 + 6;
        } while (plVar24 != plVar14);
        puVar21 = local_70;
        puVar22 = local_70;
        param_1 = local_e0;
        pvStack_120 = pvVar23;
        local_118 = puVar26;
        puStack_110 = puVar18;
        if (pvStack_f0 != local_f8) goto LAB_003cabc8;
      }
      puVar21 = puVar22 + 2;
    } while (puVar22 + 2 != local_68);
    if (local_f8 != (void *)0x0) {
      operator_delete(local_f8);
    }
  }
  if (local_60 != (ulong *)0x0) {
    operator_delete(local_60);
  }
  pvVar23 = pvStack_120;
  plVar24 = plStack_130;
  plVar14 = local_138;
  if (plStack_130 != local_138) {
    plVar28 = local_138;
    do {
      lVar7 = (long)plVar28 - (long)plVar14 >> 4;
      lVar10 = *plVar28;
      lVar13 = *(long *)((long)pvVar23 + lVar7 * 0x18);
      lVar17 = *(long *)((long)pvVar23 + lVar7 * 0x18 + 8);
      lVar20 = *(long *)(local_e0 + 0x90) - *(long *)(local_e0 + 0x88) >> 5;
      if (lVar20 < 0) {
        lVar20 = 0;
      }
      lVar16 = 0;
      if (-1 < lVar13) {
        lVar16 = lVar13;
      }
      if (lVar17 <= lVar20) {
        lVar20 = lVar17;
      }
      lVar19 = lVar16 * 0x20 + *(long *)(local_e0 + 0x88);
      uVar9 = lVar20 - lVar16;
      if (uVar9 == 0 || lVar20 < lVar16) {
        uVar9 = 0;
      }
      lVar20 = uVar9 * 0x20 + lVar19;
      if (*(char *)((long)pvVar23 + lVar7 * 0x18 + 0x10) == '\0') {
        lVar13 = lVar20;
        lVar7 = lVar20;
        if (0 < (long)uVar9) {
          uVar8 = uVar9 & 0x7ffffffffffffff;
          lVar16 = lVar20;
          do {
            uVar12 = uVar8 >> 1;
            if (*(long *)(lVar16 + -0x10 + uVar12 * -0x20) < lVar10) {
              lVar16 = lVar16 + uVar12 * -0x20 + -0x20;
              uVar12 = ~uVar12 + uVar8;
            }
            uVar8 = uVar12;
          } while (0 < (long)uVar12);
          if ((lVar16 != lVar20) &&
             ((lVar16 == lVar19 || (lVar13 = lVar16, *(long *)(lVar16 + -0x10) != lVar10)))) {
            lVar13 = lVar16 + 0x20;
          }
          uVar9 = uVar9 & 0x7ffffffffffffff;
          do {
            uVar8 = uVar9 >> 1;
            if (*(long *)(lVar7 + -0x10 + uVar8 * -0x20) < plVar28[1]) {
              lVar7 = lVar7 + uVar8 * -0x20 + -0x20;
              uVar8 = ~uVar8 + uVar9;
            }
            uVar9 = uVar8;
          } while (0 < (long)uVar8);
        }
        lVar13 = lVar20 - lVar13 >> 5;
        lVar10 = lVar20 - lVar7 >> 5;
        if (lVar10 <= lVar13) {
          lVar10 = lVar13;
        }
        uVar8 = lVar17 - lVar10;
        uVar9 = lVar17 - lVar13;
        if (lVar17 - lVar13 <= (long)uVar8) {
          uVar9 = uVar8;
        }
                    /* try { // try from 003cb49c to 003cb4ad has its CatchHandler @ 003cb55f */
        Ranges::set((Ranges *)&local_b8,uVar8,uVar9,&local_d8);
      }
      else {
        lVar17 = lVar19;
        lVar7 = lVar19;
        if (0 < (long)uVar9) {
          uVar8 = uVar9 & 0x7ffffffffffffff;
          lVar16 = lVar19;
          do {
            uVar12 = uVar8 >> 1;
            lVar15 = uVar12 * 0x20;
            if (*(long *)(lVar16 + 0x10 + lVar15) < lVar10) {
              uVar12 = ~uVar12 + uVar8;
              lVar16 = lVar16 + lVar15 + 0x20;
            }
            uVar8 = uVar12;
          } while (0 < (long)uVar12);
          if ((lVar16 != lVar19) &&
             ((lVar16 == lVar20 || (lVar17 = lVar16, *(long *)(lVar16 + 0x10) != lVar10)))) {
            lVar17 = lVar16 + -0x20;
          }
          uVar9 = uVar9 & 0x7ffffffffffffff;
          do {
            uVar8 = uVar9 >> 1;
            lVar10 = uVar8 * 0x20;
            if (*(long *)(lVar7 + 0x10 + lVar10) < plVar28[1]) {
              uVar8 = ~uVar8 + uVar9;
              lVar7 = lVar7 + lVar10 + 0x20;
            }
            uVar9 = uVar8;
          } while (0 < (long)uVar8);
        }
        lVar10 = lVar17 - lVar19 >> 5;
        lVar17 = lVar7 - lVar19 >> 5;
        uVar9 = lVar10 + lVar13;
        uVar8 = lVar13 + lVar17;
        if (lVar17 <= lVar10) {
          uVar8 = uVar9;
        }
                    /* try { // try from 003cb252 to 003cb266 has its CatchHandler @ 003cb561 */
        Ranges::set((Ranges *)&local_b8,uVar9,uVar8,&local_d8);
      }
      pvStack_d0 = local_d8;
      plVar28 = plVar28 + 2;
    } while (plVar28 != plVar24);
  }
  if (pvVar23 != (void *)0x0) {
    operator_delete(pvVar23);
  }
  if (plVar14 != (long *)0x0) {
    operator_delete(plVar14);
  }
  pvVar23 = (void *)*local_78;
  *local_78 = local_b8;
  local_78[1] = lStack_b0;
  local_78[2] = local_a8;
  if (pvVar23 != (void *)0x0) {
    operator_delete(pvVar23);
  }
  if (local_d8 == (void *)0x0) {
    return;
  }
  operator_delete(local_d8);
  return;
}


