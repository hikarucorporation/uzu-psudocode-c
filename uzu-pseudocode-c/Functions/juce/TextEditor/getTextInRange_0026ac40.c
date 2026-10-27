// Function : getTextInRange
// Namespace: juce:TextEditor
// Entry    : 0026ac40
// Prototype: String * getTextInRange(String * param_1, long param_2, long * param_3)
// Body     : 0026ac40 - 0026ac69


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::getTextInRange(juce::Range<int> const&) const */

String * __cdecl juce::TextEditor::getTextInRange(String *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)(int)*param_3;
  lVar1 = *param_3 >> 0x20;
  if (lVar1 <= lVar2) {
    lVar1 = lVar2;
  }
  ParagraphsModel::getTextInRange(param_1,*(long *)(param_2 + 0x330) + 0x60,lVar2,lVar1);
  return param_1;
}


