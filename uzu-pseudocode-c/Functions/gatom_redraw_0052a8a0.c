// Function : gatom_redraw
// Namespace: 
// Entry    : 0052a8a0
// Prototype: undefined gatom_redraw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 0052a8a0 - 0052a8b9


void gatom_redraw(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 byte *param_14)

{
  if (*(long *)(param_10 + 0xc0) == 0) {
    return;
  }
  glist_retext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x38),param_9,param_11,param_12,param_13,param_14);
  return;
}


