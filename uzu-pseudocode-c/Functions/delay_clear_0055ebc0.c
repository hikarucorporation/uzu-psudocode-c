// Function : delay_clear
// Namespace: 
// Entry    : 0055ebc0
// Prototype: undefined delay_clear(long param_1)
// Body     : 0055ebc0 - 0055ebd9


void delay_clear(long param_1)

{
  memset(*(void **)(param_1 + 0x40),0,(long)*(int *)(param_1 + 0x5c) * 4 + 0x1c);
  return;
}


