// Function : replaceColour
// Namespace: juce:DrawableText
// Entry    : 002b0ec0
// Prototype: bool replaceColour(DrawableText * this, int param_1, int param_2)
// Body     : 002b0ec0 - 002b0ef4


/* juce::DrawableText::replaceColour(juce::Colour, juce::Colour) */

bool __thiscall juce::DrawableText::replaceColour(DrawableText *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x199);
  if ((iVar1 == param_1) && (param_1 != param_2)) {
    *(int *)(this + 0x199) = param_2;
    Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  }
  return iVar1 == param_1;
}


