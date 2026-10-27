// Function : initialize
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3890
// Prototype: undefined8 initialize(JuceVST3EditController * this, long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 001b3890 - 001b38db


/* juce::JuceVST3EditController::initialize(Steinberg::FUnknown*) */

undefined8 __thiscall
juce::JuceVST3EditController::initialize
          (JuceVST3EditController *this,long *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      param_2 = extraout_RDX;
    }
    *(long **)(this + 0x20) = param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_2 = extraout_RDX_00;
    }
  }
  uVar2 = isBlueCatHost(this,param_1,param_2,param_3,param_4,param_5);
  this[0x62b8] = (JuceVST3EditController)((byte)this[0x62b8] | (byte)uVar2);
  return 0;
}


