// Function : canvas_rminlet
// Namespace: 
// Entry    : 00516960
// Prototype: undefined canvas_rminlet(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, void * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00516960 - 00516a18


void canvas_rminlet(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,void *param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar4;
  
  if (((*(byte *)((long)param_9 + 0xe9) & 8) == 0) && (lVar1 = param_9[9], lVar1 != 0)) {
    uVar3 = glist_isvisible(lVar1);
    if ((uVar3 == 0) || ((*(byte *)(lVar1 + 0xe8) & 0x40) != 0)) {
      canvas_deletelinesforio
                (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
                 param_9,(long)param_10,0,param_13,param_14);
    }
    else {
      bVar2 = glist_istoplevel(lVar1);
      canvas_deletelinesforio
                (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
                 param_9,(long)param_10,0,param_13,param_14);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        gobj_vis(param_9,(long *)param_9[9],0);
        inlet_free(param_10);
        uVar4 = gobj_vis(param_9,(long *)param_9[9],1);
        canvas_fixlinesfor(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9],
                           (long)param_9);
        return;
      }
    }
  }
  inlet_free(param_10);
  return;
}


