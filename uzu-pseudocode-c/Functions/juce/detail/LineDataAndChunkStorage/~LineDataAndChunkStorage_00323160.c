// Function : ~LineDataAndChunkStorage
// Namespace: juce:detail:LineDataAndChunkStorage
// Entry    : 00323160
// Prototype: undefined ~LineDataAndChunkStorage(LineDataAndChunkStorage * this)
// Body     : 00323160 - 003231e8


/* juce::detail::LineDataAndChunkStorage::~LineDataAndChunkStorage() */

void __thiscall
juce::detail::LineDataAndChunkStorage::~LineDataAndChunkStorage(LineDataAndChunkStorage *this)

{
  undefined8 *puVar1;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvVar2;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *this_00;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar3 != puVar1) {
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        operator_delete((void *)*puVar3);
      }
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
    puVar3 = *(undefined8 **)(this + 0x18);
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  this_00 = *(vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> **
             )this;
  pvVar2 = *(vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> **)
            (this + 8);
  if (this_00 != pvVar2) {
    do {
      std::vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>::
      ~vector(this_00);
      this_00 = this_00 + 0x18;
    } while (this_00 != pvVar2);
    this_00 = *(vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>
                **)this;
  }
  if (this_00 ==
      (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *)0x0) {
    return;
  }
  operator_delete(this_00);
  return;
}


