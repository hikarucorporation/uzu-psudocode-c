// Function : ~DrawablePath
// Namespace: juce:DrawablePath
// Entry    : 00286890
// Prototype: undefined ~DrawablePath(DrawablePath * this)
// Body     : 00286890 - 002868a1


/* juce::DrawablePath::~DrawablePath() */

void __thiscall juce::DrawablePath::~DrawablePath(DrawablePath *this)

{
  DrawableShape::~DrawableShape((DrawableShape *)this);
  operator_delete(this);
  return;
}


