// Function : ~ArrayBase
// Namespace: juce:ArrayBase_juce__String_juce__DummyCriticalSection_
// Entry    : 002d5750
// Prototype: undefined ~ArrayBase(void)
// Body     : 002d5750 - 002d57c4


/* juce::ArrayBase<juce::String, juce::DummyCriticalSection>::~ArrayBase() */

void __thiscall juce::ArrayBase<juce::String,juce::DummyCriticalSection>::~ArrayBase(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if (0 < DAT_0071c734) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)((long)LinuxComponentPeer::
                                       settingChanged(juce::XWindowSystemUtilities::XSetting_const&)
                                       ::possibleSettings + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < DAT_0071c734);
  }
  DAT_0071c734 = 0;
  free(LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
       possibleSettings);
  return;
}


