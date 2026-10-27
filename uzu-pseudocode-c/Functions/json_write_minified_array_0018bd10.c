// Function : json_write_minified_array
// Namespace: 
// Entry    : 0018bd10
// Prototype: undefined1 * json_write_minified_array(long * param_1, undefined1 * param_2)
// Body     : 0018bd10 - 0018bd82


/* WARNING: Removing unreachable block (ram,0x0018bd31) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_minified_array(json_array_s const*, char*) */

undefined1 * __cdecl json_write_minified_array(long *param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  
  *param_2 = 0x5b;
  pcVar1 = param_2 + 1;
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    while( true ) {
      pcVar1 = json_write_minified_value((undefined8 *)*puVar2,pcVar1);
      if (pcVar1 == (char *)0x0) {
        return (undefined1 *)0x0;
      }
      puVar2 = (undefined8 *)puVar2[1];
      if (puVar2 == (undefined8 *)0x0) break;
      if (puVar2 != (undefined8 *)*param_1) {
        *pcVar1 = ',';
        pcVar1 = pcVar1 + 1;
      }
    }
  }
  *pcVar1 = ']';
  return pcVar1 + 1;
}


