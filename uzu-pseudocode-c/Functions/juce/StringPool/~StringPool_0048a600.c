// Function : ~StringPool
// Namespace: juce:StringPool
// Entry    : 0048a600
// Prototype: undefined ~StringPool(StringPool * this)
// Body     : 0048a600 - 0048a675


/* juce::StringPool::~StringPool() */

void __thiscall juce::StringPool::~StringPool(StringPool *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)this + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


