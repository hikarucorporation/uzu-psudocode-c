// Function : ~DrawableButton
// Namespace: juce:DrawableButton
// Entry    : 00287750
// Prototype: undefined ~DrawableButton(DrawableButton * this)
// Body     : 00287750 - 0028785c


/* juce::DrawableButton::~DrawableButton() */

void __thiscall juce::DrawableButton::~DrawableButton(DrawableButton *this)

{
  *(undefined ***)this = &PTR__DrawableButton_00707240;
  *(undefined ***)(this + 0xf0) = &PTR__DrawableButton_00707428;
  if (*(long **)(this + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x238) + 8))();
  }
  *(undefined8 *)(this + 0x238) = 0;
  if (*(long **)(this + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x230) + 8))();
  }
  *(undefined8 *)(this + 0x230) = 0;
  if (*(long **)(this + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x228) + 8))();
  }
  *(undefined8 *)(this + 0x228) = 0;
  if (*(long **)(this + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x220) + 8))();
  }
  *(undefined8 *)(this + 0x220) = 0;
  if (*(long **)(this + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x218) + 8))();
  }
  *(undefined8 *)(this + 0x218) = 0;
  if (*(long **)(this + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x210) + 8))();
  }
  *(undefined8 *)(this + 0x210) = 0;
  if (*(long **)(this + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x208) + 8))();
  }
  *(undefined8 *)(this + 0x208) = 0;
  if (*(long **)(this + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 8))();
  }
  *(undefined8 *)(this + 0x200) = 0;
  Button::~Button((Button *)this);
  return;
}


