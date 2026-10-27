// Function : operator()
// Namespace: std:default_delete_juce__DirectoryIterator_
// Entry    : 00498540
// Prototype: undefined operator()(default_delete<juce::DirectoryIterator> * this)
// Body     : 00498540 - 004986e7


/* std::default_delete<juce::DirectoryIterator>::TEMPNAMEPLACEHOLDERVALUE(juce::DirectoryIterator*)
   const */

void __thiscall
std::default_delete<juce::DirectoryIterator>::operator()
          (default_delete<juce::DirectoryIterator> *this)

{
  int iVar1;
  void *pvVar2;
  default_delete<juce::DirectoryIterator> *this_00;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  if (this == (default_delete<juce::DirectoryIterator> *)0x0) {
    return;
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    _Rb_tree<juce::File,juce::File,std::_Identity<juce::File>,std::less<juce::File>,std::allocator<juce::File>>
    ::_M_erase(*(void **)((long)pvVar2 + 0x10));
    operator_delete(pvVar2);
  }
  *(undefined8 *)(this + 0x58) = 0;
  piVar5 = (int *)(*(long *)(this + 0x40) + -0x10);
  if (piVar5 == &juce::emptyString) {
LAB_00498599:
    this_00 = *(default_delete<juce::DirectoryIterator> **)(this + 0x38);
  }
  else {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_00498599;
    operator_delete__(piVar5);
    this_00 = *(default_delete<juce::DirectoryIterator> **)(this + 0x38);
  }
  if (this_00 != (default_delete<juce::DirectoryIterator> *)0x0) {
    operator()(this_00);
  }
  *(undefined8 *)(this + 0x38) = 0;
  piVar5 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar5 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
      lVar4 = *(long *)(this + 0x18);
      goto joined_r0x00498611;
    }
  }
  lVar4 = *(long *)(this + 0x18);
joined_r0x00498611:
  piVar5 = (int *)(lVar4 + -0x10);
  if (piVar5 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    if ((DIR *)plVar3[2] != (DIR *)0x0) {
      closedir((DIR *)plVar3[2]);
    }
    piVar5 = (int *)(plVar3[1] + -0x10);
    if (piVar5 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
    piVar5 = (int *)(*plVar3 + -0x10);
    if (piVar5 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
    operator_delete(plVar3);
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (0 < *(int *)(this + 0xc)) {
    lVar4 = 0;
    do {
      piVar5 = (int *)(*(long *)(*(long *)this + lVar4 * 8) + -0x10);
      if (piVar5 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  operator_delete(this);
  return;
}


