// Function : Image
// Namespace: juce:Image
// Entry    : 003c15d0
// Prototype: undefined Image(Image * this, long * param_1)
// Body     : 003c15d0 - 003c15e0


/* juce::Image::Image(juce::Image const&) */

void __thiscall juce::Image::Image(Image *this,long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)this = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}


