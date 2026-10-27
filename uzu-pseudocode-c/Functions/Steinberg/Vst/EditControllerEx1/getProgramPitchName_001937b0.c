// Function : getProgramPitchName
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001937b0
// Prototype: undefined8 getProgramPitchName(EditControllerEx1 * this, int param_1, undefined4 param_2, short param_3, undefined8 param_4)
// Body     : 001937b0 - 0019382a


/* Steinberg::Vst::EditControllerEx1::getProgramPitchName(int, int, short, char16_t*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::getProgramPitchName
          (EditControllerEx1 *this,int param_1,undefined4 param_2,short param_3,undefined8 param_4)

{
  EditControllerEx1 *pEVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  EditControllerEx1 *pEVar3;
  undefined8 uVar4;
  EditControllerEx1 *pEVar5;
  EditControllerEx1 *pEVar6;
  
  pEVar3 = *(EditControllerEx1 **)(this + 0xd0);
  if (pEVar3 != (EditControllerEx1 *)0x0) {
    pEVar1 = this + 200;
    pEVar6 = pEVar1;
    do {
      pEVar5 = pEVar3 + 0x18;
      if (param_1 <= *(int *)(pEVar3 + 0x20)) {
        pEVar5 = pEVar3 + 0x10;
        pEVar6 = pEVar3;
      }
      pEVar3 = *(EditControllerEx1 **)pEVar5;
    } while (pEVar3 != (EditControllerEx1 *)0x0);
    if (pEVar6 != pEVar1) {
      if (param_1 < *(int *)(pEVar6 + 0x20)) {
        pEVar6 = pEVar1;
      }
      if (pEVar6 != pEVar1) {
        plVar2 = *(long **)(*(long *)(this + 0xa8) + *(long *)(pEVar6 + 0x28) * 8);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00193821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)
                          (plVar2,param_2,(int)param_3,param_4,param_4,UNRECOVERED_JUMPTABLE);
        return uVar4;
      }
    }
  }
  return 1;
}


