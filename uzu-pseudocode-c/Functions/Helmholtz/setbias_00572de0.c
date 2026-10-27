// Function : setbias
// Namespace: Helmholtz
// Entry    : 00572de0
// Prototype: undefined setbias(float param_1, Helmholtz * this)
// Body     : 00572de0 - 00572df4


/* Helmholtz::setbias(float) */

void __thiscall Helmholtz::setbias(float param_1,Helmholtz *this)

{
  float fVar1;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(this + 0x30) = fVar1;
  return;
}


