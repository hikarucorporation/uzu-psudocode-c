// Function : physicalToLogical<int>
// Namespace: juce:Displays
// Entry    : 002cb2e0
// Prototype: undefined8 physicalToLogical<int>(undefined8 * param_1, undefined8 param_2)
// Body     : 002cb2e0 - 002cb3a8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Point<int> juce::Displays::physicalToLogical<int>(juce::Point<int>, juce::Displays::Display
   const*) const */

undefined8 __cdecl juce::Displays::physicalToLogical<int>(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  Displays *pDVar2;
  Desktop *this;
  
  pDVar2 = getDisplayForPoint((Displays *)*param_1,*(int *)((long)param_1 + 0xc),param_2);
  if (pDVar2 != (Displays *)0x0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002cb311 to 002cb31a has its CatchHandler @ 002cb3bc */
      this = operator_new(0x1d0);
                    /* try { // try from 002cb31e to 002cb325 has its CatchHandler @ 002cb3a9 */
      Desktop::Desktop(this);
      Desktop::instance = this;
    }
    fVar1 = *(float *)(Desktop::instance + 0x130);
    param_2 = CONCAT44((int)((float)*(int *)(pDVar2 + 8) * fVar1) +
                       (int)((double)((int)((ulong)param_2 >> 0x20) - *(int *)(pDVar2 + 0x48)) /
                            (*(double *)(pDVar2 + 0x50) / (double)fVar1)),
                       (int)((float)*(int *)(pDVar2 + 4) * fVar1) +
                       (int)((double)((int)param_2 - *(int *)(pDVar2 + 0x44)) /
                            (*(double *)(pDVar2 + 0x50) / (double)fVar1)));
  }
  return param_2;
}


