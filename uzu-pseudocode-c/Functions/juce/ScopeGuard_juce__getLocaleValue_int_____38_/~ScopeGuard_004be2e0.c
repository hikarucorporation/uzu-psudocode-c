// Function : ~ScopeGuard
// Namespace: juce:ScopeGuard_juce__getLocaleValue_int_____38_
// Entry    : 004be2e0
// Prototype: undefined ~ScopeGuard(ScopeGuard<juce::getLocaleValue(int)::$_38> * this)
// Body     : 004be2e0 - 004be318


/* juce::ScopeGuard<juce::getLocaleValue(int)::$_38>::~ScopeGuard() */

void __thiscall
juce::ScopeGuard<juce::getLocaleValue(int)::$_38>::~ScopeGuard
          (ScopeGuard<juce::getLocaleValue(int)::__38> *this)

{
  int iVar1;
  int *piVar2;
  
  setlocale(6,*(char **)this);
  piVar2 = (int *)(*(long *)this + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


