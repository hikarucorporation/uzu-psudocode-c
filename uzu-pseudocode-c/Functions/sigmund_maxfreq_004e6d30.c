// Function : sigmund_maxfreq
// Namespace: 
// Entry    : 004e6d30
// Prototype: undefined sigmund_maxfreq(undefined4 param_1, long param_2)
// Body     : 004e6d30 - 004e6d35


void sigmund_maxfreq(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x7c) = param_1;
  return;
}


