// Function : gstub_new
// Namespace: 
// Entry    : 0051f0f0
// Prototype: undefined gstub_new(long param_1, long param_2)
// Body     : 0051f0f0 - 0051f12d


void gstub_new(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = getbytes(0x10);
  if (param_1 == 0) {
    *(undefined4 *)(plVar1 + 1) = 2;
    *plVar1 = param_2;
  }
  else {
    *(undefined4 *)(plVar1 + 1) = 1;
    *plVar1 = param_1;
  }
  *(undefined4 *)((long)plVar1 + 0xc) = 0;
  return;
}


