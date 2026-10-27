// Function : any_binop_dsp
// Namespace: 
// Entry    : 0058b130
// Prototype: undefined any_binop_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, long param_11, char * param_12, char * param_13, char * param_14, char * param_15)
// Body     : 0058b130 - 0058b3ef


void any_binop_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,long param_10,long param_11,char *param_12,char *param_13,
                  char *param_14,char *param_15)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_ffffffffffffff98;
  
  piVar1 = (int *)param_9[1];
  uVar17 = ((int *)*param_9)[5];
  uVar10 = *(int *)*param_9 * uVar17;
  uVar11 = (ulong)uVar10;
  uVar6 = *piVar1 * piVar1[5];
  uVar7 = (ulong)uVar6;
  uVar12 = 1;
  if (1 < (int)uVar10) {
    uVar12 = uVar17;
  }
  if ((int)uVar10 < (int)uVar6) {
    uVar12 = piVar1[5];
  }
  uVar18 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9 + 2,(ulong)uVar12,(ulong)uVar17,piVar1,param_13,param_14);
  if ((int)uVar10 < 2) {
    if ((int)uVar6 < 2) {
      uVar5 = *(undefined8 *)(param_9[1] + 8);
      uVar4 = *(undefined8 *)(param_9[2] + 8);
      uVar15 = 1;
      uVar19 = dsp_add(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_12,4,
                       *(undefined8 *)(*param_9 + 8),uVar5,uVar4,1,in_stack_ffffffffffffff98);
      uVar18 = *(undefined8 *)((uint *)param_9[2] + 2);
      dsp_add_scalarcopy(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar18,
                         uVar18,*(uint *)param_9[2],uVar5,uVar4,uVar15,param_15);
      return;
    }
    pcVar13 = param_14;
    if ((uVar10 & 7) == 0) {
      pcVar13 = param_15;
    }
    if (param_15 == (char *)0x0) {
      pcVar13 = param_14;
    }
    uVar5 = *(undefined8 *)(param_9[1] + 8);
    uVar4 = *(undefined8 *)(*param_9 + 8);
    uVar15 = *(undefined8 *)(param_9[2] + 8);
  }
  else {
    if (1 < (int)uVar6) {
      lVar8 = *(long *)(*param_9 + 8);
      lVar9 = *(long *)(param_9[1] + 8);
      iVar2 = uVar6 + uVar10 + -1;
      if (uVar6 < uVar10) {
        uVar11 = (long)iVar2 / (long)(int)uVar6;
        iVar2 = (int)uVar11;
        if (iVar2 != 0) {
          uVar11 = uVar11 & 0xffffffff;
          lVar3 = ((long)iVar2 + -1) * uVar7;
          lVar16 = *(long *)(param_9[2] + 8) + lVar3 * 4;
          lVar8 = lVar8 + lVar3 * 4;
          lVar3 = (ulong)uVar10 - lVar3;
          do {
            uVar17 = (uint)lVar3;
            if ((long)uVar7 < lVar3) {
              uVar17 = uVar6;
            }
            lVar14 = param_11;
            if (((long)(int)uVar17 & 7U) != 0) {
              lVar14 = param_10;
            }
            if (param_11 == 0) {
              lVar14 = param_10;
            }
            uVar18 = dsp_add(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar14,4
                             ,lVar8,lVar9,lVar16,(long)(int)uVar17,in_stack_ffffffffffffff98);
            lVar16 = lVar16 + uVar7 * -4;
            lVar8 = lVar8 + uVar7 * -4;
            lVar3 = lVar3 + uVar7;
            uVar17 = (int)uVar11 - 1;
            uVar11 = (ulong)uVar17;
          } while (uVar17 != 0);
        }
      }
      else {
        uVar7 = (long)iVar2 / (long)(int)uVar10;
        iVar2 = (int)uVar7;
        if (iVar2 != 0) {
          uVar7 = uVar7 & 0xffffffff;
          lVar3 = ((long)iVar2 + -1) * uVar11;
          lVar16 = *(long *)(param_9[2] + 8) + lVar3 * 4;
          lVar9 = lVar9 + lVar3 * 4;
          lVar3 = (ulong)uVar6 - lVar3;
          do {
            uVar17 = (uint)lVar3;
            if ((long)uVar11 < lVar3) {
              uVar17 = uVar10;
            }
            lVar14 = param_11;
            if (((long)(int)uVar17 & 7U) != 0) {
              lVar14 = param_10;
            }
            if (param_11 == 0) {
              lVar14 = param_10;
            }
            uVar18 = dsp_add(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar14,4
                             ,lVar8,lVar9,lVar16,(long)(int)uVar17,in_stack_ffffffffffffff98);
            lVar16 = lVar16 + uVar11 * -4;
            lVar9 = lVar9 + uVar11 * -4;
            lVar3 = lVar3 + uVar11;
            uVar17 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar17;
          } while (uVar17 != 0);
        }
      }
      return;
    }
    pcVar13 = param_12;
    if ((uVar10 & 7) == 0) {
      pcVar13 = param_13;
    }
    if (param_13 == (char *)0x0) {
      pcVar13 = param_12;
    }
    uVar5 = *(undefined8 *)(*param_9 + 8);
    uVar4 = *(undefined8 *)(param_9[1] + 8);
    uVar15 = *(undefined8 *)(param_9[2] + 8);
    uVar6 = uVar10;
  }
  dsp_add(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar13,4,uVar5,uVar4,
          uVar15,(ulong)uVar6,param_15);
  return;
}


