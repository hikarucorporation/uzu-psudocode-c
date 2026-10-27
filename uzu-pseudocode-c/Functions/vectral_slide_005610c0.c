// Function : vectral_slide
// Namespace: 
// Entry    : 005610c0
// Prototype: undefined vectral_slide(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 005610c0 - 0056113b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vectral_slide(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = DAT_005d9038;
  dVar3 = _DAT_005d9000;
  pcVar2 = vectral_perform_bypass;
  if ((param_3 != 0) && (*param_4 == 1)) {
    dVar4 = _DAT_005d9000;
    if (DAT_005d9038 < (float)param_4[2]) {
      dVar4 = _DAT_005d9000 / (double)(float)param_4[2];
    }
    *(double *)(param_1 + 0x58) = dVar4;
    if (((param_3 != 1) && (param_4[4] == 1)) && (fVar1 < (float)param_4[6])) {
      dVar3 = _DAT_005d9000 / (double)(float)param_4[6];
    }
    *(double *)(param_1 + 0x60) = dVar3;
    pcVar2 = vectral_perform_slide;
  }
  *(code **)(param_1 + 0x38) = pcVar2;
  return;
}


