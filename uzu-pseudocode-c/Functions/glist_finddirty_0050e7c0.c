// Function : glist_finddirty
// Namespace: 
// Entry    : 0050e7c0
// Prototype: long glist_finddirty(long param_1)
// Body     : 0050e7c0 - 0050e81f


long glist_finddirty(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    lVar1 = *(long *)PTR_canvas_class_00715918;
    do {
      if ((*plVar3 == lVar1) && (lVar2 = glist_finddirty((long)plVar3), lVar2 != 0)) {
        return lVar2;
      }
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  if ((*(long *)(param_1 + 0xe0) == 0) || ((*(byte *)(param_1 + 0xe8) & 4) == 0)) {
    param_1 = 0;
  }
  return param_1;
}


