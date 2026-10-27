// Function : ~ReferenceCountedObjectPtr
// Namespace: juce:ReferenceCountedObjectPtr_juce__PopupMenu__CustomComponent_
// Entry    : 0027bad0
// Prototype: undefined ~ReferenceCountedObjectPtr(ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent> * this)
// Body     : 0027bad0 - 0027bae4


/* juce::ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent>::~ReferenceCountedObjectPtr()
    */

void __thiscall
juce::ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent>::~ReferenceCountedObjectPtr
          (ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent> *this)

{
  ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent> *pRVar1;
  
  if (this != (ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent> *)0x0) {
    pRVar1 = this + 0xf8;
    *(int *)pRVar1 = *(int *)pRVar1 + -1;
    if (*(int *)pRVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0027bae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


