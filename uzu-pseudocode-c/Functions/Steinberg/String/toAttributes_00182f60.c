// Function : toAttributes
// Namespace: Steinberg:String
// Entry    : 00182f60
// Prototype: bool toAttributes(String * this, long * param_1, undefined8 param_2)
// Body     : 00182f60 - 00182fd8


/* Steinberg::String::toAttributes(Steinberg::IAttributes*, char const*) */

bool __thiscall Steinberg::String::toAttributes(String *this,long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong local_28;
  long *plStack_20;
  
  local_28 = 0;
  plStack_20 = (long *)0x0;
                    /* try { // try from 00182f74 to 00182f8a has its CatchHandler @ 00182fe1 */
  toVariant(this,(ushort *)&local_28);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_28);
  if ((local_28 & 0x10) != 0) {
    if ((((local_28 & 4) == 0) || (plStack_20 == (long *)0x0)) &&
       (((local_28 & 0x20) == 0 || (plStack_20 == (long *)0x0)))) {
      if (((local_28 & 8) != 0) && (plStack_20 != (long *)0x0)) {
                    /* try { // try from 00182fc9 to 00182fcb has its CatchHandler @ 00182fd9 */
        (**(code **)(*plStack_20 + 0x10))();
      }
    }
    else {
      free(plStack_20);
    }
  }
  return iVar1 == 0;
}


