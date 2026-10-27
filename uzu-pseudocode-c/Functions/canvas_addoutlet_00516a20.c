// Function : canvas_addoutlet
// Namespace: 
// Entry    : 00516a20
// Prototype: long * canvas_addoutlet(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00516a20 - 00516a98


long * canvas_addoutlet(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9,undefined8 param_10,long param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar3;
  
  plVar2 = outlet_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                      param_11,param_11,param_12,param_13,param_14);
  uVar3 = extraout_XMM0_Qa;
  if (((*(ushort *)(param_9 + 0x1d) & 0x808) == 0) && (param_9[9] != 0)) {
    uVar1 = glist_isvisible(param_9[9]);
    uVar3 = extraout_XMM0_Qa_00;
    if (uVar1 != 0) {
      gobj_vis(param_9,(long *)param_9[9],0);
      uVar3 = gobj_vis(param_9,(long *)param_9[9],1);
      uVar3 = canvas_fixlinesfor(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9[9],(long)param_9);
    }
  }
  if ((*(byte *)(param_9 + 0x1d) & 8) == 0) {
    canvas_resortoutlets(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return plVar2;
}


