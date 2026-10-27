// Function : scale_bang
// Namespace: 
// Entry    : 0055dee0
// Prototype: undefined scale_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055dee0 - 0055df74


void scale_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  fVar3 = *(float *)(param_9 + 0x54);
  uVar4 = 0;
  *(undefined4 *)(param_9 + 0x30) = *(undefined4 *)(param_9 + 0x34);
  lVar1 = *(long *)(param_9 + 0x68);
  if (lVar1 == 1) {
    if (DAT_005d9038 <= fVar3) goto LAB_0055df35;
    *(undefined4 *)(param_9 + 0x50) = 0x3f800000;
  }
  else {
    uVar5 = 0;
    param_3 = 0;
    if (fVar3 < 0.0) {
      *(undefined4 *)(param_9 + 0x50) = 0;
      ptrtoscaling = clas_scaling;
      if (lVar1 == 0) {
        ptrtoscaling = exp_scaling;
      }
      goto LAB_0055df5f;
    }
LAB_0055df35:
    ptrtoscaling = clas_scaling;
    if (lVar1 == 0) {
      ptrtoscaling = exp_scaling;
    }
    *(float *)(param_9 + 0x50) = fVar3;
    uVar5 = param_3;
    if (fVar3 != DAT_005d9038) goto LAB_0055df5f;
  }
  ptrtoscaling = scaling;
  uVar5 = param_3;
LAB_0055df5f:
  uVar2 = (*ptrtoscaling)(param_9);
  outlet_float(uVar2,CONCAT44(uVar4,fVar3),uVar5,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x38));
  return;
}


