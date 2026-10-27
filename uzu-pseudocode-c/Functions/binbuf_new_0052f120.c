// Function : binbuf_new
// Namespace: 
// Entry    : 0052f120
// Prototype: undefined4 * binbuf_new(void)
// Body     : 0052f120 - 0052f143


undefined4 * binbuf_new(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = getbytes(0x10);
  *puVar1 = 0;
  pvVar2 = getbytes(0);
  *(void **)(puVar1 + 2) = pvVar2;
  return puVar1;
}


