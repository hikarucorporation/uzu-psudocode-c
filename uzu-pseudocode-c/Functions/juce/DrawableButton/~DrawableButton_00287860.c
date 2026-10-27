// Function : ~DrawableButton
// Namespace: juce:DrawableButton
// Entry    : 00287860
// Prototype: undefined ~DrawableButton(DrawableButton * this)
// Body     : 00287860 - 00287871


/* juce::DrawableButton::~DrawableButton() */

void __thiscall juce::DrawableButton::~DrawableButton(DrawableButton *this)

{
  ~DrawableButton(this);
  operator_delete(this);
  return;
}


