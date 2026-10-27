// Function : mergeEqualItems
// Namespace: juce:detail:RangedValues_std__optional_juce__Font__
// Entry    : 00325700
// Prototype: undefined mergeEqualItems(RangedValues<std::optional<juce::Font>> * this, long param_1, long * param_2)
// Body     : 00325700 - 00325950


/* juce::detail::RangedValues<std::optional<juce::Font> >::mergeEqualItems(long long,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&) */

void __thiscall
juce::detail::RangedValues<std::optional<juce::Font>>::mergeEqualItems
          (RangedValues<std::optional<juce::Font>> *this,long param_1,long *param_2)

{
  vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *this_00;
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_R13;
  
  plVar6 = *(long **)this;
  uVar4 = (long)*(long **)(this + 8) - (long)plVar6;
  plVar7 = plVar6;
  if (0 < (long)uVar4) {
    uVar4 = uVar4 >> 4;
    do {
      uVar10 = uVar4 >> 1;
      uVar11 = uVar10;
      if (plVar7[uVar10 * 2 + 1] <= param_1) {
        uVar11 = ~uVar10 + uVar4;
        plVar7 = plVar7 + uVar10 * 2 + 2;
      }
      uVar4 = uVar11;
    } while (0 < (long)uVar11);
  }
  if (((plVar7 != *(long **)(this + 8)) && (*plVar7 <= param_1)) &&
     ((long)plVar7 - (long)plVar6 != 0)) {
    uVar4 = (long)plVar7 - (long)plVar6 >> 4;
    this_00 = (vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *)
              (this + 0x18);
    lVar8 = *(long *)(this + 0x18);
    lVar5 = (uVar4 - 1) * 0x10;
    if (*(char *)(lVar8 + 8 + lVar5) == '\0') {
      cVar9 = '\x01';
    }
    else {
      unaff_R13 = *(long **)(lVar8 + lVar5);
      if (unaff_R13 == (long *)0x0) {
        unaff_R13 = (long *)0x0;
      }
      else {
        LOCK();
        *(int *)(unaff_R13 + 1) = (int)unaff_R13[1] + 1;
        UNLOCK();
        lVar8 = *(long *)this_00;
      }
      cVar9 = '\0';
    }
    cVar2 = cVar9;
    if (*(char *)(lVar8 + 8 + uVar4 * 0x10) != '\0') {
      plVar6 = *(long **)(lVar8 + uVar4 * 0x10);
      if (plVar6 != (long *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (cVar9 == '\0') {
        if (unaff_R13 == plVar6) {
          cVar2 = '\x01';
        }
        else {
                    /* try { // try from 00325804 to 00325808 has its CatchHandler @ 00325951 */
          uVar11 = FontOptions::operator==((FontOptions *)(unaff_R13 + 3),plVar6 + 3);
          cVar2 = (char)uVar11;
        }
      }
      else {
        cVar2 = '\0';
      }
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    if (cVar9 == '\0' && unaff_R13 != (long *)0x0) {
      LOCK();
      plVar6 = unaff_R13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*unaff_R13 + 8))(unaff_R13);
      }
    }
    if (cVar2 != '\0') {
      lVar8 = param_2[1];
      lVar5 = *param_2;
      lVar1 = lVar8 - lVar5 >> 0x3f;
      Ranges::mergeBack((Ranges *)this,uVar4,param_2);
      lVar3 = param_2[1] - *param_2;
      if (lVar3 != 0) {
        uVar11 = ((lVar8 - lVar5) / 6 + lVar1 >> 3) - lVar1;
        uVar4 = lVar3 / 0x30;
        if (uVar11 < uVar4) {
          lVar8 = *param_2 + uVar11 * 0x30;
          uVar10 = uVar4;
          if (uVar11 < uVar4) {
            uVar10 = uVar11;
          }
          lVar5 = 0;
          do {
            cVar9 = *(char *)(lVar8 + 0x28 + lVar5);
            if (cVar9 == '\x02') {
              std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::
              _M_erase(this_00,(long *)(*(long *)(lVar8 + lVar5) * 0x10 + *(long *)this_00),
                       (long *)(*(long *)(lVar8 + 8 + lVar5) * 0x10 + *(long *)this_00));
            }
            else if (cVar9 == '\x01') {
              plVar6 = (long *)(*(long *)(lVar8 + lVar5) * 0x10 + *(long *)this_00);
              std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::
              insert(this_00,plVar6,plVar6);
            }
            lVar5 = lVar5 + 0x30;
          } while (uVar4 * 0x30 + uVar10 * -0x30 != lVar5);
        }
      }
    }
  }
  return;
}


