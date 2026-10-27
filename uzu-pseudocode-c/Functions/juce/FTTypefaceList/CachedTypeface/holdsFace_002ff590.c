// Function : holdsFace
// Namespace: juce:FTTypefaceList:CachedTypeface
// Entry    : 002ff590
// Prototype: undefined8 holdsFace(CachedTypeface * this, long * param_1)
// Body     : 002ff590 - 002ff59a


/* juce::FTTypefaceList::CachedTypeface::holdsFace(juce::ReferenceCountedObjectPtr<juce::FTFaceWrapper>)
   const */

undefined8 __thiscall
juce::FTTypefaceList::CachedTypeface::holdsFace(CachedTypeface *this,long *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x20) >> 8),*(long *)(this + 0x20) == *param_1);
}


