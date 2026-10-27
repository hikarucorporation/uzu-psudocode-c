// Function : ~EditorContextMenu
// Namespace: juce:JuceVST3EditController:EditorContextMenu
// Entry    : 001b7a00
// Prototype: undefined ~EditorContextMenu(EditorContextMenu * this)
// Body     : 001b7a00 - 001b7a1b


/* juce::JuceVST3EditController::EditorContextMenu::~EditorContextMenu() */

void __thiscall
juce::JuceVST3EditController::EditorContextMenu::~EditorContextMenu(EditorContextMenu *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 001b7a10 to 001b7a12 has its CatchHandler @ 001b7a1c */
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
  }
  operator_delete(this);
  return;
}


