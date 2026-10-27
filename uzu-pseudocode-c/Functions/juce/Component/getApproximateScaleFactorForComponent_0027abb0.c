// Function : getApproximateScaleFactorForComponent
// Namespace: juce:Component
// Entry    : 0027abb0
// Prototype: float getApproximateScaleFactorForComponent(long * param_1)
// Body     : 0027abb0 - 0027adb7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::getApproximateScaleFactorForComponent(juce::Component const*) */

float __cdecl juce::Component::getApproximateScaleFactorForComponent(long *param_1)

{
  float *pfVar1;
  Desktop *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = DAT_005d9038;
  if (param_1 == (long *)0x0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar3 = DAT_005d9038;
  }
  else {
    fVar5 = 0.0;
    fVar2 = DAT_005d9038;
    fVar6 = 0.0;
    fVar9 = DAT_005d9038;
    fVar10 = DAT_005d9038;
    do {
      pfVar1 = (float *)param_1[10];
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar4 = fVar10;
      fVar11 = fVar9;
      if (pfVar1 != (float *)0x0) {
        fVar4 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[3];
        fVar11 = pfVar1[4];
      }
      fVar3 = fVar4 * fVar2 + fVar5 * fVar7;
      fVar4 = fVar4 * fVar6 + fVar12 * fVar7;
      fVar5 = fVar2 * fVar8 + fVar5 * fVar11;
      fVar12 = fVar6 * fVar8 + fVar12 * fVar11;
      if ((*(ushort *)(param_1 + 0x1d) & 1) != 0) {
        fVar2 = (float)(**(code **)(*param_1 + 0x88))(param_1);
        fVar12 = fVar12 * fVar2;
        fVar3 = fVar3 * fVar2;
        fVar4 = fVar4 * fVar2;
        fVar5 = fVar5 * fVar2;
        fVar9 = DAT_005d9038;
        fVar10 = DAT_005d9038;
      }
      param_1 = (long *)param_1[6];
      fVar2 = fVar3;
      fVar6 = fVar4;
    } while (param_1 != (long *)0x0);
  }
  fVar12 = (float)((uint)(fVar12 * fVar3 - fVar5 * fVar4) & _DAT_005d91c0);
  if (fVar12 < 0.0) {
    fVar12 = sqrtf(fVar12);
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this = operator_new(0x1d0);
                    /* try { // try from 0027ad94 to 0027ad9b has its CatchHandler @ 0027adb8 */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  return fVar12 / *(float *)(Desktop::instance + 0x130);
}


