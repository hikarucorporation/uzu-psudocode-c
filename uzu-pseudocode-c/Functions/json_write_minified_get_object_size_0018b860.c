// Function : json_write_minified_get_object_size
// Namespace: 
// Entry    : 0018b860
// Prototype: undefined8 json_write_minified_get_object_size(undefined8 * param_1, long * param_2)
// Body     : 0018b860 - 0018b8d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_minified_get_object_size(json_object_s const*, unsigned long*) */

undefined8 __cdecl json_write_minified_get_object_size(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_2;
  *param_2 = lVar2 + 2;
  lVar2 = lVar2 + 2 + param_1[1];
  *param_2 = lVar2;
  if (1 < (ulong)param_1[1]) {
    *param_2 = lVar2 + param_1[1] + -1;
  }
  puVar1 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    uVar3 = json_write_get_string_size((long *)*puVar1,param_2);
    if ((int)uVar3 != 0) break;
    uVar3 = json_write_minified_get_value_size((undefined8 *)puVar1[1],param_2);
    if ((int)uVar3 != 0) {
      return 1;
    }
    puVar1 = (undefined8 *)puVar1[2];
  }
  return 1;
}


