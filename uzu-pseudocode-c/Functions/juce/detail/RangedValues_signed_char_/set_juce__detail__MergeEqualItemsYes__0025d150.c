// Function : set<juce::detail::MergeEqualItemsYes>
// Namespace: juce:detail:RangedValues_signed_char_
// Entry    : 0025d150
// Prototype: void set<juce::detail::MergeEqualItemsYes>(RangedValues<signed_char> * this, ulong param_1, ulong param_2, undefined1 param_3, long * param_4)
// Body     : 0025d150 - 0025d370


/* void juce::detail::RangedValues<signed
   char>::set<juce::detail::MergeEqualItemsYes>(juce::Range<long long>, signed char,
   std::vector<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change>,
   std::allocator<std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> > >&,
   juce::detail::MergeEqualItemsYes) */

void __thiscall
juce::detail::RangedValues<signed_char>::set<juce::detail::MergeEqualItemsYes>
          (RangedValues<signed_char> *this,ulong param_1,ulong param_2,undefined1 param_3,
          long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  undefined1 local_49;
  vector<signed_char,std::allocator<signed_char>> *local_48;
  ulong local_40;
  ulong local_38;
  
  lVar12 = param_4[1];
  lVar6 = *param_4;
  local_40 = param_1;
  local_38 = param_2;
  Ranges::set((Ranges *)this,param_1,param_2,param_4);
  lVar3 = param_4[1] - *param_4;
  if (lVar3 != 0) {
    lVar12 = lVar12 - lVar6 >> 4;
    uVar4 = (lVar3 >> 4) * -0x5555555555555555;
    if ((ulong)(lVar12 * -0x5555555555555555) < uVar4) {
      lVar6 = 0;
      if ((ulong)(lVar12 * -0x5555555555555555) <= uVar4) {
        lVar6 = uVar4 + lVar12 * 0x5555555555555555;
      }
      plVar9 = (long *)(*param_4 + lVar12 * 0x10);
      plVar13 = plVar9 + lVar6 * 6;
      local_48 = (vector<signed_char,std::allocator<signed_char>> *)(this + 0x18);
      do {
        local_49 = param_3;
        if ((char)plVar9[5] == '\0') {
          puVar1 = *(undefined1 **)(this + 0x20);
          puVar10 = (undefined1 *)(*(long *)(this + 0x18) + *plVar9);
          if (puVar1 == *(undefined1 **)(this + 0x28)) {
            std::vector<signed_char,std::allocator<signed_char>>::_M_realloc_insert<signed_char>
                      (local_48,puVar10,&local_49);
          }
          else if (puVar1 == puVar10) {
            *puVar10 = param_3;
            *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
          }
          else {
            *puVar1 = puVar1[-1];
            puVar7 = *(undefined1 **)(this + 0x20);
            *(undefined1 **)(this + 0x20) = puVar7 + 1;
            puVar1 = puVar7 + -1;
            puVar8 = puVar1 + -(long)puVar10;
            if (0 < (long)puVar8) {
              puVar11 = puVar1 + ~(ulong)puVar10;
              if (((ulong)puVar8 & 7) != 0) {
                uVar4 = 1;
                puVar2 = puVar1;
                do {
                  puVar7 = puVar2;
                  *puVar7 = puVar7[-1];
                  uVar5 = uVar4 + 1;
                  bVar14 = uVar4 != ((ulong)puVar8 & 7);
                  uVar4 = uVar5;
                  puVar2 = puVar7 + -1;
                } while (bVar14);
                puVar8 = puVar1 + (-uVar5 - (long)puVar10) + 1;
                puVar1 = puVar7 + -1;
              }
              if ((undefined1 *)0x6 < puVar11) {
                lVar12 = -1;
                do {
                  puVar7[lVar12] = puVar1[lVar12];
                  puVar7[lVar12 + -1] = puVar1[lVar12 + -1];
                  puVar7[lVar12 + -2] = puVar1[lVar12 + -2];
                  puVar7[lVar12 + -3] = puVar1[lVar12 + -3];
                  puVar7[lVar12 + -4] = puVar1[lVar12 + -4];
                  puVar7[lVar12 + -5] = puVar1[lVar12 + -5];
                  puVar7[lVar12 + -6] = puVar1[lVar12 + -6];
                  puVar7[lVar12 + -7] = puVar1[lVar12 + -7];
                  lVar6 = lVar12 + -8;
                  lVar12 = lVar12 + -8;
                } while (puVar8 + lVar6 < (undefined1 *)0xfffffffffffffffe);
              }
            }
            *puVar10 = param_3;
          }
        }
        else {
          applyOperation(this,plVar9);
        }
        plVar9 = plVar9 + 6;
      } while (plVar9 != plVar13);
    }
  }
  mergeEqualItems(this,local_40,param_4);
  mergeEqualItems(this,local_38,param_4);
  return;
}


