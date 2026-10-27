// Function : highshelf_clear
// Namespace: 
// Entry    : 00570b90
// Prototype: undefined highshelf_clear(long param_1)
// Body     : 00570b90 - 00570b9b


void highshelf_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


