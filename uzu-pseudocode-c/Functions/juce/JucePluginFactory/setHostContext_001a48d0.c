// Function : setHostContext
// Namespace: juce:JucePluginFactory
// Entry    : 001a48d0
// Prototype: undefined8 setHostContext(JucePluginFactory * this, undefined8 * param_1)
// Body     : 001a48d0 - 001a4980


/* juce::JucePluginFactory::setHostContext(Steinberg::FUnknown*) */

undefined8 __thiscall
juce::JucePluginFactory::setHostContext(JucePluginFactory *this,undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_118 [264];
  
  plVar1 = *(long **)(this + 0x1d0);
  *(undefined8 *)(this + 0x1d0) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a48fa to 001a48fc has its CatchHandler @ 001a4989 */
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0x71b1c8,this + 0x1d0);
  }
  plVar1 = *(long **)(this + 0x1d8);
  *(undefined8 *)(this + 0x1d8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a4932 to 001a4934 has its CatchHandler @ 001a4981 */
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0x71ac80,this + 0x1d8);
  }
  plVar1 = *(long **)(this + 0x1d8);
  if (plVar1 == (long *)0x0) {
    return 3;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_118);
  return 0;
}


