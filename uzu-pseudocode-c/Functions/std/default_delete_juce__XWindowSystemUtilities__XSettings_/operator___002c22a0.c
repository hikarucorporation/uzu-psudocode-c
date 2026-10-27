// Function : operator()
// Namespace: std:default_delete_juce__XWindowSystemUtilities__XSettings_
// Entry    : 002c22a0
// Prototype: undefined operator()(default_delete<juce::XWindowSystemUtilities::XSettings> * this)
// Body     : 002c22a0 - 002c23c9


/* std::default_delete<juce::XWindowSystemUtilities::XSettings>::TEMPNAMEPLACEHOLDERVALUE(juce::XWindowSystemUtilities::XSettings*)
   const */

void __thiscall
std::default_delete<juce::XWindowSystemUtilities::XSettings>::operator()
          (default_delete<juce::XWindowSystemUtilities::XSettings> *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  if (this == (default_delete<juce::XWindowSystemUtilities::XSettings> *)0x0) {
    return;
  }
  juce::
  ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x58));
  puVar3 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      memset(*(void **)(this + 0x20),0,*(long *)(this + 0x28) << 3);
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      if (this + 0x50 != *(default_delete<juce::XWindowSystemUtilities::XSettings> **)(this + 0x20))
      {
        operator_delete(*(default_delete<juce::XWindowSystemUtilities::XSettings> **)(this + 0x20));
      }
      operator_delete(this);
      return;
    }
    puVar2 = (undefined8 *)*puVar3;
    piVar4 = (int *)(puVar3[4] + -0x10);
    if (piVar4 == &juce::emptyString) {
LAB_002c2312:
      piVar4 = (int *)(puVar3[2] + -0x10);
      if (piVar4 != &juce::emptyString) {
LAB_002c231f:
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar4);
        }
      }
    }
    else {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 != 0) goto LAB_002c2312;
      operator_delete__(piVar4);
      piVar4 = (int *)(puVar3[2] + -0x10);
      if (piVar4 != &juce::emptyString) goto LAB_002c231f;
    }
    piVar4 = (int *)(puVar3[1] + -0x10);
    if (piVar4 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
    operator_delete(puVar3);
    puVar3 = puVar2;
  } while( true );
}


