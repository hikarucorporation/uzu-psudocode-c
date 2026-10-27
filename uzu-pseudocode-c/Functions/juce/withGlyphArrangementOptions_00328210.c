// Function : withGlyphArrangementOptions
// Namespace: juce
// Entry    : 00328210
// Prototype: undefined withGlyphArrangementOptions(juce * this, undefined8 * param_1, undefined4 * param_2)
// Body     : 00328210 - 003282db


/* juce::withGlyphArrangementOptions(juce::detail::ShapedTextOptions const&,
   juce::GlyphArrangementOptions const&) */

void __thiscall
juce::withGlyphArrangementOptions(juce *this,undefined8 *param_1,undefined4 *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 local_90 [5];
  void *local_68;
  long *local_50;
  long *local_48;
  long local_20;
  
  detail::ShapedTextOptions::withAdditiveLineSpacing(*param_2,local_90,param_1);
                    /* try { // try from 00328238 to 00328242 has its CatchHandler @ 003282dc */
  detail::ShapedTextOptions::withLeading(param_2[1],(undefined8 *)this,local_90);
  piVar5 = (int *)(local_20 + -0x10);
  plVar4 = local_50;
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
      plVar4 = local_50;
    }
  }
  for (; plVar4 != local_48; plVar4 = plVar4 + 1) {
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (local_50 != (long *)0x0) {
    operator_delete(local_50);
  }
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  return;
}


