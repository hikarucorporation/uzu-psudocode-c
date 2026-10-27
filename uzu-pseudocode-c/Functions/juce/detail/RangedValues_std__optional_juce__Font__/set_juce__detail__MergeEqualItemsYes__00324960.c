// Function : set<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_std__optional_juce__Font__
// Entry    : 00324960
// Prototype: void set<juce::detail::MergeEqualItemsYes>(RangedValues<std::optional<juce::Font>> * this, ulong param_1, ulong param_2, long * param_3, long * param_4)
// Body     : 00324960 - 00324b98


/* void juce::detail::RangedValues<std::optional<juce::Font>
   >::set<juce::detail::MergeEqualItemsYes>(juce::Range<long long>, std::optional<juce::Font>,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&,
   juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<std::optional<juce::Font>>::set<juce::detail::MergeEqualItemsYes>
          (RangedValues<std::optional<juce::Font>> *this,ulong param_1,ulong param_2,long *param_3,
          long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  long *local_58;
  char local_50;
  long *local_48;
  ulong local_40;
  ulong local_38;
  
  lVar7 = param_4[1];
  lVar2 = *param_4;
  local_38 = param_1;
  Ranges::set((Ranges *)this,param_1,param_2,param_4);
  lVar4 = param_4[1] - *param_4;
  if (lVar4 == 0) {
    if ((char)param_3[1] == '\0') goto LAB_00324b0c;
    plVar3 = (long *)*param_3;
    *param_3 = 0;
  }
  else {
    lVar7 = lVar7 - lVar2 >> 4;
    uVar5 = (lVar4 >> 4) * -0x5555555555555555;
    plVar6 = (long *)(*param_4 + lVar7 * 0x10);
    bVar8 = uVar5 < (ulong)(lVar7 * -0x5555555555555555);
    lVar7 = uVar5 + lVar7 * 0x5555555555555555;
    bVar9 = lVar7 == 0;
    if (bVar8) {
      lVar7 = 0;
    }
    if (bVar8 || bVar9) {
      plVar6 = (long *)0x0;
      lVar7 = 0;
    }
    if ((char)param_3[1] == '\0') {
      if (lVar7 != 0) {
        lVar7 = lVar7 * 0x30;
        do {
          local_50 = '\0';
                    /* try { // try from 00324abf to 00324acc has its CatchHandler @ 00324ba2 */
          applyOperation(this,plVar6,&local_58);
          if ((local_50 != '\0') && (local_50 = '\0', local_58 != (long *)0x0)) {
            LOCK();
            plVar3 = local_58 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)(*local_58 + 8))();
            }
          }
          plVar6 = plVar6 + 6;
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
      }
      goto LAB_00324b0c;
    }
    plVar3 = (long *)*param_3;
    *param_3 = 0;
    if (lVar7 != 0) {
      local_48 = plVar3 + 1;
      if (plVar3 == (long *)0x0) {
        lVar7 = lVar7 * 0x30;
        do {
          local_58 = (long *)0x0;
          local_50 = '\x01';
                    /* try { // try from 00324b67 to 00324b74 has its CatchHandler @ 00324b99 */
          applyOperation(this,plVar6,&local_58);
          if ((local_50 != '\0') && (local_50 = '\0', local_58 != (long *)0x0)) {
            LOCK();
            plVar3 = local_58 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)(*local_58 + 8))();
            }
          }
          plVar6 = plVar6 + 6;
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
        goto LAB_00324b0c;
      }
      lVar7 = lVar7 * 0x30;
      local_40 = param_2;
      do {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_50 = '\x01';
        local_58 = plVar3;
                    /* try { // try from 00324a41 to 00324a4e has its CatchHandler @ 00324ba9 */
        applyOperation(this,plVar6,&local_58);
        if ((local_50 != '\0') && (local_50 = '\0', local_58 != (long *)0x0)) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*local_58 + 8))();
          }
        }
        plVar6 = plVar6 + 6;
        lVar7 = lVar7 + -0x30;
        param_2 = local_40;
      } while (lVar7 != 0);
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
LAB_00324b0c:
  mergeEqualItems(this,local_38,param_4);
  mergeEqualItems(this,param_2,param_4);
  return;
}


