// Function : sighip_clear
// Namespace: 
// Entry    : 005935a0
// Prototype: undefined sighip_clear(long param_1)
// Body     : 005935a0 - 005935a7


void sighip_clear(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


