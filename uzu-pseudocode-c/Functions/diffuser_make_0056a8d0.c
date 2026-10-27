// Function : diffuser_make
// Namespace: 
// Entry    : 0056a8d0
// Prototype: uint * diffuser_make(uint param_1, uint param_2)
// Body     : 0056a8d0 - 0056a93f


uint * diffuser_make(uint param_1,uint param_2)

{
  uint *puVar1;
  void *__s;
  
  puVar1 = getbytes(0x18);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    __s = getbytes((long)(int)param_2 * 4 + 4);
    *(void **)(puVar1 + 4) = __s;
    if (__s != (void *)0x0) {
      if ((int)param_2 < 0) {
        return puVar1;
      }
      memset(__s,0,(ulong)param_2 * 4 + 4);
      return puVar1;
    }
  }
  return (uint *)0x0;
}


