// Function : append_new
// Namespace: 
// Entry    : 005afc50
// Prototype: long * append_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, long param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005afc50 - 005afde2


long * append_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,long param_11,long *param_12,char *param_13,
                 undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar7;
  undefined8 extraout_RDX_02;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_03;
  undefined4 local_40 [2];
  long *local_38;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,append_class,
                  param_10,param_11,param_12,param_13,param_14);
  iVar8 = (int)param_10;
  puVar3 = (undefined8 *)atom_getsymbolarg(0,iVar8,param_11);
  if ((*(char *)*puVar3 == '\0') || (iVar1 = strcmp((char *)*puVar3,"-"), iVar1 == 0)) {
    param_12 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar2[9] = *param_12 + 0x168;
  }
  else {
    lVar4 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,puVar3);
    plVar2[9] = lVar4;
  }
  if (iVar8 < 2) {
    local_40[0] = 2;
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = (long *)(*plVar5 + 0x168);
    puVar10 = local_40;
    uVar9 = 1;
    local_38 = param_12;
  }
  else {
    uVar9 = iVar8 - 1;
    puVar10 = (undefined4 *)(param_11 + 0x10);
  }
  plVar5 = getbytes((ulong)uVar9 << 4);
  plVar2[0xb] = (long)plVar5;
  *(uint *)(plVar2 + 10) = uVar9;
  lVar4 = atom_getsymbolarg(0,uVar9,(long)puVar10);
  *plVar5 = lVar4;
  *(undefined4 *)(plVar5 + 1) = 0;
  uVar7 = extraout_RDX;
  uVar11 = extraout_XMM0_Qa_00;
  if (uVar9 != 1) {
    uVar6 = 1;
    do {
      lVar4 = atom_getsymbolarg(uVar6,uVar9,(long)puVar10);
      plVar5[2] = lVar4;
      *(undefined4 *)(plVar5 + 3) = 0;
      floatinlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar2,(long)(plVar5 + 3),extraout_RDX_00,param_12,param_13,param_14);
      iVar8 = (2 - uVar9) + uVar6;
      uVar6 = uVar6 + 1;
      param_12 = (long *)(ulong)uVar6;
      uVar7 = extraout_RDX_01;
      uVar11 = extraout_XMM0_Qa_02;
      plVar5 = plVar5 + 2;
    } while (iVar8 != 1);
  }
  pointerinlet_new(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                   (long)(plVar2 + 6),uVar7,param_12,param_13,param_14);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar2,*plVar5 + 0x60,extraout_RDX_02,param_12,param_13,param_14);
  gpointer_init(plVar2 + 6);
  return plVar2;
}


