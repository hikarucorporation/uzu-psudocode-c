// Function : scalar_redraw
// Namespace: 
// Entry    : 0051f950
// Prototype: undefined scalar_redraw(long param_1, long param_2)
// Body     : 0051f950 - 0051f986


void scalar_redraw(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = glist_isvisible(param_2);
  if (uVar1 == 0) {
    return;
  }
  sys_queuegui(param_1,param_2,0x51f990);
  return;
}


