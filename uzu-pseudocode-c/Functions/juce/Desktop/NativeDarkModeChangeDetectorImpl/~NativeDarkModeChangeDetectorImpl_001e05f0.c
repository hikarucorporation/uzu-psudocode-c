// Function : ~NativeDarkModeChangeDetectorImpl
// Namespace: juce:Desktop:NativeDarkModeChangeDetectorImpl
// Entry    : 001e05f0
// Prototype: undefined ~NativeDarkModeChangeDetectorImpl(NativeDarkModeChangeDetectorImpl * this)
// Body     : 001e05f0 - 001e061e


/* juce::Desktop::NativeDarkModeChangeDetectorImpl::~NativeDarkModeChangeDetectorImpl() */

void __thiscall
juce::Desktop::NativeDarkModeChangeDetectorImpl::~NativeDarkModeChangeDetectorImpl
          (NativeDarkModeChangeDetectorImpl *this)

{
  *(undefined ***)this = &PTR__NativeDarkModeChangeDetectorImpl_0070dd30;
  if ((XWindowSystem::singletonHolder._40_8_ == 0) ||
     (*(long *)(XWindowSystem::singletonHolder._40_8_ + 0x158) == 0)) {
    return;
  }
  ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
  ::remove((ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
            *)(*(long *)(XWindowSystem::singletonHolder._40_8_ + 0x158) + 0x58),(long)this);
  return;
}


