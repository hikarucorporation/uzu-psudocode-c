// Function : registerWithParentComps
// Namespace: juce:ComponentMovementWatcher
// Entry    : 00225180
// Prototype: undefined registerWithParentComps(ComponentMovementWatcher * this)
// Body     : 00225180 - 002252de


/* juce::ComponentMovementWatcher::registerWithParentComps() */

void __thiscall
juce::ComponentMovementWatcher::registerWithParentComps(ComponentMovementWatcher *this)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  
  lVar1 = *(long *)(*(long *)(*(long *)(this + 8) + 0x10) + 0x30);
  do {
    if (lVar1 == 0) {
      return;
    }
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar1 + 0xa0));
    puVar2 = *(undefined8 **)(lVar1 + 0xa0);
    pvVar5 = (void *)*puVar2;
    iVar3 = *(int *)((long)puVar2 + 0xc);
    lVar4 = (long)iVar3;
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (*(ComponentMovementWatcher **)((long)pvVar5 + lVar6) == this) goto LAB_00225286;
        lVar6 = lVar6 + 8;
      } while (lVar4 * 8 != lVar6);
    }
    if ((int)*(uint *)(puVar2 + 1) <= iVar3) {
      uVar7 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar2 + 1) != uVar7) {
        if ((int)uVar7 < 1) {
          free(pvVar5);
          *puVar2 = 0;
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = realloc(pvVar5,(ulong)uVar7 << 3);
          *puVar2 = pvVar5;
        }
      }
      *(uint *)(puVar2 + 1) = uVar7;
      iVar3 = *(int *)((long)puVar2 + 0xc);
      lVar4 = (long)iVar3;
    }
    *(int *)((long)puVar2 + 0xc) = iVar3 + 1;
    *(ComponentMovementWatcher **)((long)pvVar5 + lVar4 * 8) = this;
LAB_00225286:
    iVar3 = *(int *)(this + 0x24);
    if ((int)*(uint *)(this + 0x20) <= iVar3) {
      uVar7 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 0x20) != uVar7) {
        if ((int)uVar7 < 1) {
          free(*(void **)(this + 0x18));
          *(undefined8 *)(this + 0x18) = 0;
        }
        else {
          pvVar5 = realloc(*(void **)(this + 0x18),(ulong)uVar7 << 3);
          *(void **)(this + 0x18) = pvVar5;
        }
      }
      *(uint *)(this + 0x20) = uVar7;
      iVar3 = *(int *)(this + 0x24);
    }
    *(int *)(this + 0x24) = iVar3 + 1;
    *(long *)(*(long *)(this + 0x18) + (long)iVar3 * 8) = lVar1;
    lVar1 = *(long *)(lVar1 + 0x30);
  } while( true );
}


