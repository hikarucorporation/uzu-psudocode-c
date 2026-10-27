// Function : ~vector
// Namespace: std:vector_juce__GlyphLayer_std__allocator_juce__GlyphLayer__
// Entry    : 00354f60
// Prototype: undefined ~vector(vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> * this)
// Body     : 00354f60 - 00354fdf


/* std::vector<juce::GlyphLayer, std::allocator<juce::GlyphLayer> >::~vector() */

void __thiscall
std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>::~vector
          (vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> *this)

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
LAB_00354fb8:
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
        goto LAB_00354fb8;
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


