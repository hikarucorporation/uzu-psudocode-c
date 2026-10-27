// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__LocalisedStrings_std__default_delete_juce__LocalisedStrings__
// Entry    : 00486ba0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>> * this)
// Body     : 00486ba0 - 00486bcd


/* std::unique_ptr<juce::LocalisedStrings, std::default_delete<juce::LocalisedStrings>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>>::~unique_ptr
          (unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>> *this)

{
  LocalisedStrings *this_00;
  
  this_00 = *(LocalisedStrings **)this;
  if (this_00 != (LocalisedStrings *)0x0) {
    juce::LocalisedStrings::~LocalisedStrings(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


