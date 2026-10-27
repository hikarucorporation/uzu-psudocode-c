// Function : libpd_add_symbol
// Namespace: 
// Entry    : 004d70c0
// Prototype: undefined libpd_add_symbol(char * param_1)
// Body     : 004d70c0 - 004d7109


void libpd_add_symbol(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  sys_lock();
  puVar2 = gensym(param_1);
  sys_unlock();
  lVar3 = __tls_get_addr(&PTR_007153d8);
  puVar1 = *(undefined4 **)(lVar3 + 0xb8);
  *puVar1 = 2;
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *(undefined4 **)(lVar3 + 0xb8) = puVar1 + 4;
  *(int *)(lVar3 + 0xb0) = *(int *)(lVar3 + 0xb0) + 1;
  return;
}


