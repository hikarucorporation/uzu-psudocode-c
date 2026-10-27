// Function : ~Image
// Namespace: juce:Image
// Entry    : 003c15f0
// Prototype: undefined ~Image(Image * this)
// Body     : 003c15f0 - 003c1605


/* juce::Image::~Image() */

void __thiscall juce::Image::~Image(Image *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003c1602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


