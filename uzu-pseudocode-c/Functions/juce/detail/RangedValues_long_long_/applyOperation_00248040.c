// Function : applyOperation
// Namespace: juce:detail:RangedValues_long_long_
// Entry    : 00248040
// Prototype: undefined applyOperation(RangedValues<long_long> * this, long * param_1)
// Body     : 00248040 - 002482a8


/* juce::detail::RangedValues<long
   long>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&) */

void __thiscall
juce::detail::RangedValues<long_long>::applyOperation(RangedValues<long_long> *this,long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  if ((char)param_1[5] != '\x02') {
    if ((char)param_1[5] != '\x01') {
      return;
    }
    puVar14 = (undefined8 *)(*param_1 * 8 + *(long *)(this + 0x18));
    puVar3 = *(undefined8 **)(this + 0x20);
    if (puVar3 == *(undefined8 **)(this + 0x28)) {
      std::vector<long_long,std::allocator<long_long>>::_M_realloc_insert<long_long_const&>
                ((vector<long_long,std::allocator<long_long>> *)(this + 0x18),puVar14,puVar14);
      return;
    }
    if (puVar3 == puVar14) {
      *(undefined8 **)(this + 0x20) = puVar14 + 1;
      return;
    }
    uVar4 = *puVar14;
    puVar12 = puVar3 + -1;
    *puVar3 = puVar3[-1];
    *(undefined8 **)(this + 0x20) = puVar3 + 1;
    if (0 < (long)puVar12 - (long)puVar14) {
      uVar17 = ((ulong)((long)puVar12 - (long)puVar14) >> 3) + 1;
      do {
        *puVar12 = puVar12[-1];
        puVar12 = puVar12 + -1;
        uVar17 = uVar17 - 1;
      } while (1 < uVar17);
    }
    *puVar14 = uVar4;
    return;
  }
  lVar13 = *param_1;
  lVar5 = param_1[1];
  if (lVar13 == lVar5) {
    return;
  }
  lVar6 = *(long *)(this + 0x18);
  uVar17 = lVar6 + lVar13 * 8;
  uVar18 = lVar6 + lVar5 * 8;
  lVar7 = *(long *)(this + 0x20);
  uVar20 = lVar7 - uVar18;
  if ((uVar20 != 0) && (0 < (long)uVar20)) {
    uVar15 = uVar20 >> 3;
    uVar19 = uVar15 + (uVar20 < 8);
    if ((uVar19 < 4) ||
       ((uVar17 < lVar6 + ((lVar5 + uVar15) - (ulong)(7 < uVar20)) * 8 + 8 &&
        (uVar18 < lVar6 + ((uVar15 + lVar13) - (ulong)(7 < uVar20)) * 8 + 8)))) {
      uVar19 = uVar17;
    }
    else {
      uVar10 = uVar19 & 0xfffffffffffffffc;
      uVar16 = (uVar10 - 4 >> 2) + 1;
      uVar21 = (ulong)((uint)uVar16 & 3);
      if (uVar10 - 4 < 0xc) {
        lVar11 = 0;
      }
      else {
        uVar16 = uVar16 & 0xfffffffffffffffc;
        lVar1 = lVar6 + lVar5 * 8;
        lVar2 = lVar6 + lVar13 * 8;
        lVar11 = 0;
        do {
          puVar3 = (undefined8 *)(lVar1 + lVar11 * 8);
          uVar4 = puVar3[1];
          puVar14 = (undefined8 *)(lVar1 + 0x10 + lVar11 * 8);
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          puVar14 = (undefined8 *)(lVar2 + lVar11 * 8);
          *puVar14 = *puVar3;
          puVar14[1] = uVar4;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar11 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar11 * 8);
          uVar4 = puVar3[1];
          puVar14 = (undefined8 *)(lVar1 + 0x30 + lVar11 * 8);
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          puVar14 = (undefined8 *)(lVar2 + 0x20 + lVar11 * 8);
          *puVar14 = *puVar3;
          puVar14[1] = uVar4;
          puVar3 = (undefined8 *)(lVar2 + 0x30 + lVar11 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(lVar1 + 0x40 + lVar11 * 8);
          uVar4 = puVar3[1];
          puVar14 = (undefined8 *)(lVar1 + 0x50 + lVar11 * 8);
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          puVar14 = (undefined8 *)(lVar2 + 0x40 + lVar11 * 8);
          *puVar14 = *puVar3;
          puVar14[1] = uVar4;
          puVar3 = (undefined8 *)(lVar2 + 0x50 + lVar11 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(lVar1 + 0x60 + lVar11 * 8);
          uVar4 = puVar3[1];
          puVar14 = (undefined8 *)(lVar1 + 0x70 + lVar11 * 8);
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          puVar14 = (undefined8 *)(lVar2 + 0x60 + lVar11 * 8);
          *puVar14 = *puVar3;
          puVar14[1] = uVar4;
          puVar3 = (undefined8 *)(lVar2 + 0x70 + lVar11 * 8);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          lVar11 = lVar11 + 0x10;
          uVar16 = uVar16 - 4;
        } while (uVar16 != 0);
      }
      if (uVar21 != 0) {
        lVar5 = lVar6 + (lVar5 + lVar11) * 8;
        lVar6 = lVar6 + (lVar13 + lVar11) * 8;
        lVar13 = 0;
        do {
          puVar14 = (undefined8 *)(lVar5 + lVar13);
          uVar4 = puVar14[1];
          puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar13);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          puVar3 = (undefined8 *)(lVar6 + lVar13);
          *puVar3 = *puVar14;
          puVar3[1] = uVar4;
          puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          lVar13 = lVar13 + 0x20;
        } while (uVar21 * 0x20 != lVar13);
      }
      if (uVar19 == uVar10) goto LAB_00248166;
      uVar15 = uVar15 - uVar10;
      uVar19 = uVar17 + uVar10 * 8;
      uVar18 = uVar18 + uVar10 * 8;
    }
    uVar15 = uVar15 + 1;
    lVar13 = 0;
    do {
      *(undefined8 *)(uVar19 + lVar13) = *(undefined8 *)(uVar18 + lVar13);
      uVar15 = uVar15 - 1;
      lVar13 = lVar13 + 8;
    } while (1 < uVar15);
  }
LAB_00248166:
  if (lVar7 != uVar17 + uVar20) {
    *(ulong *)(this + 0x20) = uVar17 + uVar20;
  }
  return;
}


