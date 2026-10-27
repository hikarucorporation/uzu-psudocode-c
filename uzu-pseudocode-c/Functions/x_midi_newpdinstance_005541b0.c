// Function : x_midi_newpdinstance
// Namespace: 
// Entry    : 005541b0
// Prototype: undefined x_midi_newpdinstance(void)
// Body     : 005541b0 - 005542b0


void x_midi_newpdinstance(void)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  pvVar1 = getbytes(0x48);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(void **)(*plVar2 + 0x30) = pvVar1;
  puVar3 = gensym("#midiin");
  **(undefined8 **)(*plVar2 + 0x30) = puVar3;
  puVar3 = gensym("#sysexin");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 8) = puVar3;
  puVar3 = gensym("#notein");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x10) = puVar3;
  puVar3 = gensym("#ctlin");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x18) = puVar3;
  puVar3 = gensym("#pgmin");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x20) = puVar3;
  puVar3 = gensym("#bendin");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x28) = puVar3;
  puVar3 = gensym("#touchin");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x30) = puVar3;
  puVar3 = gensym("#polytouchin");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x38) = puVar3;
  puVar3 = gensym("#midirealtimein");
  *(undefined8 **)(*(long *)(*plVar2 + 0x30) + 0x40) = puVar3;
  return;
}


