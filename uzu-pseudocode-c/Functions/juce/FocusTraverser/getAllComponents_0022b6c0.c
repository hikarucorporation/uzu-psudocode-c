// Function : getAllComponents
// Namespace: juce:FocusTraverser
// Entry    : 0022b6c0
// Prototype: vector<juce::Component*,std::allocator<juce::Component*>> * getAllComponents(vector<juce::Component*,std::allocator<juce::Component*>> * param_1, long param_2, long param_3)
// Body     : 0022b6c0 - 0022b6f7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FocusTraverser::getAllComponents(juce::Component*) */

vector<juce::Component*,std::allocator<juce::Component*>> * __cdecl
juce::FocusTraverser::getAllComponents
          (vector<juce::Component*,std::allocator<juce::Component*>> *param_1,long param_2,
          long param_3)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 0022b6db to 0022b6ec has its CatchHandler @ 0022b6f8 */
  detail::FocusHelpers::findAllComponents
            (param_3,param_1,Component::isFocusContainer,*(int *)(param_2 + 8));
  return param_1;
}


