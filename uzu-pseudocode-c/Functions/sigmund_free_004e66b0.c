// Function : sigmund_free
// Namespace: 
// Entry    : 004e66b0
// Prototype: undefined sigmund_free(long param_1)
// Body     : 004e66b0 - 004e674a


void sigmund_free(long param_1)

{
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    freebytes(*(void **)(param_1 + 0x60));
  }
  if (*(uint *)(param_1 + 0x54) == 0) {
    freebytes(*(void **)(param_1 + 0x68));
    pvVar1 = *(void **)(param_1 + 0x420);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x54);
    do {
      bVar2 = 1 < uVar3;
      uVar3 = (int)uVar3 >> 1;
    } while (bVar2);
    freebytes(*(void **)(param_1 + 0x68));
    pvVar1 = *(void **)(param_1 + 0x420);
  }
  if (pvVar1 != (void *)0x0) {
    freebytes(pvVar1);
  }
  freebytes(*(void **)(param_1 + 0x40));
  clock_free(*(double **)(param_1 + 0x30));
  return;
}


