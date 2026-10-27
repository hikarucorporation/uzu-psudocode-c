// Function : applyOperation
// Namespace: juce:detail:RangedValues_int_
// Entry    : 002600e0
// Prototype: undefined applyOperation(RangedValues<int> * this, long * param_1)
// Body     : 002600e0 - 00260348


/* juce::detail::RangedValues<int>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&) */

void __thiscall
juce::detail::RangedValues<int>::applyOperation(RangedValues<int> *this,long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  if ((char)param_1[5] != '\x02') {
    if ((char)param_1[5] != '\x01') {
      return;
    }
    puVar17 = (undefined4 *)(*param_1 * 4 + *(long *)(this + 0x18));
    puVar6 = *(undefined4 **)(this + 0x20);
    if (puVar6 == *(undefined4 **)(this + 0x28)) {
      std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                ((vector<int,std::allocator<int>> *)(this + 0x18),puVar17,puVar17);
      return;
    }
    if (puVar6 == puVar17) {
      *(undefined4 **)(this + 0x20) = puVar17 + 1;
      return;
    }
    uVar5 = *puVar17;
    puVar15 = puVar6 + -1;
    *puVar6 = puVar6[-1];
    *(undefined4 **)(this + 0x20) = puVar6 + 1;
    if (0 < (long)puVar15 - (long)puVar17) {
      uVar20 = ((ulong)((long)puVar15 - (long)puVar17) >> 2) + 1;
      do {
        *puVar15 = puVar15[-1];
        puVar15 = puVar15 + -1;
        uVar20 = uVar20 - 1;
      } while (1 < uVar20);
    }
    *puVar17 = uVar5;
    return;
  }
  lVar16 = *param_1;
  lVar7 = param_1[1];
  if (lVar16 == lVar7) {
    return;
  }
  lVar8 = *(long *)(this + 0x18);
  uVar20 = lVar8 + lVar16 * 4;
  uVar21 = lVar8 + lVar7 * 4;
  lVar9 = *(long *)(this + 0x20);
  uVar23 = lVar9 - uVar21;
  if ((uVar23 != 0) && (0 < (long)uVar23)) {
    uVar18 = uVar23 >> 2;
    uVar22 = uVar18 + (uVar23 < 4);
    if ((uVar22 < 8) ||
       ((uVar20 < lVar8 + ((lVar7 + uVar18) - (ulong)(3 < uVar23)) * 4 + 4 &&
        (uVar21 < lVar8 + ((uVar18 + lVar16) - (ulong)(3 < uVar23)) * 4 + 4)))) {
      uVar22 = uVar20;
    }
    else {
      uVar13 = uVar22 & 0xfffffffffffffff8;
      uVar19 = (uVar13 - 8 >> 3) + 1;
      uVar24 = (ulong)((uint)uVar19 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar14 = 0;
      }
      else {
        uVar19 = uVar19 & 0xfffffffffffffffc;
        lVar1 = lVar8 + lVar7 * 4;
        lVar2 = lVar8 + lVar16 * 4;
        lVar14 = 0;
        do {
          puVar3 = (undefined8 *)(lVar1 + lVar14 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x10 + lVar14 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + lVar14 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar14 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar14 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x30 + lVar14 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x20 + lVar14 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x30 + lVar14 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)(lVar1 + 0x40 + lVar14 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x50 + lVar14 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x40 + lVar14 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x50 + lVar14 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)(lVar1 + 0x60 + lVar14 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x70 + lVar14 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x60 + lVar14 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x70 + lVar14 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          lVar14 = lVar14 + 0x20;
          uVar19 = uVar19 - 4;
        } while (uVar19 != 0);
      }
      if (uVar24 != 0) {
        lVar7 = lVar8 + (lVar7 + lVar14) * 4;
        lVar8 = lVar8 + (lVar16 + lVar14) * 4;
        lVar16 = 0;
        do {
          puVar4 = (undefined8 *)(lVar7 + lVar16);
          uVar10 = puVar4[1];
          puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar16);
          uVar11 = *puVar3;
          uVar12 = puVar3[1];
          puVar3 = (undefined8 *)(lVar8 + lVar16);
          *puVar3 = *puVar4;
          puVar3[1] = uVar10;
          puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar16);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          lVar16 = lVar16 + 0x20;
        } while (uVar24 * 0x20 != lVar16);
      }
      if (uVar22 == uVar13) goto LAB_00260204;
      uVar18 = uVar18 - uVar13;
      uVar22 = uVar20 + uVar13 * 4;
      uVar21 = uVar21 + uVar13 * 4;
    }
    uVar18 = uVar18 + 1;
    lVar16 = 0;
    do {
      *(undefined4 *)(uVar22 + lVar16) = *(undefined4 *)(uVar21 + lVar16);
      uVar18 = uVar18 - 1;
      lVar16 = lVar16 + 4;
    } while (1 < uVar18);
  }
LAB_00260204:
  if (lVar9 != uVar20 + uVar23) {
    *(ulong *)(this + 0x20) = uVar20 + uVar23;
  }
  return;
}


