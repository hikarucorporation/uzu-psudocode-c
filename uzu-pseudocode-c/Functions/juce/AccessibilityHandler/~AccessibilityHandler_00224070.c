// Function : ~AccessibilityHandler
// Namespace: juce:AccessibilityHandler
// Entry    : 00224070
// Prototype: undefined ~AccessibilityHandler(AccessibilityHandler * this)
// Body     : 00224070 - 0022412c


/* juce::AccessibilityHandler::~AccessibilityHandler() */

void __thiscall juce::AccessibilityHandler::~AccessibilityHandler(AccessibilityHandler *this)

{
  AccessibilityHandler *pAVar1;
  
  *(undefined ***)this = &PTR__AccessibilityHandler_00706fc8;
  pAVar1 = currentlyFocusedHandler;
  if (currentlyFocusedHandler != (AccessibilityHandler *)0x0) {
    for (; pAVar1 != this; pAVar1 = getParent(*(AccessibilityHandler **)(pAVar1 + 8))) {
      if (pAVar1 == (AccessibilityHandler *)0x0) goto LAB_002240b0;
                    /* try { // try from 0022409e to 002240a2 has its CatchHandler @ 00224135 */
    }
    currentlyFocusedHandler = (AccessibilityHandler *)0x0;
  }
LAB_002240b0:
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  *(undefined8 *)(this + 0x58) = 0;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
                    /* try { // try from 00224126 to 0022412a has its CatchHandler @ 0022412d */
  std::
  _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
  ::_M_erase(*(void **)(this + 0x30));
  return;
}


