// Function : getProgramList
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193290
// Prototype: long * getProgramList(EditControllerEx1 * this, int param_1)
// Body     : 00193290 - 0019330d


/* Steinberg::Vst::EditControllerEx1::getProgramList(int) const */

long * __thiscall
Steinberg::Vst::EditControllerEx1::getProgramList(EditControllerEx1 *this,int param_1)

{
  EditControllerEx1 *pEVar1;
  long *plVar2;
  EditControllerEx1 *pEVar3;
  EditControllerEx1 *pEVar4;
  EditControllerEx1 *pEVar5;
  
  pEVar5 = *(EditControllerEx1 **)(this + 0xd0);
  if (pEVar5 != (EditControllerEx1 *)0x0) {
    pEVar1 = this + 200;
    pEVar4 = pEVar1;
    do {
      pEVar3 = pEVar5 + 0x18;
      if (param_1 <= *(int *)(pEVar5 + 0x20)) {
        pEVar3 = pEVar5 + 0x10;
        pEVar4 = pEVar5;
      }
      pEVar5 = *(EditControllerEx1 **)pEVar3;
    } while (pEVar5 != (EditControllerEx1 *)0x0);
    if (pEVar4 != pEVar1) {
      if (param_1 < *(int *)(pEVar4 + 0x20)) {
        pEVar4 = pEVar1;
      }
      if ((pEVar4 != pEVar1) &&
         (plVar2 = *(long **)(*(long *)(this + 0xa8) + *(long *)(pEVar4 + 0x28) * 8),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))(plVar2);
                    /* try { // try from 001932fc to 00193301 has its CatchHandler @ 0019330e */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return plVar2;
      }
    }
  }
  return (long *)0x0;
}


