// Function : mergeEqualItems
// Namespace: juce:detail:RangedValues_juce__Colour_
// Entry    : 00245700
// Prototype: undefined mergeEqualItems(RangedValues<juce::Colour> * this, long param_1, long * param_2)
// Body     : 00245700 - 00245a5c


/* juce::detail::RangedValues<juce::Colour>::mergeEqualItems(long long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall
juce::detail::RangedValues<juce::Colour>::mergeEqualItems
          (RangedValues<juce::Colour> *this,long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  
  plVar15 = *(long **)this;
  uVar16 = (long)*(long **)(this + 8) - (long)plVar15;
  plVar19 = plVar15;
  if (0 < (long)uVar16) {
    uVar16 = uVar16 >> 4;
    do {
      uVar12 = uVar16 >> 1;
      uVar13 = uVar12;
      if (plVar19[uVar12 * 2 + 1] <= param_1) {
        uVar13 = ~uVar12 + uVar16;
        plVar19 = plVar19 + uVar12 * 2 + 2;
      }
      uVar16 = uVar13;
    } while (0 < (long)uVar13);
  }
  if ((((plVar19 != *(long **)(this + 8)) && (*plVar19 <= param_1)) &&
      ((long)plVar19 - (long)plVar15 != 0)) &&
     (uVar16 = (long)plVar19 - (long)plVar15 >> 4,
     *(int *)(*(long *)(this + 0x18) + -4 + uVar16 * 4) ==
     *(int *)(*(long *)(this + 0x18) + uVar16 * 4))) {
    lVar17 = param_2[1];
    lVar11 = *param_2;
    Ranges::mergeBack((Ranges *)this,uVar16,param_2);
    lVar8 = param_2[1] - *param_2;
    if (lVar8 != 0) {
      lVar17 = lVar17 - lVar11 >> 4;
      uVar16 = (lVar8 >> 4) * -0x5555555555555555;
      if ((ulong)(lVar17 * -0x5555555555555555) < uVar16) {
        lVar11 = 0;
        if ((ulong)(lVar17 * -0x5555555555555555) <= uVar16) {
          lVar11 = uVar16 + lVar17 * 0x5555555555555555;
        }
        plVar15 = (long *)(*param_2 + lVar17 * 0x10);
        plVar19 = plVar15 + lVar11 * 6;
        do {
          if ((char)plVar15[5] == '\x02') {
            lVar17 = *plVar15;
            lVar11 = plVar15[1];
            if (lVar17 != lVar11) {
              lVar8 = *(long *)(this + 0x18);
              uVar16 = lVar8 + lVar17 * 4;
              uVar13 = lVar8 + lVar11 * 4;
              uVar12 = *(ulong *)(this + 0x20);
              uVar9 = uVar12 - uVar13;
              if (uVar9 == 0) {
                if (uVar13 == uVar16) goto LAB_00245810;
              }
              else {
                if ((long)uVar9 < 1) {
                  uVar16 = uVar16 + (uVar12 - uVar13);
                  if (uVar12 != uVar16) goto LAB_00245923;
                  goto LAB_00245810;
                }
                uVar12 = uVar9 >> 2;
                uVar20 = uVar12 + (uVar9 < 4);
                if ((uVar20 < 8) ||
                   ((uVar16 < lVar8 + ((lVar11 + uVar12) - (ulong)(3 < uVar9)) * 4 + 4 &&
                    (uVar13 < lVar8 + ((lVar17 + uVar12) - (ulong)(3 < uVar9)) * 4 + 4)))) {
                  uVar9 = uVar16;
                  uVar20 = uVar13;
LAB_002458c9:
                  uVar12 = uVar12 + 1;
                  lVar17 = 0;
                  do {
                    *(undefined4 *)(uVar9 + lVar17) = *(undefined4 *)(uVar20 + lVar17);
                    uVar12 = uVar12 - 1;
                    lVar17 = lVar17 + 4;
                  } while (1 < uVar12);
                }
                else {
                  uVar10 = uVar20 & 0xfffffffffffffff8;
                  uVar9 = (uVar10 - 8 >> 3) + 1;
                  uVar21 = (ulong)((uint)uVar9 & 3);
                  if (uVar10 - 8 < 0x18) {
                    lVar18 = 0;
                  }
                  else {
                    uVar9 = uVar9 & 0xfffffffffffffffc;
                    lVar1 = lVar8 + lVar11 * 4;
                    lVar2 = lVar8 + lVar17 * 4;
                    lVar18 = 0;
                    do {
                      puVar3 = (undefined8 *)(lVar1 + lVar18 * 4);
                      uVar5 = puVar3[1];
                      puVar4 = (undefined8 *)(lVar1 + 0x10 + lVar18 * 4);
                      uVar6 = *puVar4;
                      uVar7 = puVar4[1];
                      puVar4 = (undefined8 *)(lVar2 + lVar18 * 4);
                      *puVar4 = *puVar3;
                      puVar4[1] = uVar5;
                      puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar18 * 4);
                      *puVar3 = uVar6;
                      puVar3[1] = uVar7;
                      puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar18 * 4);
                      uVar5 = puVar3[1];
                      puVar4 = (undefined8 *)(lVar1 + 0x30 + lVar18 * 4);
                      uVar6 = *puVar4;
                      uVar7 = puVar4[1];
                      puVar4 = (undefined8 *)(lVar2 + 0x20 + lVar18 * 4);
                      *puVar4 = *puVar3;
                      puVar4[1] = uVar5;
                      puVar3 = (undefined8 *)(lVar2 + 0x30 + lVar18 * 4);
                      *puVar3 = uVar6;
                      puVar3[1] = uVar7;
                      puVar3 = (undefined8 *)(lVar1 + 0x40 + lVar18 * 4);
                      uVar5 = puVar3[1];
                      puVar4 = (undefined8 *)(lVar1 + 0x50 + lVar18 * 4);
                      uVar6 = *puVar4;
                      uVar7 = puVar4[1];
                      puVar4 = (undefined8 *)(lVar2 + 0x40 + lVar18 * 4);
                      *puVar4 = *puVar3;
                      puVar4[1] = uVar5;
                      puVar3 = (undefined8 *)(lVar2 + 0x50 + lVar18 * 4);
                      *puVar3 = uVar6;
                      puVar3[1] = uVar7;
                      puVar4 = (undefined8 *)(lVar1 + 0x60 + lVar18 * 4);
                      uVar5 = puVar4[1];
                      puVar3 = (undefined8 *)(lVar1 + 0x70 + lVar18 * 4);
                      uVar6 = *puVar3;
                      uVar7 = puVar3[1];
                      puVar3 = (undefined8 *)(lVar2 + 0x60 + lVar18 * 4);
                      *puVar3 = *puVar4;
                      puVar3[1] = uVar5;
                      puVar3 = (undefined8 *)(lVar2 + 0x70 + lVar18 * 4);
                      *puVar3 = uVar6;
                      puVar3[1] = uVar7;
                      lVar18 = lVar18 + 0x20;
                      uVar9 = uVar9 - 4;
                    } while (uVar9 != 0);
                  }
                  if (uVar21 != 0) {
                    lVar11 = lVar8 + (lVar11 + lVar18) * 4;
                    lVar8 = lVar8 + (lVar17 + lVar18) * 4;
                    lVar17 = 0;
                    do {
                      puVar4 = (undefined8 *)(lVar11 + lVar17);
                      uVar5 = puVar4[1];
                      puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar17);
                      uVar6 = *puVar3;
                      uVar7 = puVar3[1];
                      puVar3 = (undefined8 *)(lVar8 + lVar17);
                      *puVar3 = *puVar4;
                      puVar3[1] = uVar5;
                      puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar17);
                      *puVar3 = uVar6;
                      puVar3[1] = uVar7;
                      lVar17 = lVar17 + 0x20;
                    } while (uVar21 * 0x20 != lVar17);
                  }
                  if (uVar20 != uVar10) {
                    uVar12 = uVar12 - uVar10;
                    uVar9 = uVar16 + uVar10 * 4;
                    uVar20 = uVar13 + uVar10 * 4;
                    goto LAB_002458c9;
                  }
                }
                uVar16 = uVar16 + (*(ulong *)(this + 0x20) - uVar13);
                if (*(ulong *)(this + 0x20) == uVar16) goto LAB_00245810;
              }
LAB_00245923:
              *(ulong *)(this + 0x20) = uVar16;
            }
          }
          else if ((char)plVar15[5] == '\x01') {
            puVar14 = (undefined4 *)(*plVar15 * 4 + *(long *)(this + 0x18));
            std::vector<juce::Colour,std::allocator<juce::Colour>>::insert
                      ((vector<juce::Colour,std::allocator<juce::Colour>> *)(this + 0x18),puVar14,
                       puVar14);
          }
LAB_00245810:
          plVar15 = plVar15 + 6;
        } while (plVar15 != plVar19);
      }
    }
  }
  return;
}


