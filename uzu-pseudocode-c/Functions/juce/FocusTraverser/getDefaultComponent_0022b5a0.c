// Function : getDefaultComponent
// Namespace: juce:FocusTraverser
// Entry    : 0022b5a0
// Prototype: undefined8 getDefaultComponent(FocusTraverser * this, long param_1)
// Body     : 0022b5a0 - 0022b602


/* juce::FocusTraverser::getDefaultComponent(juce::Component*) */

undefined8 __thiscall juce::FocusTraverser::getDefaultComponent(FocusTraverser *this,long param_1)

{
  undefined8 uVar1;
  undefined8 *local_28;
  undefined8 *puStack_20;
  undefined8 local_18;
  
  if (param_1 != 0) {
    local_28 = (undefined8 *)0x0;
    puStack_20 = (undefined8 *)0x0;
    local_18 = 0;
                    /* try { // try from 0022b5bd to 0022b5d1 has its CatchHandler @ 0022b603 */
    detail::FocusHelpers::findAllComponents
              (param_1,(vector<juce::Component*,std::allocator<juce::Component*>> *)&local_28,
               Component::isFocusContainer,*(int *)(this + 8));
    if (local_28 != puStack_20) {
      uVar1 = *local_28;
      operator_delete(local_28);
      return uVar1;
    }
    if (local_28 != (undefined8 *)0x0) {
      operator_delete(local_28);
    }
  }
  return 0;
}


