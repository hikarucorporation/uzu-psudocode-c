// Function : setClient
// Namespace: juce:XEmbedComponent:Pimpl
// Entry    : 004d37d0
// Prototype: undefined setClient(Pimpl * param_1, long param_2)
// Body     : 004d37d0 - 004d3a86


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XEmbedComponent::Pimpl::setClient(unsigned long, bool) */

void __cdecl juce::XEmbedComponent::Pimpl::setClient(Pimpl *param_1,long param_2)

{
  SharedKeyWindow *pSVar1;
  int iVar2;
  undefined8 uVar3;
  SharedKeyWindow *this;
  code *pcVar4;
  undefined4 uVar5;
  XWindowSystem *pXVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b0 [104];
  uint local_48;
  undefined4 uStack_44;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar3 = *(undefined8 *)(pXVar6 + 0x148);
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x2c8))(uVar3,*(undefined8 *)(param_1 + 0x70),0);
    this = *(SharedKeyWindow **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (this != (SharedKeyWindow *)0x0) {
      LOCK();
      pSVar1 = this + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        SharedKeyWindow::~SharedKeyWindow(this);
        operator_delete(this);
      }
    }
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar5 = (**(code **)(lVar7 + 0xb0))(uVar3);
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar8 = (**(code **)(lVar7 + 0x2a8))(uVar3,uVar5);
    if (**(long **)(param_1 + 0xa0) != 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar4 = *(code **)(lVar7 + 0x368);
      pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      (*pcVar4)(*(undefined8 *)(pXVar6 + 0x148),**(undefined8 **)(param_1 + 0xa0));
      param_1[0xa8] = (Pimpl)0x0;
    }
    if (**(long **)(param_1 + 0x88) != 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar4 = *(code **)(lVar7 + 0x368);
      pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      (*pcVar4)(*(undefined8 *)(pXVar6 + 0x148),**(undefined8 **)(param_1 + 0x88));
      param_1[0x90] = (Pimpl)0x0;
    }
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x290))(uVar3,*(undefined8 *)(param_1 + 0x70),uVar8,0,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x330))(uVar3,0);
  }
  if (param_2 != 0) {
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar3 = *(undefined8 *)(pXVar6 + 0x148);
    *(long *)(param_1 + 0x70) = param_2;
    if (param_1[0xc0] == (Pimpl)0x0) {
      auVar9 = getX11BoundsFromJuce(param_1);
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x298))
                (uVar3,*(undefined8 *)(param_1 + 0x70),auVar9._8_8_ & 0xffffffff,
                 auVar9._8_8_ >> 0x20);
    }
    else {
      configureNotify(param_1);
    }
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x1b0))(uVar3,*(undefined8 *)(param_1 + 0x70),local_b0);
    if ((~local_48 & 0x620000) != 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x2c8))
                (uVar3,*(undefined8 *)(param_1 + 0x70),CONCAT44(uStack_44,local_48) | 0x620000);
    }
    getXEmbedMappedFlag(param_1);
    if (param_1[0xc3] != (Pimpl)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0xc4);
      pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      uVar8 = *(undefined8 *)(pXVar6 + 0x148);
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = *(undefined8 *)(param_1 + 0x70);
      local_118 = 0x21;
      uStack_f0 = *(undefined8 *)(param_1 + 0xb8);
      local_e8 = 0x20;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_c8 = uVar3;
      local_c0 = (long)iVar2;
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x2d0))(uVar8,*(undefined8 *)(param_1 + 0x70),0,0,&local_118);
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0x330))(uVar8,0);
    }
    updateMapping(param_1);
  }
  return;
}


