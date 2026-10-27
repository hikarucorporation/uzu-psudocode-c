// Function : glist_maybevis
// Namespace: 
// Entry    : 0053fe30
// Prototype: undefined glist_maybevis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 0053fe30 - 0053fe9a


void glist_maybevis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,char *param_10,undefined8 param_11,undefined *param_12,
                   char *param_13,undefined *param_14,undefined1 param_15)

{
  undefined *puVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  long *plVar4;
  
  puVar1 = PTR_canvas_class_00715918;
  uVar3 = (undefined1)unaff_RBX;
  plVar4 = (long *)param_9[6];
  if (plVar4 != (long *)0x0) {
    lVar2 = *(long *)PTR_canvas_class_00715918;
    do {
      if (*plVar4 == lVar2) {
        param_1 = glist_maybevis(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 plVar4,param_10,param_11,param_12,param_13,param_14,(char)unaff_RBX
                                );
        lVar2 = *(long *)puVar1;
        param_11 = extraout_RDX;
      }
      uVar3 = (undefined1)unaff_RBX;
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
  }
  if ((*(byte *)(param_9 + 0x1d) & 1) == 0) {
    return;
  }
  canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12,param_13,param_14,uVar3);
  canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,extraout_RDX_00,param_12,param_13,param_14,param_15);
  return;
}


