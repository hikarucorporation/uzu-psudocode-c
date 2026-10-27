// Function : ~MouseInputSourceList
// Namespace: juce:detail:MouseInputSourceList
// Entry    : 002bf300
// Prototype: undefined ~MouseInputSourceList(MouseInputSourceList * this)
// Body     : 002bf300 - 002bf3b7


/* juce::detail::MouseInputSourceList::~MouseInputSourceList() */

void __thiscall
juce::detail::MouseInputSourceList::~MouseInputSourceList(MouseInputSourceList *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  *(undefined ***)this = &PTR__MouseInputSourceList_0070e240;
  *(undefined4 *)(this + 0x44) = 0;
  free(*(void **)(this + 0x38));
  uVar1 = *(uint *)(this + 0x34);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = -uVar1;
    uVar6 = uVar4;
    while( true ) {
      uVar5 = (ulong)((int)uVar6 - 1);
      lVar2 = *(long *)(this + 0x28);
      plVar3 = *(long **)(lVar2 + uVar5 * 8);
      memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
              (long)((int)uVar4 + iVar7) << 3);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      if (uVar6 < 2) break;
      uVar4 = (ulong)*(uint *)(this + 0x34);
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 - 1;
    }
  }
  *(undefined4 *)(this + 0x34) = 0;
  free(*(void **)(this + 0x28));
  Timer::~Timer((Timer *)this);
  operator_delete(this);
  return;
}


