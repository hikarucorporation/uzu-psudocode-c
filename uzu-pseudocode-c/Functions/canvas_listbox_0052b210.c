// Function : canvas_listbox
// Namespace: 
// Entry    : 0052b210
// Prototype: undefined canvas_listbox(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, ulong param_11, char * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0052b210 - 0052b21b


void canvas_listbox(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,undefined8 param_10,ulong param_11,char *param_12,
                   undefined8 param_13,undefined8 param_14)

{
  canvas_atom(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,param_11,
              param_11 & 0xffffffff,param_12,param_14);
  return;
}


