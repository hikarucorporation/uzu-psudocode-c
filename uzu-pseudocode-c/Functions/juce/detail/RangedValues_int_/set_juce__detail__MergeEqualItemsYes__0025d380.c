// Function : set<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_int_
// Entry    : 0025d380
// Prototype: void set<juce::detail::MergeEqualItemsYes>(RangedValues<int> * this, ulong param_1, ulong param_2, undefined4 param_3, long * param_4)
// Body     : 0025d380 - 0025d4e7


/* void juce::detail::RangedValues<int>::set<juce::detail::MergeEqualItemsYes>(juce::Range<long
   long>, int, std::vector<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change>, std::allocator<std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> > >&, juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<int>::set<juce::detail::MergeEqualItemsYes>
          (RangedValues<int> *this,ulong param_1,ulong param_2,undefined4 param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_44;
  vector<int,std::allocator<int>> *local_40;
  ulong local_38;
  
  lVar8 = param_4[1];
  lVar5 = *param_4;
  local_38 = param_2;
  Ranges::set((Ranges *)this,param_1,param_2,param_4);
  lVar2 = param_4[1] - *param_4;
  if (lVar2 != 0) {
    lVar8 = lVar8 - lVar5 >> 4;
    uVar3 = (lVar2 >> 4) * -0x5555555555555555;
    if ((ulong)(lVar8 * -0x5555555555555555) < uVar3) {
      lVar5 = 0;
      if ((ulong)(lVar8 * -0x5555555555555555) <= uVar3) {
        lVar5 = uVar3 + lVar8 * 0x5555555555555555;
      }
      plVar6 = (long *)(*param_4 + lVar8 * 0x10);
      plVar9 = plVar6 + lVar5 * 6;
      local_40 = (vector<int,std::allocator<int>> *)(this + 0x18);
      do {
        local_44 = param_3;
        if ((char)plVar6[5] == '\0') {
          puVar7 = (undefined4 *)(*plVar6 * 4 + *(long *)(this + 0x18));
          puVar1 = *(undefined4 **)(this + 0x20);
          if (puVar1 == *(undefined4 **)(this + 0x28)) {
            std::vector<int,std::allocator<int>>::_M_realloc_insert<int>(local_40,puVar7,&local_44);
          }
          else if (puVar1 == puVar7) {
            *puVar7 = param_3;
            *(undefined4 **)(this + 0x20) = puVar7 + 1;
          }
          else {
            puVar4 = puVar1 + -1;
            *puVar1 = puVar1[-1];
            *(undefined4 **)(this + 0x20) = puVar1 + 1;
            if (0 < (long)puVar4 - (long)puVar7) {
              uVar3 = ((ulong)((long)puVar4 - (long)puVar7) >> 2) + 1;
              do {
                *puVar4 = puVar4[-1];
                puVar4 = puVar4 + -1;
                uVar3 = uVar3 - 1;
              } while (1 < uVar3);
            }
            *puVar7 = param_3;
          }
        }
        else {
          applyOperation(this,plVar6);
        }
        plVar6 = plVar6 + 6;
      } while (plVar6 != plVar9);
    }
  }
  mergeEqualItems(this,param_1,param_4);
  mergeEqualItems(this,local_38,param_4);
  return;
}


