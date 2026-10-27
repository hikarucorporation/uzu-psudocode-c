// Function : print_new
// Namespace: 
// Entry    : 00597a00
// Prototype: long * print_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597a00 - 00597a49


long * print_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,print_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (*(char *)*param_9 == '\0') {
    param_9 = gensym("print~");
  }
  plVar1[7] = (long)param_9;
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 6) = 0;
  return plVar1;
}


