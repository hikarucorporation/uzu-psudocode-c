// Function : getParameterInfoByTag
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192a30
// Prototype: bool getParameterInfoByTag(EditController * this, undefined8 param_2_00, void * param_2)
// Body     : 00192a30 - 00192a73


/* Steinberg::Vst::EditController::getParameterInfoByTag(unsigned int,
   Steinberg::Vst::ParameterInfo&) */

bool __thiscall
Steinberg::Vst::EditController::getParameterInfoByTag
          (EditController *this,undefined8 param_2_00,void *param_2)

{
  long *plVar1;
  void *__src;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x168))();
  if (plVar1 != (long *)0x0) {
    __src = (void *)(**(code **)(*plVar1 + 0x80))(plVar1);
    memcpy(param_2,__src,0x318);
  }
  return plVar1 == (long *)0x0;
}


