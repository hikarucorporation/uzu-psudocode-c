// Function : ~Font
// Namespace: juce:Font
// Entry    : 003ca320
// Prototype: undefined ~Font(Font * this)
// Body     : 003ca320 - 003ca335


/* juce::Font::~Font() */

void __thiscall juce::Font::~Font(Font *this)

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
                    /* WARNING: Could not recover jumptable at 0x003ca332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


