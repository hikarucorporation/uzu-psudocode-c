// Function : sys_getversion
// Namespace: 
// Entry    : 00538220
// Prototype: undefined8 sys_getversion(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
// Body     : 00538220 - 00538246


undefined8 sys_getversion(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x37;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 2;
  }
  return 0x3702;
}


