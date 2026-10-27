// Function : setProgramName
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193550
// Prototype: undefined8 setProgramName(EditControllerEx1 * this, int param_1, undefined4 param_2, undefined8 param_3)
// Body     : 00193550 - 001935c2


/* Steinberg::Vst::EditControllerEx1::setProgramName(int, int, char16_t const*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::setProgramName
          (EditControllerEx1 *this,int param_1,undefined4 param_2,undefined8 param_3)

{
  EditControllerEx1 *pEVar1;
  long *plVar2;
  EditControllerEx1 *pEVar3;
  undefined8 uVar4;
  EditControllerEx1 *pEVar5;
  EditControllerEx1 *pEVar6;
  
  pEVar3 = *(EditControllerEx1 **)(this + 0xd0);
  if (pEVar3 != (EditControllerEx1 *)0x0) {
    pEVar1 = this + 200;
    pEVar5 = pEVar1;
    do {
      pEVar6 = pEVar3 + 0x18;
      if (param_1 <= *(int *)(pEVar3 + 0x20)) {
        pEVar6 = pEVar3 + 0x10;
        pEVar5 = pEVar3;
      }
      pEVar3 = *(EditControllerEx1 **)pEVar6;
    } while (pEVar3 != (EditControllerEx1 *)0x0);
    if (pEVar5 != pEVar1) {
      if (param_1 < *(int *)(pEVar5 + 0x20)) {
        pEVar5 = pEVar1;
      }
      if (pEVar5 != pEVar1) {
        plVar2 = *(long **)(*(long *)(this + 0xa8) + *(long *)(pEVar5 + 0x28) * 8);
                    /* WARNING: Could not recover jumptable at 0x001935bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,param_2,param_3);
        return uVar4;
      }
    }
  }
  return 1;
}


