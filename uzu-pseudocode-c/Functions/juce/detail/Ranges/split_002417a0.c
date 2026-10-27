// Function : split
// Namespace: juce:detail:Ranges
// Entry    : 002417a0
// Prototype: undefined split(Ranges * this, ulong param_1, undefined8 * param_2)
// Body     : 002417a0 - 00241c0a


/* juce::detail::Ranges::split(long long, std::vector<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change>, std::allocator<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall juce::detail::Ranges::split(Ranges *this,ulong param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong *puVar19;
  
  puVar19 = *(ulong **)this;
  uVar4 = (long)*(ulong **)(this + 8) - (long)puVar19;
  puVar16 = puVar19;
  if (0 < (long)uVar4) {
    uVar4 = uVar4 >> 4;
    do {
      uVar11 = uVar4 >> 1;
      uVar12 = uVar11;
      if ((long)puVar16[uVar11 * 2 + 1] <= (long)param_1) {
        uVar12 = ~uVar11 + uVar4;
        puVar16 = puVar16 + uVar11 * 2 + 2;
      }
      uVar4 = uVar12;
    } while (0 < (long)uVar12);
  }
  if ((puVar16 != *(ulong **)(this + 8)) && ((long)*puVar16 <= (long)param_1)) {
    uVar12 = (long)puVar16 - (long)puVar19 >> 4;
    uVar4 = *puVar16;
    if (uVar4 == param_1) {
      return;
    }
    if ((long)param_1 < (long)uVar4) {
      uVar4 = param_1;
    }
    uVar11 = puVar19[uVar12 * 2 + 1];
    if ((long)puVar19[uVar12 * 2 + 1] <= (long)param_1) {
      uVar11 = param_1;
    }
    puVar1 = (ulong *)param_2[1];
    if (puVar1 == (ulong *)param_2[2]) {
      puVar14 = (ulong *)*param_2;
      lVar5 = (long)puVar1 - (long)puVar14;
      if (lVar5 == 0x7fffffffffffffe0) goto LAB_00241bff;
      lVar8 = lVar5 >> 4;
      uVar15 = lVar8 * -0x5555555555555555;
      uVar18 = 1;
      if (lVar5 != 0) {
        uVar18 = uVar15;
      }
      uVar13 = uVar18 + uVar15;
      if (0x2aaaaaaaaaaaaaa < uVar13) {
        uVar13 = 0x2aaaaaaaaaaaaaa;
      }
      if (CARRY8(uVar18,uVar15)) {
        uVar13 = 0x2aaaaaaaaaaaaaa;
      }
      puVar9 = operator_new(uVar13 * 0x30);
      puVar9[lVar8 * 2] = uVar12;
      puVar9[lVar8 * 2 + 1] = uVar4;
      puVar9[lVar8 * 2 + 2] = param_1;
      puVar9[lVar8 * 2 + 3] = param_1;
      puVar9[lVar8 * 2 + 4] = uVar11;
      *(undefined1 *)(puVar9 + lVar8 * 2 + 5) = 1;
      if (puVar14 == puVar1) {
        puVar10 = puVar9 + 6;
      }
      else {
        puVar6 = puVar14;
        puVar3 = puVar9;
        do {
          puVar10 = puVar3;
          uVar4 = *puVar6;
          uVar11 = puVar6[1];
          uVar18 = puVar6[2];
          uVar15 = puVar6[3];
          uVar2 = puVar6[5];
          puVar10[4] = puVar6[4];
          puVar10[5] = uVar2;
          puVar10[2] = uVar18;
          puVar10[3] = uVar15;
          *puVar10 = uVar4;
          puVar10[1] = uVar11;
          puVar6 = puVar6 + 6;
          puVar3 = puVar10 + 6;
        } while (puVar6 != puVar1);
        puVar10 = puVar10 + 0xc;
      }
      if (puVar14 != (ulong *)0x0) {
        operator_delete(puVar14);
      }
      *param_2 = puVar9;
      param_2[1] = puVar10;
      param_2[2] = puVar9 + uVar13 * 6;
    }
    else {
      *puVar1 = uVar12;
      puVar1[1] = uVar4;
      puVar1[2] = param_1;
      puVar1[3] = param_1;
      puVar1[4] = uVar11;
      *(undefined1 *)(puVar1 + 5) = 1;
      param_2[1] = param_2[1] + 0x30;
    }
    uVar4 = puVar19[uVar12 * 2 + 1];
    uVar11 = *puVar16;
    puVar19[uVar12 * 2 + 1] = param_1;
    uVar18 = uVar11;
    if ((long)param_1 < (long)uVar11) {
      *puVar16 = param_1;
      uVar18 = param_1;
    }
    puVar16 = *(ulong **)this;
    puVar1 = *(ulong **)(this + 8);
    lVar5 = uVar12 + 1;
    puVar19 = puVar16 + lVar5 * 2;
    uVar18 = (uVar4 - uVar11) + uVar18;
    if ((long)uVar18 <= (long)param_1) {
      uVar18 = param_1;
    }
    if (puVar1 == *(ulong **)(this + 0x10)) {
      lVar8 = (long)puVar1 - (long)puVar16;
      if (lVar8 == 0x7ffffffffffffff0) {
LAB_00241bff:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar11 = lVar8 >> 4;
      uVar4 = 1;
      if (lVar8 != 0) {
        uVar4 = uVar11;
      }
      uVar15 = uVar4 + uVar11;
      if (uVar15 >> 0x3b != 0) {
        uVar15 = 0x7ffffffffffffff;
      }
      if (CARRY8(uVar4,uVar11)) {
        uVar15 = 0x7ffffffffffffff;
      }
      puVar9 = operator_new(uVar15 * 0x10);
      puVar9[lVar5 * 2] = param_1;
      puVar9[lVar5 * 2 + 1] = uVar18;
      puVar14 = puVar9;
      if (lVar5 != 0) {
        uVar17 = (int)uVar12 + 1;
        uVar4 = (ulong)uVar17 & 3;
        puVar10 = puVar16;
        if ((uVar17 & 3) != 0) {
          do {
            uVar11 = puVar10[1];
            *puVar14 = *puVar10;
            puVar14[1] = uVar11;
            puVar10 = puVar10 + 2;
            puVar14 = puVar14 + 2;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (2 < (uVar12 & 0xfffffffffffffff)) {
          do {
            uVar4 = puVar10[1];
            *puVar14 = *puVar10;
            puVar14[1] = uVar4;
            uVar4 = puVar10[3];
            puVar14[2] = puVar10[2];
            puVar14[3] = uVar4;
            uVar4 = puVar10[5];
            puVar14[4] = puVar10[4];
            puVar14[5] = uVar4;
            uVar4 = puVar10[7];
            puVar14[6] = puVar10[6];
            puVar14[7] = uVar4;
            puVar14 = puVar14 + 8;
            puVar10 = puVar10 + 8;
          } while (puVar10 != puVar19);
        }
      }
      for (; puVar14 = puVar14 + 2, puVar1 != puVar19; puVar19 = puVar19 + 2) {
        uVar4 = puVar19[1];
        *puVar14 = *puVar19;
        puVar14[1] = uVar4;
      }
      if (puVar16 != (ulong *)0x0) {
        operator_delete(puVar16);
      }
      *(ulong **)this = puVar9;
      *(ulong **)(this + 8) = puVar14;
      *(ulong **)(this + 0x10) = puVar9 + uVar15 * 2;
    }
    else if (puVar1 == puVar19) {
      *puVar19 = param_1;
      puVar16[lVar5 * 2 + 1] = uVar18;
      *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
    }
    else {
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
      lVar8 = *(long *)(this + 8);
      *(long *)(this + 8) = lVar8 + 0x10;
      puVar7 = (undefined8 *)(lVar8 + -0x10);
      if (0 < (long)puVar7 - (long)puVar19) {
        uVar4 = ((ulong)((long)puVar7 - (long)puVar19) >> 4) + 1;
        do {
          *puVar7 = puVar7[-2];
          puVar7[1] = puVar7[-1];
          puVar7 = puVar7 + -2;
          uVar4 = uVar4 - 1;
        } while (1 < uVar4);
      }
      *puVar19 = param_1;
      puVar16[lVar5 * 2 + 1] = uVar18;
    }
  }
  return;
}


