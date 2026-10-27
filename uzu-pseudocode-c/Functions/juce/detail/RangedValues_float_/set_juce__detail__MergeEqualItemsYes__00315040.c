// Function : set<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_float_
// Entry    : 00315040
// Prototype: void set<juce::detail::MergeEqualItemsYes>(undefined4 param_1, RangedValues<float> * this, ulong param_3, ulong param_4, long * param_5)
// Body     : 00315040 - 0031550a


/* void juce::detail::RangedValues<float>::set<juce::detail::MergeEqualItemsYes>(juce::Range<long
   long>, float, std::vector<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change>, std::allocator<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> > >&, juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<float>::set<juce::detail::MergeEqualItemsYes>
          (undefined4 param_1,RangedValues<float> *this,ulong param_3,ulong param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  long *plVar20;
  undefined4 *puVar21;
  
  lVar19 = param_5[1];
  lVar10 = *param_5;
  Ranges::set((Ranges *)this,param_3,param_4,param_5);
  lVar7 = param_5[1] - *param_5;
  if (lVar7 != 0) {
    lVar19 = lVar19 - lVar10 >> 4;
    uVar8 = (lVar7 >> 4) * -0x5555555555555555;
    if ((ulong)(lVar19 * -0x5555555555555555) < uVar8) {
      lVar10 = 0;
      if ((ulong)(lVar19 * -0x5555555555555555) <= uVar8) {
        lVar10 = uVar8 + lVar19 * 0x5555555555555555;
      }
      plVar14 = (long *)(*param_5 + lVar19 * 0x10);
      plVar20 = plVar14 + lVar10 * 6;
      do {
        if ((char)plVar14[5] == '\0') {
          puVar9 = *(undefined4 **)(this + 0x18);
          puVar3 = *(undefined4 **)(this + 0x20);
          lVar19 = *plVar14;
          puVar21 = puVar9 + lVar19;
          if (puVar3 == *(undefined4 **)(this + 0x28)) {
            lVar10 = (long)puVar3 - (long)puVar9;
            if (lVar10 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            uVar13 = lVar10 >> 2;
            uVar8 = uVar13;
            if (lVar10 == 0) {
              uVar8 = 1;
            }
            uVar17 = uVar8 + uVar13;
            if (0x1fffffffffffffff < uVar17) {
              uVar17 = 0x1fffffffffffffff;
            }
            if (CARRY8(uVar8,uVar13)) {
              uVar17 = 0x1fffffffffffffff;
            }
            if (uVar17 == 0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              puVar11 = operator_new(uVar17 * 4);
            }
            puVar11[lVar19] = param_1;
            if (lVar19 < 1) {
              puVar12 = puVar11 + lVar19;
            }
            else {
              uVar8 = (long)puVar21 + (-4 - (long)puVar9);
              puVar12 = puVar11;
              puVar18 = puVar9;
              if (0x1b < uVar8) {
                uVar13 = (uVar8 >> 2) + 1;
                uVar16 = uVar13 & 0x7ffffffffffffff8;
                uVar15 = (uVar16 - 8 >> 3) + 1;
                uVar8 = (ulong)((uint)uVar15 & 3);
                if (uVar16 - 8 < 0x18) {
                  lVar10 = 0;
                }
                else {
                  uVar15 = uVar15 & 0x3ffffffffffffffc;
                  lVar10 = 0;
                  do {
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar10) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar10 + 4);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar10 + 4) + 8);
                    *(undefined8 *)(puVar11 + lVar10) = *(undefined8 *)(puVar9 + lVar10);
                    *(undefined8 *)((long)(puVar11 + lVar10) + 8) = uVar4;
                    *(undefined8 *)(puVar11 + lVar10 + 4) = uVar5;
                    *(undefined8 *)((long)(puVar11 + lVar10 + 4) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar10 + 8) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar10 + 0xc);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar10 + 0xc) + 8);
                    *(undefined8 *)(puVar11 + lVar10 + 8) = *(undefined8 *)(puVar9 + lVar10 + 8);
                    *(undefined8 *)((long)(puVar11 + lVar10 + 8) + 8) = uVar4;
                    *(undefined8 *)(puVar11 + lVar10 + 0xc) = uVar5;
                    *(undefined8 *)((long)(puVar11 + lVar10 + 0xc) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar10 + 0x10) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar10 + 0x14);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar10 + 0x14) + 8);
                    *(undefined8 *)(puVar11 + lVar10 + 0x10) =
                         *(undefined8 *)(puVar9 + lVar10 + 0x10);
                    *(undefined8 *)((long)(puVar11 + lVar10 + 0x10) + 8) = uVar4;
                    *(undefined8 *)(puVar11 + lVar10 + 0x14) = uVar5;
                    *(undefined8 *)((long)(puVar11 + lVar10 + 0x14) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar10 + 0x18) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar10 + 0x1c);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar10 + 0x1c) + 8);
                    *(undefined8 *)(puVar11 + lVar10 + 0x18) =
                         *(undefined8 *)(puVar9 + lVar10 + 0x18);
                    *(undefined8 *)((long)(puVar11 + lVar10 + 0x18) + 8) = uVar4;
                    *(undefined8 *)(puVar11 + lVar10 + 0x1c) = uVar5;
                    *(undefined8 *)((long)(puVar11 + lVar10 + 0x1c) + 8) = uVar6;
                    lVar10 = lVar10 + 0x20;
                    uVar15 = uVar15 - 4;
                  } while (uVar15 != 0);
                }
                if (uVar8 != 0) {
                  lVar7 = 0;
                  do {
                    puVar2 = (undefined8 *)((long)puVar9 + lVar7 + lVar10 * 4);
                    uVar4 = puVar2[1];
                    puVar1 = (undefined8 *)((long)puVar9 + lVar7 + lVar10 * 4 + 0x10);
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    puVar1 = (undefined8 *)((long)puVar11 + lVar7 + lVar10 * 4);
                    *puVar1 = *puVar2;
                    puVar1[1] = uVar4;
                    puVar1 = (undefined8 *)((long)puVar11 + lVar7 + lVar10 * 4 + 0x10);
                    *puVar1 = uVar5;
                    puVar1[1] = uVar6;
                    lVar7 = lVar7 + 0x20;
                  } while (uVar8 * 0x20 != lVar7);
                }
                puVar12 = puVar11 + uVar16;
                if (uVar13 == uVar16) goto LAB_00315345;
                puVar18 = puVar9 + uVar16;
              }
              do {
                *puVar12 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar12 = puVar12 + 1;
              } while (puVar18 != puVar21);
            }
LAB_00315345:
            puVar18 = puVar12 + 1;
            if ((long)puVar3 - (long)puVar21 < 1) {
              puVar18 = (undefined4 *)((long)puVar18 + ((long)puVar3 - (long)puVar21));
            }
            else if ((long)puVar3 - (long)puVar21 != 0) {
              uVar8 = ((long)puVar3 - (long)puVar21) - 4;
              if (0x1b < uVar8) {
                uVar16 = (uVar8 >> 2) + 1;
                uVar15 = uVar16 & 0x7ffffffffffffff8;
                uVar13 = (uVar15 - 8 >> 3) + 1;
                uVar8 = (ulong)((uint)uVar13 & 3);
                if (uVar15 - 8 < 0x18) {
                  lVar10 = 0;
                }
                else {
                  uVar13 = uVar13 & 0x3ffffffffffffffc;
                  lVar10 = 0;
                  do {
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar19 + lVar10 + 4);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 4) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 1) =
                         *(undefined8 *)(puVar9 + lVar19 + lVar10);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 1) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 5) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 5) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 8) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar19 + lVar10 + 0xc);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 0xc) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 9) =
                         *(undefined8 *)(puVar9 + lVar19 + lVar10 + 8);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 9) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 0xd) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0xd) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 0x10) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar19 + lVar10 + 0x14);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 0x14) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 0x11) =
                         *(undefined8 *)(puVar9 + lVar19 + lVar10 + 0x10);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x11) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 0x15) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x15) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 0x18) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar19 + lVar10 + 0x1c);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar19 + lVar10 + 0x1c) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 0x19) =
                         *(undefined8 *)(puVar9 + lVar19 + lVar10 + 0x18);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x19) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 0x1d) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x1d) + 8) = uVar6;
                    lVar10 = lVar10 + 0x20;
                    uVar13 = uVar13 - 4;
                  } while (uVar13 != 0);
                }
                if (uVar8 != 0) {
                  lVar19 = (lVar19 + lVar10) * 4;
                  lVar7 = 0;
                  do {
                    puVar2 = (undefined8 *)((long)puVar9 + lVar7 + lVar19);
                    uVar4 = puVar2[1];
                    puVar1 = (undefined8 *)((long)puVar9 + lVar7 + lVar19 + 0x10);
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    puVar1 = (undefined8 *)((long)puVar12 + lVar7 + lVar10 * 4 + 4);
                    *puVar1 = *puVar2;
                    puVar1[1] = uVar4;
                    puVar1 = (undefined8 *)((long)puVar12 + lVar7 + lVar10 * 4 + 0x14);
                    *puVar1 = uVar5;
                    puVar1[1] = uVar6;
                    lVar7 = lVar7 + 0x20;
                  } while (uVar8 * 0x20 != lVar7);
                }
                puVar18 = puVar18 + uVar15;
                if (uVar16 == uVar15) goto LAB_00315498;
                puVar21 = puVar21 + uVar15;
              }
              do {
                *puVar18 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar18 = puVar18 + 1;
              } while (puVar21 != puVar3);
            }
LAB_00315498:
            if (puVar9 != (undefined4 *)0x0) {
              operator_delete(puVar9);
            }
            *(undefined4 **)(this + 0x18) = puVar11;
            *(undefined4 **)(this + 0x20) = puVar18;
            *(undefined4 **)(this + 0x28) = puVar11 + uVar17;
          }
          else if (puVar3 == puVar21) {
            *puVar21 = param_1;
            *(undefined4 **)(this + 0x20) = puVar21 + 1;
          }
          else {
            puVar9 = puVar3 + -1;
            *puVar3 = puVar3[-1];
            *(undefined4 **)(this + 0x20) = puVar3 + 1;
            if (0 < (long)puVar9 - (long)puVar21) {
              uVar8 = ((ulong)((long)puVar9 - (long)puVar21) >> 2) + 1;
              do {
                *puVar9 = puVar9[-1];
                puVar9 = puVar9 + -1;
                uVar8 = uVar8 - 1;
              } while (1 < uVar8);
            }
            *puVar21 = param_1;
          }
        }
        else {
          applyOperation(this,plVar14);
        }
        plVar14 = plVar14 + 6;
      } while (plVar14 != plVar20);
    }
  }
  mergeEqualItems(this,param_3,param_5);
  mergeEqualItems(this,param_4,param_5);
  return;
}


