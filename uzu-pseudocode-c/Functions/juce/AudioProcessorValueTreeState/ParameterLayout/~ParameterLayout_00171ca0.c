// Function : ~ParameterLayout
// Namespace: juce:AudioProcessorValueTreeState:ParameterLayout
// Entry    : 00171ca0
// Prototype: undefined ~ParameterLayout(ParameterLayout * this)
// Body     : 00171ca0 - 00171cfa


/* juce::AudioProcessorValueTreeState::ParameterLayout::~ParameterLayout() */

void __thiscall
juce::AudioProcessorValueTreeState::ParameterLayout::~ParameterLayout(ParameterLayout *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)this;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  operator_delete(plVar2);
  return;
}


