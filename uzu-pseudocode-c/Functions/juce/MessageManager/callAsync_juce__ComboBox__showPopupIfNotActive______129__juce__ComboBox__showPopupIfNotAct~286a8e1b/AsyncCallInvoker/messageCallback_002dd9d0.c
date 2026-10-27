// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_juce__ComboBox__showPopupIfNotActive______129__juce__ComboBox__showPopupIfNotAct~286a8e1b:AsyncCallInvoker
// Entry    : 002dd9d0
// Prototype: undefined8 messageCallback(AsyncCallInvoker * this)
// Body     : 002dd9d0 - 002dda06


/* messageCallback() */

undefined8 __thiscall
juce::MessageManager::
callAsync<juce::ComboBox::showPopupIfNotActive()::$_129>(juce::ComboBox::showPopupIfNotActive()::$_129&&)
::AsyncCallInvoker::messageCallback(AsyncCallInvoker *this)

{
  long lVar1;
  undefined8 in_RAX;
  long *plVar2;
  undefined8 uVar3;
  
  if ((*(long *)(this + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(this + 0x10) + 0x10), lVar1 == 0)) {
    return in_RAX;
  }
  plVar2 = (long *)__dynamic_cast(lVar1,&Component::typeinfo,&ComboBox::typeinfo,0);
                    /* WARNING: Could not recover jumptable at 0x002dd9ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x198))(plVar2);
  return uVar3;
}


