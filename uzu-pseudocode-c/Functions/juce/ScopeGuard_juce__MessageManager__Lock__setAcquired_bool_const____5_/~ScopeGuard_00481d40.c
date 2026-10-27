// Function : ~ScopeGuard
// Namespace: juce:ScopeGuard_juce__MessageManager__Lock__setAcquired_bool_const____5_
// Entry    : 00481d40
// Prototype: undefined ~ScopeGuard(void)
// Body     : 00481d40 - 00481d48


/* juce::ScopeGuard<juce::MessageManager::Lock::setAcquired(bool) const::$_5>::~ScopeGuard() */

void __thiscall
juce::ScopeGuard<juce::MessageManager::Lock::setAcquired(bool)const::$_5>::~ScopeGuard(void)

{
  std::condition_variable::notify_one();
  return;
}


