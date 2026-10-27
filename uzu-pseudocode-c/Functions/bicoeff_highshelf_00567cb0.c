// Function : bicoeff_highshelf
// Namespace: 
// Entry    : 00567cb0
// Prototype: undefined bicoeff_highshelf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00567cb0 - 00567d02


void bicoeff_highshelf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long *param_9)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined8 extraout_XMM0_Qa;
  
  puVar3 = gensym("highshelf");
  param_9[9] = (long)puVar3;
  uVar2 = glist_isvisible(param_9[6]);
  if (uVar2 != 0) {
    bVar1 = gobj_shouldvis(param_9,(long *)param_9[6]);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      sys_vgui(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "::bicoeff::setfiltertype %s %s\n");
      return;
    }
  }
  return;
}


