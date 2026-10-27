// Function : plainParamToNormalized
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192760
// Prototype: undefined8 plainParamToNormalized(undefined8 param_1, EditController * this, undefined8 param_3)
// Body     : 00192760 - 0019278f


/* Steinberg::Vst::EditController::plainParamToNormalized(unsigned int, double) */

undefined8 __thiscall
Steinberg::Vst::EditController::plainParamToNormalized
          (undefined8 param_1,EditController *this,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x168))();
  if (plVar1 == (long *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00192787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0xb8))(param_1,plVar1);
  return uVar2;
}


