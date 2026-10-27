// Function : mergeEqualItems
// Namespace: juce:detail:RangedValues_juce__Font_
// Entry    : 00240fc0
// Prototype: undefined mergeEqualItems(RangedValues<juce::Font> * this, long param_1, long * param_2)
// Body     : 00240fc0 - 00241173


/* juce::detail::RangedValues<juce::Font>::mergeEqualItems(long long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall
juce::detail::RangedValues<juce::Font>::mergeEqualItems
          (RangedValues<juce::Font> *this,long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  plVar7 = *(long **)this;
  uVar5 = (long)*(long **)(this + 8) - (long)plVar7;
  plVar6 = plVar7;
  if (0 < (long)uVar5) {
    uVar5 = uVar5 >> 4;
    do {
      uVar10 = uVar5 >> 1;
      uVar11 = uVar10;
      if (plVar6[uVar10 * 2 + 1] <= param_1) {
        uVar11 = ~uVar10 + uVar5;
        plVar6 = plVar6 + uVar10 * 2 + 2;
      }
      uVar5 = uVar11;
    } while (0 < (long)uVar11);
  }
  if (((plVar6 != *(long **)(this + 8)) && (*plVar6 <= param_1)) &&
     ((long)plVar6 - (long)plVar7 != 0)) {
    uVar5 = (long)plVar6 - (long)plVar7 >> 4;
    lVar9 = *(long *)(this + 0x18);
    plVar7 = *(long **)(lVar9 + -8 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      lVar9 = *(long *)(this + 0x18);
    }
    plVar6 = *(long **)(lVar9 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (plVar7 == plVar6) {
      cVar8 = '\x01';
    }
    else {
                    /* try { // try from 0024107d to 00241081 has its CatchHandler @ 00241174 */
      uVar11 = FontOptions::operator==((FontOptions *)(plVar7 + 3),plVar6 + 3);
      cVar8 = (char)uVar11;
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    if (cVar8 != '\0') {
      lVar9 = param_2[1];
      lVar2 = *param_2;
      lVar3 = lVar9 - lVar2 >> 0x3f;
      Ranges::mergeBack((Ranges *)this,uVar5,param_2);
      lVar4 = param_2[1] - *param_2;
      if (lVar4 != 0) {
        uVar11 = ((lVar9 - lVar2) / 6 + lVar3 >> 3) - lVar3;
        uVar5 = lVar4 / 0x30;
        if (uVar11 < uVar5) {
          plVar7 = (long *)(*param_2 + uVar11 * 0x30);
          uVar10 = uVar5;
          if (uVar11 < uVar5) {
            uVar10 = uVar11;
          }
          lVar9 = uVar5 * 0x30 + uVar10 * -0x30;
          do {
            applyOperation(this,plVar7);
            plVar7 = plVar7 + 6;
            lVar9 = lVar9 + -0x30;
          } while (lVar9 != 0);
        }
      }
    }
  }
  return;
}


