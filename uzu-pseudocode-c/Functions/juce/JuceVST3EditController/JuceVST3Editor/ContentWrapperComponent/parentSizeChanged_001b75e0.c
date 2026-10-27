// Function : parentSizeChanged
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b75e0
// Prototype: undefined parentSizeChanged(ContentWrapperComponent * this)
// Body     : 001b75e0 - 001b7601


/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::parentSizeChanged() */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::parentSizeChanged
          (ContentWrapperComponent *this)

{
  if (*(long *)(this + 0xf0) == 0) {
    return;
  }
  resizeHostWindow(this);
  Component::repaint(*(Component **)(this + 0xf0));
  return;
}


