// Function : shift
// Namespace: juce:detail:Ranges
// Entry    : 00240af0
// Prototype: undefined shift(Ranges * this, long param_1, long param_2, undefined8 * param_3)
// Body     : 00240af0 - 00240d58


/* juce::detail::Ranges::shift(long long, long long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall
juce::detail::Ranges::shift(Ranges *this,long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  
  if (param_2 != 0) {
    plVar6 = *(long **)this;
    uVar11 = (long)*(long **)(this + 8) - (long)plVar6;
    plVar15 = plVar6;
    if (0 < (long)uVar11) {
      uVar11 = uVar11 >> 4;
      do {
        uVar12 = uVar11 >> 1;
        uVar13 = uVar12;
        if (plVar15[uVar12 * 2] < param_1) {
          uVar13 = ~uVar12 + uVar11;
          plVar15 = plVar15 + uVar12 * 2 + 2;
        }
        uVar11 = uVar13;
      } while (0 < (long)uVar13);
    }
    if (plVar15 < *(long **)(this + 8)) {
      plVar16 = (long *)param_3[1];
      do {
        lVar3 = *plVar15;
        lVar4 = plVar15[1];
        lVar1 = lVar3 + param_2;
        *plVar15 = lVar1;
        lVar2 = lVar4 + param_2;
        plVar15[1] = lVar2;
        lVar14 = (long)plVar15 - (long)plVar6 >> 4;
        if (plVar16 == (long *)param_3[2]) {
          plVar6 = (long *)*param_3;
          lVar7 = (long)plVar16 - (long)plVar6;
          if (lVar7 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          lVar17 = lVar7 >> 4;
          uVar13 = lVar17 * -0x5555555555555555;
          uVar11 = uVar13;
          if (lVar7 == 0) {
            uVar11 = 1;
          }
          uVar12 = uVar11 + uVar13;
          if (0x2aaaaaaaaaaaaaa < uVar12) {
            uVar12 = 0x2aaaaaaaaaaaaaa;
          }
          if (CARRY8(uVar11,uVar13)) {
            uVar12 = 0x2aaaaaaaaaaaaaa;
          }
          plVar8 = operator_new(uVar12 * 0x30);
          plVar8[lVar17 * 2] = lVar14;
          plVar8[lVar17 * 2 + 1] = lVar3;
          plVar8[lVar17 * 2 + 2] = lVar4;
          plVar8[lVar17 * 2 + 3] = lVar1;
          plVar8[lVar17 * 2 + 4] = lVar2;
          *(undefined1 *)(plVar8 + lVar17 * 2 + 5) = 3;
          if (plVar6 == plVar16) {
            plVar16 = plVar8 + 6;
          }
          else {
            plVar5 = plVar8;
            plVar10 = plVar6;
            do {
              plVar9 = plVar5;
              lVar1 = *plVar10;
              lVar2 = plVar10[1];
              lVar3 = plVar10[2];
              lVar4 = plVar10[3];
              lVar14 = plVar10[5];
              plVar9[4] = plVar10[4];
              plVar9[5] = lVar14;
              plVar9[2] = lVar3;
              plVar9[3] = lVar4;
              *plVar9 = lVar1;
              plVar9[1] = lVar2;
              plVar10 = plVar10 + 6;
              plVar5 = plVar9 + 6;
            } while (plVar10 != plVar16);
            plVar16 = plVar9 + 0xc;
          }
          if (plVar6 != (long *)0x0) {
            operator_delete(plVar6);
          }
          *param_3 = plVar8;
          param_3[1] = plVar16;
          param_3[2] = plVar8 + uVar12 * 6;
          if (*(long **)(this + 8) <= plVar15 + 2) {
            return;
          }
        }
        else {
          *plVar16 = lVar14;
          plVar16[1] = lVar3;
          plVar16[2] = lVar4;
          plVar16[3] = lVar1;
          plVar16[4] = lVar2;
          *(undefined1 *)(plVar16 + 5) = 3;
          plVar16 = (long *)(param_3[1] + 0x30);
          param_3[1] = plVar16;
          if (*(long **)(this + 8) <= plVar15 + 2) {
            return;
          }
        }
        plVar15 = plVar15 + 2;
        plVar6 = *(long **)this;
      } while( true );
    }
  }
  return;
}


