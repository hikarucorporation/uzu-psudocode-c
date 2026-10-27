// Function : libpd_list
// Namespace: 
// Entry    : 004d7190
// Prototype: undefined8 libpd_list(char * param_1, undefined4 param_2, undefined8 param_3)
// Body     : 004d7190 - 004d71eb


undefined8 libpd_list(char *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  sys_lock();
  puVar2 = gensym(param_1);
  plVar1 = (long *)puVar2[1];
  if (plVar1 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    pd_list(plVar1,*plVar3 + 0xc0,param_2,param_3);
    uVar4 = 0;
  }
  sys_unlock();
  return uVar4;
}


