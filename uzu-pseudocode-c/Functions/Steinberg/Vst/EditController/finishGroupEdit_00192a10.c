// Function : finishGroupEdit
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192a10
// Prototype: undefined8 finishGroupEdit(EditController * this)
// Body     : 00192a10 - 00192a24


/* Steinberg::Vst::EditController::finishGroupEdit() */

undefined8 __thiscall Steinberg::Vst::EditController::finishGroupEdit(EditController *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x48) == (long *)0x0) {
    return 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00192a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(this + 0x48) + 0x30))();
  return uVar1;
}


