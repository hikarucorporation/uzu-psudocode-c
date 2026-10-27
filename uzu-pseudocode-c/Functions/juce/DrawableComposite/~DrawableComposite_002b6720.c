// Function : ~DrawableComposite
// Namespace: juce:DrawableComposite
// Entry    : 002b6720
// Prototype: undefined ~DrawableComposite(DrawableComposite * this)
// Body     : 002b6720 - 002b6731


/* juce::DrawableComposite::~DrawableComposite() */

void __thiscall juce::DrawableComposite::~DrawableComposite(DrawableComposite *this)

{
  ~DrawableComposite(this);
  operator_delete(this);
  return;
}


