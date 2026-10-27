// Function : sig_tilde_float
// Namespace: 
// Entry    : 0058f660
// Prototype: undefined sig_tilde_float(undefined4 param_1, long param_2)
// Body     : 0058f660 - 0058f665


void sig_tilde_float(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}


