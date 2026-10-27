// Function : sigdelread_dsp
// Namespace: 
// Entry    : 00591690
// Prototype: undefined sigdelread_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, long param_14)
// Body     : 00591690 - 005918b8


void sigdelread_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,long param_14)

{
  float fVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  float fVar12;
  ulong uVar13;
  ulong extraout_XMM0_Qa;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar5 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long *)(param_9 + 0x30),sigdelwrite_class);
  piVar8 = (int *)*param_10;
  fVar14 = (float)piVar8[4];
  uVar15 = 0;
  *(float *)(param_9 + 0x40) = (float)((double)fVar14 * DAT_00651e50);
  uVar13 = (ulong)(uint)(float)*piVar8;
  *(float *)(param_9 + 0x44) = (float)*piVar8;
  if (plVar5 == (long *)0x0) {
    pcVar9 = (char *)**(undefined8 **)(param_9 + 0x30);
    if (*pcVar9 == '\0') {
      return;
    }
    pcVar11 = "delread~: %s: no such delwrite~";
    goto LAB_00591896;
  }
  iVar10 = *piVar8;
  iVar4 = *(int *)((long)plVar5 + 0x5c);
  iVar3 = ugen_getsortno();
  if (iVar4 == iVar3) {
    iVar4 = (int)plVar5[0xc];
    if ((int)plVar5[0xc] < iVar10) {
      *(int *)(plVar5 + 0xc) = iVar10;
      iVar4 = iVar10;
    }
    if (fVar14 <= *(float *)((long)plVar5 + 100)) {
      fVar14 = *(float *)((long)plVar5 + 100);
    }
    else {
      *(float *)((long)plVar5 + 100) = fVar14;
    }
  }
  else {
    *(int *)(plVar5 + 0xc) = iVar10;
    *(float *)((long)plVar5 + 100) = fVar14;
    uVar15 = ugen_getsortno();
    *(undefined4 *)((long)plVar5 + 0x5c) = uVar15;
    fVar14 = *(float *)((long)plVar5 + 100);
    iVar4 = (int)plVar5[0xc];
  }
  uVar15 = 0;
  fVar12 = *(float *)(plVar5 + 7) * DAT_005d908c * fVar14;
  iVar3 = (int)fVar12;
  iVar10 = 1;
  if (0 < iVar3) {
    iVar10 = iVar3;
  }
  iVar10 = iVar10 + iVar4 + (-iVar10 & 3U);
  if ((int)plVar5[8] != iVar10) {
    pvVar6 = resizebytes((ulong)(uint)fVar12,(ulong)(uint)fVar14,param_3,param_4,param_5,param_6,
                         param_7,param_8,(void *)plVar5[9],(long)(int)plVar5[8] * 4 + 0x10,
                         (long)iVar10 * 4 + 0x10);
    plVar5[9] = (long)pvVar6;
    *(int *)(plVar5 + 8) = iVar10;
    *(undefined4 *)(plVar5 + 10) = 4;
  }
  lVar2 = plVar5[0xb];
  iVar10 = ugen_getsortno();
  uVar17 = 0;
  if ((int)lVar2 != iVar10) {
    uVar17 = (undefined4)plVar5[0xc];
  }
  *(undefined4 *)(param_9 + 0x48) = uVar17;
  fVar12 = *(float *)(param_9 + 0x38);
  plVar7 = pd_findbyclass((ulong)(uint)fVar12,CONCAT44(uVar15,fVar14),param_3,param_4,param_5,
                          param_6,param_7,param_8,*(long *)(param_9 + 0x30),sigdelwrite_class);
  uVar17 = (undefined4)((ulong)param_3 >> 0x20);
  fVar16 = (float)param_3;
  uVar13 = (ulong)(uint)fVar12;
  *(float *)(param_9 + 0x38) = fVar12;
  if (plVar7 != (long *)0x0) {
    fVar1 = *(float *)(param_9 + 0x44);
    uVar13 = (ulong)(uint)fVar1;
    fVar16 = (float)*(int *)(param_9 + 0x48);
    fVar12 = (fVar1 - fVar16) +
             (float)(int)((double)(fVar12 * *(float *)(param_9 + 0x40)) + DAT_005db338);
    param_4 = (ulong)(uint)fVar12;
    *(int *)(param_9 + 0x3c) = (int)fVar12;
    fVar14 = (float)(int)fVar12;
    uVar15 = 0;
    if (fVar1 <= fVar14) {
      iVar10 = (int)plVar7[8];
      if ((int)fVar12 <= iVar10) goto LAB_00591857;
    }
    else {
      iVar10 = (int)fVar1;
    }
    *(int *)(param_9 + 0x3c) = iVar10;
    param_4 = (ulong)(uint)fVar12;
  }
LAB_00591857:
  param_13 = (char *)(param_9 + 0x3c);
  param_14 = (long)*(int *)*param_10;
  dsp_add(uVar13,CONCAT44(uVar15,fVar14),CONCAT44(uVar17,fVar16),param_4,param_5,param_6,param_7,
          param_8,sigdelread_perform,4,*(undefined8 *)((int *)*param_10 + 2),plVar5 + 8,param_13,
          param_14,in_stack_ffffffffffffffc8);
  param_3 = CONCAT44(uVar17,fVar16);
  iVar10 = (int)plVar5[8];
  if ((iVar10 < 1) || (piVar8 = (int *)*param_10, *piVar8 <= iVar10)) {
    return;
  }
  pcVar9 = (char *)**(undefined8 **)(param_9 + 0x30);
  pcVar11 = "delread~ %s: blocksize larger than delwrite~ buffer";
  uVar13 = extraout_XMM0_Qa;
LAB_00591896:
  pd_error(uVar13,CONCAT44(uVar15,fVar14),param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           pcVar11,pcVar9,piVar8,param_13,param_14);
  return;
}


