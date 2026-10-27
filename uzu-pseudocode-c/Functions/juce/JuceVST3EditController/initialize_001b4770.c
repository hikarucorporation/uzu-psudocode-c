// Function : initialize
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4770
// Prototype: undefined8 initialize(JuceVST3EditController * this, long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 001b4770 - 001b47be


/* non-virtual thunk to juce::JuceVST3EditController::initialize(Steinberg::FUnknown*) */

undefined8 __thiscall
juce::JuceVST3EditController::initialize
          (JuceVST3EditController *this,long *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      param_2 = extraout_RDX;
    }
    *(long **)(this + 0x10) = param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_2 = extraout_RDX_00;
    }
  }
  uVar2 = isBlueCatHost(this + -0x10,param_1,param_2,param_3,param_4,param_5);
  this[0x62a8] = (JuceVST3EditController)((byte)this[0x62a8] | (byte)uVar2);
  return 0;
}


