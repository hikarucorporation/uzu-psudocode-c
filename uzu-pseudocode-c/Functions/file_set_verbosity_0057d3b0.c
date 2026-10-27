// Function : file_set_verbosity
// Namespace: 
// Entry    : 0057d3b0
// Prototype: undefined file_set_verbosity(float param_1, long param_2)
// Body     : 0057d3b0 - 0057d3bf


void file_set_verbosity(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x4c) = (uint)(DAT_005d9044 < param_1);
  return;
}


