// Function : setParamNormalized
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192820
// Prototype: bool setParamNormalized(undefined8 param_1, long * param_2_00)
// Body     : 00192820 - 0019285b


/* WARNING: Unknown calling convention: __cdecl */
/* Steinberg::Vst::EditController::setParamNormalized(unsigned int, double) */

bool __cdecl Steinberg::Vst::EditController::setParamNormalized(undefined8 param_1,long *param_2_00)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2_00 + 0x168))();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x98))(param_1,plVar1);
  }
  return plVar1 == (long *)0x0;
}


