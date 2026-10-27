// Function : json_write_pretty_get_object_size
// Namespace: 
// Entry    : 0018c030
// Prototype: undefined8 json_write_pretty_get_object_size(long * param_1, long param_2, long param_3, long param_4, long * param_5)
// Body     : 0018c030 - 0018c0f5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_pretty_get_object_size(json_object_s const*, unsigned long, unsigned long, unsigned
   long, unsigned long*) */

undefined8 __cdecl
json_write_pretty_get_object_size
          (long *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_5;
  lVar2 = lVar1 + 1;
  *param_5 = lVar2;
  if (param_1[1] != 0) {
    *param_5 = lVar2 + param_4;
    lVar2 = lVar1 + param_4 + param_1[1];
    puVar4 = (undefined8 *)*param_1;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        *param_5 = lVar2 + (param_2 + 1) * param_3 + param_4;
        uVar3 = json_write_get_string_size((long *)*puVar4,param_5);
        if ((int)uVar3 != 0) {
          return 1;
        }
        *param_5 = *param_5 + 3;
        uVar3 = json_write_pretty_get_value_size
                          ((undefined8 *)puVar4[1],param_2 + 1,param_3,param_4,param_5);
        if ((int)uVar3 != 0) {
          return 1;
        }
        puVar4 = (undefined8 *)puVar4[2];
        lVar2 = *param_5;
      } while (puVar4 != (undefined8 *)0x0);
    }
    lVar2 = param_3 * param_2 + lVar2;
  }
  *param_5 = lVar2 + 1;
  return 0;
}


