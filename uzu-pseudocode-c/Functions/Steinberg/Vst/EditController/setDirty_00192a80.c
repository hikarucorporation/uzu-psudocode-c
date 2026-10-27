// Function : setDirty
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192a80
// Prototype: undefined8 setDirty(EditController * this, undefined1 param_1)
// Body     : 00192a80 - 00192a9b


/* Steinberg::Vst::EditController::setDirty(unsigned char) */

undefined8 __thiscall
Steinberg::Vst::EditController::setDirty(EditController *this,undefined1 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x48);
  if (plVar1 == (long *)0x0) {
    return 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00192a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  return uVar2;
}


