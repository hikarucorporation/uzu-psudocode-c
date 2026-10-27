// Function : ~AudioProcessorValueTreeState
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c1ce0
// Prototype: undefined ~AudioProcessorValueTreeState(AudioProcessorValueTreeState * this)
// Body     : 001c1ce0 - 001c1da6


/* juce::AudioProcessorValueTreeState::~AudioProcessorValueTreeState() */

void __thiscall
juce::AudioProcessorValueTreeState::~AudioProcessorValueTreeState
          (AudioProcessorValueTreeState *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__AudioProcessorValueTreeState_00706b10;
  *(undefined ***)(this + 0x28) = &PTR__AudioProcessorValueTreeState_00706b50;
  Timer::stopTimer((Timer *)this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xb8));
  std::
  _Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
  ::_M_erase(*(_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
               **)(this + 0x98));
  piVar3 = (int *)(*(long *)(this + 0x80) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 0x78);
      goto joined_r0x001c1d6e;
    }
  }
  lVar2 = *(long *)(this + 0x78);
joined_r0x001c1d6e:
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)(this + 0x70) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  ValueTree::~ValueTree((ValueTree *)(this + 0x38));
  Timer::~Timer((Timer *)this);
  return;
}


