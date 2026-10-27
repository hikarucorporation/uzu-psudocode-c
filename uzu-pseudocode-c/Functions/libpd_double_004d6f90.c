// Function : libpd_double
// Namespace: 
// Entry    : 004d6f90
// Prototype: undefined8 libpd_double(char * param_1)
// Body     : 004d6f90 - 004d6fd8


undefined8 libpd_double(char *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  sys_lock();
  puVar1 = gensym(param_1);
  if ((long *)puVar1[1] == (long *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pd_float((long *)puVar1[1]);
    uVar2 = 0;
  }
  sys_unlock();
  return uVar2;
}


