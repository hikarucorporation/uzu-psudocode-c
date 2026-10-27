// Function : set<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_juce__detail__JustifiedText__DrawType_
// Entry    : 00315510
// Prototype: void set<juce::detail::MergeEqualItemsYes>(RangedValues<juce::detail::JustifiedText::DrawType> * this, ulong param_1, ulong param_2, undefined4 param_3, long * param_4)
// Body     : 00315510 - 003159e4


/* void 
   juce::detail::RangedValues<juce::detail::JustifiedText::DrawType>::set<juce::detail::MergeEqualItemsYes>(juce::Range<long
   long>, juce::detail::JustifiedText::DrawType,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&,
   juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<juce::detail::JustifiedText::DrawType>::
set<juce::detail::MergeEqualItemsYes>
          (RangedValues<juce::detail::JustifiedText::DrawType> *this,ulong param_1,ulong param_2,
          undefined4 param_3,long *param_4)

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
  ulong uVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  
  lVar20 = param_4[1];
  lVar10 = *param_4;
  Ranges::set((Ranges *)this,param_1,param_2,param_4);
  lVar7 = param_4[1] - *param_4;
  if (lVar7 != 0) {
    lVar20 = lVar20 - lVar10 >> 4;
    uVar8 = (lVar7 >> 4) * -0x5555555555555555;
    if ((ulong)(lVar20 * -0x5555555555555555) < uVar8) {
      lVar10 = 0;
      if ((ulong)(lVar20 * -0x5555555555555555) <= uVar8) {
        lVar10 = uVar8 + lVar20 * 0x5555555555555555;
      }
      plVar17 = (long *)(*param_4 + lVar20 * 0x10);
      plVar15 = plVar17 + lVar10 * 6;
      do {
        if ((char)plVar17[5] == '\0') {
          puVar9 = *(undefined4 **)(this + 0x18);
          puVar3 = *(undefined4 **)(this + 0x20);
          lVar20 = *plVar17;
          puVar21 = puVar9 + lVar20;
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
            uVar18 = uVar8 + uVar13;
            if (0x1fffffffffffffff < uVar18) {
              uVar18 = 0x1fffffffffffffff;
            }
            if (CARRY8(uVar8,uVar13)) {
              uVar18 = 0x1fffffffffffffff;
            }
            if (uVar18 == 0) {
              puVar11 = (undefined4 *)0x0;
              *(undefined4 *)(lVar20 * 4) = param_3;
              if (lVar20 < 1) goto LAB_00315737;
LAB_003156bf:
              uVar8 = (long)puVar21 + (-4 - (long)puVar9);
              puVar12 = puVar11;
              puVar16 = puVar9;
              if (0x1b < uVar8) {
                uVar13 = (uVar8 >> 2) + 1;
                uVar14 = uVar13 & 0x7ffffffffffffff8;
                uVar19 = (uVar14 - 8 >> 3) + 1;
                uVar8 = (ulong)((uint)uVar19 & 3);
                if (uVar14 - 8 < 0x18) {
                  lVar10 = 0;
                }
                else {
                  uVar19 = uVar19 & 0x3ffffffffffffffc;
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
                    uVar19 = uVar19 - 4;
                  } while (uVar19 != 0);
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
                puVar12 = puVar11 + uVar14;
                if (uVar13 == uVar14) goto LAB_00315821;
                puVar16 = puVar9 + uVar14;
              }
              do {
                *puVar12 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar12 = puVar12 + 1;
              } while (puVar16 != puVar21);
            }
            else {
              puVar11 = operator_new(uVar18 * 4);
              puVar11[lVar20] = param_3;
              if (0 < lVar20) goto LAB_003156bf;
LAB_00315737:
              puVar12 = puVar11 + lVar20;
            }
LAB_00315821:
            puVar16 = puVar12 + 1;
            if ((long)puVar3 - (long)puVar21 < 1) {
              puVar16 = (undefined4 *)((long)puVar16 + ((long)puVar3 - (long)puVar21));
            }
            else if ((long)puVar3 - (long)puVar21 != 0) {
              uVar8 = ((long)puVar3 - (long)puVar21) - 4;
              if (0x1b < uVar8) {
                uVar19 = (uVar8 >> 2) + 1;
                uVar14 = uVar19 & 0x7ffffffffffffff8;
                uVar13 = (uVar14 - 8 >> 3) + 1;
                uVar8 = (ulong)((uint)uVar13 & 3);
                if (uVar14 - 8 < 0x18) {
                  lVar10 = 0;
                }
                else {
                  uVar13 = uVar13 & 0x3ffffffffffffffc;
                  lVar10 = 0;
                  do {
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar20 + lVar10 + 4);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 4) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 1) =
                         *(undefined8 *)(puVar9 + lVar20 + lVar10);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 1) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 5) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 5) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 8) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar20 + lVar10 + 0xc);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 0xc) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 9) =
                         *(undefined8 *)(puVar9 + lVar20 + lVar10 + 8);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 9) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 0xd) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0xd) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 0x10) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar20 + lVar10 + 0x14);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 0x14) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 0x11) =
                         *(undefined8 *)(puVar9 + lVar20 + lVar10 + 0x10);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x11) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 0x15) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x15) + 8) = uVar6;
                    uVar4 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 0x18) + 8);
                    uVar5 = *(undefined8 *)(puVar9 + lVar20 + lVar10 + 0x1c);
                    uVar6 = *(undefined8 *)((long)(puVar9 + lVar20 + lVar10 + 0x1c) + 8);
                    *(undefined8 *)(puVar12 + lVar10 + 0x19) =
                         *(undefined8 *)(puVar9 + lVar20 + lVar10 + 0x18);
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x19) + 8) = uVar4;
                    *(undefined8 *)(puVar12 + lVar10 + 0x1d) = uVar5;
                    *(undefined8 *)((long)(puVar12 + lVar10 + 0x1d) + 8) = uVar6;
                    lVar10 = lVar10 + 0x20;
                    uVar13 = uVar13 - 4;
                  } while (uVar13 != 0);
                }
                if (uVar8 != 0) {
                  lVar7 = 0;
                  do {
                    puVar2 = (undefined8 *)((long)puVar9 + lVar7 + (lVar20 + lVar10) * 4);
                    uVar4 = puVar2[1];
                    puVar1 = (undefined8 *)((long)puVar9 + lVar7 + (lVar20 + lVar10) * 4 + 0x10);
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
                puVar16 = puVar16 + uVar14;
                if (uVar19 == uVar14) goto LAB_00315972;
                puVar21 = puVar21 + uVar14;
              }
              do {
                *puVar16 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar16 = puVar16 + 1;
              } while (puVar21 != puVar3);
            }
LAB_00315972:
            if (puVar9 != (undefined4 *)0x0) {
              operator_delete(puVar9);
            }
            *(undefined4 **)(this + 0x18) = puVar11;
            *(undefined4 **)(this + 0x20) = puVar16;
            *(undefined4 **)(this + 0x28) = puVar11 + uVar18;
          }
          else if (puVar3 == puVar21) {
            *puVar21 = param_3;
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
            *puVar21 = param_3;
          }
        }
        else {
          applyOperation(this,plVar17);
        }
        plVar17 = plVar17 + 6;
      } while (plVar17 != plVar15);
    }
  }
  mergeEqualItems(this,param_1,param_4);
  mergeEqualItems(this,param_2,param_4);
  return;
}


