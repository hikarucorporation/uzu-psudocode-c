// Function : ~PopupMenuCompletionCallback
// Namespace: juce:PopupMenuCompletionCallback
// Entry    : 00281300
// Prototype: undefined ~PopupMenuCompletionCallback(PopupMenuCompletionCallback * this)
// Body     : 00281300 - 0028131c


/* juce::PopupMenuCompletionCallback::~PopupMenuCompletionCallback() */

void __thiscall
juce::PopupMenuCompletionCallback::~PopupMenuCompletionCallback(PopupMenuCompletionCallback *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


