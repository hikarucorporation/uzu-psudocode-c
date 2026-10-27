// Function : drawPopupMenuBackground
// Namespace: juce:CRQLLNF
// Entry    : 00175890
// Prototype: undefined drawPopupMenuBackground(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4)
// Body     : 00175890 - 0017599f


/* juce::CRQLLNF::drawPopupMenuBackground(juce::Graphics&, int, int) */

void __thiscall
juce::CRQLLNF::drawPopupMenuBackground
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4)

{
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  float local_70;
  float local_6c;
  PathStrokeType local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  Path local_38 [40];
  
  local_6c = (float)param_3 + DAT_005d9054;
  local_70 = (float)param_4 + DAT_005d9054;
  Path::Path(local_38);
                    /* try { // try from 001758ce to 00175943 has its CatchHandler @ 001759af */
  Path::addRectangle(DAT_005d9044,DAT_005d9044,local_6c,local_70,local_38);
  Colour::Colour((Colour *)local_78,(Colour)0x1e,(Colour)0x1e,(Colour)0x1e);
  Graphics::setColour(param_2,local_78[0]);
  Graphics::fillPath(param_2,(undefined8 *)local_38);
  Colour::Colour((Colour *)local_80,(Colour)0x3c,(Colour)0x3c,(Colour)0x3c);
  Graphics::setColour(param_2,local_80[0]);
  PathStrokeType::PathStrokeType(DAT_005d9038,local_68);
  local_58 = ZEXT416(DAT_005d9038);
  local_48 = 0x3f800000;
                    /* try { // try from 0017596f to 00175983 has its CatchHandler @ 001759a0 */
  Graphics::strokePath(param_2,(undefined8 *)local_38,local_68,local_58);
  PathStrokeType::~PathStrokeType();
  Path::~Path(local_38);
  return;
}


