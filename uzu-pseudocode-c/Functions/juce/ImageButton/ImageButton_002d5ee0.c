// Function : ImageButton
// Namespace: juce:ImageButton
// Entry    : 002d5ee0
// Prototype: undefined ImageButton(ImageButton * this, long * param_1)
// Body     : 002d5ee0 - 002d5f43


/* juce::ImageButton::ImageButton(juce::String const&) */

void __thiscall juce::ImageButton::ImageButton(ImageButton *this,long *param_1)

{
  Button::Button((Button *)this,param_1);
  *(undefined ***)this = &PTR__ImageButton_00707458;
  *(undefined ***)(this + 0xf0) = &PTR__ImageButton_00707638;
  *(undefined2 *)(this + 0x1f8) = 0x101;
  this[0x1fa] = (ImageButton)0x0;
  *(undefined8 *)(this + 0x1fc) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  return;
}


