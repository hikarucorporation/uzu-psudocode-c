// Function : libpd_finish_list
// Namespace: 
// Entry    : 004d7110
// Prototype: undefined8 libpd_finish_list(char * param_1)
// Body     : 004d7110 - 004d7181


undefined8 libpd_finish_list(char *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar3 = __tls_get_addr(&PTR_007153d8);
  uVar1 = *(undefined4 *)(lVar3 + 0xb0);
  uVar6 = *(undefined8 *)(lVar3 + 0xa8);
  sys_lock();
  puVar4 = gensym(param_1);
  plVar2 = (long *)puVar4[1];
  if (plVar2 == (long *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    pd_list(plVar2,*plVar5 + 0xc0,uVar1,uVar6);
    uVar6 = 0;
  }
  sys_unlock();
  return uVar6;
}


