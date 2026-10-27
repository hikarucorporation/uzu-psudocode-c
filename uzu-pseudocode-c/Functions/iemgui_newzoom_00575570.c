// Function : iemgui_newzoom
// Namespace: 
// Entry    : 00575570
// Prototype: undefined iemgui_newzoom(long param_1)
// Body     : 00575570 - 00575597


void iemgui_newzoom(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0xec);
  if (iVar1 != 1) {
    iVar1 = (int)(float)iVar1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) * iVar1;
    *(int *)(param_1 + 0x40) = iVar1 * *(int *)(param_1 + 0x40);
  }
  return;
}


