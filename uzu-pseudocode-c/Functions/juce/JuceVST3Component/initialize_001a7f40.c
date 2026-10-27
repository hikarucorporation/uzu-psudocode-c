// Function : initialize
// Namespace: juce:JuceVST3Component
// Entry    : 001a7f40
// Prototype: undefined8 initialize(JuceVST3Component * this, long * param_1)
// Body     : 001a7f40 - 001a7fa8


/* juce::JuceVST3Component::initialize(Steinberg::FUnknown*) */

undefined8 __thiscall juce::JuceVST3Component::initialize(JuceVST3Component *this,long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x70);
  if (plVar1 != param_1) {
    *(undefined8 *)(this + 0x70) = 0;
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a7f67 to 001a7f69 has its CatchHandler @ 001a7fa9 */
      (**(code **)(*plVar1 + 0x10))();
    }
    if (param_1 != (long *)0x0) {
      (**(code **)*param_1)(param_1,0x71ac80,this + 0x70);
    }
  }
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x108);
  preparePlugin(*(undefined8 *)(this + 0x108),this,*(int *)(this + 0x100),0);
  return 0;
}


