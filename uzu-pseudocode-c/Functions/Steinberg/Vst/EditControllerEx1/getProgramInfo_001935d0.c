// Function : getProgramInfo
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001935d0
// Prototype: undefined8 getProgramInfo(EditControllerEx1 * this, int param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 001935d0 - 00193647


/* Steinberg::Vst::EditControllerEx1::getProgramInfo(int, int, char const*, char16_t*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::getProgramInfo
          (EditControllerEx1 *this,int param_1,undefined4 param_2,undefined8 param_3,
          undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0019363f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2,param_3,param_4);
        return uVar4;
      }
    }
  }
  return 1;
}


