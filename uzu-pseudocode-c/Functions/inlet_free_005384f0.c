// Function : inlet_free
// Namespace: 
// Entry    : 005384f0
// Prototype: undefined inlet_free(void * param_1)
// Body     : 005384f0 - 0053852b


void inlet_free(void *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(*(long *)((long)param_1 + 0x10) + 0x20);
  if (pvVar1 == param_1) {
    puVar2 = (undefined8 *)(*(long *)((long)param_1 + 0x10) + 0x20);
  }
  else {
    do {
      pvVar3 = pvVar1;
      if (pvVar3 == (void *)0x0) goto LAB_00538522;
      pvVar1 = *(void **)((long)pvVar3 + 8);
    } while (*(void **)((long)pvVar3 + 8) != param_1);
    puVar2 = (undefined8 *)((long)pvVar3 + 8);
  }
  *puVar2 = *(undefined8 *)((long)param_1 + 8);
LAB_00538522:
  freebytes(param_1);
  return;
}


