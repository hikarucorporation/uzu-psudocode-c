// Function : withHeight
// Namespace: juce:Font
// Entry    : 002f6920
// Prototype: Font * withHeight(float param_1, Font * param_2, long * param_3)
// Body     : 002f6920 - 002f6949


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Font::withHeight(float) const */

Font * __cdecl juce::Font::withHeight(float param_1,Font *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  *(long *)param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 002f6937 to 002f693e has its CatchHandler @ 002f694a */
  setHeight(param_1,param_2);
  return param_2;
}


