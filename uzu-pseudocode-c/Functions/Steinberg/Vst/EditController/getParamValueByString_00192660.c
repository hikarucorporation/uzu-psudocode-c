// Function : getParamValueByString
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192660
// Prototype: undefined8 getParamValueByString(EditController * this, undefined8 param_2_00, undefined8 param_2, undefined8 param_3)
// Body     : 00192660 - 0019269e


/* Steinberg::Vst::EditController::getParamValueByString(unsigned int, char16_t*, double&) */

undefined8 __thiscall
Steinberg::Vst::EditController::getParamValueByString
          (EditController *this,undefined8 param_2_00,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*(long *)this + 0x168))();
  if ((plVar2 == (long *)0x0) ||
     (cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}


