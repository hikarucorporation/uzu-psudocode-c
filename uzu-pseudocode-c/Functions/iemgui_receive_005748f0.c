// Function : iemgui_receive
// Namespace: 
// Entry    : 005748f0
// Prototype: undefined iemgui_receive(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 005748f0 - 00574a87


void iemgui_receive(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,long *param_10,undefined8 *param_11,long param_12,char *param_13,
                   undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar9;
  undefined8 extraout_RDX_03;
  uint uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_02;
  
  uVar1 = *(uint *)(param_10 + 0x88);
  if ((param_11 == (undefined8 *)0x0) || (puVar7 = gensym("empty"), puVar7 == param_11)) {
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = *plVar8 + 0x168;
    param_10[0x8f] = param_12;
    uVar9 = extraout_RDX_03;
    uVar11 = extraout_XMM0_Qa_02;
  }
  else {
    param_10[0x8f] = (long)param_11;
    puVar7 = canvas_realizedollar
                       (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_10[6],param_11,extraout_RDX,param_12,param_13,param_14);
    uVar9 = extraout_RDX_00;
    uVar11 = extraout_XMM0_Qa_00;
    if (puVar7 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_10[0x8c];
      if ((puVar3 == (undefined8 *)0x0) ||
         (iVar5 = strcmp((char *)*puVar7,(char *)*puVar3), uVar9 = extraout_RDX_01,
         uVar11 = extraout_XMM0_Qa_01, iVar5 != 0)) {
        if ((*(byte *)(param_10 + 0x88) & 0x40) != 0) {
          uVar11 = pd_unbind(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10
                             ,puVar3,uVar9,param_12,param_13,param_14);
          uVar9 = extraout_RDX_02;
        }
        param_10[0x8c] = (long)puVar7;
        pd_bind(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,(long)puVar7
                ,uVar9,param_12,param_13,param_14);
      }
      uVar6 = 0x40;
      goto LAB_005749d1;
    }
  }
  uVar6 = 0;
  if ((*(byte *)(param_10 + 0x88) & 0x40) != 0) {
    pd_unbind(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
              (undefined8 *)param_10[0x8c],uVar9,param_12,param_13,param_14);
    param_10[0x8c] = 0;
  }
LAB_005749d1:
  uVar2 = *(uint *)(param_10 + 0x88);
  uVar10 = uVar2 & 0xffffffbf | uVar6;
  *(uint *)(param_10 + 0x88) = uVar10 | 0x4000000;
  if (((~uVar10 & 0xc0) == 0) &&
     (iVar5 = strcmp(*(char **)param_10[0x8b],*(char **)param_10[0x8c]), iVar5 == 0)) {
    *(uint *)(param_10 + 0x88) = uVar2 & 0xfbffffbf | uVar6;
    uVar6 = glist_isvisible(param_10[6]);
  }
  else {
    uVar6 = glist_isvisible(param_10[6]);
  }
  if ((uVar6 == 0) ||
     (bVar4 = gobj_shouldvis(param_9,(long *)param_10[6]), (int)CONCAT71(extraout_var,bVar4) == 0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00574a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_10[7])(param_9,param_10[6],(uVar1 >> 5 & 2) + 6 | uVar1 >> 7 & 1);
  return;
}


