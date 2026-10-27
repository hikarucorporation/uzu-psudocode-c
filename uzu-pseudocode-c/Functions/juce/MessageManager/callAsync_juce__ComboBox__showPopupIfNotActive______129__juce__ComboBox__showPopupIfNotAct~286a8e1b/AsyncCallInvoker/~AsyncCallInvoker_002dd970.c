// Function : ~AsyncCallInvoker
// Namespace: juce:MessageManager:callAsync_juce__ComboBox__showPopupIfNotActive______129__juce__ComboBox__showPopupIfNotAct~286a8e1b:AsyncCallInvoker
// Entry    : 002dd970
// Prototype: undefined ~AsyncCallInvoker(AsyncCallInvoker * this)
// Body     : 002dd970 - 002dd995


/* ~AsyncCallInvoker() */

void __thiscall
juce::MessageManager::
callAsync<juce::ComboBox::showPopupIfNotActive()::$_129>(juce::ComboBox::showPopupIfNotActive()::$_129&&)
::AsyncCallInvoker::~AsyncCallInvoker(AsyncCallInvoker *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


