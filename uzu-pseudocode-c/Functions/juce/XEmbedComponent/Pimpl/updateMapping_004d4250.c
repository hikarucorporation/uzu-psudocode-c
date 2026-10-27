// Function : updateMapping
// Namespace: juce:XEmbedComponent:Pimpl
// Entry    : 004d4250
// Prototype: undefined updateMapping(Pimpl * this)
// Body     : 004d4250 - 004d43b1


/* juce::XEmbedComponent::Pimpl::updateMapping() */

void __thiscall juce::XEmbedComponent::Pimpl::updateMapping(Pimpl *this)

{
  Pimpl PVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  XWindowSystem *pXVar6;
  Pimpl PVar7;
  
  if (**(long **)(this + 0xa0) != 0) {
    uVar3 = getXEmbedMappedFlag(*(Pimpl **)(this + 0x98));
    if (((char)uVar3 == '\0') ||
       (uVar2 = Component::isShowing(*(Component **)(*(long *)(this + 0x98) + 8)),
       (char)uVar2 == '\0')) {
      PVar7 = (Pimpl)0x0;
      PVar1 = this[0xa8];
      this[0xa8] = (Pimpl)0x0;
      if (PVar1 != (Pimpl)0x0) goto LAB_004d42c2;
    }
    else {
      PVar7 = (Pimpl)(*(long *)(*(long *)(this + 0x98) + 200) != 0);
      PVar1 = this[0xa8];
      this[0xa8] = PVar7;
      if (PVar7 != PVar1) {
LAB_004d42c2:
        lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        puVar5 = (undefined8 *)(lVar4 + 0x368);
        if ((bool)PVar7) {
          puVar5 = (undefined8 *)(lVar4 + 0x228);
        }
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                           ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                            XWindowSystem::singletonHolder);
        (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(pXVar6 + 0x148),**(undefined8 **)(this + 0xa0));
      }
    }
  }
  if (**(long **)(this + 0x88) != 0) {
    uVar3 = getXEmbedMappedFlag(*(Pimpl **)(this + 0x80));
    if (((char)uVar3 == '\0') ||
       (uVar2 = Component::isShowing(*(Component **)(*(long *)(this + 0x80) + 8)),
       (char)uVar2 == '\0')) {
      PVar1 = this[0x90];
      PVar7 = (Pimpl)0x0;
      this[0x90] = (Pimpl)0x0;
      if (PVar1 != (Pimpl)0x0) {
LAB_004d4355:
        lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        puVar5 = (undefined8 *)(lVar4 + 0x368);
        if ((bool)PVar7) {
          puVar5 = (undefined8 *)(lVar4 + 0x228);
        }
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                           ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                            XWindowSystem::singletonHolder);
                    /* WARNING: Could not recover jumptable at 0x004d4397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(pXVar6 + 0x148),**(undefined8 **)(this + 0x88));
        return;
      }
    }
    else {
      PVar7 = (Pimpl)(*(long *)(*(long *)(this + 0x80) + 200) != 0);
      PVar1 = this[0x90];
      this[0x90] = PVar7;
      if (PVar7 != PVar1) goto LAB_004d4355;
    }
  }
  return;
}


