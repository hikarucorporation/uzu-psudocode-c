// Function : adsr_dsp
// Namespace: 
// Entry    : 0056ef00
// Prototype: undefined adsr_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0056ef00 - 0056f1d0


void adsr_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 extraout_RDX;
  ulong uVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 in_stack_ffffffffffffffb8;
  
  puVar4 = (uint *)*param_10;
  dVar9 = (double)(float)puVar4[4] * DAT_00651e50;
  fVar8 = (float)dVar9;
  *(float *)(param_9 + 0x80) = fVar8;
  uVar1 = *puVar4;
  *(uint *)(param_9 + 0x44) = uVar1;
  uVar2 = puVar4[5];
  uVar10 = signal_setmultiout(CONCAT44((int)((ulong)dVar9 >> 0x20),fVar8),param_2,param_3,param_4,
                              param_5,param_6,param_7,param_8,param_10 + 6,(ulong)uVar2,param_11,
                              (ulong)uVar1,param_13,param_14);
  if (*(uint *)(param_9 + 0x40) != uVar2) {
    uVar7 = (long)(int)uVar2 * 8;
    pvVar6 = resizebytes(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x88),(long)(int)*(uint *)(param_9 + 0x40) << 3,uVar7)
    ;
    *(void **)(param_9 + 0x88) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x90),(long)*(int *)(param_9 + 0x40) << 3,uVar7);
    *(void **)(param_9 + 0x90) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0x98),(long)*(int *)(param_9 + 0x40) << 3,uVar7);
    *(void **)(param_9 + 0x98) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xa0),(long)*(int *)(param_9 + 0x40) << 3,uVar7);
    *(void **)(param_9 + 0xa0) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xa8),(long)*(int *)(param_9 + 0x40) << 3,uVar7);
    *(void **)(param_9 + 0xa8) = pvVar6;
    uVar7 = (long)(int)uVar2 << 2;
    pvVar6 = resizebytes(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xb0),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 0xb0) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xb8),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 0xb8) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xc0),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 0xc0) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 200),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 200) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xd0),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 0xd0) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xe8),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 0xe8) = pvVar6;
    pvVar6 = resizebytes(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,*(void **)(param_9 + 0xe0),(long)*(int *)(param_9 + 0x40) << 2,uVar7);
    *(void **)(param_9 + 0xe0) = pvVar6;
    *(uint *)(param_9 + 0x40) = uVar2;
    uVar10 = extraout_XMM0_Qa_10;
  }
  lVar5 = param_10[2];
  uVar1 = *(uint *)(param_10[1] + 0x14);
  uVar3 = *(uint *)(param_10[3] + 0x14);
  uVar7 = (ulong)uVar3;
  if (((((((int)uVar1 < 2) || (uVar1 == uVar2)) &&
        (((int)*(uint *)(lVar5 + 0x14) < 2 || (*(uint *)(lVar5 + 0x14) == uVar2)))) &&
       (((int)uVar3 < 2 || (uVar3 == uVar2)))) &&
      (((int)*(uint *)(param_10[4] + 0x14) < 2 || (*(uint *)(param_10[4] + 0x14) == uVar2)))) &&
     (((int)*(uint *)(param_10[5] + 0x14) < 2 || (*(uint *)(param_10[5] + 0x14) == uVar2)))) {
    dsp_add(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,adsr_perform,0xd,param_9,
            *(undefined8 *)(*param_10 + 8),*(undefined8 *)(param_10[1] + 8),
            *(undefined8 *)(lVar5 + 8),*(undefined8 *)(param_10[3] + 8));
    return;
  }
  uVar10 = dsp_add_zero(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(param_10[6] + 8),uVar2 * *(int *)(param_9 + 0x44),lVar5,
                        uVar7,param_13,param_14,in_stack_ffffffffffffffb8);
  pd_error(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "[adsr~]: channel sizes mismatch",extraout_RDX,uVar7,param_13,param_14);
  return;
}


