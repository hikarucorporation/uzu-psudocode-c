// Function : signal_makereusable
// Namespace: 
// Entry    : 004f6430
// Prototype: undefined signal_makereusable(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 004f6430 - 004f65b0


void signal_makereusable(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,long param_10,undefined8 param_11,ulong param_12,
                        char *param_13,undefined8 param_14)

{
  bool bVar1;
  undefined1 in_AL;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar8;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  if ((int)*(uint *)(param_9 + 0x40) < 1) {
    lVar9 = 0;
  }
  else {
    param_12 = 0xffffffff;
    uVar7 = *(uint *)(param_9 + 0x40);
    do {
      uVar5 = (int)param_12 + 1;
      param_12 = (ulong)uVar5;
      bVar1 = 1 < uVar7;
      uVar7 = (int)uVar7 >> 1;
    } while (bVar1);
    lVar9 = (long)(int)uVar5;
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar8 = extraout_RDX;
  uVar10 = extraout_XMM0_Qa;
  if (*(int *)(*(long *)(*plVar3 + 0x40) + 0x134) != 0) {
    param_10 = param_9;
    uVar10 = post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "free %lx: %d");
    uVar8 = extraout_RDX_00;
  }
  if (*(int *)(param_9 + 0x20) == 0) {
    if (*(int *)(param_9 + 0x24) == 0) {
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar6 = *(long *)(*plVar3 + 0x40);
      lVar4 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
      if (lVar4 == param_9) {
        bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            "signal_free 2",param_10,extraout_RDX_03,lVar6,param_13,param_14,in_AL);
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar6 = *(long *)(*plVar3 + 0x40);
        lVar4 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
      }
      plVar3 = (long *)(lVar6 + lVar9 * 8 + 0x20);
      goto LAB_004f65a2;
    }
  }
  else {
    lVar9 = *(long *)(param_9 + 0x28);
    if ((lVar9 == param_9) || (lVar9 == 0)) {
      bug(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"signal_free",param_10,
          uVar8,param_12,param_13,param_14,in_AL);
    }
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar8 = extraout_RDX_01;
    uVar10 = extraout_XMM0_Qa_00;
    if (*(int *)(*(long *)(*plVar3 + 0x40) + 0x134) != 0) {
      param_10 = lVar9;
      uVar10 = post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "dereference %lx: %d");
      uVar8 = extraout_RDX_02;
    }
    if (*(int *)(lVar9 + 0x1c) < 1) {
      uVar10 = bug(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "signal_dereference",param_10,uVar8,param_12,param_13,param_14,in_AL);
      iVar2 = *(int *)(lVar9 + 0x1c) + -1;
      *(int *)(lVar9 + 0x1c) = iVar2;
      uVar8 = extraout_RDX_04;
    }
    else {
      iVar2 = *(int *)(lVar9 + 0x1c) + -1;
      *(int *)(lVar9 + 0x1c) = iVar2;
    }
    if (iVar2 == 0) {
      signal_makereusable(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar9,
                          param_10,uVar8,param_12,param_13,param_14);
    }
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *(long *)(*(long *)(*plVar3 + 0x40) + 0x128);
  plVar3 = (long *)(*(long *)(*plVar3 + 0x40) + 0x128);
LAB_004f65a2:
  *(long *)(param_9 + 0x30) = lVar4;
  *plVar3 = param_9;
  return;
}


