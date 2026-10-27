// Function : dsp_tick
// Namespace: 
// Entry    : 004f63c0
// Prototype: undefined8 dsp_tick(void)
// Body     : 004f63c0 - 004f6409


undefined8 dsp_tick(void)

{
  int *piVar1;
  undefined8 in_RAX;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar3 = (undefined8 *)**(long **)(*plVar2 + 0x40);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      puVar3 = (undefined8 *)(*(code *)*puVar3)();
    } while (puVar3 != (undefined8 *)0x0);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    piVar1 = (int *)(*(long *)(*plVar2 + 0x40) + 0x130);
    *piVar1 = *piVar1 + 1;
  }
  return in_RAX;
}


