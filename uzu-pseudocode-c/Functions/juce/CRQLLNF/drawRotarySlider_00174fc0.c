// Function : drawRotarySlider
// Namespace: juce:CRQLLNF
// Entry    : 00174fc0
// Prototype: undefined drawRotarySlider(float param_1, float param_2, float param_3, undefined8 param_4_00, Graphics * param_5, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 00174fc0 - 001754ef


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CRQLLNF::drawRotarySlider(juce::Graphics&, int, int, int, int, float, float, float,
   juce::Slider&) */

void __thiscall
juce::CRQLLNF::drawRotarySlider
          (float param_1,float param_2,float param_3,undefined8 param_4_00,Graphics *param_5,
          int param_6,int param_7,int param_8,int param_9,Component *param_10)

{
  Component *pCVar1;
  Graphics *this;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Identifier local_d8 [16];
  undefined8 local_c8;
  var local_b8 [16];
  undefined8 local_a8;
  undefined4 local_90;
  float local_8c;
  Graphics *local_88;
  PathStrokeType local_80 [16];
  var local_70 [40];
  float local_48;
  
  iVar6 = param_8;
  if (param_9 < param_8) {
    iVar6 = param_9;
  }
  pCVar1 = param_10 + 200;
  local_88 = param_5;
  local_48 = param_1;
  Identifier::Identifier(local_d8,(byte *)"infiniteEnabled");
  var::var(local_b8,(var)0x0);
                    /* try { // try from 00175036 to 0017504b has its CatchHandler @ 0017551e */
  NamedValueSet::getWithDefault((long *)local_70,(long *)pCVar1,(long *)local_d8,(long *)local_b8);
  bVar2 = var::operator_cast_to_bool(local_70);
  var::~var(local_70);
  var::~var(local_b8);
  Identifier::~Identifier(local_d8);
  Identifier::Identifier(local_d8,(byte *)"symmetricEnabled");
  var::var(local_b8,(var)0x0);
                    /* try { // try from 0017509f to 001750b4 has its CatchHandler @ 0017551c */
  NamedValueSet::getWithDefault((long *)local_70,(long *)pCVar1,(long *)local_d8,(long *)local_b8);
  bVar3 = var::operator_cast_to_bool(local_70);
  var::~var(local_70);
  var::~var(local_b8);
  Identifier::~Identifier(local_d8);
  Identifier::Identifier(local_d8,(byte *)"hoverExpansion");
  var::var(0,local_b8);
                    /* try { // try from 00175108 to 0017511d has its CatchHandler @ 0017551a */
  NamedValueSet::getWithDefault((long *)local_70,(long *)pCVar1,(long *)local_d8,(long *)local_b8);
  fVar7 = (float)param_8 * DAT_005d9044 + (float)param_6;
  fVar8 = (float)param_9 * DAT_005d9044 + (float)param_7;
  fVar9 = DAT_005d9068 * (float)iVar6;
  fVar10 = (float)iVar6 * DAT_005d9044 + DAT_005d98c8 * fVar9 + DAT_005d98cc;
  var::operator_cast_to_float(local_70);
  local_8c = extraout_XMM0_Da;
  var::~var(local_70);
  var::~var(local_b8);
  Identifier::~Identifier(local_d8);
  Path::Path((Path *)local_70);
                    /* try { // try from 001751dd to 00175237 has its CatchHandler @ 0017554c */
  Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,param_2,param_3,(Path *)local_70,'\x01');
  this = local_88;
  Colour::Colour((Colour *)&local_90,(Colour)0x28,(Colour)0x28,(Colour)0x28);
  Graphics::setColour(this,local_90);
  PathStrokeType::PathStrokeType(fVar9,(PathStrokeType *)local_d8,1,2);
  local_b8 = (var  [16])ZEXT416(DAT_005d9038);
  local_a8 = 0x3f800000;
                    /* try { // try from 0017526b to 00175282 has its CatchHandler @ 0017550b */
  Graphics::strokePath(this,(undefined8 *)local_70,(PathStrokeType *)local_d8,local_b8);
  PathStrokeType::~PathStrokeType();
                    /* try { // try from 0017528d to 00175296 has its CatchHandler @ 00175509 */
  Path::Path((Path *)local_b8);
  if (bVar3) {
    fVar11 = (param_2 + param_3) * DAT_005d9044;
    fVar12 = local_48 + DAT_005d98c8 + local_48 + DAT_005d98c8;
    if (DAT_005d908c <= (float)(_DAT_005d91c0 & (uint)fVar12)) {
      if (0.0 <= fVar12) {
                    /* try { // try from 00175416 to 00175442 has its CatchHandler @ 001754f0 */
        Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,fVar11,
                            fVar12 * (param_3 - fVar11) + fVar11,(Path *)local_b8,'\x01');
      }
      else {
                    /* try { // try from 001753db to 00175401 has its CatchHandler @ 001754f2 */
        Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,
                            (param_2 - fVar11) * (float)(_DAT_005d91c0 & (uint)fVar12) + fVar11,
                            fVar11,(Path *)local_b8,'\x01');
      }
    }
    else {
                    /* try { // try from 001752ff to 00175325 has its CatchHandler @ 001754f4 */
      Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,DAT_005d98d8 + fVar11,fVar11 + _DAT_005d98dc
                          ,(Path *)local_b8,'\x01');
    }
  }
  else {
    fVar12 = local_48 * (param_3 - param_2) + param_2;
    fVar11 = param_2 + DAT_005d98d0;
    if (param_2 + DAT_005d98d0 <= fVar12) {
      fVar11 = fVar12;
    }
    fVar12 = (local_8c * _DAT_005d98d4 + DAT_005d98d0) * DAT_005d9044;
    if (bVar2) {
      param_2 = fVar11 - fVar12;
      fVar11 = fVar11 + fVar12;
    }
                    /* try { // try from 001753a1 to 001753bb has its CatchHandler @ 001754f8 */
    Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,param_2,fVar11,(Path *)local_b8,'\x01');
  }
                    /* try { // try from 00175443 to 0017544f has its CatchHandler @ 0017553d */
  uVar4 = Component::isColourSpecified(param_10,0x1001311);
  if ((char)uVar4 == '\0') {
    uVar5 = Colours::white;
  }
  else {
                    /* try { // try from 00175454 to 00175462 has its CatchHandler @ 001754f6 */
    uVar4 = Component::findColour(param_10,0x1001311,'\0');
    uVar5 = (int)uVar4;
  }
                    /* try { // try from 0017546d to 00175474 has its CatchHandler @ 0017553d */
  Graphics::setColour(this,uVar5);
  PathStrokeType::PathStrokeType(fVar9,local_80,1,2);
  local_d8 = (Identifier  [16])ZEXT416(DAT_005d9038);
  local_c8 = 0x3f800000;
                    /* try { // try from 001754a8 to 001754bc has its CatchHandler @ 001754fa */
  Graphics::strokePath(this,(undefined8 *)local_b8,local_80,local_d8);
  PathStrokeType::~PathStrokeType();
  Path::~Path((Path *)local_b8);
  Path::~Path((Path *)local_70);
  return;
}


