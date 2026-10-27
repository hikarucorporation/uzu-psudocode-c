// Function : getProgramName
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001934e0
// Prototype: undefined8 getProgramName(EditControllerEx1 * this, int param_1, undefined4 param_2, undefined8 param_3)
// Body     : 001934e0 - 0019354f


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::getProgramName(int, int, char16_t*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::getProgramName
          (EditControllerEx1 *this,int param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  EditControllerEx1 *pEVar2;
  undefined8 uVar3;
  EditControllerEx1 *pEVar4;
  EditControllerEx1 *pEVar5;
  EditControllerEx1 *pEVar6;
  
  pEVar2 = *(EditControllerEx1 **)(this + 0x48);
  if (pEVar2 != (EditControllerEx1 *)0x0) {
    pEVar4 = this + 0x40;
    pEVar5 = pEVar4;
    do {
      pEVar6 = pEVar2 + 0x18;
      if (param_1 <= *(int *)(pEVar2 + 0x20)) {
        pEVar6 = pEVar2 + 0x10;
        pEVar5 = pEVar2;
      }
      pEVar2 = *(EditControllerEx1 **)pEVar6;
    } while (pEVar2 != (EditControllerEx1 *)0x0);
    if (pEVar5 != pEVar4) {
      if (param_1 < *(int *)(pEVar5 + 0x20)) {
        pEVar5 = pEVar4;
      }
      if (pEVar5 != pEVar4) {
        plVar1 = *(long **)(*(long *)(this + 0x20) + *(long *)(pEVar5 + 0x28) * 8);
                    /* WARNING: Could not recover jumptable at 0x00193548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,param_2,param_3);
        return uVar3;
      }
    }
  }
  return 1;
}


