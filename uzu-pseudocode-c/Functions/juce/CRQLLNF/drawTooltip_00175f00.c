// Function : drawTooltip
// Namespace: juce:CRQLLNF
// Entry    : 00175f00
// Prototype: undefined drawTooltip(undefined8 param_1_00, Graphics * param_2, long * param_3, int param_4, int param_5)
// Body     : 00175f00 - 00176077


/* juce::CRQLLNF::drawTooltip(juce::Graphics&, juce::String const&, int, int) */

void __thiscall
juce::CRQLLNF::drawTooltip
          (undefined8 param_1_00,Graphics *param_2,long *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  Font local_40 [8];
  undefined4 local_38 [2];
  Font local_30 [8];
  
  Graphics::fillAll(param_2,Colours::transparentBlack);
  Colour::Colour((Colour *)local_38,(Colour)0xff,(Colour)0x85,(Colour)0x33);
  Graphics::setColour(param_2,local_38[0]);
  Graphics::fillRect(0,CONCAT44((float)param_5,(float)param_4),(long)param_2);
  Graphics::setColour(param_2,Colours::black);
  if (FontManager::getInstance()::instance == '\0') {
    iVar2 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar2 != 0) {
                    /* try { // try from 00176041 to 0017604c has its CatchHandler @ 00176078 */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  Font::Font(local_30,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 00175f98 to 00175fac has its CatchHandler @ 0017608f */
  Font::withHeight(DAT_005d98f4,local_40,(long *)local_30);
  Font::~Font(local_30);
                    /* try { // try from 00175fb7 to 00176015 has its CatchHandler @ 001760a4 */
  Graphics::setFont(param_2,local_40);
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
  Font::~Font(local_40);
  return;
}


