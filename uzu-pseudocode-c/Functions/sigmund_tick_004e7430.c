// Function : sigmund_tick
// Namespace: 
// Entry    : 004e7430
// Prototype: undefined sigmund_tick(long param_1)
// Body     : 004e7430 - 004e7496


void sigmund_tick(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x70) == *(uint *)(param_1 + 0x54)) {
    sigmund_doit(*(float *)(param_1 + 0x4c),param_1,*(uint *)(param_1 + 0x70),
                 *(float **)(param_1 + 0x60));
    iVar1 = *(int *)(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x70) = iVar2 - iVar1;
      memmove(*(void **)(param_1 + 0x60),
              (void *)((long)*(void **)(param_1 + 0x60) + (long)iVar1 * 4),
              (long)(iVar2 - iVar1) << 2);
      *(undefined4 *)(param_1 + 0x74) = 0;
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    else {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(int *)(param_1 + 0x74) = iVar1 - iVar2;
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x5c) = iVar1 + -1;
    }
  }
  return;
}


