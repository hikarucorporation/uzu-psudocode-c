// Function : mergeEqualItems
// Namespace: juce:detail:RangedValues_signed_char_
// Entry    : 0025d920
// Prototype: undefined mergeEqualItems(RangedValues<signed_char> * this, long param_1, long * param_2)
// Body     : 0025d920 - 0025da63


/* juce::detail::RangedValues<signed char>::mergeEqualItems(long long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall
juce::detail::RangedValues<signed_char>::mergeEqualItems
          (RangedValues<signed_char> *this,long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)this;
  uVar6 = (long)*(long **)(this + 8) - (long)plVar8;
  plVar9 = plVar8;
  if (0 < (long)uVar6) {
    uVar6 = uVar6 >> 4;
    do {
      uVar4 = uVar6 >> 1;
      uVar5 = uVar4;
      if (plVar9[uVar4 * 2 + 1] <= param_1) {
        uVar5 = ~uVar4 + uVar6;
        plVar9 = plVar9 + uVar4 * 2 + 2;
      }
      uVar6 = uVar5;
    } while (0 < (long)uVar5);
  }
  if ((((plVar9 != *(long **)(this + 8)) && (*plVar9 <= param_1)) &&
      ((long)plVar9 - (long)plVar8 != 0)) &&
     (uVar6 = (long)plVar9 - (long)plVar8 >> 4,
     *(char *)(*(long *)(this + 0x18) + -1 + uVar6) == *(char *)(*(long *)(this + 0x18) + uVar6))) {
    lVar7 = param_2[1];
    lVar1 = *param_2;
    lVar2 = lVar7 - lVar1 >> 0x3f;
    Ranges::mergeBack((Ranges *)this,uVar6,param_2);
    lVar3 = param_2[1] - *param_2;
    if (lVar3 != 0) {
      uVar5 = ((lVar7 - lVar1) / 6 + lVar2 >> 3) - lVar2;
      uVar6 = lVar3 / 0x30;
      if (uVar5 < uVar6) {
        plVar8 = (long *)(*param_2 + uVar5 * 0x30);
        uVar4 = uVar6;
        if (uVar5 < uVar6) {
          uVar4 = uVar5;
        }
        lVar7 = uVar6 * 0x30 + uVar4 * -0x30;
        do {
          applyOperation(this,plVar8);
          plVar8 = plVar8 + 6;
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
      }
    }
  }
  return;
}


