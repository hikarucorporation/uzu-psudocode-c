// Function : scale_list
// Namespace: 
// Entry    : 0055df80
// Prototype: undefined scale_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0055df80 - 0055e0c0


void scale_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
               undefined8 param_14)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar2 = *(int *)(param_9 + 0x60);
  *(long *)(param_9 + 0x70) = (long)(int)param_11;
  uVar5 = (long)(int)param_11 << 4;
  *(ulong *)(param_9 + 0x60) = uVar5;
  pvVar4 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x58),(long)iVar2,uVar5);
  *(void **)(param_9 + 0x58) = pvVar4;
  lVar6 = *(long *)(param_9 + 0x68);
  fVar1 = *(float *)(param_9 + 0x54);
  if (lVar6 == 1) {
    if (DAT_005d9038 <= fVar1) goto LAB_0055e002;
    *(undefined4 *)(param_9 + 0x50) = 0x3f800000;
  }
  else {
    uVar9 = 0;
    param_2 = 0;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_9 + 0x50) = 0;
      ptrtoscaling = clas_scaling;
      if (lVar6 == 0) {
        ptrtoscaling = exp_scaling;
      }
      goto LAB_0055e02e;
    }
LAB_0055e002:
    ptrtoscaling = clas_scaling;
    if (lVar6 == 0) {
      ptrtoscaling = exp_scaling;
    }
    *(float *)(param_9 + 0x50) = fVar1;
    uVar9 = param_2;
    if (fVar1 != DAT_005d9038) goto LAB_0055e02e;
  }
  ptrtoscaling = scaling;
  uVar9 = param_2;
LAB_0055e02e:
  uVar7 = atom_getfloatarg(0,param_11,param_12);
  uVar8 = CONCAT44(extraout_XMM0_Db,uVar7);
  *(undefined4 *)(param_9 + 0x30) = uVar7;
  if (0 < (int)param_11) {
    lVar6 = 8;
    uVar5 = 0;
    do {
      *(undefined4 *)(*(long *)(param_9 + 0x58) + -8 + lVar6) = 1;
      pcVar3 = ptrtoscaling;
      atom_getfloatarg((int)uVar5,param_11,param_12);
      uVar8 = (*pcVar3)(param_9);
      *(int *)(*(long *)(param_9 + 0x58) + lVar6) = (int)uVar8;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (param_11 != uVar5);
  }
  outlet_list(uVar8,uVar9,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x38)
              ,0,param_11,*(undefined8 *)(param_9 + 0x58),param_13,param_14);
  return;
}


