// Function : glist_isselected
// Namespace: 
// Entry    : 00504940
// Prototype: undefined8 glist_isselected(long param_1, long param_2)
// Body     : 00504940 - 00504974


undefined8 glist_isselected(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    for (plVar1 = *(long **)(*(long *)(param_1 + 0xc0) + 0x20); plVar1 != (long *)0x0;
        plVar1 = (long *)plVar1[1]) {
      if (*plVar1 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}


