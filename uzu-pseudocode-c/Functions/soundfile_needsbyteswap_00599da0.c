// Function : soundfile_needsbyteswap
// Namespace: 
// Entry    : 00599da0
// Prototype: bool soundfile_needsbyteswap(long param_1)
// Body     : 00599da0 - 00599da9


bool soundfile_needsbyteswap(long param_1)

{
  return *(int *)(param_1 + 0x28) != 0;
}


