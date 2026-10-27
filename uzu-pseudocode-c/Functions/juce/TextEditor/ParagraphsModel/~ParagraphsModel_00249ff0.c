// Function : ~ParagraphsModel
// Namespace: juce:TextEditor:ParagraphsModel
// Entry    : 00249ff0
// Prototype: undefined ~ParagraphsModel(ParagraphsModel * this)
// Body     : 00249ff0 - 0024a05f


/* juce::TextEditor::ParagraphsModel::~ParagraphsModel() */

void __thiscall juce::TextEditor::ParagraphsModel::~ParagraphsModel(ParagraphsModel *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x20);
  puVar1 = *(undefined8 **)(this + 0x28);
  if (puVar2 != puVar1) {
    do {
      if ((default_delete<juce::TextEditor::ParagraphStorage> *)*puVar2 !=
          (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
        std::default_delete<juce::TextEditor::ParagraphStorage>::operator()
                  ((default_delete<juce::TextEditor::ParagraphStorage> *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)(this + 0x20);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 8));
  return;
}


