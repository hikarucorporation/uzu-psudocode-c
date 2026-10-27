// Function : qlist_tempo
// Namespace: 
// Entry    : 0055aa10
// Prototype: undefined qlist_tempo(float param_1, long param_2)
// Body     : 0055aa10 - 0055aaa4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qlist_tempo(float param_1,long param_2)

{
  float fVar1;
  double extraout_XMM0_Qa;
  float fVar2;
  float fVar3;
  
  if (_DAT_0065a020 <= (double)param_1) {
    if (_DAT_00655400 < (double)param_1) {
      param_1 = DAT_00652e0c;
    }
  }
  else {
    param_1 = DAT_0065a054;
  }
  fVar3 = DAT_005d9038 / param_1;
  if (*(double *)(param_2 + 0x70) != 0.0) {
    clock_gettimesince(*(double *)(param_2 + 0x70));
    fVar2 = *(float *)(param_2 + 0x78) - (float)extraout_XMM0_Qa;
    fVar1 = 0.0;
    if (0.0 <= fVar2) {
      fVar1 = fVar2;
    }
    clock_delay((double)((fVar1 * fVar3) / *(float *)(param_2 + 0x68)),*(double **)(param_2 + 0x60))
    ;
  }
  *(float *)(param_2 + 0x68) = fVar3;
  return;
}


