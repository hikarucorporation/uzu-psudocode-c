// Function : hasProgramPitchNames
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001936d0
// Prototype: undefined8 hasProgramPitchNames(EditControllerEx1 * this, int param_1, undefined4 param_2)
// Body     : 001936d0 - 0019373f


/* Steinberg::Vst::EditControllerEx1::hasProgramPitchNames(int, int) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::hasProgramPitchNames
          (EditControllerEx1 *this,int param_1,undefined4 param_2)

{
  EditControllerEx1 *pEVar1;
  long *plVar2;
  EditControllerEx1 *pEVar3;
  undefined8 uVar4;
  EditControllerEx1 *pEVar5;
  EditControllerEx1 *pEVar6;
  
  pEVar5 = *(EditControllerEx1 **)(this + 0xd0);
  if (pEVar5 != (EditControllerEx1 *)0x0) {
    pEVar1 = this + 200;
    pEVar6 = pEVar1;
    do {
      pEVar3 = pEVar5 + 0x18;
      if (param_1 <= *(int *)(pEVar5 + 0x20)) {
        pEVar3 = pEVar5 + 0x10;
        pEVar6 = pEVar5;
      }
      pEVar5 = *(EditControllerEx1 **)pEVar3;
    } while (pEVar5 != (EditControllerEx1 *)0x0);
    if (pEVar6 != pEVar1) {
      if (param_1 < *(int *)(pEVar6 + 0x20)) {
        pEVar6 = pEVar1;
      }
      if (pEVar6 != pEVar1) {
        plVar2 = *(long **)(*(long *)(this + 0xa8) + *(long *)(pEVar6 + 0x28) * 8);
                    /* WARNING: Could not recover jumptable at 0x00193738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
        return uVar4;
      }
    }
  }
  return 1;
}


