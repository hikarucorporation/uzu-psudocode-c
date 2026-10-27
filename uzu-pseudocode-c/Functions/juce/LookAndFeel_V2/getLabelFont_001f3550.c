// Function : getLabelFont
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f3550
// Prototype: long * getLabelFont(long * param_1, undefined8 param_2, long param_3)
// Body     : 001f3550 - 001f3567


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::getLabelFont(juce::Label&) */

long * __cdecl juce::LookAndFeel_V2::getLabelFont(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x1b0);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}


