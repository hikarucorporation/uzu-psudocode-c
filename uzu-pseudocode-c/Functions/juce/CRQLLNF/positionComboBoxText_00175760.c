// Function : positionComboBoxText
// Namespace: juce:CRQLLNF
// Entry    : 00175760
// Prototype: undefined positionComboBoxText(undefined8 param_1_00, long param_2, Component * param_3)
// Body     : 00175760 - 00175839


/* juce::CRQLLNF::positionComboBoxText(juce::ComboBox&, juce::Label&) */

void __thiscall
juce::CRQLLNF::positionComboBoxText(undefined8 param_1_00,long param_2,Component *param_3)

{
  int iVar1;
  Font local_20 [8];
  Font local_18 [8];
  
  Component::setBounds(param_3,4,1,*(int *)(param_2 + 0x40) + -0x14,*(int *)(param_2 + 0x44) + -2);
  if (FontManager::getInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 00175803 to 0017580e has its CatchHandler @ 0017583a */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  Font::Font(local_18,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 001757a8 to 001757bc has its CatchHandler @ 00175866 */
  Font::withHeight(DAT_005d98ec,local_20,(long *)local_18);
  Font::~Font(local_18);
                    /* try { // try from 001757c7 to 001757d3 has its CatchHandler @ 00175851 */
  Label::setFont((Label *)param_3,(long *)local_20);
  Font::~Font(local_20);
  Label::setJustificationType((Label *)param_3,0x24);
  return;
}


