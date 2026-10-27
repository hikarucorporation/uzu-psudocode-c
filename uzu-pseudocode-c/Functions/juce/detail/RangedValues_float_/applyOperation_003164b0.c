// Function : applyOperation
// Namespace: juce:detail:RangedValues_float_
// Entry    : 003164b0
// Prototype: undefined applyOperation(RangedValues<float> * this, long * param_1)
// Body     : 003164b0 - 00316738


/* juce::detail::RangedValues<float>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&) */

void __thiscall
juce::detail::RangedValues<float>::applyOperation(RangedValues<float> *this,long *param_1)

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
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
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
    puVar18 = (undefined4 *)(*param_1 * 4 + *(long *)(this + 0x18));
    puVar6 = *(undefined4 **)(this + 0x20);
    if (puVar6 == *(undefined4 **)(this + 0x28)) {
      std::vector<float,std::allocator<float>>::_M_realloc_insert<float_const&>
                ((vector<float,std::allocator<float>> *)(this + 0x18),puVar18,puVar18);
      return;
    }
    if (puVar6 == puVar18) {
      *(undefined4 **)(this + 0x20) = puVar18 + 1;
      return;
    }
    uVar5 = *puVar18;
    puVar13 = puVar6 + -1;
    *puVar6 = puVar6[-1];
    *(undefined4 **)(this + 0x20) = puVar6 + 1;
    if (0 < (long)puVar13 - (long)puVar18) {
      uVar16 = ((ulong)((long)puVar13 - (long)puVar18) >> 2) + 1;
      do {
        *puVar13 = puVar13[-1];
        puVar13 = puVar13 + -1;
        uVar16 = uVar16 - 1;
      } while (1 < uVar16);
    }
    *puVar18 = uVar5;
    return;
  }
  lVar17 = *param_1;
  lVar7 = param_1[1];
  if (lVar17 == lVar7) {
    return;
  }
  lVar8 = *(long *)(this + 0x18);
  uVar16 = lVar8 + lVar17 * 4;
  uVar21 = lVar8 + lVar7 * 4;
  lVar9 = *(long *)(this + 0x20);
  uVar23 = lVar9 - uVar21;
  if ((uVar23 != 0) && (0 < (long)uVar23)) {
    uVar19 = uVar23 >> 2;
    uVar22 = uVar19 + (uVar23 < 4);
    if ((uVar22 < 8) ||
       ((uVar16 < lVar8 + ((lVar7 + uVar19) - (ulong)(3 < uVar23)) * 4 + 4 &&
        (uVar21 < lVar8 + ((uVar19 + lVar17) - (ulong)(3 < uVar23)) * 4 + 4)))) {
      uVar22 = uVar16;
    }
    else {
      uVar14 = uVar22 & 0xfffffffffffffff8;
      uVar20 = (uVar14 - 8 >> 3) + 1;
      uVar24 = (ulong)((uint)uVar20 & 3);
      if (uVar14 - 8 < 0x18) {
        lVar15 = 0;
      }
      else {
        uVar20 = uVar20 & 0xfffffffffffffffc;
        lVar1 = lVar8 + lVar7 * 4;
        lVar2 = lVar8 + lVar17 * 4;
        lVar15 = 0;
        do {
          puVar3 = (undefined8 *)(lVar1 + lVar15 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x10 + lVar15 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + lVar15 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar15 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar15 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x30 + lVar15 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x20 + lVar15 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x30 + lVar15 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)(lVar1 + 0x40 + lVar15 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x50 + lVar15 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x40 + lVar15 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x50 + lVar15 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)(lVar1 + 0x60 + lVar15 * 4);
          uVar10 = puVar3[1];
          puVar4 = (undefined8 *)(lVar1 + 0x70 + lVar15 * 4);
          uVar11 = *puVar4;
          uVar12 = puVar4[1];
          puVar4 = (undefined8 *)(lVar2 + 0x60 + lVar15 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar10;
          puVar3 = (undefined8 *)(lVar2 + 0x70 + lVar15 * 4);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          lVar15 = lVar15 + 0x20;
          uVar20 = uVar20 - 4;
        } while (uVar20 != 0);
      }
      if (uVar24 != 0) {
        lVar7 = lVar8 + (lVar7 + lVar15) * 4;
        lVar8 = lVar8 + (lVar17 + lVar15) * 4;
        lVar17 = 0;
        do {
          puVar4 = (undefined8 *)(lVar7 + lVar17);
          uVar10 = puVar4[1];
          puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar17);
          uVar11 = *puVar3;
          uVar12 = puVar3[1];
          puVar3 = (undefined8 *)(lVar8 + lVar17);
          *puVar3 = *puVar4;
          puVar3[1] = uVar10;
          puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar17);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          lVar17 = lVar17 + 0x20;
        } while (uVar24 * 0x20 != lVar17);
      }
      if (uVar22 == uVar14) goto LAB_003165e8;
      uVar19 = uVar19 - uVar14;
      uVar22 = uVar16 + uVar14 * 4;
      uVar21 = uVar21 + uVar14 * 4;
    }
    uVar19 = uVar19 + 1;
    lVar17 = 0;
    do {
      *(undefined4 *)(uVar22 + lVar17) = *(undefined4 *)(uVar21 + lVar17);
      uVar19 = uVar19 - 1;
      lVar17 = lVar17 + 4;
    } while (1 < uVar19);
  }
LAB_003165e8:
  if (lVar9 != uVar16 + uVar23) {
    *(ulong *)(this + 0x20) = uVar16 + uVar23;
  }
  return;
}


