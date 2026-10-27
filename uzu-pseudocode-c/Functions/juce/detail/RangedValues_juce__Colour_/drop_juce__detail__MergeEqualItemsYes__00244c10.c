// Function : drop<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_juce__Colour_
// Entry    : 00244c10
// Prototype: void drop<juce::detail::MergeEqualItemsYes>(RangedValues<juce::Colour> * this, ulong param_1, ulong param_2, long * param_3)
// Body     : 00244c10 - 00244f23


/* void 
   juce::detail::RangedValues<juce::Colour>::drop<juce::detail::MergeEqualItemsYes>(juce::Range<long
   long>, std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&,
   juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<juce::Colour>::drop<juce::detail::MergeEqualItemsYes>
          (RangedValues<juce::Colour> *this,ulong param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  
  lVar17 = param_3[1];
  lVar13 = *param_3;
  Ranges::erase((Ranges *)this,param_1,param_2,param_3);
  Ranges::shift((Ranges *)this,param_2,param_1 - param_2,param_3);
  lVar9 = param_3[1] - *param_3;
  if (lVar9 != 0) {
    lVar17 = lVar17 - lVar13 >> 4;
    uVar10 = (lVar9 >> 4) * -0x5555555555555555;
    if ((ulong)(lVar17 * -0x5555555555555555) < uVar10) {
      lVar13 = 0;
      if ((ulong)(lVar17 * -0x5555555555555555) <= uVar10) {
        lVar13 = uVar10 + lVar17 * 0x5555555555555555;
      }
      plVar16 = (long *)(*param_3 + lVar17 * 0x10);
      plVar18 = plVar16 + lVar13 * 6;
      do {
        if ((char)plVar16[5] == '\x02') {
          lVar17 = *plVar16;
          lVar13 = plVar16[1];
          if (lVar17 != lVar13) {
            lVar9 = *(long *)(this + 0x18);
            uVar10 = lVar9 + lVar17 * 4;
            uVar1 = lVar9 + lVar13 * 4;
            uVar15 = *(ulong *)(this + 0x20);
            uVar11 = uVar15 - uVar1;
            if (uVar11 == 0) {
              if (uVar1 == uVar10) goto LAB_00244cb0;
            }
            else {
              if ((long)uVar11 < 1) {
                uVar10 = uVar10 + (uVar15 - uVar1);
                if (uVar15 != uVar10) goto LAB_00244dc3;
                goto LAB_00244cb0;
              }
              uVar15 = uVar11 >> 2;
              uVar19 = uVar15 + (uVar11 < 4);
              if ((uVar19 < 8) ||
                 ((uVar10 < lVar9 + ((lVar13 + uVar15) - (ulong)(3 < uVar11)) * 4 + 4 &&
                  (uVar1 < lVar9 + ((lVar17 + uVar15) - (ulong)(3 < uVar11)) * 4 + 4)))) {
                uVar11 = uVar10;
                uVar19 = uVar1;
LAB_00244d6a:
                uVar15 = uVar15 + 1;
                lVar17 = 0;
                do {
                  *(undefined4 *)(uVar11 + lVar17) = *(undefined4 *)(uVar19 + lVar17);
                  uVar15 = uVar15 - 1;
                  lVar17 = lVar17 + 4;
                } while (1 < uVar15);
              }
              else {
                uVar12 = uVar19 & 0xfffffffffffffff8;
                uVar11 = (uVar12 - 8 >> 3) + 1;
                uVar20 = (ulong)((uint)uVar11 & 3);
                if (uVar12 - 8 < 0x18) {
                  lVar21 = 0;
                }
                else {
                  uVar11 = uVar11 & 0xfffffffffffffffc;
                  lVar2 = lVar9 + lVar13 * 4;
                  lVar3 = lVar9 + lVar17 * 4;
                  lVar21 = 0;
                  do {
                    puVar4 = (undefined8 *)(lVar2 + lVar21 * 4);
                    uVar6 = puVar4[1];
                    puVar5 = (undefined8 *)(lVar2 + 0x10 + lVar21 * 4);
                    uVar7 = *puVar5;
                    uVar8 = puVar5[1];
                    puVar5 = (undefined8 *)(lVar3 + lVar21 * 4);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar6;
                    puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar21 * 4);
                    *puVar4 = uVar7;
                    puVar4[1] = uVar8;
                    puVar4 = (undefined8 *)(lVar2 + 0x20 + lVar21 * 4);
                    uVar6 = puVar4[1];
                    puVar5 = (undefined8 *)(lVar2 + 0x30 + lVar21 * 4);
                    uVar7 = *puVar5;
                    uVar8 = puVar5[1];
                    puVar5 = (undefined8 *)(lVar3 + 0x20 + lVar21 * 4);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar6;
                    puVar4 = (undefined8 *)(lVar3 + 0x30 + lVar21 * 4);
                    *puVar4 = uVar7;
                    puVar4[1] = uVar8;
                    puVar4 = (undefined8 *)(lVar2 + 0x40 + lVar21 * 4);
                    uVar6 = puVar4[1];
                    puVar5 = (undefined8 *)(lVar2 + 0x50 + lVar21 * 4);
                    uVar7 = *puVar5;
                    uVar8 = puVar5[1];
                    puVar5 = (undefined8 *)(lVar3 + 0x40 + lVar21 * 4);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar6;
                    puVar4 = (undefined8 *)(lVar3 + 0x50 + lVar21 * 4);
                    *puVar4 = uVar7;
                    puVar4[1] = uVar8;
                    puVar5 = (undefined8 *)(lVar2 + 0x60 + lVar21 * 4);
                    uVar6 = puVar5[1];
                    puVar4 = (undefined8 *)(lVar2 + 0x70 + lVar21 * 4);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    puVar4 = (undefined8 *)(lVar3 + 0x60 + lVar21 * 4);
                    *puVar4 = *puVar5;
                    puVar4[1] = uVar6;
                    puVar4 = (undefined8 *)(lVar3 + 0x70 + lVar21 * 4);
                    *puVar4 = uVar7;
                    puVar4[1] = uVar8;
                    lVar21 = lVar21 + 0x20;
                    uVar11 = uVar11 - 4;
                  } while (uVar11 != 0);
                }
                if (uVar20 != 0) {
                  lVar13 = lVar9 + (lVar13 + lVar21) * 4;
                  lVar9 = lVar9 + (lVar17 + lVar21) * 4;
                  lVar17 = 0;
                  do {
                    puVar5 = (undefined8 *)(lVar13 + lVar17);
                    uVar6 = puVar5[1];
                    puVar4 = (undefined8 *)(lVar13 + 0x10 + lVar17);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    puVar4 = (undefined8 *)(lVar9 + lVar17);
                    *puVar4 = *puVar5;
                    puVar4[1] = uVar6;
                    puVar4 = (undefined8 *)(lVar9 + 0x10 + lVar17);
                    *puVar4 = uVar7;
                    puVar4[1] = uVar8;
                    lVar17 = lVar17 + 0x20;
                  } while (uVar20 * 0x20 != lVar17);
                }
                if (uVar19 != uVar12) {
                  uVar15 = uVar15 - uVar12;
                  uVar11 = uVar10 + uVar12 * 4;
                  uVar19 = uVar1 + uVar12 * 4;
                  goto LAB_00244d6a;
                }
              }
              uVar10 = uVar10 + (*(ulong *)(this + 0x20) - uVar1);
              if (*(ulong *)(this + 0x20) == uVar10) goto LAB_00244cb0;
            }
LAB_00244dc3:
            *(ulong *)(this + 0x20) = uVar10;
          }
        }
        else if ((char)plVar16[5] == '\x01') {
          puVar14 = (undefined4 *)(*plVar16 * 4 + *(long *)(this + 0x18));
          std::vector<juce::Colour,std::allocator<juce::Colour>>::insert
                    ((vector<juce::Colour,std::allocator<juce::Colour>> *)(this + 0x18),puVar14,
                     puVar14);
        }
LAB_00244cb0:
        plVar16 = plVar16 + 6;
      } while (plVar16 != plVar18);
    }
  }
  mergeEqualItems(this,param_1,param_3);
  return;
}


