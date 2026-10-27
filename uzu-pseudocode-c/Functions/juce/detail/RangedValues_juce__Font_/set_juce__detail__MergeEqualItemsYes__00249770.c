// Function : set<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_juce__Font_
// Entry    : 00249770
// Prototype: void set<juce::detail::MergeEqualItemsYes>(RangedValues<juce::Font> * this, ulong param_1, ulong param_2, long * param_3, long * param_4)
// Body     : 00249770 - 002498e8


/* void 
   juce::detail::RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>(juce::Range<long
   long>, juce::Font, std::vector<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change>, std::allocator<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> > >&, juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>
          (RangedValues<juce::Font> *this,ulong param_1,ulong param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *local_50;
  long *local_48;
  ulong local_40;
  ulong local_38;
  
  lVar10 = param_4[1];
  lVar2 = *param_4;
  lVar4 = lVar10 - lVar2 >> 0x3f;
  local_40 = param_1;
  local_38 = param_2;
  Ranges::set((Ranges *)this,param_1,param_2,param_4);
  lVar6 = param_4[1] - *param_4;
  if (lVar6 != 0) {
    uVar9 = ((lVar10 - lVar2) / 6 + lVar4 >> 3) - lVar4;
    uVar5 = lVar6 / 0x30;
    if (uVar9 < uVar5) {
      plVar8 = (long *)(*param_4 + uVar9 * 0x30);
      plVar3 = (long *)*param_3;
      *param_3 = 0;
      uVar7 = uVar5;
      if (uVar9 < uVar5) {
        uVar7 = uVar9;
      }
      lVar10 = uVar5 * 0x30 + uVar7 * -0x30;
      local_48 = param_4;
      do {
        if (plVar3 != (long *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_50 = plVar3;
        if ((char)plVar8[5] == '\0') {
          std::vector<juce::Font,std::allocator<juce::Font>>::_M_insert_rval
                    ((vector<juce::Font,std::allocator<juce::Font>> *)(this + 0x18),
                     (long *)(*plVar8 * 8 + *(long *)(this + 0x18)),(long *)&local_50);
        }
        else {
                    /* try { // try from 0024984f to 00249875 has its CatchHandler @ 002498e9 */
          applyOperation(this,plVar8);
        }
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*local_50 + 8))();
          }
        }
        plVar8 = plVar8 + 6;
        lVar10 = lVar10 + -0x30;
        param_4 = local_48;
      } while (lVar10 != 0);
      goto joined_r0x0024989c;
    }
  }
  plVar3 = (long *)*param_3;
  *param_3 = 0;
joined_r0x0024989c:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  mergeEqualItems(this,local_40,param_4);
  mergeEqualItems(this,local_38,param_4);
  return;
}


