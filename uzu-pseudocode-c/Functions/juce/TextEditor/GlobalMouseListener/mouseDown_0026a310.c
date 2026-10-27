// Function : mouseDown
// Namespace: juce:TextEditor:GlobalMouseListener
// Entry    : 0026a310
// Prototype: undefined mouseDown(GlobalMouseListener * this, long param_1)
// Body     : 0026a310 - 0026a31c


/* juce::TextEditor::GlobalMouseListener::mouseDown(juce::MouseEvent const&) */

void __thiscall
juce::TextEditor::GlobalMouseListener::mouseDown(GlobalMouseListener *this,long param_1)

{
  this[0x10] = (GlobalMouseListener)(*(long *)(param_1 + 0x38) == *(long *)(this + 8));
  return;
}


