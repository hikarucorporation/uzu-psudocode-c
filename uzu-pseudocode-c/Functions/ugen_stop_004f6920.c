// Function : ugen_stop
// Namespace: 
// Entry    : 004f6920
// Prototype: undefined ugen_stop(void)
// Body     : 004f6920 - 004f6bd1


void ugen_stop(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *plVar1;
  puVar3 = *(undefined8 **)(lVar2 + 0x40);
  if ((void *)*puVar3 != (void *)0x0) {
    freebytes((void *)*puVar3);
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    **(undefined8 **)(*plVar1 + 0x40) = 0;
    lVar2 = *plVar1;
    puVar3 = *(undefined8 **)(lVar2 + 0x40);
  }
  pvVar4 = (void *)puVar3[2];
  if (pvVar4 != (void *)0x0) {
    do {
      puVar3[2] = *(undefined8 *)((long)pvVar4 + 0x38);
      if ((*(int *)((long)pvVar4 + 0x20) == 0) && (*(int *)((long)pvVar4 + 0x24) == 0)) {
        freebytes(*(void **)((long)pvVar4 + 8));
      }
      freebytes(pvVar4);
      plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar2 = *plVar1;
      puVar3 = *(undefined8 **)(lVar2 + 0x40);
      pvVar4 = (void *)puVar3[2];
    } while (pvVar4 != (void *)0x0);
  }
  puVar3[4] = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x28) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x38) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x40) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x48) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x50) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x58) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x60) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x68) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x70) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x78) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x80) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x88) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x90) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x98) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xa0) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xa8) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xb0) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xb8) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xc0) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 200) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xd0) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xd8) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xe0) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xe8) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0xf8) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x100) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x108) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x110) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x118) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x120) = 0;
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 *)(*(long *)(*plVar1 + 0x40) + 0x128) = 0;
  return;
}


