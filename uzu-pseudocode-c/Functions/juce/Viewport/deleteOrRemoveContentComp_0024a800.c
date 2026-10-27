// Function : deleteOrRemoveContentComp
// Namespace: juce:Viewport
// Entry    : 0024a800
// Prototype: undefined deleteOrRemoveContentComp(Viewport * this)
// Body     : 0024a800 - 0024a925


/* juce::Viewport::deleteOrRemoveContentComp() */

void __thiscall juce::Viewport::deleteOrRemoveContentComp(Viewport *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if ((*(long *)(this + 0x200) != 0) &&
     (lVar7 = *(long *)(*(long *)(this + 0x200) + 0x10), lVar7 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar7 + 0xa0),(long)(this + 0xf0));
    if (this[0x22a] == (Viewport)0x0) {
      if (*(long *)(this + 0x200) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(this + 0x200) + 0x10);
      }
      uVar6 = 0xffffffff;
      if ((long)*(int *)(this + 0x174) != 0) {
        lVar5 = (long)*(int *)(this + 0x174) << 3;
        lVar4 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x168) + lVar4 * 8) == lVar7) {
            uVar6 = (uint)lVar4;
            break;
          }
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      Component::removeChildComponent((Component *)(this + 0x110),uVar6,'\x01',1);
      plVar2 = *(long **)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0024a91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 8))();
          return;
        }
      }
    }
    else {
      plVar2 = *(long **)(this + 0x200);
      if (plVar2 == (long *)0x0) {
        *(undefined8 *)(this + 0x200) = 0;
      }
      else {
        plVar3 = (long *)plVar2[2];
        *(undefined8 *)(this + 0x200) = 0;
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0024a87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 8))(plVar3);
          return;
        }
      }
    }
  }
  return;
}


