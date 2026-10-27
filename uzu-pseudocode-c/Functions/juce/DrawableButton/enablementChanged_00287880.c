// Function : enablementChanged
// Namespace: juce:DrawableButton
// Entry    : 00287880
// Prototype: undefined enablementChanged(DrawableButton * this)
// Body     : 00287880 - 002878a8


/* juce::DrawableButton::enablementChanged() */

void __thiscall juce::DrawableButton::enablementChanged(DrawableButton *this)

{
  Button::updateState((Button *)this);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
                    /* WARNING: Could not recover jumptable at 0x002878a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1c0))(this);
  return;
}


