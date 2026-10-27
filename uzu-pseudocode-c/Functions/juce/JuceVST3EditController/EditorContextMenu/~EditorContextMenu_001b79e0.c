// Function : ~EditorContextMenu
// Namespace: juce:JuceVST3EditController:EditorContextMenu
// Entry    : 001b79e0
// Prototype: undefined8 ~EditorContextMenu(EditorContextMenu * this)
// Body     : 001b79e0 - 001b79f1


/* juce::JuceVST3EditController::EditorContextMenu::~EditorContextMenu() */

undefined8 __thiscall
juce::JuceVST3EditController::EditorContextMenu::~EditorContextMenu(EditorContextMenu *this)

{
  undefined8 in_RAX;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 001b79ed to 001b79ef has its CatchHandler @ 001b79f2 */
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
  }
  return in_RAX;
}


