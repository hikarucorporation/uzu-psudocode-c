// Function : setupLabel
// Namespace: 
// Entry    : 00168ff0
// Prototype: undefined setupLabel(Label * param_1, long * param_2, String * param_3, int param_4, int param_5, Component * param_6)
// Body     : 00168ff0 - 00169148


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setupLabel(juce::Label&, juce::Font const&, juce::String const&, int, int, juce::Component&) */

void __cdecl
setupLabel(Label *param_1,long *param_2,String *param_3,int param_4,int param_5,Component *param_6)

{
  long lVar1;
  long lVar2;
  String local_80 [8];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  Component *local_58;
  TextLayout local_50 [16];
  float local_40;
  
  local_58 = param_6;
  juce::Label::setFont(param_1,param_2);
  juce::Label::setText(param_1,(long *)param_3,0);
  juce::Label::setJustificationType(param_1,0x24);
  juce::String::String(local_80);
  local_78 = 0x100000000;
  local_70 = 1;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  juce::AttributedString::setJustification((AttributedString *)local_80,0x24);
                    /* try { // try from 00169072 to 0016907f has its CatchHandler @ 0016915a */
  juce::AttributedString::append((AttributedString *)local_80,param_3,param_2);
                    /* try { // try from 00169080 to 00169089 has its CatchHandler @ 00169158 */
  juce::TextLayout::TextLayout(local_50);
                    /* try { // try from 0016908a to 001690a0 has its CatchHandler @ 00169149 */
  juce::TextLayout::createLayout(DAT_005d9048,local_50,(ulong *)local_80);
  juce::TextLayout::~TextLayout(local_50);
  if (0 < local_5c) {
    lVar1 = 8;
    lVar2 = 0;
    do {
      juce::Font::~Font((Font *)(CONCAT44(uStack_64,uStack_68) + lVar1));
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 < local_5c);
  }
  local_5c = 0;
  free((void *)CONCAT44(uStack_64,uStack_68));
  juce::String::~String(local_80);
  juce::Component::setBounds((Component *)param_1,param_4,param_5,(int)local_40 + 8,0x18);
  juce::Component::addAndMakeVisible(local_58,(Component *)param_1,0xffffffff);
  return;
}


