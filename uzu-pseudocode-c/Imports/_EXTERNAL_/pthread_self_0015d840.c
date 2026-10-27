// Function : pthread_self
// Namespace: _EXTERNAL_
// Entry    : 0015d840
// Prototype: pthread_t pthread_self(void)
// Body     : 0015d840 - 0015d845


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_00717420)();
  return pVar1;
}


