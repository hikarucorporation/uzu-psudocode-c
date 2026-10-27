// Function : ~Pimpl
// Namespace: juce:Slider:Pimpl
// Entry    : 002e0740
// Prototype: undefined ~Pimpl(Pimpl * this)
// Body     : 002e0740 - 002e0b56


/* juce::Slider::Pimpl::~Pimpl() */

void __thiscall juce::Slider::Pimpl::~Pimpl(Pimpl *this)

{
  Pimpl *pPVar1;
  long *plVar2;
  int iVar3;
  Component *pCVar4;
  long *plVar5;
  void *pvVar6;
  int *piVar7;
  timespec local_40;
  
  *(undefined ***)this = &PTR__Pimpl_007101c8;
  pPVar1 = this + 0x10;
  *(undefined ***)(this + 0x10) = &PTR__Pimpl_007101f8;
  Value::removeListener((Value *)(this + 0x50),(long)pPVar1);
  Value::removeListener((Value *)(this + 0x80),(long)pPVar1);
  Value::removeListener((Value *)(this + 0xb0),(long)pPVar1);
  pCVar4 = *(Component **)(this + 0x270);
  *(undefined8 *)(this + 0x270) = 0;
  if (pCVar4 != (Component *)0x0) {
    if (*(long *)(*(long *)(pCVar4 + 0x138) + 0x1a0) != 0) {
      clock_gettime(1,&local_40);
      *(double *)(*(long *)(*(long *)(pCVar4 + 0x138) + 0x1a0) + 0x248) =
           (double)(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) * DAT_00651e50;
    }
    piVar7 = (int *)(*(long *)(pCVar4 + 0x148) + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar7);
      }
    }
    plVar5 = *(long **)(pCVar4 + 0x140);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    Timer::~Timer((Timer *)(pCVar4 + 0x110));
    Component::~Component(pCVar4);
    operator_delete(pCVar4);
    pCVar4 = *(Component **)(this + 0x270);
    if (pCVar4 != (Component *)0x0) {
      if (*(long *)(*(long *)(pCVar4 + 0x138) + 0x1a0) != 0) {
        clock_gettime(1,&local_40);
        *(double *)(*(long *)(*(long *)(pCVar4 + 0x138) + 0x1a0) + 0x248) =
             (double)(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) * DAT_00651e50;
      }
      piVar7 = (int *)(*(long *)(pCVar4 + 0x148) + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          operator_delete__(piVar7);
        }
      }
      plVar5 = *(long **)(pCVar4 + 0x140);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      Timer::~Timer((Timer *)(pCVar4 + 0x110));
      Component::~Component(pCVar4);
      operator_delete(pCVar4);
    }
  }
  *(undefined8 *)(this + 0x270) = 0;
  if (*(long **)(this + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x268) + 8))();
  }
  *(undefined8 *)(this + 0x268) = 0;
  if (*(long **)(this + 0x260) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x260) + 8))();
  }
  *(undefined8 *)(this + 0x260) = 0;
  if (*(long **)(this + 600) != (long *)0x0) {
    (**(code **)(**(long **)(this + 600) + 8))();
  }
  *(undefined8 *)(this + 600) = 0;
  piVar7 = (int *)(*(long *)(this + 0x210) + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar7);
      plVar5 = *(long **)(this + 0x200);
      goto joined_r0x002e09ec;
    }
  }
  plVar5 = *(long **)(this + 0x200);
joined_r0x002e09ec:
  if (plVar5 != (long *)0x0) {
    if (*(Pimpl **)(*plVar5 + 0x1a0) != (Pimpl *)0x0) {
                    /* try { // try from 002e09fe to 002e0a02 has its CatchHandler @ 002e0b57 */
      sendDragEnd(*(Pimpl **)(*plVar5 + 0x1a0));
    }
    operator_delete(plVar5);
  }
  *(undefined8 *)(this + 0x200) = 0;
  if (*(code **)(this + 0x170) != (code *)0x0) {
                    /* try { // try from 002e0a29 to 002e0a32 has its CatchHandler @ 002e0b6f */
    (**(code **)(this + 0x170))(this + 0x160,this + 0x160,3);
  }
  if (*(code **)(this + 0x150) != (code *)0x0) {
                    /* try { // try from 002e0a46 to 002e0a4f has its CatchHandler @ 002e0b67 */
    (**(code **)(this + 0x150))(this + 0x140,this + 0x140,3);
  }
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 002e0a63 to 002e0a6c has its CatchHandler @ 002e0b5f */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  Value::removeFromListenerList((Value *)(this + 0xb0));
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0xb8));
  plVar5 = *(long **)(this + 0xb0);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  Value::removeFromListenerList((Value *)(this + 0x80));
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x88));
  plVar5 = *(long **)(this + 0x80);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  Value::removeFromListenerList((Value *)(this + 0x50));
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x58));
  plVar5 = *(long **)(this + 0x50);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>
                   *)(this + 0x28));
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 != (void *)0x0) {
    LOCK();
    piVar7 = (int *)((long)pvVar6 + 8);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


