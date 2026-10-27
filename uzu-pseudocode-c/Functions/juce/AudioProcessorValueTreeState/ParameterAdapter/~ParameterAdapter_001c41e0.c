// Function : ~ParameterAdapter
// Namespace: juce:AudioProcessorValueTreeState:ParameterAdapter
// Entry    : 001c41e0
// Prototype: undefined ~ParameterAdapter(ParameterAdapter * this)
// Body     : 001c41e0 - 001c42b6


/* juce::AudioProcessorValueTreeState::ParameterAdapter::~ParameterAdapter() */

void __thiscall
juce::AudioProcessorValueTreeState::ParameterAdapter::~ParameterAdapter(ParameterAdapter *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  lVar2 = *(long *)(this + 0x38);
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x10));
  uVar1 = *(uint *)(lVar2 + 0x44);
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(lVar2 + 0x38);
    uVar6 = 0;
    do {
      if (*(ParameterAdapter **)(lVar3 + uVar6 * 8) == this) {
        memmove((void *)(lVar3 + uVar6 * 8),(void *)(lVar3 + uVar6 * 8 + 8),
                (long)(int)(~(uint)uVar6 + uVar1) << 3);
        iVar8 = *(int *)(lVar2 + 0x44);
        uVar1 = iVar8 - 1;
        *(uint *)(lVar2 + 0x44) = uVar1;
        iVar5 = iVar8 * 2 + -2;
        iVar8 = 0;
        if (-1 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar8 < *(int *)(lVar2 + 0x40)) {
          uVar7 = 8;
          if (8 < (int)uVar1) {
            uVar7 = uVar1;
          }
          if ((int)uVar7 < *(int *)(lVar2 + 0x40)) {
            pvVar4 = realloc(*(void **)(lVar2 + 0x38),(ulong)uVar7 << 3);
            *(void **)(lVar2 + 0x38) = pvVar4;
            *(uint *)(lVar2 + 0x40) = uVar7;
          }
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x10));
  ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x68));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x40));
  ValueTree::~ValueTree((ValueTree *)(this + 8));
  return;
}


