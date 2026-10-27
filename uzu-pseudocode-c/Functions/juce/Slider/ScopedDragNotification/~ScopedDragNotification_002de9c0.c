// Function : ~ScopedDragNotification
// Namespace: juce:Slider:ScopedDragNotification
// Entry    : 002de9c0
// Prototype: undefined8 ~ScopedDragNotification(ScopedDragNotification * this)
// Body     : 002de9c0 - 002de9cc


/* juce::Slider::ScopedDragNotification::~ScopedDragNotification() */

undefined8 __thiscall
juce::Slider::ScopedDragNotification::~ScopedDragNotification(ScopedDragNotification *this)

{
  undefined8 in_RAX;
  
  if (this != (ScopedDragNotification *)0x0) {
                    /* try { // try from 002de9c6 to 002de9ca has its CatchHandler @ 002de9cd */
    Pimpl::sendDragEnd((Pimpl *)this);
  }
  return in_RAX;
}


