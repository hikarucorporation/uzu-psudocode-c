// Function : glist_add
// Namespace: 
// Entry    : 00515d30
// Prototype: undefined glist_add(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00515d30 - 00515e4d


void glist_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
              undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  
  param_10[1] = 0;
  lVar3 = param_9[6];
  if (param_9[6] == 0) {
    param_9[6] = (long)param_10;
    lVar3 = param_9[0x18];
  }
  else {
    do {
      lVar4 = lVar3;
      lVar3 = *(long *)(lVar4 + 8);
    } while (lVar3 != 0);
    *(long **)(lVar4 + 8) = param_10;
    lVar3 = param_9[0x18];
  }
  if (lVar3 != 0) {
    uVar5 = 0;
    plVar2 = pd_checkobject(param_10);
    if (plVar2 != (long *)0x0) {
      rtext_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                (long)param_9,(long)plVar2,extraout_RDX,uVar5,param_13,param_14);
    }
    if (((param_9[0x18] != 0) && ((*(ushort *)(param_9 + 0x1d) & 0x180) == 0x100)) &&
       (plVar2 = pd_checkobject(param_10), plVar2 != (long *)0x0)) {
      *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) | 0x80;
      canvas_drawredrect(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,(long)param_9,1);
    }
  }
  uVar1 = glist_isvisible((long)param_9);
  if (uVar1 != 0) {
    gobj_vis(param_10,param_9,1);
  }
  uVar1 = class_isdrawcommand(*param_10);
  if (uVar1 == 0) {
    return;
  }
  do {
    plVar2 = param_9;
    if ((long *)plVar2[9] == (long *)0x0) break;
    param_9 = (long *)plVar2[9];
  } while ((*(ushort *)(plVar2 + 0x1d) & 0x901) == 0x100);
  lVar3 = canvas_makebindsym(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(undefined8 *)plVar2[0x19]);
  lVar3 = template_findbyname(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar3);
  canvas_redrawallfortemplate
            (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar3,0);
  return;
}


