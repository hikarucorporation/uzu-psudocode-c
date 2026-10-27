// Function : ~DrawableText
// Namespace: juce:DrawableText
// Entry    : 002af900
// Prototype: undefined ~DrawableText(DrawableText * this)
// Body     : 002af900 - 002af911


/* juce::DrawableText::~DrawableText() */

void __thiscall juce::DrawableText::~DrawableText(DrawableText *this)

{
  ~DrawableText(this);
  operator_delete(this);
  return;
}


