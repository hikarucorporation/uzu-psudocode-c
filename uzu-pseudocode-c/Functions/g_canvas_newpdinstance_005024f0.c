// Function : g_canvas_newpdinstance
// Namespace: 
// Entry    : 005024f0
// Prototype: undefined g_canvas_newpdinstance(void)
// Body     : 005024f0 - 00502549


void g_canvas_newpdinstance(void)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  
  pvVar1 = getbytes(0x48);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar2;
  *(void **)(lVar3 + 0x48) = pvVar1;
  lVar3 = lVar3 + 0x168;
  *(long *)((long)pvVar1 + 0x18) = lVar3;
  *(long *)((long)pvVar1 + 0x10) = lVar3;
  *(undefined4 *)((long)pvVar1 + 0x20) = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  *(undefined8 *)((long)pvVar1 + 0x38) = 0x3e800000000;
  g_editor_newpdinstance();
  g_template_newpdinstance();
  return;
}


