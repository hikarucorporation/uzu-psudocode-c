// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__DropShadower__VirtualDesktopWatcher_std__default_delete_juce__DropShadowe~863786cb
// Entry    : 002b9920
// Prototype: undefined ~unique_ptr(unique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>> * this)
// Body     : 002b9920 - 002b994d


/* std::unique_ptr<juce::DropShadower::VirtualDesktopWatcher,
   std::default_delete<juce::DropShadower::VirtualDesktopWatcher> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>>
::~unique_ptr(unique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>>
              *this)

{
  VirtualDesktopWatcher *this_00;
  
  this_00 = *(VirtualDesktopWatcher **)this;
  if (this_00 != (VirtualDesktopWatcher *)0x0) {
    juce::DropShadower::VirtualDesktopWatcher::~VirtualDesktopWatcher(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


