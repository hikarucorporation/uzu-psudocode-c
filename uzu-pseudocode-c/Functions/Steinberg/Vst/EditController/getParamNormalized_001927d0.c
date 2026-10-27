// Function : getParamNormalized
// Namespace: Steinberg:Vst:EditController
// Entry    : 001927d0
// Prototype: undefined8 getParamNormalized(long * param_1)
// Body     : 001927d0 - 001927ed


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::EditController::getParamNormalized(unsigned int) */

undefined8 __cdecl Steinberg::Vst::EditController::getParamNormalized(long *param_1)

{
  undefined8 in_RAX;
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x168))();
  if (lVar1 == 0) {
    return in_RAX;
  }
  return in_RAX;
}


