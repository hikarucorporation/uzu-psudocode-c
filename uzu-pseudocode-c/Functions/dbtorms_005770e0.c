// Function : dbtorms
// Namespace: 
// Entry    : 005770e0
// Prototype: float dbtorms(float param_1)
// Body     : 005770e0 - 00577118


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float dbtorms(float param_1)

{
  double dVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 < param_1) {
    if (DAT_0065343c <= param_1) {
      param_1 = DAT_0065343c;
    }
    dVar1 = exp((double)param_1 * _DAT_006533a8 + _DAT_006533b0);
    fVar2 = (float)dVar1;
  }
  return fVar2;
}


