// Function : sigvd_dsp
// Namespace: 
// Entry    : 00591b00
// Prototype: undefined sigvd_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, long * param_13, long param_14)
// Body     : 00591b00 - 00591cb1


void sigvd_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 *param_10,undefined8 param_11,int *param_12,long *param_13,
              long param_14)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar14;
  undefined4 uVar15;
  
  plVar5 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long *)(param_9 + 0x30),sigdelwrite_class);
  piVar1 = (int *)*param_10;
  fVar14 = (float)piVar1[4];
  uVar15 = 0;
  fVar12 = (float)((double)fVar14 * DAT_00651e50);
  uVar13 = CONCAT44((int)((ulong)((double)fVar14 * DAT_00651e50) >> 0x20),fVar12);
  *(float *)(param_9 + 0x38) = fVar12;
  if (plVar5 == (long *)0x0) {
    pcVar8 = (char *)**(undefined8 **)(param_9 + 0x30);
    if (*pcVar8 == '\0') {
      return;
    }
    pcVar10 = "delread4~: %s: no such delwrite~";
  }
  else {
    iVar9 = *piVar1;
    iVar4 = *(int *)((long)plVar5 + 0x5c);
    iVar3 = ugen_getsortno();
    if (iVar4 == iVar3) {
      iVar4 = (int)plVar5[0xc];
      if ((int)plVar5[0xc] < iVar9) {
        *(int *)(plVar5 + 0xc) = iVar9;
        iVar4 = iVar9;
      }
      if (fVar14 <= *(float *)((long)plVar5 + 100)) {
        fVar14 = *(float *)((long)plVar5 + 100);
      }
      else {
        *(float *)((long)plVar5 + 100) = fVar14;
      }
    }
    else {
      *(int *)(plVar5 + 0xc) = iVar9;
      *(float *)((long)plVar5 + 100) = fVar14;
      uVar15 = ugen_getsortno();
      *(undefined4 *)((long)plVar5 + 0x5c) = uVar15;
      fVar14 = *(float *)((long)plVar5 + 100);
      iVar4 = (int)plVar5[0xc];
    }
    uVar15 = 0;
    fVar12 = *(float *)(plVar5 + 7) * DAT_005d908c * fVar14;
    iVar3 = (int)fVar12;
    iVar9 = 1;
    if (0 < iVar3) {
      iVar9 = iVar3;
    }
    iVar9 = iVar9 + iVar4 + (-iVar9 & 3U);
    if ((int)plVar5[8] != iVar9) {
      pvVar6 = resizebytes((ulong)(uint)fVar12,(ulong)(uint)fVar14,param_3,param_4,param_5,param_6,
                           param_7,param_8,(void *)plVar5[9],(long)(int)plVar5[8] * 4 + 0x10,
                           (long)iVar9 * 4 + 0x10);
      plVar5[9] = (long)pvVar6;
      *(int *)(plVar5 + 8) = iVar9;
      *(undefined4 *)(plVar5 + 10) = 4;
    }
    plVar11 = plVar5 + 8;
    lVar2 = plVar5[0xb];
    iVar9 = ugen_getsortno();
    uVar7 = 0;
    if ((int)lVar2 != iVar9) {
      uVar7 = (undefined4)plVar5[0xc];
    }
    *(undefined4 *)(param_9 + 0x3c) = uVar7;
    param_13 = plVar11;
    param_14 = param_9;
    dsp_add(extraout_XMM0_Qa,CONCAT44(uVar15,fVar14),param_3,param_4,param_5,param_6,param_7,param_8
            ,sigvd_perform,5,*(undefined8 *)((int *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),
            plVar11,param_9,(long)*(int *)*param_10);
    if (((int)*plVar11 < 1) || (param_12 = (int *)*param_10, *param_12 <= (int)*plVar11)) {
      return;
    }
    pcVar8 = (char *)**(undefined8 **)(param_9 + 0x30);
    pcVar10 = "delread4~ %s: blocksize larger than delwrite~ buffer";
    uVar13 = extraout_XMM0_Qa_00;
  }
  pd_error(uVar13,CONCAT44(uVar15,fVar14),param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           pcVar10,pcVar8,param_12,(char *)param_13,param_14);
  return;
}


