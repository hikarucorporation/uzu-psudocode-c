// Function : glist_clear
// Namespace: 
// Entry    : 00516210
// Prototype: undefined glist_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00516210 - 005162ba


void glist_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,undefined8 param_10,undefined8 param_11,long *param_12,char *param_13,
                undefined8 param_14)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 uVar7;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *plVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  puVar4 = gensym("dsp");
  plVar8 = (long *)param_9[6];
  if (plVar8 != (long *)0x0) {
    uVar3 = 0;
    bVar1 = false;
    uVar7 = extraout_RDX;
    uVar9 = extraout_XMM0_Qa;
    do {
      if (bVar1) {
LAB_00516243:
        bVar2 = false;
        bVar1 = true;
      }
      else {
        plVar5 = pd_checkobject(plVar8);
        bVar2 = true;
        uVar7 = extraout_RDX_01;
        uVar9 = extraout_XMM0_Qa_00;
        bVar1 = false;
        if (plVar5 != (long *)0x0) {
          lVar6 = zgetfn(plVar8,(long)puVar4);
          uVar7 = extraout_RDX_02;
          uVar9 = extraout_XMM0_Qa_01;
          if (lVar6 != 0) {
            uVar3 = canvas_suspend_dsp(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8);
            uVar7 = extraout_RDX_03;
            uVar9 = extraout_XMM0_Qa_02;
            goto LAB_00516243;
          }
        }
      }
      plVar5 = plVar8;
      uVar9 = glist_delete(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           plVar8,uVar7,param_12,param_13,param_14);
      plVar8 = (long *)param_9[6];
      uVar7 = extraout_RDX_00;
    } while (plVar8 != (long *)0x0);
    if (!bVar2) {
      canvas_resume_dsp(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar3,
                        plVar5,extraout_RDX_00,param_12,param_13,param_14);
      return;
    }
  }
  return;
}


