// Function : mergeEqualItems
// Namespace: juce:detail:RangedValues_float_
// Entry    : 00316740
// Prototype: undefined mergeEqualItems(RangedValues<float> * this, long param_1, long * param_2)
// Body     : 00316740 - 00316883


/* juce::detail::RangedValues<float>::mergeEqualItems(long long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall
juce::detail::RangedValues<float>::mergeEqualItems
          (RangedValues<float> *this,long param_1,long *param_2)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar10 = *(long **)this;
  uVar8 = (long)*(long **)(this + 8) - (long)plVar10;
  plVar11 = plVar10;
  if (0 < (long)uVar8) {
    uVar8 = uVar8 >> 4;
    do {
      uVar6 = uVar8 >> 1;
      uVar7 = uVar6;
      if (plVar11[uVar6 * 2 + 1] <= param_1) {
        uVar7 = ~uVar6 + uVar8;
        plVar11 = plVar11 + uVar6 * 2 + 2;
      }
      uVar8 = uVar7;
    } while (0 < (long)uVar7);
  }
  if (((plVar11 != *(long **)(this + 8)) && (*plVar11 <= param_1)) &&
     ((long)plVar11 - (long)plVar10 != 0)) {
    uVar8 = (long)plVar11 - (long)plVar10 >> 4;
    fVar2 = *(float *)(*(long *)(this + 0x18) + -4 + uVar8 * 4);
    pfVar1 = (float *)(*(long *)(this + 0x18) + uVar8 * 4);
    if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
      lVar9 = param_2[1];
      lVar3 = *param_2;
      lVar4 = lVar9 - lVar3 >> 0x3f;
      Ranges::mergeBack((Ranges *)this,uVar8,param_2);
      lVar5 = param_2[1] - *param_2;
      if (lVar5 != 0) {
        uVar7 = ((lVar9 - lVar3) / 6 + lVar4 >> 3) - lVar4;
        uVar8 = lVar5 / 0x30;
        if (uVar7 < uVar8) {
          plVar10 = (long *)(*param_2 + uVar7 * 0x30);
          uVar6 = uVar8;
          if (uVar7 < uVar8) {
            uVar6 = uVar7;
          }
          lVar9 = uVar8 * 0x30 + uVar6 * -0x30;
          do {
            applyOperation(this,plVar10);
            plVar10 = plVar10 + 6;
            lVar9 = lVar9 + -0x30;
          } while (lVar9 != 0);
        }
      }
    }
  }
  return;
}


