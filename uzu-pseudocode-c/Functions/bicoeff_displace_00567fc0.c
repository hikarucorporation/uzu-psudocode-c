// Function : bicoeff_displace
// Namespace: 
// Entry    : 00567fc0
// Prototype: undefined bicoeff_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, short param_11, short param_12)
// Body     : 00567fc0 - 00568052


void bicoeff_displace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10,short param_11,short param_12)

{
  uint uVar1;
  long lVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa_00;
  
  *(short *)(param_9 + 0x28) = *(short *)(param_9 + 0x28) + param_11;
  *(short *)(param_9 + 0x2a) = *(short *)(param_9 + 0x2a) + param_12;
  uVar1 = glist_isvisible(param_10);
  if (uVar1 == 0) {
    return;
  }
  uVar3 = sys_vgui(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "%s move %s %d %d\n");
  sys_vgui(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s move RSZ %d %d\n");
  lVar2 = glist_getcanvas(param_10);
  canvas_fixlinesfor(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     lVar2,param_9);
  return;
}


