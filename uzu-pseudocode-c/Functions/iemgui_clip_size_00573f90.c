// Function : iemgui_clip_size
// Namespace: 
// Entry    : 00573f90
// Prototype: int iemgui_clip_size(int param_1)
// Body     : 00573f90 - 00573f9b


int iemgui_clip_size(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


