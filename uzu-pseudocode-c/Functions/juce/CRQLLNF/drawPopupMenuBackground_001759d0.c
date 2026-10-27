// Function : drawPopupMenuBackground
// Namespace: juce:CRQLLNF
// Entry    : 001759d0
// Prototype: undefined drawPopupMenuBackground(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4)
// Body     : 001759d0 - 001759d4


/* non-virtual thunk to juce::CRQLLNF::drawPopupMenuBackground(juce::Graphics&, int, int) */

void __thiscall
juce::CRQLLNF::drawPopupMenuBackground
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4)

{
  undefined4 auStack_80 [2];
  undefined4 auStack_78 [2];
  float fStack_70;
  float fStack_6c;
  PathStrokeType aPStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  Path aPStack_38 [40];
  
  fStack_6c = (float)param_3 + DAT_005d9054;
  fStack_70 = (float)param_4 + DAT_005d9054;
  Path::Path(aPStack_38);
  Path::addRectangle(DAT_005d9044,DAT_005d9044,fStack_6c,fStack_70,aPStack_38);
  Colour::Colour((Colour *)auStack_78,(Colour)0x1e,(Colour)0x1e,(Colour)0x1e);
  Graphics::setColour(param_2,auStack_78[0]);
  Graphics::fillPath(param_2,(undefined8 *)aPStack_38);
  Colour::Colour((Colour *)auStack_80,(Colour)0x3c,(Colour)0x3c,(Colour)0x3c);
  Graphics::setColour(param_2,auStack_80[0]);
  PathStrokeType::PathStrokeType(DAT_005d9038,aPStack_68);
  auStack_58 = ZEXT416(DAT_005d9038);
  uStack_48 = 0x3f800000;
  Graphics::strokePath(param_2,(undefined8 *)aPStack_38,aPStack_68,auStack_58);
  PathStrokeType::~PathStrokeType();
  Path::~Path(aPStack_38);
  return;
}


