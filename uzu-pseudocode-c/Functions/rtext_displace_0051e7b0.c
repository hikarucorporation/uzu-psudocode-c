// Function : rtext_displace
// Namespace: 
// Entry    : 0051e7b0
// Prototype: undefined rtext_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, undefined1 param_11)
// Body     : 0051e7b0 - 0051e7f8


void rtext_displace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,uint param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = glist_getcanvas(*(long *)(param_9 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ii",
              uVar1,"move",param_9 + 0x38,(ulong)param_10,param_11);
  return;
}


