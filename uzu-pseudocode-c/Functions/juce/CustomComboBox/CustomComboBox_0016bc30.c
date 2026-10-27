// Function : CustomComboBox
// Namespace: juce:CustomComboBox
// Entry    : 0016bc30
// Prototype: undefined CustomComboBox(CustomComboBox * this)
// Body     : 0016bc30 - 0016be16


/* juce::CustomComboBox::CustomComboBox() */

void __thiscall juce::CustomComboBox::CustomComboBox(CustomComboBox *this)

{
  int iVar1;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  String local_20 [8];
  
  juce::String::String(local_20);
                    /* try { // try from 0016bc49 to 0016bc53 has its CatchHandler @ 0016be1c */
  ComboBox::ComboBox((ComboBox *)this,(long *)local_20);
  juce::String::~String(local_20);
  *(undefined ***)this = &PTR__CustomComboBox_00701530;
  *(undefined ***)(this + 0xf0) = &PTR__CustomComboBox_00701700;
  *(undefined ***)(this + 0x100) = &PTR__CustomComboBox_00701730;
  *(undefined ***)(this + 0x108) = &PTR__CustomComboBox_00701758;
  if (SharedResourcePointer<juce::CRQLLNF>::weak()::weak == '\0') {
    iVar1 = __cxa_guard_acquire(&SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    if (iVar1 != 0) {
      SharedResourcePointer<juce::CRQLLNF>::weak()::weak._0_4_ = 0;
      SharedResourcePointer<juce::CRQLLNF>::weak()::weak._8_8_ = 0;
      SharedResourcePointer<juce::CRQLLNF>::weak()::weak._16_8_ = 0;
      __cxa_atexit(SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak,
                   SharedResourcePointer<juce::CRQLLNF>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    }
  }
                    /* try { // try from 0016bca7 to 0016bcb5 has its CatchHandler @ 0016be17 */
  SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x1d8),(SpinLock *)SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
  Colour::Colour((Colour *)local_28,(Colour)0x1a,(Colour)0x1a,(Colour)0x1a);
                    /* try { // try from 0016bcd3 to 0016bdb9 has its CatchHandler @ 0016be31 */
  Component::setColour((Component *)this,0x30100304,local_28[0]);
  Component::setColour((Component *)this,0x30100305,Colours::white);
  Colour::Colour((Colour *)local_30,(Colour)0x50,(Colour)0x50,(Colour)0x50);
  Component::setColour((Component *)this,0x30100306,local_30[0]);
  Colour::Colour((Colour *)local_38,(Colour)0xc8,(Colour)0xc8,(Colour)0xc8);
  Component::setColour((Component *)this,0x30100307,local_38[0]);
  Colour::Colour((Colour *)local_40,(Colour)0x1e,(Colour)0x1e,(Colour)0x1e);
  Component::setColour((Component *)this,0x30100308,local_40[0]);
  Component::setColour((Component *)this,0x30100309,Colours::white);
  Colour::Colour((Colour *)local_48,(Colour)0xff,(Colour)0x85,(Colour)0x33);
  Component::setColour((Component *)this,0x30100310,local_48[0]);
  Component::setLookAndFeel((Component *)this,*(long *)(this + 0x1d8));
  return;
}


