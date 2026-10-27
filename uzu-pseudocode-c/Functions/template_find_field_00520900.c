// Function : template_find_field
// Namespace: 
// Entry    : 00520900
// Prototype: undefined8 template_find_field(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined4 * param_11, undefined4 * param_12, char * param_13, undefined8 param_14)
// Body     : 00520900 - 00520962


undefined8
template_find_field(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,undefined4 *param_11,undefined4 *param_12,
                   char *param_13,undefined8 param_14)

{
  undefined1 unaff_BL;
  long lVar1;
  undefined8 *puVar2;
  
  if (param_9 == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
        param_10,param_11,param_12,param_13,param_14,unaff_BL);
    return 0;
  }
  if (0 < (int)*(uint *)(param_9 + 0x18)) {
    puVar2 = (undefined8 *)(*(long *)(param_9 + 0x20) + 0x10);
    lVar1 = 0;
    do {
      if (puVar2[-1] == param_10) {
        *param_11 = (int)lVar1;
        *param_12 = *(undefined4 *)(puVar2 + -2);
        *(undefined8 *)param_13 = *puVar2;
        return 1;
      }
      puVar2 = puVar2 + 3;
      lVar1 = lVar1 + 8;
    } while ((ulong)*(uint *)(param_9 + 0x18) * 8 != lVar1);
  }
  return 0;
}


