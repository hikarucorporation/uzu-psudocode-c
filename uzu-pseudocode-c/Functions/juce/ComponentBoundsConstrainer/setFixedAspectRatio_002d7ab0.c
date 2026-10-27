// Function : setFixedAspectRatio
// Namespace: juce:ComponentBoundsConstrainer
// Entry    : 002d7ab0
// Prototype: undefined setFixedAspectRatio(double param_1, ComponentBoundsConstrainer * this)
// Body     : 002d7ab0 - 002d7abd


/* juce::ComponentBoundsConstrainer::setFixedAspectRatio(double) */

void __thiscall
juce::ComponentBoundsConstrainer::setFixedAspectRatio
          (double param_1,ComponentBoundsConstrainer *this)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(double *)(this + 0x28) = param_1;
  return;
}


