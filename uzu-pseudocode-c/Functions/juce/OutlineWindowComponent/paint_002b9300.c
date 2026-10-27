// Function : paint
// Namespace: juce:OutlineWindowComponent
// Entry    : 002b9300
// Prototype: undefined paint(OutlineWindowComponent * this, undefined8 param_1)
// Body     : 002b9300 - 002b932d


/* juce::OutlineWindowComponent::paint(juce::Graphics&) */

void __thiscall juce::OutlineWindowComponent::paint(OutlineWindowComponent *this,undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(this + 0xf0) == 0) || (*(long *)(*(long *)(this + 0xf0) + 0x10) == 0)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 0xf8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x002b932a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(this + 0xf8),param_1,*(undefined4 *)(this + 0x40),
             *(undefined4 *)(this + 0x44),UNRECOVERED_JUMPTABLE);
  return;
}


