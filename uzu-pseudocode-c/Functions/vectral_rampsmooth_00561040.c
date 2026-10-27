// Function : vectral_rampsmooth
// Namespace: 
// Entry    : 00561040
// Prototype: undefined vectral_rampsmooth(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 00561040 - 005610b3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vectral_rampsmooth(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = _DAT_005d9000;
  pcVar1 = vectral_perform_bypass;
  if ((param_3 != 0) && (*param_4 == 1)) {
    dVar3 = _DAT_005d9000;
    if (1 < (int)(float)param_4[2]) {
      dVar3 = _DAT_005d9000 / (double)(int)(float)param_4[2];
    }
    *(double *)(param_1 + 0x58) = dVar3;
    if (((param_3 != 1) && (param_4[4] == 1)) && (1 < (int)(float)param_4[6])) {
      dVar2 = _DAT_005d9000 / (double)(int)(float)param_4[6];
    }
    *(double *)(param_1 + 0x60) = dVar2;
    pcVar1 = vectral_perform_slide;
  }
  *(code **)(param_1 + 0x38) = pcVar1;
  return;
}


