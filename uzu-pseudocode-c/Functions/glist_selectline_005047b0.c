// Function : glist_selectline
// Namespace: 
// Entry    : 005047b0
// Prototype: undefined glist_selectline(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14)
// Body     : 005047b0 - 005048bf


void glist_selectline(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                     undefined4 param_13,undefined4 param_14)

{
  byte *pbVar1;
  long lVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_b8 [136];
  
  if (*(long *)(param_9 + 0xc0) != 0) {
    pbVar1 = (byte *)(*(long *)(param_9 + 0xc0) + 0x88);
    *pbVar1 = *pbVar1 & 0xdf;
    sprintf(local_b8,"l%p",*(undefined8 *)(*(long *)(param_9 + 0xc0) + 0x80));
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",
                param_9,"itemconfigure",local_b8,"-fill",0x51);
    pbVar1 = (byte *)(*(long *)(param_9 + 0xc0) + 0x88);
    *pbVar1 = *pbVar1 | 0x20;
    lVar2 = *(long *)(param_9 + 0xc0);
    *(undefined4 *)(lVar2 + 0x70) = param_11;
    *(undefined4 *)(lVar2 + 0x74) = param_12;
    *(undefined4 *)(lVar2 + 0x78) = param_13;
    *(undefined4 *)(lVar2 + 0x7c) = param_14;
    *(undefined8 *)(lVar2 + 0x80) = param_10;
    sprintf(local_b8,"l%p",param_10);
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs rs",param_9,"itemconfigure",local_b8,"-fill",0x4c);
  }
  return;
}


