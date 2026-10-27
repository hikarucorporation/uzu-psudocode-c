// Function : set_new
// Namespace: 
// Entry    : 005aedb0
// Prototype: long * set_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005aedb0 - 005aefe4


long * set_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,int *param_11,long *param_12,char *param_13,
              undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar8;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  int local_40 [2];
  long *local_38;
  
  iVar11 = (int)param_10;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,set_class,param_10
                  ,param_11,param_12,param_13,param_14);
  if (((iVar11 == 0) || (*param_11 != 2)) ||
     (iVar1 = strcmp((char *)**(undefined8 **)(param_11 + 2),"-symbol"), iVar1 != 0)) {
    *(undefined4 *)((long)plVar2 + 0x54) = 0;
  }
  else {
    *(undefined4 *)((long)plVar2 + 0x54) = 1;
    iVar11 = iVar11 + -1;
    param_11 = param_11 + 4;
  }
  puVar3 = (undefined8 *)atom_getsymbolarg(0,iVar11,(long)param_11);
  if ((*(char *)*puVar3 == '\0') || (iVar1 = strcmp((char *)*puVar3,"-"), iVar1 == 0)) {
    param_12 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar2[9] = *param_12 + 0x168;
  }
  else {
    lVar4 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,puVar3);
    plVar2[9] = lVar4;
  }
  if (iVar11 < 2) {
    local_40[0] = 2;
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = (long *)(*plVar5 + 0x168);
    piVar9 = local_40;
    uVar10 = 1;
    local_38 = param_12;
  }
  else {
    uVar10 = iVar11 - 1;
    piVar9 = param_11 + 4;
  }
  plVar5 = getbytes((ulong)uVar10 << 4);
  plVar2[0xb] = (long)plVar5;
  *(uint *)(plVar2 + 10) = uVar10;
  lVar4 = atom_getsymbolarg(0,uVar10,(long)piVar9);
  *plVar5 = lVar4;
  if (*(int *)((long)plVar2 + 0x54) == 0) {
    *(undefined4 *)(plVar5 + 1) = 0;
    uVar8 = extraout_RDX;
    uVar12 = extraout_XMM0_Qa_00;
  }
  else {
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = (long *)(*plVar6 + 0x168);
    plVar5[1] = (long)param_12;
    uVar8 = extraout_RDX_00;
    uVar12 = extraout_XMM0_Qa_01;
  }
  if (uVar10 != 1) {
    plVar5 = plVar5 + 3;
    uVar7 = 1;
    do {
      lVar4 = atom_getsymbolarg(uVar7,uVar10,(long)piVar9);
      plVar5[-1] = lVar4;
      if (*(int *)((long)plVar2 + 0x54) == 0) {
        *(undefined4 *)plVar5 = 0;
        uVar8 = extraout_RDX_02;
        uVar12 = extraout_XMM0_Qa_03;
        if (*(int *)((long)plVar2 + 0x54) == 0) goto LAB_005aef40;
LAB_005aefbf:
        symbolinlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                        (long)plVar5,uVar8,param_12,param_13,param_14);
        uVar8 = extraout_RDX_04;
        uVar12 = extraout_XMM0_Qa_05;
      }
      else {
        plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
        param_12 = (long *)0x168;
        *plVar5 = *plVar6 + 0x168;
        uVar8 = extraout_RDX_03;
        uVar12 = extraout_XMM0_Qa_04;
        if (*(int *)((long)plVar2 + 0x54) != 0) goto LAB_005aefbf;
LAB_005aef40:
        floatinlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                       (long)plVar5,uVar8,param_12,param_13,param_14);
        uVar8 = extraout_RDX_01;
        uVar12 = extraout_XMM0_Qa_02;
      }
      plVar5 = plVar5 + 2;
      iVar11 = uVar7 - uVar10;
      uVar7 = uVar7 + 1;
      param_12 = (long *)(ulong)uVar7;
    } while (iVar11 != -1);
  }
  pointerinlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                   (long)(plVar2 + 6),uVar8,param_12,param_13,param_14);
  gpointer_init(plVar2 + 6);
  return plVar2;
}


