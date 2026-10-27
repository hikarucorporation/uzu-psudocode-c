// Function : mergeBack
// Namespace: juce:detail:Ranges
// Entry    : 00241180
// Prototype: undefined mergeBack(Ranges * this, ulong param_1, undefined8 * param_2)
// Body     : 00241180 - 00241583


/* juce::detail::Ranges::mergeBack(unsigned long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall juce::detail::Ranges::mergeBack(Ranges *this,ulong param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong *puVar24;
  long *plVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  
  if ((param_1 != 0) &&
     (lVar11 = *(long *)this, param_1 < (ulong)(*(long *)(this + 8) - lVar11 >> 4))) {
    lVar16 = param_1 - 1;
    lVar15 = lVar16 * 0x10;
    lVar1 = *(long *)(lVar11 + 8 + lVar15);
    lVar20 = param_1 * 0x10;
    if (lVar1 != *(long *)(lVar11 + lVar20)) {
      return;
    }
    lVar2 = *(long *)(lVar11 + lVar15);
    lVar3 = *(long *)(lVar11 + 8 + lVar20);
    *(long *)(lVar11 + lVar15 + 8) = lVar3;
    lVar23 = lVar2;
    if (lVar3 < lVar2) {
      *(long *)(lVar11 + lVar15) = lVar3;
      lVar23 = lVar3;
    }
    plVar4 = (long *)param_2[1];
    if (plVar4 == (long *)param_2[2]) {
      plVar5 = (long *)*param_2;
      lVar11 = (long)plVar4 - (long)plVar5;
      if (lVar11 == 0x7fffffffffffffe0) goto LAB_00241578;
      lVar15 = lVar11 >> 4;
      uVar21 = lVar15 * -0x5555555555555555;
      uVar17 = 1;
      if (lVar11 != 0) {
        uVar17 = uVar21;
      }
      uVar18 = uVar17 + uVar21;
      if (0x2aaaaaaaaaaaaaa < uVar18) {
        uVar18 = 0x2aaaaaaaaaaaaaa;
      }
      if (CARRY8(uVar17,uVar21)) {
        uVar18 = 0x2aaaaaaaaaaaaaa;
      }
      plVar9 = operator_new(uVar18 * 0x30);
      plVar9[lVar15 * 2] = lVar16;
      plVar9[lVar15 * 2 + 1] = lVar2;
      plVar9[lVar15 * 2 + 2] = lVar1;
      plVar9[lVar15 * 2 + 3] = lVar23;
      plVar9[lVar15 * 2 + 4] = lVar3;
      *(undefined1 *)(plVar9 + lVar15 * 2 + 5) = 3;
      plVar25 = plVar9;
      if (plVar5 != plVar4) {
        plVar10 = plVar5;
        do {
          lVar11 = *plVar10;
          lVar16 = plVar10[1];
          lVar1 = plVar10[2];
          lVar15 = plVar10[3];
          lVar2 = plVar10[5];
          plVar25[4] = plVar10[4];
          plVar25[5] = lVar2;
          plVar25[2] = lVar1;
          plVar25[3] = lVar15;
          *plVar25 = lVar11;
          plVar25[1] = lVar16;
          plVar10 = plVar10 + 6;
          plVar25 = plVar25 + 6;
        } while (plVar10 != plVar4);
      }
      puVar24 = (ulong *)(plVar25 + 6);
      if (plVar5 != (long *)0x0) {
        operator_delete(plVar5);
      }
      *param_2 = plVar9;
      param_2[1] = puVar24;
      puVar27 = (ulong *)(plVar9 + uVar18 * 6);
      param_2[2] = puVar27;
    }
    else {
      *plVar4 = lVar16;
      plVar4[1] = lVar2;
      plVar4[2] = lVar1;
      plVar4[3] = lVar23;
      plVar4[4] = lVar3;
      *(undefined1 *)(plVar4 + 5) = 3;
      puVar27 = (ulong *)param_2[2];
      puVar24 = (ulong *)(param_2[1] + 0x30);
      param_2[1] = puVar24;
    }
    uVar17 = param_1 + 1;
    uVar21 = param_1;
    if (param_1 < uVar17) {
      uVar21 = uVar17;
    }
    if (puVar24 == puVar27) {
      puVar24 = (ulong *)*param_2;
      lVar11 = (long)puVar27 - (long)puVar24;
      if (lVar11 == 0x7fffffffffffffe0) {
LAB_00241578:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      lVar16 = lVar11 >> 4;
      uVar26 = lVar16 * -0x5555555555555555;
      uVar18 = 1;
      if (lVar11 != 0) {
        uVar18 = uVar26;
      }
      uVar28 = uVar18 + uVar26;
      if (0x2aaaaaaaaaaaaaa < uVar28) {
        uVar28 = 0x2aaaaaaaaaaaaaa;
      }
      if (CARRY8(uVar18,uVar26)) {
        uVar28 = 0x2aaaaaaaaaaaaaa;
      }
      puVar12 = operator_new(uVar28 * 0x30);
      puVar12[lVar16 * 2] = param_1;
      puVar12[lVar16 * 2 + 1] = uVar21;
      *(undefined1 *)(puVar12 + lVar16 * 2 + 5) = 2;
      if (puVar24 == puVar27) {
        puVar19 = puVar12 + 6;
      }
      else {
        puVar13 = puVar24;
        puVar8 = puVar12;
        do {
          puVar19 = puVar8;
          uVar21 = *puVar13;
          uVar18 = puVar13[1];
          uVar26 = puVar13[2];
          uVar6 = puVar13[3];
          uVar7 = puVar13[5];
          puVar19[4] = puVar13[4];
          puVar19[5] = uVar7;
          puVar19[2] = uVar26;
          puVar19[3] = uVar6;
          *puVar19 = uVar21;
          puVar19[1] = uVar18;
          puVar13 = puVar13 + 6;
          puVar8 = puVar19 + 6;
        } while (puVar13 != puVar27);
        puVar19 = puVar19 + 0xc;
      }
      if (puVar24 != (ulong *)0x0) {
        operator_delete(puVar24);
      }
      *param_2 = puVar12;
      param_2[1] = puVar19;
      param_2[2] = puVar12 + uVar28 * 6;
    }
    else {
      *puVar24 = param_1;
      puVar24[1] = uVar21;
      puVar24[2] = local_48;
      puVar24[3] = uStack_40;
      puVar24[4] = local_38;
      *(undefined1 *)(puVar24 + 5) = 2;
      param_2[1] = param_2[1] + 0x30;
    }
    puVar14 = *(undefined8 **)(this + 8);
    puVar22 = (undefined8 *)(lVar20 + *(long *)this);
    puVar29 = (undefined8 *)(uVar17 * 0x10 + *(long *)this);
    uVar17 = (long)puVar14 - (long)puVar29;
    if (uVar17 == 0) {
      if (puVar29 == puVar22) {
        return;
      }
    }
    else if ((long)uVar17 < 1) {
      puVar22 = (undefined8 *)((long)puVar22 + ((long)puVar14 - (long)puVar29));
      if (puVar14 == puVar22) {
        return;
      }
    }
    else {
      uVar17 = (uVar17 >> 4) + 1;
      puVar14 = puVar29;
      do {
        puVar14[-2] = *puVar14;
        puVar14[-1] = puVar14[1];
        puVar14 = puVar14 + 2;
        uVar17 = uVar17 - 1;
      } while (1 < uVar17);
      puVar22 = (undefined8 *)((long)puVar22 + ((long)*(undefined8 **)(this + 8) - (long)puVar29));
      if (*(undefined8 **)(this + 8) == puVar22) {
        return;
      }
    }
    *(undefined8 **)(this + 8) = puVar22;
  }
  return;
}


