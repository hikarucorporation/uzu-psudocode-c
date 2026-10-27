// Function : ~GlyphArrangement
// Namespace: juce:GlyphArrangement
// Entry    : 0016b280
// Prototype: undefined ~GlyphArrangement(GlyphArrangement * this)
// Body     : 0016b280 - 0016b2d0


/* juce::GlyphArrangement::~GlyphArrangement() */

void __thiscall juce::GlyphArrangement::~GlyphArrangement(GlyphArrangement *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      Font::~Font((Font *)(*(long *)this + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x20;
    } while (lVar1 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


