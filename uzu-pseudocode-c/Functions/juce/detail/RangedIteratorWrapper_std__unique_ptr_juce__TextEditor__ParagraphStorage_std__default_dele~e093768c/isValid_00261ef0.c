// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_std__unique_ptr_juce__TextEditor__ParagraphStorage_std__default_dele~e093768c
// Entry    : 00261ef0
// Prototype: undefined8 isValid(RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const> * this)
// Body     : 00261ef0 - 00261efb


/* juce::detail::RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> > const>::isValid() const */

undefined8 __thiscall
juce::detail::
RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>
::isValid(RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>
          *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


