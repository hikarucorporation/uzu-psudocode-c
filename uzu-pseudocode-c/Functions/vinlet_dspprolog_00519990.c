// Function : vinlet_dspprolog
// Namespace: 
// Entry    : 00519990
// Prototype: undefined vinlet_dspprolog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, ulong param_14, int param_15, int param_16, int param_17)
// Body     : 00519990 - 00519cf4


void vinlet_dspprolog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,ulong param_14,int param_15,int param_16,int param_17)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar14;
  long in_stack_ffffffffffffff98;
  uint local_58;
  
  if (*(long *)(param_9 + 0x70) == 0) {
    return;
  }
  if (param_17 == 0) {
    iVar4 = inlet_getsignalindex
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(long *)(param_9 + 0x38),param_10,param_11,param_12,param_13,param_14);
    uVar14 = *(undefined8 *)(param_10 + (long)iVar4 * 8);
  }
  else {
    iVar4 = (int)param_13;
    uVar5 = (long)((int)param_12 + iVar4 + -1) % (long)iVar4;
    iVar6 = (int)uVar5;
    if (param_10 == 0) {
      local_58 = 1;
      puVar7 = (uint *)0x0;
      uVar10 = 1;
    }
    else {
      iVar3 = inlet_getsignalindex
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(long *)(param_9 + 0x38),param_10,uVar5 & 0xffffffff,param_12,param_13,
                         param_14);
      puVar7 = *(uint **)(param_10 + (long)iVar3 * 8);
      local_58 = *puVar7;
      uVar10 = (int)(local_58 * param_16) / param_15;
      param_1 = reblocker_resize(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,(long *)(param_9 + 0x70),*(uint *)(param_9 + 0x60),
                                 puVar7[5],*(int *)(param_9 + 0x40));
      *(uint *)(param_9 + 0x60) = puVar7[5];
    }
    uVar13 = (uint)param_11;
    if ((int)(uint)param_11 <= (int)uVar10) {
      uVar13 = uVar10;
    }
    uVar1 = *(uint *)(param_9 + 0x40);
    if (uVar13 != uVar1) {
      if (0 < *(int *)(param_9 + 0x60)) {
        lVar11 = 0;
        lVar8 = 0;
        do {
          __s = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(void **)(*(long *)(param_9 + 0x70) + lVar11),(long)(int)uVar1 << 2,
                            (long)(int)uVar13 << 2);
          *(void **)(*(long *)(param_9 + 0x70) + lVar11) = __s;
          memset(__s,0,(long)(int)uVar13 << 2);
          lVar8 = lVar8 + 1;
          lVar11 = lVar11 + 0x48;
          param_1 = extraout_XMM0_Qa_00;
        } while (lVar8 < *(int *)(param_9 + 0x60));
      }
      *(uint *)(param_9 + 0x40) = uVar13;
    }
    if (param_10 == 0) {
      if (0 < *(int *)(param_9 + 0x60)) {
        uVar14 = 0;
        lVar8 = 0;
        lVar11 = 0;
        do {
          memset(*(void **)(*(long *)(param_9 + 0x70) + lVar8),0,(long)(int)uVar13 << 2);
          lVar11 = lVar11 + 1;
          lVar8 = lVar8 + 0x48;
        } while (lVar11 < *(int *)(param_9 + 0x60));
        goto LAB_00519ce2;
      }
    }
    else {
      *(uint *)(param_9 + 0x4c) = iVar4 * uVar10;
      iVar4 = uVar10 * iVar6 - iVar4 * uVar10;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      *(uint *)(param_9 + 0x44) = uVar13 + iVar4;
      uVar5 = (ulong)*(uint *)(param_9 + 0x60);
      if (0 < (int)*(uint *)(param_9 + 0x60)) {
        lVar8 = (long)(int)uVar10;
        if ((param_15 == 1) && (param_16 == 1)) {
          lVar11 = 0x10;
          lVar12 = 0;
          uVar9 = 0;
          do {
            lVar2 = *(long *)(param_9 + 0x70);
            *(undefined8 *)(lVar2 + -4 + lVar11) = 0x100000001;
            param_1 = dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              PTR_vinlet_doprolog_007156c0,5,param_9,*(long *)(puVar7 + 2) + lVar12,
                              *(undefined8 *)(lVar2 + -0x10 + lVar11),
                              (ulong)(uVar9 == (int)uVar5 - 1),lVar8);
            uVar9 = uVar9 + 1;
            uVar5 = (ulong)*(int *)(param_9 + 0x60);
            lVar12 = lVar12 + (long)(int)local_58 * 4;
            lVar11 = lVar11 + 0x48;
          } while ((long)uVar9 < (long)uVar5);
        }
        else {
          lVar11 = 0xc;
          lVar12 = 0;
          uVar5 = 0;
          do {
            lVar2 = *(long *)(param_9 + 0x70);
            *(int *)(lVar2 + lVar11) = param_15;
            *(int *)(lVar2 + 4 + lVar11) = param_16;
            uVar13 = (uint)(0x2b < *(int *)PTR_pd_compatibilitylevel_00715a40);
            if (*(uint *)(param_9 + 0x50) != 0xffffffff) {
              uVar13 = *(uint *)(param_9 + 0x50);
            }
            uVar14 = resamplefrom_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,lVar2 + lVar11 + -4,*(long *)(puVar7 + 2) + lVar12,
                                      local_58,uVar10,uVar13,param_14,in_stack_ffffffffffffff98);
            param_14 = (ulong)(uVar5 == *(int *)(param_9 + 0x60) - 1);
            in_stack_ffffffffffffff98 = lVar8;
            param_1 = dsp_add(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              PTR_vinlet_doprolog_007156c0,5,param_9,
                              *(undefined8 *)(*(long *)(param_9 + 0x70) + 0xc + lVar11),
                              *(undefined8 *)(*(long *)(param_9 + 0x70) + -0xc + lVar11),param_14,
                              lVar8);
            uVar5 = uVar5 + 1;
            lVar12 = lVar12 + (long)(int)local_58 * 4;
            lVar11 = lVar11 + 0x48;
          } while ((long)uVar5 < (long)*(int *)(param_9 + 0x60));
        }
      }
    }
    uVar14 = 0;
  }
LAB_00519ce2:
  *(undefined8 *)(param_9 + 0x58) = uVar14;
  return;
}


