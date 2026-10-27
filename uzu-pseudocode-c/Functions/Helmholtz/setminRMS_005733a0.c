// Function : setminRMS
// Namespace: Helmholtz
// Entry    : 005733a0
// Prototype: undefined setminRMS(float param_1, Helmholtz * this)
// Body     : 005733a0 - 005733b4


/* Helmholtz::setminRMS(float) */

void __thiscall Helmholtz::setminRMS(float param_1,Helmholtz *this)

{
  float fVar1;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(this + 0x34) = fVar1;
  return;
}


