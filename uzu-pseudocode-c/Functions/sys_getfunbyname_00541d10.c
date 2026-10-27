// Function : sys_getfunbyname
// Namespace: 
// Entry    : 00541d10
// Prototype: undefined sys_getfunbyname(undefined8 param_1)
// Body     : 00541d10 - 00541d2b


void sys_getfunbyname(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dlopen(0,2);
  dlsym(uVar1,param_1);
  return;
}


