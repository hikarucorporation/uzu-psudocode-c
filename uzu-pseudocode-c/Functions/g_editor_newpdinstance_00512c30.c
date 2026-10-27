// Function : g_editor_newpdinstance
// Namespace: 
// Entry    : 00512c30
// Prototype: undefined g_editor_newpdinstance(void)
// Body     : 00512c30 - 00512c77


void g_editor_newpdinstance(void)

{
  void *pvVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  pvVar1 = getbytes(0x98);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  **(undefined8 **)(*plVar2 + 0x48) = pvVar1;
  puVar3 = binbuf_new();
  *(undefined4 **)**(undefined8 **)(*plVar2 + 0x48) = puVar3;
  return;
}


