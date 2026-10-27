// Function : s_stuff_newpdinstance
// Namespace: 
// Entry    : 00533fb0
// Prototype: undefined s_stuff_newpdinstance(void)
// Body     : 00533fb0 - 00534017


void s_stuff_newpdinstance(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = getbytes(0x68);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar3;
  *(undefined8 **)(lVar1 + 0x50) = puVar2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  lVar1 = *(long *)(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x28) = 0x4000000040;
  *(undefined4 *)(lVar1 + 0x30) = 0x473b8000;
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)PTR_sys_printhook_00715850;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  return;
}


