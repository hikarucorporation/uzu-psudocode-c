// Function : applyBoundsToComponent
// Namespace: juce:ComponentBoundsConstrainer
// Entry    : 0028ea70
// Prototype: undefined applyBoundsToComponent(undefined8 param_1, Component * param_2, undefined8 param_3, undefined8 param_4)
// Body     : 0028ea70 - 0028eab4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComponentBoundsConstrainer::applyBoundsToComponent(juce::Component&, juce::Rectangle<int>)
    */

void __cdecl
juce::ComponentBoundsConstrainer::applyBoundsToComponent
          (undefined8 param_1,Component *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  plVar1 = *(long **)(param_2 + 0x48);
  local_10 = param_3;
  local_8 = param_4;
  if (plVar1 == (long *)0x0) {
    Component::setBounds
              (param_2,(int)param_3,(int)((ulong)param_3 >> 0x20),(int)param_4,
               (int)((ulong)param_4 >> 0x20));
    return;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_10);
  return;
}


