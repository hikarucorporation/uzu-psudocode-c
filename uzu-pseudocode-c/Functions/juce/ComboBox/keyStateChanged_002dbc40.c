// Function : keyStateChanged
// Namespace: juce:ComboBox
// Entry    : 002dbc40
// Prototype: bool keyStateChanged(ComboBox * this, int param_1)
// Body     : 002dbc40 - 002dbcbd


/* juce::ComboBox::keyStateChanged(bool) */

bool __thiscall juce::ComboBox::keyStateChanged(ComboBox *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  XWindowSystem *pXVar3;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    bVar1 = XWindowSystem::isKeyCurrentlyDown(pXVar3,0x10000052);
    bVar2 = true;
    if (!bVar1) {
      pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      bVar1 = XWindowSystem::isKeyCurrentlyDown(pXVar3,0x10000051);
      if (!bVar1) {
        pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                           ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                            XWindowSystem::singletonHolder);
        bVar1 = XWindowSystem::isKeyCurrentlyDown(pXVar3,0x10000054);
        if (!bVar1) {
          pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                             ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                              XWindowSystem::singletonHolder);
          bVar2 = XWindowSystem::isKeyCurrentlyDown(pXVar3,0x10000053);
          return bVar2;
        }
      }
    }
  }
  return bVar2;
}


