// Function : gverb_free
// Namespace: 
// Entry    : 0056b970
// Prototype: undefined gverb_free(long param_1)
// Body     : 0056b970 - 0056bc79


void gverb_free(long param_1)

{
  void *pvVar1;
  
  freebytes(*(void **)(param_1 + 0x60));
  pvVar1 = (void *)**(undefined8 **)(param_1 + 0x70);
  freebytes(*(void **)((long)pvVar1 + 8));
  freebytes(pvVar1);
  freebytes((void *)**(undefined8 **)(param_1 + 0x68));
  pvVar1 = (void *)**(undefined8 **)(param_1 + 0x98);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = (void *)**(undefined8 **)(param_1 + 0xa0);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = *(void **)(*(long *)(param_1 + 0x70) + 8);
  freebytes(*(void **)((long)pvVar1 + 8));
  freebytes(pvVar1);
  freebytes(*(void **)(*(long *)(param_1 + 0x68) + 8));
  pvVar1 = *(void **)(*(long *)(param_1 + 0x98) + 8);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = *(void **)(*(long *)(param_1 + 0xa0) + 8);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = *(void **)(*(long *)(param_1 + 0x70) + 0x10);
  freebytes(*(void **)((long)pvVar1 + 8));
  freebytes(pvVar1);
  freebytes(*(void **)(*(long *)(param_1 + 0x68) + 0x10));
  pvVar1 = *(void **)(*(long *)(param_1 + 0x98) + 0x10);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = *(void **)(*(long *)(param_1 + 0xa0) + 0x10);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = *(void **)(*(long *)(param_1 + 0x70) + 0x18);
  freebytes(*(void **)((long)pvVar1 + 8));
  freebytes(pvVar1);
  freebytes(*(void **)(*(long *)(param_1 + 0x68) + 0x18));
  pvVar1 = *(void **)(*(long *)(param_1 + 0x98) + 0x18);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  pvVar1 = *(void **)(*(long *)(param_1 + 0xa0) + 0x18);
  freebytes(*(void **)((long)pvVar1 + 0x10));
  freebytes(pvVar1);
  freebytes(*(void **)(param_1 + 0x70));
  freebytes(*(void **)(param_1 + 0x80));
  freebytes(*(void **)(param_1 + 0x88));
  freebytes(*(void **)(param_1 + 0x68));
  freebytes(*(void **)(param_1 + 0xb8));
  freebytes(*(void **)(param_1 + 0xc0));
  freebytes(*(void **)(param_1 + 200));
  freebytes(*(void **)(param_1 + 0x98));
  freebytes(*(void **)(param_1 + 0xa0));
  freebytes(*(void **)(param_1 + 0xa8));
  freebytes(*(void **)(param_1 + 0xb0));
  pvVar1 = *(void **)(param_1 + 0x78);
  freebytes(*(void **)((long)pvVar1 + 8));
  freebytes(pvVar1);
  return;
}


