// Function : RangedValues
// Namespace: juce:detail:RangedValues_juce__Font_
// Entry    : 0023ffa0
// Prototype: undefined RangedValues(RangedValues<juce::Font> * this, long * param_1)
// Body     : 0023ffa0 - 002400b2


/* juce::detail::RangedValues<juce::Font>::RangedValues(juce::detail::RangedValues<juce::Font>
   const&) */

void __thiscall
juce::detail::RangedValues<juce::Font>::RangedValues(RangedValues<juce::Font> *this,long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar12 = lVar1 - lVar2 >> 4;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar1 - lVar2 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12;
    if (SUB168(auVar5 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_array_new_length();
    }
    puVar8 = operator_new(SUB168(auVar5 * ZEXT816(0x10),0));
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + uVar12 * 2;
  puVar3 = (undefined8 *)param_1[1];
  for (puVar10 = (undefined8 *)*param_1; puVar10 != puVar3; puVar10 = puVar10 + 2) {
    uVar7 = puVar10[1];
    *puVar8 = *puVar10;
    puVar8[1] = uVar7;
    puVar8 = puVar8 + 2;
  }
  *(undefined8 **)(this + 8) = puVar8;
  lVar1 = param_1[4];
  lVar2 = param_1[3];
  uVar12 = lVar1 - lVar2 >> 3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (lVar1 - lVar2 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002400ae to 002400b2 has its CatchHandler @ 002400b3 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00240058 to 0024005f has its CatchHandler @ 002400b3 */
    plVar9 = operator_new(SUB168(auVar6 * ZEXT816(8),0));
  }
  *(long **)(this + 0x18) = plVar9;
  *(long **)(this + 0x20) = plVar9;
  *(long **)(this + 0x28) = plVar9 + uVar12;
  plVar4 = (long *)param_1[4];
  for (plVar11 = (long *)param_1[3]; plVar11 != plVar4; plVar11 = plVar11 + 1) {
    lVar1 = *plVar11;
    *plVar9 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    plVar9 = plVar9 + 1;
  }
  *(long **)(this + 0x20) = plVar9;
  return;
}


