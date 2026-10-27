// Function : powtodb
// Namespace: 
// Entry    : 00577020
// Prototype: float powtodb(float param_1)
// Body     : 00577020 - 0057705a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float powtodb(float param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar1 = 0.0;
  if (0.0 < param_1) {
    dVar2 = log((double)param_1);
    fVar3 = (float)(dVar2 * _DAT_006533c8 + DAT_005d90a0);
    fVar1 = 0.0;
    if (0.0 <= fVar3) {
      fVar1 = fVar3;
    }
  }
  return fVar1;
}


