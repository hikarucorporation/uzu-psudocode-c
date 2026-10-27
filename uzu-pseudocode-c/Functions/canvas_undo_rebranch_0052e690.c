// Function : canvas_undo_rebranch
// Namespace: 
// Entry    : 0052e690
// Prototype: undefined canvas_undo_rebranch(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined * param_10, undefined8 param_11, char * param_12, uint * param_13, undefined4 * param_14)
// Body     : 0052e690 - 0052e767


void canvas_undo_rebranch
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
               undefined *param_10,undefined8 param_11,char *param_12,uint *param_13,
               undefined4 *param_14)

{
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  long lVar5;
  long lVar6;
  undefined7 extraout_var;
  char *pcVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  void *pvVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar10;
  undefined1 uVar11;
  
  uVar3 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar5 = canvas_undo_get((long)param_9);
  uVar11 = (undefined1)in_RAX;
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 8);
  pvVar8 = *(void **)(lVar6 + 0x28);
  uVar9 = extraout_XMM0_Qa;
  if (pvVar8 != (void *)0x0) {
    do {
      param_12 = "canvas_undo_rebranch";
      canvas_undo_doit(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       (long)pvVar8,0,(long *)"canvas_undo_rebranch",param_13,param_14);
      pvVar1 = *(void **)((long)pvVar8 + 0x28);
      param_10 = &DAT_00000030;
      uVar9 = freebytes(pvVar8);
      uVar11 = (undefined1)in_RAX;
      pvVar8 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    lVar6 = *(long *)(lVar5 + 8);
    *(undefined8 *)(lVar6 + 0x28) = 0;
  }
  pcVar7 = *(char **)(lVar6 + 0x18);
  uVar4 = glist_isvisible((long)param_9);
  uVar9 = extraout_RDX;
  uVar10 = extraout_XMM0_Qa_00;
  if ((uVar4 != 0) &&
     (bVar2 = glist_istoplevel((long)param_9), uVar9 = extraout_RDX_00, uVar10 = extraout_XMM0_Qa_01
     , (int)CONCAT71(extraout_var,bVar2) != 0)) {
    param_10 = &DAT_0065470a;
    param_13 = (uint *)&DAT_0065efc5;
    uVar10 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,0x654682,"^ ss",param_9,pcVar7,&DAT_0065efc5,param_14,uVar11);
    param_12 = pcVar7;
    uVar9 = extraout_RDX_01;
  }
  canvas_resume_dsp(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar3,
                    param_10,uVar9,param_12,(char *)param_13,param_14);
  return;
}


