// Function : drawTooltip
// Namespace: juce:CRQLLNF
// Entry    : 001760c0
// Prototype: undefined drawTooltip(undefined8 param_1_00, Graphics * param_2, undefined8 param_3, int param_4, int param_5)
// Body     : 001760c0 - 001760c4


/* non-virtual thunk to juce::CRQLLNF::drawTooltip(juce::Graphics&, juce::String const&, int, int)
    */

void __thiscall
juce::CRQLLNF::drawTooltip
          (undefined8 param_1_00,Graphics *param_2,long *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  Font aFStack_40 [8];
  undefined4 auStack_38 [2];
  Font aFStack_30 [8];
  
  Graphics::fillAll(param_2,Colours::transparentBlack);
  Colour::Colour((Colour *)auStack_38,(Colour)0xff,(Colour)0x85,(Colour)0x33);
  Graphics::setColour(param_2,auStack_38[0]);
  Graphics::fillRect(0,CONCAT44((float)param_5,(float)param_4),(long)param_2);
  Graphics::setColour(param_2,Colours::black);
  if (FontManager::getInstance()::instance == '\0') {
    iVar2 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar2 != 0) {
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  Font::Font(aFStack_30,(long *)FontManager::getInstance()::instance);
  Font::withHeight(DAT_005d98f4,aFStack_40,(long *)aFStack_30);
  Font::~Font(aFStack_30);
  Graphics::setFont(param_2,aFStack_40);
  iVar2 = 0x10;
  if (0x10 < param_4) {
    iVar2 = param_4;
  }
  iVar1 = 8;
  if (8 < param_5) {
    iVar1 = param_5;
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_2,param_3,0x400000008,CONCAT44(iVar1 + -8,iVar2 + -0x10),
             (uint *)0x24,1);
  Font::~Font(aFStack_40);
  return;
}


