// Function : create
// Namespace: juce:FTTypefaceList:CachedTypeface
// Entry    : 002ff570
// Prototype: CachedTypeface * create(CachedTypeface * this, long param_1)
// Body     : 002ff570 - 002ff584


/* juce::FTTypefaceList::CachedTypeface::create(juce::ReferenceCountedObjectPtr<juce::FTLibWrapper>)
   const */

CachedTypeface * __thiscall
juce::FTTypefaceList::CachedTypeface::create(CachedTypeface *this,long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)this = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return this;
}


