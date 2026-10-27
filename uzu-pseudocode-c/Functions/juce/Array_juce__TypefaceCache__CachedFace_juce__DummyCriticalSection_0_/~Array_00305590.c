// Function : ~Array
// Namespace: juce:Array_juce__TypefaceCache__CachedFace_juce__DummyCriticalSection_0_
// Entry    : 00305590
// Prototype: undefined ~Array(Array<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0> * this)
// Body     : 00305590 - 00305660


/* juce::Array<juce::TypefaceCache::CachedFace, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0>::~Array
          (Array<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0> *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar3 = *(long *)this;
      plVar4 = *(long **)(lVar3 + 0x18 + lVar5);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      piVar6 = (int *)(*(long *)(lVar3 + 8 + lVar5) + -0x10);
      if (piVar6 == &emptyString) {
LAB_00305606:
        piVar6 = (int *)(*(long *)(lVar3 + lVar5) + -0x10);
        if (piVar6 != &emptyString) {
LAB_00305614:
          LOCK();
          iVar2 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar6);
          }
        }
      }
      else {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 != 0) goto LAB_00305606;
        operator_delete__(piVar6);
        piVar6 = (int *)(*(long *)(lVar3 + lVar5) + -0x10);
        if (piVar6 != &emptyString) goto LAB_00305614;
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar7 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


