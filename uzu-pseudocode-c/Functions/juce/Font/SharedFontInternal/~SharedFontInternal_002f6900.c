// Function : ~SharedFontInternal
// Namespace: juce:Font:SharedFontInternal
// Entry    : 002f6900
// Prototype: undefined ~SharedFontInternal(SharedFontInternal * this)
// Body     : 002f6900 - 002f6911


/* juce::Font::SharedFontInternal::~SharedFontInternal() */

void __thiscall juce::Font::SharedFontInternal::~SharedFontInternal(SharedFontInternal *this)

{
  ~SharedFontInternal(this);
  operator_delete(this);
  return;
}


