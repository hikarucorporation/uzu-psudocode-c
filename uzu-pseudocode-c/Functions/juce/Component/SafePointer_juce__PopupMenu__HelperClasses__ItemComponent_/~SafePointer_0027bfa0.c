// Function : ~SafePointer
// Namespace: juce:Component:SafePointer_juce__PopupMenu__HelperClasses__ItemComponent_
// Entry    : 0027bfa0
// Prototype: undefined ~SafePointer(SafePointer<juce::PopupMenu::HelperClasses::ItemComponent> * this)
// Body     : 0027bfa0 - 0027bfb2


/* juce::Component::SafePointer<juce::PopupMenu::HelperClasses::ItemComponent>::~SafePointer() */

void __thiscall
juce::Component::SafePointer<juce::PopupMenu::HelperClasses::ItemComponent>::~SafePointer
          (SafePointer<juce::PopupMenu::HelperClasses::ItemComponent> *this)

{
  SafePointer<juce::PopupMenu::HelperClasses::ItemComponent> *pSVar1;
  
  if (this != (SafePointer<juce::PopupMenu::HelperClasses::ItemComponent> *)0x0) {
    LOCK();
    pSVar1 = this + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0027bfaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


