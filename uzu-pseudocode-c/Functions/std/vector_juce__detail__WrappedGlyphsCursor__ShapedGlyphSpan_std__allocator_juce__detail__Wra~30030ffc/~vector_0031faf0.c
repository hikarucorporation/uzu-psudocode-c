// Function : ~vector
// Namespace: std:vector_juce__detail__WrappedGlyphsCursor__ShapedGlyphSpan_std__allocator_juce__detail__Wra~30030ffc
// Entry    : 0031faf0
// Prototype: undefined ~vector(vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>> * this)
// Body     : 0031faf0 - 0031fb4b


/* std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> >::~vector() */

void __thiscall
std::
vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>
::~vector(vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>
          *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)this;
  pvVar2 = *(void **)(this + 8);
  if (pvVar4 != pvVar2) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 0x28);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x30);
    } while (pvVar4 != pvVar2);
    pvVar4 = *(void **)this;
  }
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}


