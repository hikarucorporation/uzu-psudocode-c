// Function : libpd_symbol
// Namespace: 
// Entry    : 004d6fe0
// Prototype: undefined8 libpd_symbol(char * param_1, char * param_2)
// Body     : 004d6fe0 - 004d702a


undefined8 libpd_symbol(char *param_1,char *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  sys_lock();
  puVar2 = gensym(param_1);
  plVar1 = (long *)puVar2[1];
  if (plVar1 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    gensym(param_2);
    pd_symbol(plVar1);
    uVar3 = 0;
  }
  sys_unlock();
  return uVar3;
}


