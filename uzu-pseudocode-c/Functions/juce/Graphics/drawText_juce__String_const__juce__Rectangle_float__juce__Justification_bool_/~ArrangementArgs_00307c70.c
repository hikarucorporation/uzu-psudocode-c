// Function : ~ArrangementArgs
// Namespace: juce:Graphics:drawText_juce__String_const__juce__Rectangle_float__juce__Justification_bool_
// Entry    : 00307c70
// Prototype: undefined ~ArrangementArgs(drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool) * this)
// Body     : 00307c70 - 00307cb9


/* ~ArrangementArgs() */

void __thiscall
juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)::
~ArrangementArgs(drawText_juce__String_const__juce__Rectangle<float>_juce__Justification_bool_ *this
                )

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
      plVar3 = *(long **)this;
      goto joined_r0x00307cb6;
    }
  }
  plVar3 = *(long **)this;
joined_r0x00307cb6:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00307ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


