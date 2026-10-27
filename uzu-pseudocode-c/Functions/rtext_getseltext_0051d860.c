// Function : rtext_getseltext
// Namespace: 
// Entry    : 0051d860
// Prototype: undefined rtext_getseltext(long * param_1, long * param_2, int * param_3)
// Body     : 0051d860 - 0051d874


void rtext_getseltext(long *param_1,long *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0xc);
  *param_2 = (long)iVar1 + *param_1;
  *param_3 = (int)param_1[2] - iVar1;
  return;
}


