// Function : BoundsChangeListener
// Namespace: juce:detail:BoundsChangeListener
// Entry    : 00287080
// Prototype: undefined BoundsChangeListener(BoundsChangeListener * this, long param_1, undefined8 * param_2)
// Body     : 00287080 - 002871a8


/* juce::detail::BoundsChangeListener::BoundsChangeListener(juce::Component&, std::function<void
   ()>) */

void __thiscall
juce::detail::BoundsChangeListener::BoundsChangeListener
          (BoundsChangeListener *this,long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  void *__ptr;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  *(undefined ***)this = &PTR__BoundsChangeListener_0070e280;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = param_2[3];
  if (param_2[2] != 0) {
    uVar2 = param_2[1];
    *(undefined8 *)(this + 8) = *param_2;
    *(undefined8 *)(this + 0x10) = uVar2;
    *(undefined8 *)(this + 0x18) = param_2[2];
    param_2[2] = 0;
    param_2[3] = 0;
  }
  *(code **)(this + 0x40) =
       std::
       _Function_handler<void(),juce::detail::BoundsChangeListener::BoundsChangeListener(juce::Component&,std::function<void()>)::{lambda()#1}>
       ::_M_invoke;
  *(long *)(this + 0x28) = param_1;
  *(BoundsChangeListener **)(this + 0x30) = this;
  *(code **)(this + 0x38) =
       std::
       _Function_handler<void(),juce::detail::BoundsChangeListener::BoundsChangeListener(juce::Component&,std::function<void()>)::{lambda()#1}>
       ::_M_manager;
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(param_1 + 0xa0));
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  __ptr = (void *)*puVar1;
  iVar4 = *(int *)((long)puVar1 + 0xc);
  lVar3 = (long)iVar4;
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (*(BoundsChangeListener **)((long)__ptr + lVar5) == this) {
        return;
      }
      lVar5 = lVar5 + 8;
    } while (lVar3 * 8 != lVar5);
  }
  if ((int)*(uint *)(puVar1 + 1) <= iVar4) {
    uVar6 = iVar4 + ((iVar4 - (iVar4 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar1 + 1) != uVar6) {
      if ((int)uVar6 < 1) {
        free(__ptr);
        *puVar1 = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar6 << 3);
        *puVar1 = __ptr;
      }
    }
    *(uint *)(puVar1 + 1) = uVar6;
    iVar4 = *(int *)((long)puVar1 + 0xc);
    lVar3 = (long)iVar4;
  }
  *(int *)((long)puVar1 + 0xc) = iVar4 + 1;
  *(BoundsChangeListener **)((long)__ptr + lVar3 * 8) = this;
  return;
}


