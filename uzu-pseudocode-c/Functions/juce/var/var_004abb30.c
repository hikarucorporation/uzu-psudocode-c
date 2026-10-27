// Function : var
// Namespace: juce:var
// Entry    : 004abb30
// Prototype: undefined var(undefined8 param_1, var * this)
// Body     : 004abb30 - 004abb3f


/* juce::var::var(double) */

void __thiscall juce::var::var(undefined8 param_1,var *this)

{
  *(undefined1 **)this = &Instance::attributesDouble;
  *(undefined8 *)(this + 8) = param_1;
  return;
}


