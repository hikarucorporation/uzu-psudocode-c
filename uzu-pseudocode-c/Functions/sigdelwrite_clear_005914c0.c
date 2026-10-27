// Function : sigdelwrite_clear
// Namespace: 
// Entry    : 005914c0
// Prototype: undefined sigdelwrite_clear(long param_1)
// Body     : 005914c0 - 005914da


void sigdelwrite_clear(long param_1)

{
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
    return;
  }
  memset(*(void **)(param_1 + 0x48),0,(ulong)*(uint *)(param_1 + 0x40) * 4 + 0x10);
  return;
}


