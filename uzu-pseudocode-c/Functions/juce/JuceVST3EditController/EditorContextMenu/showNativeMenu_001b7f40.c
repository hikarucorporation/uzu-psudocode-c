// Function : showNativeMenu
// Namespace: juce:JuceVST3EditController:EditorContextMenu
// Entry    : 001b7f40
// Prototype: undefined showNativeMenu(EditorContextMenu * this, undefined8 param_1)
// Body     : 001b7f40 - 001b7f88


/* juce::JuceVST3EditController::EditorContextMenu::showNativeMenu(juce::Point<int>) const */

void __thiscall
juce::JuceVST3EditController::EditorContextMenu::showNativeMenu
          (EditorContextMenu *this,undefined8 param_1)

{
  float fVar1;
  
  fVar1 = Component::getApproximateScaleFactorForComponent(*(long **)(this + 8));
                    /* WARNING: Could not recover jumptable at 0x001b7f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x38))
            (*(long **)(this + 0x10),(int)((float)(int)param_1 * fVar1),
             (int)((float)(int)((ulong)param_1 >> 0x20) * fVar1));
  return;
}


