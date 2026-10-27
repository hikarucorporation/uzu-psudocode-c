// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__XmlElement_std__default_delete_juce__XmlElement__
// Entry    : 00171f30
// Prototype: undefined ~unique_ptr(unique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>> * this)
// Body     : 00171f30 - 00171f5d


/* std::unique_ptr<juce::XmlElement, std::default_delete<juce::XmlElement> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>>::~unique_ptr
          (unique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>> *this)

{
  XmlElement *this_00;
  
  this_00 = *(XmlElement **)this;
  if (this_00 != (XmlElement *)0x0) {
    juce::XmlElement::~XmlElement(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


