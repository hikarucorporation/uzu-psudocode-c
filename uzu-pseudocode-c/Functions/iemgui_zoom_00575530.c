// Function : iemgui_zoom
// Namespace: 
// Entry    : 00575530
// Prototype: undefined iemgui_zoom(float param_1, long param_2)
// Body     : 00575530 - 00575560


void iemgui_zoom(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x30) + 0xec);
  iVar2 = 1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_2 + 0x44) = (*(int *)(param_2 + 0x44) / iVar2) * (int)param_1;
  *(int *)(param_2 + 0x40) = (*(int *)(param_2 + 0x40) / iVar2) * (int)param_1;
  return;
}


