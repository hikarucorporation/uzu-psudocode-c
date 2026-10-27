// Function : unscaledScreenPosToScaled<juce::Point<int>>
// Namespace: juce:detail:ScalingHelpers
// Entry    : 00225e00
// Prototype: undefined8 unscaledScreenPosToScaled<juce::Point<int>>(undefined8 param_1)
// Body     : 00225e00 - 00225ec6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Point<int> juce::detail::ScalingHelpers::unscaledScreenPosToScaled<juce::Point<int>
   >(juce::Point<int>) */

undefined8 __cdecl
juce::detail::ScalingHelpers::unscaledScreenPosToScaled<juce::Point<int>>(undefined8 param_1)

{
  float fVar1;
  Desktop *this;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00225e13 to 00225e1c has its CatchHandler @ 00225eda */
    this = operator_new(0x1d0);
                    /* try { // try from 00225e20 to 00225e27 has its CatchHandler @ 00225ec7 */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  fVar1 = *(float *)(Desktop::instance + 0x130);
  fVar2 = (float)(_DAT_005d91c0 & (uint)fVar1);
  if (fVar2 == DAT_005d94c8) {
    if ((fVar1 == DAT_005d9038) && (!NAN(fVar1) && !NAN(DAT_005d9038))) {
      return param_1;
    }
  }
  else {
    fVar3 = (float)((uint)(DAT_005d9054 + fVar1) & _DAT_005d91c0);
    if (fVar3 <= DAT_005d94cc) {
      return param_1;
    }
    fVar4 = DAT_005d9038;
    if (DAT_005d9038 <= fVar2) {
      fVar4 = fVar2;
    }
    if (fVar3 <= fVar4 * DAT_005d94d0) {
      return param_1;
    }
  }
  return CONCAT44((int)((float)(int)((ulong)param_1 >> 0x20) / fVar1),
                  (int)((float)(int)param_1 / fVar1));
}


