// Function : positionComboBoxText
// Namespace: juce:CRQLLNF
// Entry    : 00175880
// Prototype: undefined positionComboBoxText(undefined8 param_1_00, long param_2, Component * param_3)
// Body     : 00175880 - 00175884


/* non-virtual thunk to juce::CRQLLNF::positionComboBoxText(juce::ComboBox&, juce::Label&) */

void __thiscall
juce::CRQLLNF::positionComboBoxText(undefined8 param_1_00,long param_2,Component *param_3)

{
  int iVar1;
  Font aFStack_20 [8];
  Font aFStack_18 [8];
  
  Component::setBounds(param_3,4,1,*(int *)(param_2 + 0x40) + -0x14,*(int *)(param_2 + 0x44) + -2);
  if (FontManager::getInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar1 != 0) {
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  Font::Font(aFStack_18,(long *)FontManager::getInstance()::instance);
  Font::withHeight(DAT_005d98ec,aFStack_20,(long *)aFStack_18);
  Font::~Font(aFStack_18);
  Label::setFont((Label *)param_3,(long *)aFStack_20);
  Font::~Font(aFStack_20);
  Label::setJustificationType((Label *)param_3,0x24);
  return;
}


