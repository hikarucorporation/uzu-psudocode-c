// Function : text_notifybyname
// Namespace: 
// Entry    : 0055ad50
// Prototype: undefined8 text_notifybyname(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 0055ad50 - 0055ad6c


undefined8
text_notifybyname(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  undefined8 in_RAX;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          text_define_class);
  if (plVar1 == (long *)0x0) {
    return in_RAX;
  }
  uVar2 = text_define_notify(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(long)plVar1);
  return uVar2;
}


