// Function : glist_getcanvas
// Namespace: 
// Entry    : 00515e50
// Prototype: undefined glist_getcanvas(long param_1)
// Body     : 00515e50 - 00515e71


void glist_getcanvas(long param_1)

{
  ushort *puVar1;
  
  do {
    if (*(long *)(param_1 + 0x48) == 0) {
      return;
    }
    puVar1 = (ushort *)(param_1 + 0xe8);
    param_1 = *(long *)(param_1 + 0x48);
  } while ((*puVar1 & 0x901) == 0x100);
  return;
}


