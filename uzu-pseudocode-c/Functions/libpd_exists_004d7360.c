// Function : libpd_exists
// Namespace: 
// Entry    : 004d7360
// Prototype: bool libpd_exists(char * param_1)
// Body     : 004d7360 - 004d7383


bool libpd_exists(char *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  sys_lock();
  puVar2 = gensym(param_1);
  lVar1 = puVar2[1];
  sys_unlock();
  return lVar1 != 0;
}


