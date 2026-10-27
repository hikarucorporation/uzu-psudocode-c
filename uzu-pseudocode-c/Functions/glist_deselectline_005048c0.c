// Function : glist_deselectline
// Namespace: 
// Entry    : 005048c0
// Prototype: undefined glist_deselectline(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005048c0 - 0050493d


void glist_deselectline(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  byte *pbVar1;
  undefined8 extraout_XMM0_Qa;
  char local_98 [136];
  
  if (*(long *)(param_9 + 0xc0) != 0) {
    pbVar1 = (byte *)(*(long *)(param_9 + 0xc0) + 0x88);
    *pbVar1 = *pbVar1 & 0xdf;
    sprintf(local_98,"l%p",*(undefined8 *)(*(long *)(param_9 + 0xc0) + 0x80));
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",
                param_9,"itemconfigure",local_98,"-fill",0x51);
  }
  return;
}


