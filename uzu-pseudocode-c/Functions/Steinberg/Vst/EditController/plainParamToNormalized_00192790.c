// Function : plainParamToNormalized
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192790
// Prototype: undefined8 plainParamToNormalized(undefined8 param_1, EditController * this, undefined8 param_3)
// Body     : 00192790 - 001927c4


/* non-virtual thunk to Steinberg::Vst::EditController::plainParamToNormalized(unsigned int, double)
    */

undefined8 __thiscall
Steinberg::Vst::EditController::plainParamToNormalized
          (undefined8 param_1,EditController *this,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -0x30) + 0x168))(this + -0x30);
  if (plVar1 == (long *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x001927bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0xb8))(param_1,plVar1);
  return uVar2;
}


