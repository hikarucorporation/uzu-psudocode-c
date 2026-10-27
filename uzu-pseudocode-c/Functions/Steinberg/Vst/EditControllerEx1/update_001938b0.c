// Function : update
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001938b0
// Prototype: undefined update(long param_1, undefined8 * param_2)
// Body     : 001938b0 - 00193961


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::EditControllerEx1::update(Steinberg::FUnknown*, int) */

void __cdecl Steinberg::Vst::EditControllerEx1::update(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long *local_18;
  
  local_18 = (long *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0x71aae8,&local_18);
    if (local_18 != (long *)0x0) {
      iVar5 = (**(code **)(*local_18 + 0x10))();
      plVar2 = local_18;
      if ((iVar5 != 0) && (local_18 != (long *)0x0)) {
        cVar4 = (**(code **)(*local_18 + 0x40))(local_18,"ProgramList",1);
        if (cVar4 != '\0') {
          puVar1 = *(undefined8 **)(param_1 + 0x40);
          local_18 = (long *)0x0;
          if (puVar1 != (undefined8 *)0x0) {
            iVar5 = (**(code **)*puVar1)(puVar1,0x71ad78,&local_18);
            plVar3 = local_18;
            if ((iVar5 == 0) && (local_18 != (long *)0x0)) {
                    /* try { // try from 00193946 to 00193950 has its CatchHandler @ 0019396a */
              (**(code **)(*local_18 + 0x20))
                        (local_18,*(undefined4 *)((long)plVar2 + 0xc),0xffffffff);
                    /* try { // try from 00193954 to 00193959 has its CatchHandler @ 00193962 */
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
    }
  }
  return;
}


