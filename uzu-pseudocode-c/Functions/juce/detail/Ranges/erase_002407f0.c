// Function : erase
// Namespace: juce:detail:Ranges
// Entry    : 002407f0
// Prototype: undefined erase(Ranges * param_1, ulong param_2, ulong param_3, undefined8 * param_4)
// Body     : 002407f0 - 00240ae5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::Ranges::erase(juce::Range<long long>,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __cdecl
juce::detail::Ranges::erase(Ranges *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  if (param_2 != param_3) {
    split(param_1,param_2,param_4);
    split(param_1,param_3,param_4);
    lVar11 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 8);
    lVar17 = lVar11;
    lVar19 = lVar11;
    if (0 < lVar12 - lVar11) {
      uVar21 = (ulong)(lVar12 - lVar11) >> 4;
      do {
        uVar16 = uVar21 >> 1;
        lVar17 = uVar16 * 0x10;
        if (*(long *)(lVar19 + lVar17) < (long)param_2) {
          uVar16 = ~uVar16 + uVar21;
          lVar19 = lVar19 + lVar17 + 0x10;
        }
        uVar21 = uVar16;
      } while (0 < (long)uVar16);
      lVar17 = lVar19;
      if (0 < lVar12 - lVar19) {
        uVar21 = (ulong)(lVar12 - lVar19) >> 4;
        do {
          uVar16 = uVar21 >> 1;
          lVar18 = uVar16 * 0x10;
          if (*(long *)(lVar17 + lVar18) < (long)param_3) {
            uVar16 = ~uVar16 + uVar21;
            lVar17 = lVar17 + lVar18 + 0x10;
          }
          uVar21 = uVar16;
        } while (0 < (long)uVar16);
      }
    }
    if (lVar19 != lVar12) {
      uVar16 = lVar19 - lVar11 >> 4;
      uVar21 = lVar17 - lVar11 >> 4;
      if (uVar21 <= uVar16) {
        uVar21 = uVar16;
      }
      puVar3 = (ulong *)param_4[1];
      if (puVar3 == (ulong *)param_4[2]) {
        puVar4 = (ulong *)*param_4;
        lVar11 = (long)puVar3 - (long)puVar4;
        if (lVar11 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        lVar12 = lVar11 >> 4;
        uVar14 = lVar12 * -0x5555555555555555;
        uVar8 = 1;
        if (lVar11 != 0) {
          uVar8 = uVar14;
        }
        uVar13 = uVar8 + uVar14;
        if (0x2aaaaaaaaaaaaaa < uVar13) {
          uVar13 = 0x2aaaaaaaaaaaaaa;
        }
        if (CARRY8(uVar8,uVar14)) {
          uVar13 = 0x2aaaaaaaaaaaaaa;
        }
        puVar9 = operator_new(uVar13 * 0x30);
        puVar9[lVar12 * 2] = uVar16;
        puVar9[lVar12 * 2 + 1] = uVar21;
        *(undefined1 *)(puVar9 + lVar12 * 2 + 5) = 2;
        if (puVar4 == puVar3) {
          puVar15 = puVar9 + 6;
        }
        else {
          puVar10 = puVar4;
          puVar7 = puVar9;
          do {
            puVar15 = puVar7;
            uVar21 = *puVar10;
            uVar16 = puVar10[1];
            uVar8 = puVar10[2];
            uVar14 = puVar10[3];
            uVar5 = puVar10[5];
            puVar15[4] = puVar10[4];
            puVar15[5] = uVar5;
            puVar15[2] = uVar8;
            puVar15[3] = uVar14;
            *puVar15 = uVar21;
            puVar15[1] = uVar16;
            puVar10 = puVar10 + 6;
            puVar7 = puVar15 + 6;
          } while (puVar10 != puVar3);
          puVar15 = puVar15 + 0xc;
        }
        if (puVar4 != (ulong *)0x0) {
          operator_delete(puVar4);
        }
        *param_4 = puVar9;
        param_4[1] = puVar15;
        param_4[2] = puVar9 + uVar13 * 6;
      }
      else {
        *puVar3 = uVar16;
        puVar3[1] = uVar21;
        *(undefined1 *)(puVar3 + 5) = 2;
        param_4[1] = param_4[1] + 0x30;
      }
      lVar11 = *(long *)param_1;
    }
    lVar12 = lVar19 - lVar11 >> 4;
    lVar18 = lVar17 - lVar11 >> 4;
    if (lVar12 != lVar18) {
      lVar20 = (lVar19 - lVar11 & 0xfffffffffffffff0U) + lVar11;
      lVar19 = (lVar17 - lVar11 & 0xfffffffffffffff0U) + lVar11;
      lVar17 = *(long *)(param_1 + 8);
      uVar21 = lVar17 - lVar19;
      if (uVar21 == 0) {
        if (lVar19 == lVar20) {
          return;
        }
      }
      else if ((long)uVar21 < 1) {
        lVar20 = lVar20 + (lVar17 - lVar19);
        if (lVar17 == lVar20) {
          return;
        }
      }
      else {
        uVar21 = (uVar21 >> 4) + 1;
        do {
          puVar1 = (undefined8 *)(lVar11 + lVar18 * 0x10);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + lVar12 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          uVar21 = uVar21 - 1;
          lVar11 = lVar11 + 0x10;
        } while (1 < uVar21);
        lVar20 = lVar20 + (*(long *)(param_1 + 8) - lVar19);
        if (*(long *)(param_1 + 8) == lVar20) {
          return;
        }
      }
      *(long *)(param_1 + 8) = lVar20;
    }
  }
  return;
}


