// Function : copyTo
// Namespace: Steinberg:ConstString
// Entry    : 0017ab00
// Prototype: undefined copyTo(ConstString * this, long * param_1)
// Body     : 0017ab00 - 0017ac6a


/* Steinberg::ConstString::copyTo(Steinberg::IStringResult*) const */

void __thiscall Steinberg::ConstString::copyTo(ConstString *this,long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  long *local_38;
  undefined **local_30;
  undefined *local_28;
  uint local_20;
  
  if (((byte)this[0x13] & 0x40) == 0) {
    auVar6 = (**(code **)(*(long *)this + 0x18))(this);
                    /* WARNING: Could not recover jumptable at 0x0017ab34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,auVar6._0_8_,auVar6._8_8_,*(code **)(*param_1 + 0x18));
    return;
  }
  local_38 = (long *)0x0;
  if (param_1 != (long *)0x0) {
                    /* try { // try from 0017ab46 to 0017ab54 has its CatchHandler @ 0017ac7a */
    iVar2 = (**(code **)*param_1)(param_1,0x71aa60,&local_38);
    plVar1 = local_38;
    if (iVar2 == 0) {
      if (local_38 != (long *)0x0) {
                    /* try { // try from 0017ac40 to 0017ac51 has its CatchHandler @ 0017ac6b */
        uVar4 = (**(code **)(*(long *)this + 0x20))(this);
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar4);
        goto LAB_0017ac52;
      }
    }
    else {
      local_38 = (long *)0x0;
    }
  }
  local_28 = (undefined *)0x0;
  local_30 = &PTR__String_00702c10;
  local_20 = *(uint *)(this + 0x10) & 0x40000000;
  if ((*(long *)(this + 8) != 0) && ((*(uint *)(this + 0x10) & 0x3fffffff) != 0)) {
                    /* try { // try from 0017ab97 to 0017aba8 has its CatchHandler @ 0017ac6d */
    Steinberg::String::assign((String *)&local_30,(long *)this,0xffffffff);
  }
                    /* try { // try from 0017aba9 to 0017ac13 has its CatchHandler @ 0017ac9e */
  Steinberg::String::toMultiByte((String *)&local_30,0);
  if ((local_20 & 0x40000000) == 0) {
    puVar3 = &DAT_005dae18;
    if (local_28 != (undefined *)0x0) {
      puVar3 = local_28;
    }
LAB_0017abd3:
    puVar5 = puVar3;
  }
  else {
    puVar5 = &DAT_005dae18;
    if ((local_28 != (undefined *)0x0) && ((local_20 & 0x3fffffff) != 0)) {
      Steinberg::String::toMultiByte((String *)&local_30,0);
      puVar5 = &DAT_005dae18;
      puVar3 = local_28;
      if (local_28 == (undefined *)0x0) {
        puVar3 = &DAT_005dae18;
      }
      if ((local_20 & 0x40000000) == 0) goto LAB_0017abd3;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1,puVar5);
  local_30 = &PTR__String_00702c10;
  if (local_28 != (undefined *)0x0) {
    free(local_28);
  }
LAB_0017ac52:
  if (local_38 != (long *)0x0) {
                    /* try { // try from 0017ac5e to 0017ac60 has its CatchHandler @ 0017ac72 */
    (**(code **)(*local_38 + 0x10))();
  }
  return;
}


