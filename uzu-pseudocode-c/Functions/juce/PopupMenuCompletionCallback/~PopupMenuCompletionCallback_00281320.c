// Function : ~PopupMenuCompletionCallback
// Namespace: juce:PopupMenuCompletionCallback
// Entry    : 00281320
// Prototype: undefined ~PopupMenuCompletionCallback(PopupMenuCompletionCallback * this)
// Body     : 00281320 - 0028133b


/* juce::PopupMenuCompletionCallback::~PopupMenuCompletionCallback() */

void __thiscall
juce::PopupMenuCompletionCallback::~PopupMenuCompletionCallback(PopupMenuCompletionCallback *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(this);
  return;
}


