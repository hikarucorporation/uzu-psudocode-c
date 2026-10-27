// Function : atexit
// Namespace: 
// Entry    : 005d8bc0
// Prototype: int atexit(__func * __func)
// Body     : 005d8bc0 - 005d8bd1


int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}


