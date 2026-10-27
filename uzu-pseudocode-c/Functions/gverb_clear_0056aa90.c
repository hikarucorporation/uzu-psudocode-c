// Function : gverb_clear
// Namespace: 
// Entry    : 0056aa90
// Prototype: undefined gverb_clear(long param_1)
// Body     : 0056aa90 - 0056ac5e


void gverb_clear(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(*(long *)(param_1 + 0x60) + 4) = 0;
  memset(*(void **)((int *)**(undefined8 **)(param_1 + 0x70) + 2),0,
         (long)*(int *)**(undefined8 **)(param_1 + 0x70) << 2);
  *(undefined4 *)(**(long **)(param_1 + 0x68) + 4) = 0;
  memset(*(void **)((int *)**(undefined8 **)(param_1 + 0x98) + 4),0,
         (long)*(int *)**(undefined8 **)(param_1 + 0x98) << 2);
  memset(*(void **)((int *)**(undefined8 **)(param_1 + 0xa0) + 4),0,
         (long)*(int *)**(undefined8 **)(param_1 + 0xa0) << 2);
  piVar1 = *(int **)(*(long *)(param_1 + 0x70) + 8);
  memset(*(void **)(piVar1 + 2),0,(long)*piVar1 << 2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 4) = 0;
  piVar1 = *(int **)(*(long *)(param_1 + 0x98) + 8);
  memset(*(void **)(piVar1 + 4),0,(long)*piVar1 << 2);
  piVar1 = *(int **)(*(long *)(param_1 + 0xa0) + 8);
  memset(*(void **)(piVar1 + 4),0,(long)*piVar1 << 2);
  piVar1 = *(int **)(*(long *)(param_1 + 0x70) + 0x10);
  memset(*(void **)(piVar1 + 2),0,(long)*piVar1 << 2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x10) + 4) = 0;
  piVar1 = *(int **)(*(long *)(param_1 + 0x98) + 0x10);
  memset(*(void **)(piVar1 + 4),0,(long)*piVar1 << 2);
  piVar1 = *(int **)(*(long *)(param_1 + 0xa0) + 0x10);
  memset(*(void **)(piVar1 + 4),0,(long)*piVar1 << 2);
  piVar1 = *(int **)(*(long *)(param_1 + 0x70) + 0x18);
  memset(*(void **)(piVar1 + 2),0,(long)*piVar1 << 2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x18) + 4) = 0;
  piVar1 = *(int **)(*(long *)(param_1 + 0x98) + 0x18);
  memset(*(void **)(piVar1 + 4),0,(long)*piVar1 << 2);
  piVar1 = *(int **)(*(long *)(param_1 + 0xa0) + 0x18);
  memset(*(void **)(piVar1 + 4),0,(long)*piVar1 << 2);
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = *(undefined8 **)(param_1 + 200);
  *puVar2 = 0;
  puVar2[1] = 0;
  memset(*(void **)(*(int **)(param_1 + 0x78) + 2),0,(long)**(int **)(param_1 + 0x78) << 2);
  return;
}


