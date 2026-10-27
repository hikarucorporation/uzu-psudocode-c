// Function : libpd_getdollarzero
// Namespace: 
// Entry    : 004d5790
// Prototype: undefined4 libpd_getdollarzero(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004d5790 - 004d57bf


undefined4
libpd_getdollarzero(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined1 in_AL;
  undefined4 uVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  
  sys_lock();
  uVar2 = pd_pushsym(param_9);
  uVar1 = canvas_getdollarzero(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pd_popsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
            param_10,extraout_RDX,param_12,param_13,param_14,in_AL);
  sys_unlock();
  return uVar1;
}


