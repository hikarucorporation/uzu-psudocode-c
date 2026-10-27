// Function : gobj_vis
// Namespace: 
// Entry    : 004fd130
// Prototype: undefined gobj_vis(long * param_1, long * param_2, undefined4 param_3)
// Body     : 004fd130 - 004fd178


void gobj_vis(long *param_1,long *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined7 extraout_var;
  
  if ((*(long *)(*param_1 + 0x68) != 0) && (*(long *)(*(long *)(*param_1 + 0x68) + 0x28) != 0)) {
    bVar1 = gobj_shouldvis(param_1,param_2);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004fd172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*param_1 + 0x68) + 0x28))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}


