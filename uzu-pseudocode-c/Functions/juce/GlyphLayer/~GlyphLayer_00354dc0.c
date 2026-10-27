// Function : ~GlyphLayer
// Namespace: juce:GlyphLayer
// Entry    : 00354dc0
// Prototype: undefined ~GlyphLayer(GlyphLayer * this)
// Body     : 00354dc0 - 00354df3


/* juce::GlyphLayer::~GlyphLayer() */

void __thiscall juce::GlyphLayer::~GlyphLayer(GlyphLayer *this)

{
  long *plVar1;
  long *plVar2;
  
  if (this[0x38] == (GlyphLayer)0x0) {
    free(*(void **)this);
  }
  else {
    if (this[0x38] == (GlyphLayer)0xff) {
      return;
    }
    plVar2 = *(long **)this;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  this[0x38] = (GlyphLayer)0xff;
  return;
}


