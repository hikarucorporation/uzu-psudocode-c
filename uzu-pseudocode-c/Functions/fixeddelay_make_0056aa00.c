// Function : fixeddelay_make
// Namespace: 
// Entry    : 0056aa00
// Prototype: uint * fixeddelay_make(uint param_1)
// Body     : 0056aa00 - 0056aa56


uint * fixeddelay_make(uint param_1)

{
  uint *puVar1;
  void *__s;
  
  puVar1 = getbytes(0x10);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    __s = getbytes((long)(int)param_1 << 2);
    *(void **)(puVar1 + 2) = __s;
    if (__s != (void *)0x0) {
      if ((int)param_1 < 1) {
        return puVar1;
      }
      memset(__s,0,(ulong)param_1 << 2);
      return puVar1;
    }
  }
  return (uint *)0x0;
}


