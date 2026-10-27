// Function : ~SliderLabelComp
// Namespace: juce:LookAndFeel_V2:SliderLabelComp
// Entry    : 002354c0
// Prototype: undefined ~SliderLabelComp(SliderLabelComp * this)
// Body     : 002354c0 - 002354d1


/* juce::LookAndFeel_V2::SliderLabelComp::~SliderLabelComp() */

void __thiscall juce::LookAndFeel_V2::SliderLabelComp::~SliderLabelComp(SliderLabelComp *this)

{
  Label::~Label((Label *)this);
  operator_delete(this);
  return;
}


