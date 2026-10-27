// Function : array_redraw
// Namespace: 
// Entry    : 004fa650
// Prototype: undefined array_redraw(long param_1, long param_2)
// Body     : 004fa650 - 004fa675


void array_redraw(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  iVar1 = (int)plVar2[1];
  while (iVar1 == 2) {
    param_1 = *plVar2;
    plVar2 = *(long **)(param_1 + 0x30);
    iVar1 = (int)plVar2[1];
  }
  scalar_redraw(*(long *)(param_1 + 0x20),param_2);
  return;
}


