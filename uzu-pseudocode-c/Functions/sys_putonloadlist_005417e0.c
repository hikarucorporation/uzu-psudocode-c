// Function : sys_putonloadlist
// Namespace: 
// Entry    : 005417e0
// Prototype: undefined sys_putonloadlist(char * param_1)
// Body     : 005417e0 - 00541818


void sys_putonloadlist(char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = getbytes(0x10);
  puVar2 = gensym(param_1);
  puVar1[1] = puVar2;
  *puVar1 = sys_loaded;
  sys_loaded = puVar1;
  return;
}


