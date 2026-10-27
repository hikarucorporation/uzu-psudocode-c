// Function : glist_findrtext
// Namespace: 
// Entry    : 0051e670
// Prototype: long glist_findrtext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051e670 - 0051e6b8


long glist_findrtext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  
  lVar1 = *(long *)(param_9 + 0xc0);
  if (lVar1 == 0) {
    canvas_create_editor
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
    lVar1 = *(long *)(param_9 + 0xc0);
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x28) == param_10) break;
    lVar1 = *(long *)(lVar1 + 0x70);
  }
  return lVar1;
}


