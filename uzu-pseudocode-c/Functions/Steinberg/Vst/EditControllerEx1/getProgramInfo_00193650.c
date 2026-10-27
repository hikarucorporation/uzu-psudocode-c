// Function : getProgramInfo
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193650
// Prototype: undefined8 getProgramInfo(EditControllerEx1 * this, int param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00193650 - 001936c7


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::getProgramInfo(int, int, char const*,
   char16_t*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::getProgramInfo
          (EditControllerEx1 *this,int param_1,undefined4 param_2,undefined8 param_3,
          undefined8 param_4)

{
  long *plVar1;
  EditControllerEx1 *pEVar2;
  undefined8 uVar3;
  EditControllerEx1 *pEVar4;
  EditControllerEx1 *pEVar5;
  EditControllerEx1 *pEVar6;
  
  pEVar2 = *(EditControllerEx1 **)(this + 0x48);
  if (pEVar2 != (EditControllerEx1 *)0x0) {
    pEVar5 = this + 0x40;
    pEVar6 = pEVar5;
    do {
      pEVar4 = pEVar2 + 0x18;
      if (param_1 <= *(int *)(pEVar2 + 0x20)) {
        pEVar4 = pEVar2 + 0x10;
        pEVar6 = pEVar2;
      }
      pEVar2 = *(EditControllerEx1 **)pEVar4;
    } while (pEVar2 != (EditControllerEx1 *)0x0);
    if (pEVar6 != pEVar5) {
      if (param_1 < *(int *)(pEVar6 + 0x20)) {
        pEVar6 = pEVar5;
      }
      if (pEVar6 != pEVar5) {
        plVar1 = *(long **)(*(long *)(this + 0x20) + *(long *)(pEVar6 + 0x28) * 8);
                    /* WARNING: Could not recover jumptable at 0x001936bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 1;
}


