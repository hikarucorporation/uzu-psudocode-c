// Function : scalar_doredraw
// Namespace: 
// Entry    : 0051f990
// Prototype: undefined scalar_doredraw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f990 - 0051f9d1


void scalar_doredraw(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  uint uVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  
  uVar1 = glist_isvisible(param_10);
  if (uVar1 == 0) {
    return;
  }
  uVar2 = scalar_vis(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,param_10,0,param_12,param_13,param_14);
  scalar_vis(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1,
             param_12,param_13,param_14);
  return;
}


