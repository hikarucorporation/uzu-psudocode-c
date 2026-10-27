// Function : resample_dsp
// Namespace: 
// Entry    : 00573d30
// Prototype: undefined resample_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00573d30 - 00573e66


void resample_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,ulong param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14,undefined8 param_15)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qa;
  
  iVar4 = (int)param_11;
  iVar9 = (int)param_13;
  if (iVar4 == iVar9) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"nothing to be done",
        param_10,param_11,param_12,param_13,param_14,(undefined1)param_15);
    return;
  }
  uVar6 = (ulong)param_13 & 0xffffffff;
  if (iVar9 < iVar4) {
    uVar6 = (ulong)(uint)(iVar4 >> 0x1f) << 0x20 | param_11 & 0xffffffff;
    uVar2 = (long)uVar6 % (long)iVar9;
    if ((int)uVar2 == 0) {
      lVar10 = (long)(int)((long)uVar6 / (long)iVar9);
      puVar8 = PTR_downsampling_perform_0_007154e8;
LAB_00573e49:
      dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar8,4,param_10,
              param_12,lVar10,(long)iVar4,param_15);
      return;
    }
    pcVar7 = "bad downsampling factor";
  }
  else {
    uVar5 = iVar9 >> 0x1f;
    uVar1 = (ulong)uVar5 << 0x20 | uVar6;
    uVar2 = (long)uVar1 % (long)iVar4;
    if ((int)uVar2 == 0) {
      if ((int)param_14 == 2) {
        if (*(int *)(param_9 + 0x38) != 1) {
          freebytes(*(void **)(param_9 + 0x30));
          *(undefined4 *)(param_9 + 0x38) = 1;
          pvVar3 = getbytes(4);
          *(void **)(param_9 + 0x30) = pvVar3;
          param_1 = extraout_XMM0_Qa;
        }
        dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                PTR_upsampling_perform_linear_00715ba8,5,param_9,param_10,param_12,
                (long)(int)((long)((ulong)uVar5 << 0x20 | uVar6) / (long)iVar4),(long)iVar4);
        return;
      }
      if ((int)param_14 == 1) {
        lVar10 = (long)(int)((long)((ulong)uVar5 << 0x20 | uVar6) / (long)iVar4);
        puVar8 = PTR_upsampling_perform_hold_00715a68;
      }
      else {
        lVar10 = (long)(int)((long)uVar1 / (long)iVar4);
        puVar8 = PTR_upsampling_perform_0_00715940;
      }
      goto LAB_00573e49;
    }
    pcVar7 = "bad upsampling factor";
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar7,
           uVar2 & 0xffffffff,param_12,param_13,param_14);
  return;
}


