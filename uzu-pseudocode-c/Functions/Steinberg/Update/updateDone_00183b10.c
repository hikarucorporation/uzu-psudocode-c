// Function : updateDone
// Namespace: Steinberg:Update
// Entry    : 00183b10
// Prototype: undefined updateDone(undefined8 * param_1, int param_2)
// Body     : 00183b10 - 00183b66


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Update::updateDone(Steinberg::FUnknown*, int) */

void __cdecl Steinberg::Update::updateDone(undefined8 *param_1,int param_2)

{
  int iVar1;
  long *local_10;
  
  if ((param_2 != 2) && (local_10 = (long *)0x0, param_1 != (undefined8 *)0x0)) {
    (**(code **)*param_1)(param_1,0x71aae8,&local_10);
    if (local_10 != (long *)0x0) {
      iVar1 = (**(code **)(*local_10 + 0x10))();
      if ((iVar1 != 0) && (local_10 != (long *)0x0)) {
        (**(code **)(*local_10 + 0x68))(local_10,param_2);
      }
    }
  }
  return;
}


