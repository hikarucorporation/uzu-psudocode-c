// Function : ~FTTypefaceList
// Namespace: juce:FTTypefaceList
// Entry    : 00303ad0
// Prototype: undefined ~FTTypefaceList(FTTypefaceList * this)
// Body     : 00303ad0 - 00303b4a


/* juce::FTTypefaceList::~FTTypefaceList() */

void __thiscall juce::FTTypefaceList::~FTTypefaceList(FTTypefaceList *this)

{
  long *plVar1;
  long *plVar2;
  
  LOCK();
  if (this == singletonHolder) {
    singletonHolder = (FTTypefaceList *)0x0;
  }
  UNLOCK();
  plVar2 = *(long **)(this + 0x10);
  plVar1 = *(long **)(this + 0x18);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x10);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr
            (*(ReferenceCountedObjectPtr<juce::FTLibWrapper> **)(this + 8));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  operator_delete(this);
  return;
}


