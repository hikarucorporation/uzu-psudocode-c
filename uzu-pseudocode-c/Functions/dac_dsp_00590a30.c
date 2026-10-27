// Function : dac_dsp
// Namespace: 
// Entry    : 00590a30
// Prototype: undefined dac_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00590a30 - 00590b4b


void dac_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
            undefined8 param_14)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  if (0 < *(long *)(param_9 + 0x30)) {
    lVar6 = 0;
    do {
      puVar2 = *(uint **)(param_10 + lVar6 * 8);
      uVar1 = *puVar2;
      if (uVar1 == 0x40) {
        if (0 < (int)puVar2[5]) {
          lVar9 = (long)((int)*(undefined8 *)(*(long *)(param_9 + 0x38) + lVar6 * 8) + -1);
          lVar7 = lVar9 << 8;
          lVar10 = 0;
          do {
            lVar8 = lVar9 + lVar10;
            if (-1 < lVar8) {
              iVar4 = sys_get_outchannels();
              param_1 = extraout_XMM0_Qa;
              if (lVar8 < iVar4) {
                plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                param_13 = (char *)(*(long *)(*(long *)(*plVar5 + 0x50) + 0x40) + lVar7);
                piVar3 = *(int **)(param_10 + lVar6 * 8);
                param_14 = 0x40;
                param_1 = dsp_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,PTR_plus_perform_007158e0,4,param_13,
                                  *piVar3 * lVar10 * 4 + *(long *)(piVar3 + 2),param_13,0x40,param_9
                                 );
              }
            }
            lVar10 = lVar10 + 1;
            lVar7 = lVar7 + 0x100;
          } while (lVar10 < *(int *)(*(long *)(param_10 + lVar6 * 8) + 0x14));
        }
      }
      else {
        param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           "dac~: input vector size (%d) doesn\'t match Pd vector size (%d)",
                           (ulong)uVar1,0x40,param_13,param_14);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(long *)(param_9 + 0x30));
  }
  return;
}


