// Function : getParamStringByValue
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192610
// Prototype: bool getParamStringByValue(undefined8 param_1, EditController * this, undefined8 param_3_00, undefined8 param_4)
// Body     : 00192610 - 00192655


/* non-virtual thunk to Steinberg::Vst::EditController::getParamStringByValue(unsigned int, double,
   char16_t*) */

bool __thiscall
Steinberg::Vst::EditController::getParamStringByValue
          (undefined8 param_1,EditController *this,undefined8 param_3_00,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -0x30) + 0x168))(this + -0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xa0))(param_1,plVar1,param_4);
  }
  return plVar1 == (long *)0x0;
}


