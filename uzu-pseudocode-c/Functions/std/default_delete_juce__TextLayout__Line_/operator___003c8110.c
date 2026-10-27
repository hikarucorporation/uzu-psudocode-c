// Function : operator()
// Namespace: std:default_delete_juce__TextLayout__Line_
// Entry    : 003c8110
// Prototype: undefined operator()(default_delete<juce::TextLayout::Line> * this)
// Body     : 003c8110 - 003c81d2


/* std::default_delete<juce::TextLayout::Line>::TEMPNAMEPLACEHOLDERVALUE(juce::TextLayout::Line*)
   const */

void __thiscall
std::default_delete<juce::TextLayout::Line>::operator()
          (default_delete<juce::TextLayout::Line> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  if (this == (default_delete<juce::TextLayout::Line> *)0x0) {
    return;
  }
  uVar2 = *(uint *)(this + 0xc);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar9 = -uVar2;
    uVar8 = uVar6;
    while( true ) {
      uVar7 = (ulong)((int)uVar8 - 1);
      lVar3 = *(long *)this;
      plVar4 = *(long **)(lVar3 + uVar7 * 8);
      memmove((void *)(lVar3 + uVar7 * 8),(void *)(lVar3 + uVar7 * 8 + 8),
              (long)((int)uVar6 + iVar9) << 3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)((long)plVar4 + 0x1c) = 0;
        free((void *)plVar4[2]);
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        operator_delete(plVar4);
      }
      if (uVar8 < 2) break;
      uVar6 = (ulong)*(uint *)(this + 0xc);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  operator_delete(this);
  return;
}


