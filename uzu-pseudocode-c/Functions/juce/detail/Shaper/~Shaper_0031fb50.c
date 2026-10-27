// Function : ~Shaper
// Namespace: juce:detail:Shaper
// Entry    : 0031fb50
// Prototype: undefined ~Shaper(Shaper * this)
// Body     : 0031fb50 - 0031fc11


/* juce::detail::Shaper::~Shaper() */

void __thiscall juce::detail::Shaper::~Shaper(Shaper *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  
  std::vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>::~vector
            ((vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> *)
             (this + 0xa8));
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x90));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x78));
  }
  pvVar4 = *(void **)(this + 0x60);
  pvVar2 = *(void **)(this + 0x68);
  if (pvVar4 != pvVar2) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 8);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar4 != pvVar2);
    pvVar4 = *(void **)(this + 0x60);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


