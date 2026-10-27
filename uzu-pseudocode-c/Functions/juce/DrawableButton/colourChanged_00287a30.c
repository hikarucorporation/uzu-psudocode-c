// Function : colourChanged
// Namespace: juce:DrawableButton
// Entry    : 00287a30
// Prototype: undefined colourChanged(DrawableButton * this)
// Body     : 00287a30 - 00287a3f


/* juce::DrawableButton::colourChanged() */

void __thiscall juce::DrawableButton::colourChanged(DrawableButton *this)

{
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


