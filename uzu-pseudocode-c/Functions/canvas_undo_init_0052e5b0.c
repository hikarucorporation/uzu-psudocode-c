// Function : canvas_undo_init
// Namespace: 
// Entry    : 0052e5b0
// Prototype: undefined8 * canvas_undo_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined * param_10, undefined8 param_11, char * param_12, uint * param_13, undefined4 * param_14)
// Body     : 0052e5b0 - 0052e68c


undefined8 *
canvas_undo_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                undefined *param_10,undefined8 param_11,char *param_12,uint *param_13,
                undefined4 *param_14)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 extraout_RDX;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar3 = (long *)canvas_undo_get((long)param_9);
  if (plVar3 == (long *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = getbytes(0x30);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = param_9;
    puVar4[5] = 0;
    if (*plVar3 == 0) {
      *plVar3 = (long)puVar4;
      plVar3[1] = (long)puVar4;
      canvas_undo_cleardirty((long)param_9);
      bVar1 = canvas_isabstraction((long)param_9);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        plVar3[2] = 1;
      }
      puVar4[4] = 0;
      puVar4[3] = &DAT_0065efc5;
      uVar2 = glist_isvisible((long)param_9);
      if (uVar2 != 0) {
        bVar1 = glist_istoplevel((long)param_9);
        if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
          pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      0x654682,"^ ss",param_9,&DAT_0065efc5,&DAT_0065efc5,param_14,unaff_BL);
        }
      }
    }
    else {
      lVar5 = plVar3[1];
      if (*(long *)(lVar5 + 0x28) != 0) {
        canvas_undo_rebranch
                  (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,extraout_RDX,param_12,param_13,param_14);
        lVar5 = plVar3[1];
      }
      *(undefined8 **)(lVar5 + 0x28) = puVar4;
      puVar4[4] = lVar5;
      plVar3[1] = (long)puVar4;
    }
  }
  return puVar4;
}


