// Function : ~ArrangementArgs
// Namespace: juce:Graphics:drawFittedText_juce__String_const__juce__Rectangle_int__juce__Justification_int_float_juce~30c09f54
// Entry    : 003281c0
// Prototype: undefined ~ArrangementArgs(drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions) * this)
// Body     : 003281c0 - 00328209


/* ~ArrangementArgs() */

void __thiscall
juce::Graphics::
drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)
::~ArrangementArgs(drawFittedText_juce__String_const__juce__Rectangle<int>_juce__Justification_int_float_juce__GlyphArrangementOptions_
                   *this)

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
      goto joined_r0x00328206;
    }
  }
  plVar3 = *(long **)this;
joined_r0x00328206:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003281f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


