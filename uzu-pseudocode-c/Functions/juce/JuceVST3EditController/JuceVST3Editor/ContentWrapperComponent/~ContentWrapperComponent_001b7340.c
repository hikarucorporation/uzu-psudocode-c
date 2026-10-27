// Function : ~ContentWrapperComponent
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b7340
// Prototype: undefined ~ContentWrapperComponent(ContentWrapperComponent * this)
// Body     : 001b7340 - 001b73b2


/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::~ContentWrapperComponent()
    */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::~ContentWrapperComponent
          (ContentWrapperComponent *this)

{
  if (*(long *)(this + 0xf0) != 0) {
                    /* try { // try from 001b7359 to 001b735d has its CatchHandler @ 001b73b3 */
    PopupMenu::dismissAllActiveMenus();
    AudioProcessor::editorBeingDeleted
              (*(AudioProcessor **)(*(long *)(this + 0xf0) + 0xf0),*(long *)(this + 0xf0));
  }
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x100));
  }
  *(undefined8 *)(this + 0x100) = 0;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 8))();
  }
  *(undefined8 *)(this + 0xf0) = 0;
  Component::~Component((Component *)this);
  return;
}


