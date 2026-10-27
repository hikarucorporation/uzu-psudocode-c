// Function : glist_init
// Namespace: 
// Entry    : 004fe650
// Prototype: undefined glist_init(long param_1)
// Body     : 004fe650 - 004fe6f2


void glist_init(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = gstub_new(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  iVar1 = *(int *)PTR_glist_valid_007157f8;
  *(int *)PTR_glist_valid_007157f8 = iVar1 + 1;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  pvVar3 = getbytes(0);
  *(void **)(param_1 + 0x90) = pvVar3;
  pvVar3 = getbytes(0);
  *(void **)(param_1 + 0xb0) = pvVar3;
  pvVar3 = getbytes(0x20);
  *(void **)(param_1 + 0xf0) = pvVar3;
  return;
}


