// Function : notifyProgramListChange
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193320
// Prototype: undefined4 notifyProgramListChange(EditControllerEx1 * this, undefined4 param_1, undefined4 param_2)
// Body     : 00193320 - 00193388


/* Steinberg::Vst::EditControllerEx1::notifyProgramListChange(int, int) */

undefined4 __thiscall
Steinberg::Vst::EditControllerEx1::notifyProgramListChange
          (EditControllerEx1 *this,undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *local_20;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  local_20 = (long *)0x0;
  if (((puVar1 == (undefined8 *)0x0) ||
      (iVar3 = (**(code **)*puVar1)(puVar1,0x71ad78,&local_20), plVar2 = local_20, iVar3 != 0)) ||
     (local_20 == (long *)0x0)) {
    return 1;
  }
                    /* try { // try from 00193371 to 0019337b has its CatchHandler @ 00193391 */
  uVar4 = (**(code **)(*local_20 + 0x20))(local_20,param_1,param_2);
                    /* try { // try from 00193381 to 00193386 has its CatchHandler @ 00193389 */
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return uVar4;
}


