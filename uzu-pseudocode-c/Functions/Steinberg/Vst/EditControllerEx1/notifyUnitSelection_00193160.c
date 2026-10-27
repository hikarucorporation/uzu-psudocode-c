// Function : notifyUnitSelection
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193160
// Prototype: undefined4 notifyUnitSelection(EditControllerEx1 * this)
// Body     : 00193160 - 001931be


/* Steinberg::Vst::EditControllerEx1::notifyUnitSelection() */

undefined4 __thiscall
Steinberg::Vst::EditControllerEx1::notifyUnitSelection(EditControllerEx1 *this)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *local_18;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  local_18 = (long *)0x0;
  if (((puVar1 == (undefined8 *)0x0) ||
      (iVar3 = (**(code **)*puVar1)(puVar1,0x71ad78,&local_18), plVar2 = local_18, iVar3 != 0)) ||
     (local_18 == (long *)0x0)) {
    return 1;
  }
                    /* try { // try from 001931ac to 001931b1 has its CatchHandler @ 001931c7 */
  uVar4 = (**(code **)(*local_18 + 0x18))(local_18,*(undefined4 *)(this + 0xf0));
                    /* try { // try from 001931b7 to 001931bc has its CatchHandler @ 001931bf */
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return uVar4;
}


