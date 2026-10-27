// Function : text_getbufbyname
// Namespace: 
// Entry    : 0055ad30
// Prototype: long text_getbufbyname(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055ad30 - 0055ad4b


long text_getbufbyname(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  long *plVar1;
  
  plVar1 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          text_define_class);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  return plVar1[6];
}


