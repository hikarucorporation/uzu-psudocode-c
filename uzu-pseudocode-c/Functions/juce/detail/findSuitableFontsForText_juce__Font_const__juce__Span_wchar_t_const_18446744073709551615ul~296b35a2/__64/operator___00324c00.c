// Function : operator()
// Namespace: juce:detail:findSuitableFontsForText_juce__Font_const__juce__Span_wchar_t_const_18446744073709551615ul~296b35a2:__64
// Entry    : 00324c00
// Prototype: undefined operator()($_64 * this, long * param_1)
// Body     : 00324c00 - 00324ce1


/* juce::detail::findSuitableFontsForText(juce::Font const&, juce::Span<wchar_t const,
   18446744073709551615ul>, juce::String const&)::$_64::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
juce::detail::
findSuitableFontsForText(juce::Font_const&,juce::Span<wchar_t_const,18446744073709551615ul>,juce::String_const&)
::$_64::operator()(__64 *this,long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *local_38;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  lVar4 = plVar2[1];
  if (lVar4 != lVar3) {
    lVar5 = plVar2[3];
    lVar8 = 0;
    do {
      uVar6 = *(ulong *)(lVar3 + lVar8);
      uVar7 = *(ulong *)(lVar3 + 8 + lVar8);
      if (*(char *)(lVar5 + 8 + lVar8) == '\0') {
        local_38 = *(long **)param_1[1];
      }
      else {
        local_38 = *(long **)(lVar5 + (lVar8 >> 4) * 0x10);
      }
      if (local_38 != (long *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
                    /* try { // try from 00324c85 to 00324c8f has its CatchHandler @ 00324ce2 */
      RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>
                ((RangedValues<juce::Font> *)this,uVar6,uVar7,(long *)&local_38,(long *)param_1[2]);
      if (local_38 != (long *)0x0) {
        LOCK();
        plVar2 = local_38 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_38 + 8))();
        }
      }
      lVar1 = lVar3 + lVar8;
      plVar2 = (long *)param_1[2];
      if (plVar2[1] != *plVar2) {
        plVar2[1] = *plVar2;
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar1 + 0x10 != lVar4);
  }
  return;
}


