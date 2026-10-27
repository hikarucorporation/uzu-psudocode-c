// Function : libpd_bang
// Namespace: 
// Entry    : 004d6f00
// Prototype: undefined8 libpd_bang(char * param_1)
// Body     : 004d6f00 - 004d6f37


undefined8 libpd_bang(char *param_1)

{
  undefined8 *puVar1;
  
  sys_lock();
  puVar1 = gensym(param_1);
  if ((long *)puVar1[1] == (long *)0x0) {
    sys_unlock();
    return 0xffffffff;
  }
  pd_bang((long *)puVar1[1]);
  sys_unlock();
  return 0;
}


