// Function : json_write_minified_get_array_size
// Namespace: 
// Entry    : 0018b7b0
// Prototype: undefined8 json_write_minified_get_array_size(undefined8 * param_1, long * param_2)
// Body     : 0018b7b0 - 0018b808


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_minified_get_array_size(json_array_s const*, unsigned long*) */

undefined8 __cdecl json_write_minified_get_array_size(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  *param_2 = lVar1 + 2;
  if (1 < (ulong)param_1[1]) {
    *param_2 = lVar1 + param_1[1] + 1;
  }
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    uVar3 = json_write_minified_get_value_size((undefined8 *)*puVar2,param_2);
    if ((int)uVar3 != 0) break;
    puVar2 = (undefined8 *)puVar2[1];
  }
  return 1;
}


