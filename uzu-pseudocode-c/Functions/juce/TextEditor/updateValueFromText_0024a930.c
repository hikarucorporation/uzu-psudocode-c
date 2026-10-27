// Function : updateValueFromText
// Namespace: juce:TextEditor
// Entry    : 0024a930
// Prototype: undefined updateValueFromText(TextEditor * this)
// Body     : 0024a930 - 0024a9a3


/* juce::TextEditor::updateValueFromText() */

void __thiscall juce::TextEditor::updateValueFromText(TextEditor *this)

{
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  if (this[0x1d4] != (TextEditor)0x0) {
    this[0x1d4] = (TextEditor)0x0;
    ParagraphsModel::getText(&local_10,*(long *)(this + 0x330) + 0x60);
    local_20 = &var::Instance::attributesString;
    local_18 = local_10;
    local_10 = &DAT_0061ac58;
                    /* try { // try from 0024a989 to 0024a990 has its CatchHandler @ 0024a9ac */
    (**(code **)(**(long **)(this + 0x2b8) + 0x18))(*(long **)(this + 0x2b8),&local_20);
                    /* try { // try from 0024a99b to 0024a99d has its CatchHandler @ 0024a9a4 */
    (**(code **)(local_20 + 0x58))(&local_18);
  }
  return;
}


