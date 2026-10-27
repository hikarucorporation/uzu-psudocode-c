// Function : rtext_select
// Namespace: 
// Entry    : 0051e800
// Prototype: undefined rtext_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10)
// Body     : 0051e800 - 0051e857


void rtext_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,int param_10)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = glist_getcanvas(*(long *)(param_9 + 0x30));
  uVar2 = 0x4c;
  if (param_10 == 0) {
    uVar2 = 0x51;
  }
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rr",
              uVar1,"itemconfigure",param_9 + 0x38,"-fill",uVar2);
  return;
}


