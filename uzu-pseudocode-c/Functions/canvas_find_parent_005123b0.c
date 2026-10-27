// Function : canvas_find_parent
// Namespace: 
// Entry    : 005123b0
// Prototype: undefined canvas_find_parent(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 005123b0 - 005123c6


void canvas_find_parent(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,char *param_10,undefined8 param_11,undefined *param_12,
                       char *param_13,undefined *param_14,undefined1 param_15)

{
  if (*(long **)(param_9 + 0x48) == (long *)0x0) {
    return;
  }
  canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(long **)(param_9 + 0x48),param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}


