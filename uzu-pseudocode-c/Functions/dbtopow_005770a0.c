// Function : dbtopow
// Namespace: 
// Entry    : 005770a0
// Prototype: float dbtopow(float param_1)
// Body     : 005770a0 - 005770d8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float dbtopow(float param_1)

{
  double dVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 < param_1) {
    if (DAT_00653440 <= param_1) {
      param_1 = DAT_00653440;
    }
    dVar1 = exp((double)param_1 * _DAT_00652e48 + _DAT_006533c0);
    fVar2 = (float)dVar1;
  }
  return fVar2;
}


