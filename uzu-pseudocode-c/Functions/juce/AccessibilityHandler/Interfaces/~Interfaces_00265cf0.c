// Function : ~Interfaces
// Namespace: juce:AccessibilityHandler:Interfaces
// Entry    : 00265cf0
// Prototype: undefined ~Interfaces(Interfaces * this)
// Body     : 00265cf0 - 00265d4f


/* juce::AccessibilityHandler::Interfaces::~Interfaces() */

void __thiscall juce::AccessibilityHandler::Interfaces::~Interfaces(Interfaces *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


