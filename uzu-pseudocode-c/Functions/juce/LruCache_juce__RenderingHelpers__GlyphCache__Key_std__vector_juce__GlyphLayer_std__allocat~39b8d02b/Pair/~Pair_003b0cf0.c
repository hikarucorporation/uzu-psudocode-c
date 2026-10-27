// Function : ~Pair
// Namespace: juce:LruCache_juce__RenderingHelpers__GlyphCache__Key_std__vector_juce__GlyphLayer_std__allocat~39b8d02b:Pair
// Entry    : 003b0cf0
// Prototype: undefined ~Pair(Pair * this)
// Body     : 003b0cf0 - 003b0d6f


/* juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair::~Pair() */

void __thiscall
juce::
LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>
::Pair::~Pair(Pair *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  if (plVar4 != plVar2) {
    do {
      if ((char)plVar4[7] == '\0') {
        free((void *)*plVar4);
LAB_003b0d48:
        *(undefined1 *)(plVar4 + 7) = 0xff;
      }
      else if ((char)plVar4[7] != -1) {
        plVar3 = (long *)*plVar4;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        goto LAB_003b0d48;
      }
      plVar4 = plVar4 + 8;
    } while (plVar4 != plVar2);
    plVar4 = *(long **)this;
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  operator_delete(plVar4);
  return;
}


