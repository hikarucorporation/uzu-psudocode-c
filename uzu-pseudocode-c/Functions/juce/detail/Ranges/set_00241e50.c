// Function : set
// Namespace: juce:detail:Ranges
// Entry    : 00241e50
// Prototype: undefined set(Ranges * param_1, ulong param_2, ulong param_3, undefined8 * param_4)
// Body     : 00241e50 - 0024201a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::Ranges::set(juce::Range<long long>,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __cdecl
juce::detail::Ranges::set(Ranges *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong local_40;
  ulong local_38;
  
  if (param_2 != param_3) {
    local_40 = param_2;
    local_38 = param_3;
    erase(param_1,param_2,param_3,param_4);
    puVar1 = *(undefined8 **)param_1;
    puVar14 = puVar1;
    if (0 < *(long *)(param_1 + 8) - (long)puVar1) {
      uVar7 = (ulong)(*(long *)(param_1 + 8) - (long)puVar1) >> 4;
      do {
        uVar10 = uVar7 >> 1;
        uVar11 = uVar10;
        if ((long)puVar14[uVar10 * 2] < (long)param_2) {
          uVar11 = ~uVar10 + uVar7;
          puVar14 = puVar14 + uVar10 * 2 + 2;
        }
        uVar7 = uVar11;
      } while (0 < (long)uVar11);
    }
    lVar15 = (long)puVar14 - (long)puVar1 >> 4;
    plVar2 = (long *)param_4[1];
    if (plVar2 == (long *)param_4[2]) {
      plVar3 = (long *)*param_4;
      lVar6 = (long)plVar2 - (long)plVar3;
      if (lVar6 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      lVar12 = lVar6 >> 4;
      uVar11 = lVar12 * -0x5555555555555555;
      uVar7 = 1;
      if (lVar6 != 0) {
        uVar7 = uVar11;
      }
      uVar10 = uVar7 + uVar11;
      if (0x2aaaaaaaaaaaaaa < uVar10) {
        uVar10 = 0x2aaaaaaaaaaaaaa;
      }
      if (CARRY8(uVar7,uVar11)) {
        uVar10 = 0x2aaaaaaaaaaaaaa;
      }
      plVar8 = operator_new(uVar10 * 0x30);
      plVar8[lVar12 * 2] = lVar15;
      *(undefined1 *)(plVar8 + lVar12 * 2 + 5) = 0;
      plVar13 = plVar8;
      if (plVar3 != plVar2) {
        plVar9 = plVar3;
        do {
          lVar15 = *plVar9;
          lVar6 = plVar9[1];
          lVar12 = plVar9[2];
          lVar4 = plVar9[3];
          lVar5 = plVar9[5];
          plVar13[4] = plVar9[4];
          plVar13[5] = lVar5;
          plVar13[2] = lVar12;
          plVar13[3] = lVar4;
          *plVar13 = lVar15;
          plVar13[1] = lVar6;
          plVar9 = plVar9 + 6;
          plVar13 = plVar13 + 6;
        } while (plVar9 != plVar2);
      }
      if (plVar3 != (long *)0x0) {
        operator_delete(plVar3);
      }
      *param_4 = plVar8;
      param_4[1] = plVar13 + 6;
      param_4[2] = plVar8 + uVar10 * 6;
    }
    else {
      *plVar2 = lVar15;
      *(undefined1 *)(plVar2 + 5) = 0;
      param_4[1] = param_4[1] + 0x30;
    }
    std::vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>::insert
              ((vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *)param_1,
               puVar14,&local_40);
  }
  return;
}


