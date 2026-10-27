// Function : vectral_deltaclip
// Namespace: 
// Entry    : 00561140
// Prototype: undefined vectral_deltaclip(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 00561140 - 00561191


void vectral_deltaclip(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if ((param_3 == 0) || (*param_4 != 1)) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(code **)(param_1 + 0x38) = vectral_perform_clip;
    return;
  }
  *(int *)(param_1 + 0x6c) = param_4[2];
  iVar1 = 0;
  if ((param_3 != 1) && (param_4[4] == 1)) {
    iVar1 = param_4[6];
  }
  *(int *)(param_1 + 0x68) = iVar1;
  *(code **)(param_1 + 0x38) = vectral_perform_clip;
  return;
}


