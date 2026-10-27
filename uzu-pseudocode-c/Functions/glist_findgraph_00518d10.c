// Function : glist_findgraph
// Namespace: 
// Entry    : 00518d10
// Prototype: long * glist_findgraph(long param_1)
// Body     : 00518d10 - 00518d4e


long * glist_findgraph(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar1 = (long *)0x0;
  do {
    if ((*plVar2 == *(long *)PTR_canvas_class_00715918) &&
       ((*(byte *)((long)plVar2 + 0xe9) & 1) != 0)) {
      plVar1 = plVar2;
    }
    plVar2 = (long *)plVar2[1];
  } while (plVar2 != (long *)0x0);
  return plVar1;
}


