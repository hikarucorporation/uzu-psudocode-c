// Function : garray_doredraw
// Namespace: 
// Entry    : 004fa9e0
// Prototype: undefined garray_doredraw(long * param_1, long * param_2)
// Body     : 004fa9e0 - 004faa35


void garray_doredraw(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
  uVar2 = glist_isvisible(param_1[3]);
  if (uVar2 != 0) {
    bVar1 = gobj_shouldvis(param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      gobj_vis((long *)param_1[2],(long *)param_1[3],0);
      gobj_vis((long *)param_1[2],(long *)param_1[3],1);
      return;
    }
  }
  return;
}


