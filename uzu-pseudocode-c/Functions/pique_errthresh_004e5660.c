// Function : pique_errthresh
// Namespace: 
// Entry    : 004e5660
// Prototype: undefined pique_errthresh(undefined4 param_1, long param_2)
// Body     : 004e5660 - 004e5665


void pique_errthresh(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}


