// Function : startGroupEdit
// Namespace: Steinberg:Vst:EditController
// Entry    : 001929f0
// Prototype: undefined8 startGroupEdit(EditController * this)
// Body     : 001929f0 - 00192a04


/* Steinberg::Vst::EditController::startGroupEdit() */

undefined8 __thiscall Steinberg::Vst::EditController::startGroupEdit(EditController *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x48) == (long *)0x0) {
    return 3;
  }
                    /* WARNING: Could not recover jumptable at 0x001929fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(this + 0x48) + 0x28))();
  return uVar1;
}


