// Function : sigmund_clear
// Namespace: 
// Entry    : 004e7150
// Prototype: undefined sigmund_clear(long param_1)
// Body     : 004e7150 - 004e717b


void sigmund_clear(long param_1)

{
  if (*(void **)(param_1 + 0x420) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x420),0,(long)*(int *)(param_1 + 0x428) << 5);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}


