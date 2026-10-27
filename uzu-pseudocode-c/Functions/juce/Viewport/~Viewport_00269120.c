// Function : ~Viewport
// Namespace: juce:Viewport
// Entry    : 00269120
// Prototype: undefined ~Viewport(Viewport * this)
// Body     : 00269120 - 00269131


/* juce::Viewport::~Viewport() */

void __thiscall juce::Viewport::~Viewport(Viewport *this)

{
  ~Viewport(this);
  operator_delete(this);
  return;
}


