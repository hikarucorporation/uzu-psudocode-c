// Function : ~Pair
// Namespace: juce:LruCache_juce__Graphics__drawFittedText_juce__String_const__juce__Rectangle_int__juce__Jus~02f2a322:Pair
// Entry    : 00328150
// Prototype: undefined ~Pair(Pair * this)
// Body     : 00328150 - 003281b0


/* juce::LruCache<juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>,
   juce::Justification, int, float, juce::GlyphArrangementOptions) const::ArrangementArgs,
   juce::GlyphArrangement, 128ul>::Pair::~Pair() */

void __thiscall
juce::
LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>
::Pair::~Pair(Pair *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)this + lVar4);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


