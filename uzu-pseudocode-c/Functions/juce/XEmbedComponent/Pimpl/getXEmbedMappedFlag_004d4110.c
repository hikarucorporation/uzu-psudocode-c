// Function : getXEmbedMappedFlag
// Namespace: juce:XEmbedComponent:Pimpl
// Entry    : 004d4110
// Prototype: ulong getXEmbedMappedFlag(Pimpl * this)
// Body     : 004d4110 - 004d4239


/* juce::XEmbedComponent::Pimpl::getXEmbedMappedFlag() */

ulong __thiscall juce::XEmbedComponent::Pimpl::getXEmbedMappedFlag(Pimpl *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  XWindowSystem *pXVar6;
  long lVar7;
  undefined7 uVar9;
  ulong uVar8;
  uint *local_58;
  ulong auStack_50 [2];
  undefined1 local_40 [8];
  int local_38 [2];
  
  if (*(long *)(this + 0x70) == 0) {
    uVar8 = 0;
  }
  else {
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar2 = *(undefined8 *)(pXVar6 + 0x148);
    uVar3 = *(undefined8 *)(this + 0x70);
    uVar4 = *(undefined8 *)(this + 0xb0);
    local_58 = (uint *)0x0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    local_38[0] = -1;
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar5 = (**(code **)(lVar7 + 0x1b8))
                      (uVar2,uVar3,uVar4,0,2,0,uVar4,local_40,local_38,auStack_50,auStack_50 + 1,
                       &local_58);
    uVar9 = (undefined7)((ulong)this >> 8);
    if ((((local_58 == (uint *)0x0 || iVar5 != 0) || (local_38[0] != 0x20)) || (auStack_50[0] < 2))
       || (local_58 == (uint *)0x0)) {
      this[0xc3] = (Pimpl)0x0;
      *(undefined4 *)(this + 0xc4) = 0;
      uVar8 = CONCAT71(uVar9,1);
      if (local_58 == (uint *)0x0) goto LAB_004d4229;
    }
    else {
      uVar1 = *local_58;
      this[0xc3] = (Pimpl)0x1;
      *(uint *)(this + 0xc4) = (int)uVar1 >> 0x1f & uVar1;
      uVar8 = CONCAT71(uVar9,(char)local_58[2]) & 0xffffffffffffff01;
    }
                    /* try { // try from 004d4219 to 004d4228 has its CatchHandler @ 004d423a */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar7 + 0x128))(local_58);
  }
LAB_004d4229:
  return uVar8 & 0xffffffff;
}


