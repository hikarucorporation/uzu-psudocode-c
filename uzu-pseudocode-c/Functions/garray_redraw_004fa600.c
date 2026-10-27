// Function : garray_redraw
// Namespace: 
// Entry    : 004fa600
// Prototype: undefined garray_redraw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fa600 - 004fa649


void garray_redraw(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  uint uVar1;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = glist_isvisible(*(long *)(param_9 + 0x18));
  if (uVar1 != 0) {
    sys_queuegui(param_9,*(long *)(param_9 + 0x18),0x4fa9e0);
    return;
  }
  if ((*(byte *)(param_9 + 0x30) & 8) == 0) {
    return;
  }
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653aa2,"s",
              **(undefined8 **)(param_9 + 0x28),param_12,param_13,param_14,param_15);
  return;
}


