// Function : textChanged
// Namespace: juce:TextEditor
// Entry    : 0023eba0
// Prototype: undefined textChanged(TextEditor * this, undefined8 param_1, undefined8 param_2, long param_3, uint * param_4, ulong param_5)
// Body     : 0023eba0 - 0023ec5a


/* juce::TextEditor::textChanged() */

void __thiscall
juce::TextEditor::textChanged
          (TextEditor *this,undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,
          ulong param_5)

{
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  checkLayout(this,param_1,param_2,param_3,param_4,param_5);
  if (((*(int *)(this + 0x318) == 2) && (*(int *)(*(long *)(this + 0x2f8) + 0xc) != 0)) ||
     (*(long *)(this + 0x118) != 0)) {
    Component::postCommandMessage((Component *)(this + 8),0x10003001);
  }
  if (1 < *(int *)(*(long *)(this + 0x2b8) + 8)) {
    this[0x1d4] = (TextEditor)0x0;
    ParagraphsModel::getText(&local_10,*(long *)(this + 0x330) + 0x60);
    local_20 = &var::Instance::attributesString;
    local_18 = local_10;
    local_10 = &DAT_0061ac58;
                    /* try { // try from 0023ec34 to 0023ec3b has its CatchHandler @ 0023ec63 */
    (**(code **)(**(long **)(this + 0x2b8) + 0x18))(*(long **)(this + 0x2b8),&local_20);
                    /* try { // try from 0023ec46 to 0023ec48 has its CatchHandler @ 0023ec5b */
    (**(code **)(local_20 + 0x58))(&local_18);
  }
  Component::getAccessibilityHandler((Component *)(this + 8));
  return;
}


