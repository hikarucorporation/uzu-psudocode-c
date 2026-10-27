// Function : componentBeingDeleted
// Namespace: juce:ComponentMovementWatcher
// Entry    : 00225060
// Prototype: undefined componentBeingDeleted(ComponentMovementWatcher * this, long param_1)
// Body     : 00225060 - 00225168


/* juce::ComponentMovementWatcher::componentBeingDeleted(juce::Component&) */

void __thiscall
juce::ComponentMovementWatcher::componentBeingDeleted(ComponentMovementWatcher *this,long param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(this + 0x24);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(this + 0x18);
    uVar5 = 0;
    do {
      if (*(long *)(lVar2 + uVar5 * 8) == param_1) {
        memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
                (long)(int)(~(uint)uVar5 + uVar1) << 3);
        iVar8 = *(int *)(this + 0x24);
        uVar1 = iVar8 - 1;
        *(uint *)(this + 0x24) = uVar1;
        iVar4 = iVar8 * 2 + -2;
        iVar8 = 0;
        if (-1 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar8 < *(int *)(this + 0x20)) {
          uVar7 = 8;
          if (8 < (int)uVar1) {
            uVar7 = uVar1;
          }
          if ((int)uVar7 < *(int *)(this + 0x20)) {
            pvVar3 = realloc(*(void **)(this + 0x18),(ulong)uVar7 << 3);
            *(void **)(this + 0x18) = pvVar3;
            *(uint *)(this + 0x20) = uVar7;
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  if ((*(long *)(this + 8) != 0) && (*(long *)(*(long *)(this + 8) + 0x10) == param_1)) {
    iVar8 = *(int *)(this + 0x24);
    if ((long)iVar8 != 0) {
      lVar2 = *(long *)(this + 0x18);
      lVar6 = 0;
      do {
        ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
        ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                  *)(*(long *)(lVar2 + lVar6) + 0xa0),(long)this);
        lVar6 = lVar6 + 8;
      } while ((long)iVar8 * 8 != lVar6);
    }
    *(undefined4 *)(this + 0x24) = 0;
    if (*(int *)(this + 0x20) != 0) {
      free(*(void **)(this + 0x18));
      *(undefined8 *)(this + 0x18) = 0;
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  return;
}


