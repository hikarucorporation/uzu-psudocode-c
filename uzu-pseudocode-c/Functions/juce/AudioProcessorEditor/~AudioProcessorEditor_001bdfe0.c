// Function : ~AudioProcessorEditor
// Namespace: juce:AudioProcessorEditor
// Entry    : 001bdfe0
// Prototype: undefined ~AudioProcessorEditor(AudioProcessorEditor * this)
// Body     : 001bdfe0 - 001be043


/* juce::AudioProcessorEditor::~AudioProcessorEditor() */

void __thiscall juce::AudioProcessorEditor::~AudioProcessorEditor(AudioProcessorEditor *this)

{
  *(undefined ***)this = &PTR__AudioProcessorEditor_00706848;
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
            *)(this + 0xa0),*(long *)(this + 0x100));
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 8))();
  }
  *(undefined8 *)(this + 0x100) = 0;
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  Component::~Component((Component *)this);
  return;
}


