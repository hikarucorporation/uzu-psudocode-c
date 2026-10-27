// Function : setComponentHandler
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3c40
// Prototype: undefined8 setComponentHandler(JuceVST3EditController * this, long * param_1)
// Body     : 001b3c40 - 001b3cd7


/* juce::JuceVST3EditController::setComponentHandler(Steinberg::Vst::IComponentHandler*) */

undefined8 __thiscall
juce::JuceVST3EditController::setComponentHandler(JuceVST3EditController *this,long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x40);
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(long **)(this + 0x40) = param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    if (*(long **)(this + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x48) + 0x10))();
    }
    *(undefined8 *)(this + 0x48) = 0;
    if (param_1 != (long *)0x0) {
      (**(code **)*param_1)(param_1,0x71aca0,this + 0x48);
    }
  }
  if (*(long *)(this + 0xe8) != 0) {
    plVar1 = (long *)(**(code **)(**(long **)(*(long *)(this + 0xe8) + 0xd8) + 0x170))();
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(this + 0x40));
    }
  }
  return 0;
}


