// Function : pd_setloadingabstraction
// Namespace: 
// Entry    : 0053ab50
// Prototype: undefined8 pd_setloadingabstraction(long param_1)
// Body     : 0053ab50 - 0053ab7e


undefined8 pd_setloadingabstraction(long param_1)

{
  long lVar1;
  
  lVar1 = gstack_head;
  while( true ) {
    if (lVar1 == 0) {
      pd_loadingabstraction = param_1;
      return 0;
    }
    if (*(long *)(lVar1 + 8) == param_1) break;
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  return 1;
}


