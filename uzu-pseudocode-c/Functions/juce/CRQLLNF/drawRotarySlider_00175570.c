// Function : drawRotarySlider
// Namespace: juce:CRQLLNF
// Entry    : 00175570
// Prototype: undefined drawRotarySlider(float param_1, float param_2, float param_3, undefined8 param_4_00, Graphics * param_5, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 00175570 - 00175574


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::CRQLLNF::drawRotarySlider(juce::Graphics&, int, int, int, int, float,
   float, float, juce::Slider&) */

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
  Identifier aIStack_d8 [16];
  undefined8 uStack_c8;
  var avStack_b8 [16];
  undefined8 uStack_a8;
  undefined4 uStack_90;
  float fStack_8c;
  Graphics *pGStack_88;
  PathStrokeType aPStack_80 [16];
  var avStack_70 [40];
  float fStack_48;
  
  iVar6 = param_8;
  if (param_9 < param_8) {
    iVar6 = param_9;
  }
  pCVar1 = param_10 + 200;
  pGStack_88 = param_5;
  fStack_48 = param_1;
  Identifier::Identifier(aIStack_d8,(byte *)"infiniteEnabled");
  var::var(avStack_b8,(var)0x0);
  NamedValueSet::getWithDefault
            ((long *)avStack_70,(long *)pCVar1,(long *)aIStack_d8,(long *)avStack_b8);
  bVar2 = var::operator_cast_to_bool(avStack_70);
  var::~var(avStack_70);
  var::~var(avStack_b8);
  Identifier::~Identifier(aIStack_d8);
  Identifier::Identifier(aIStack_d8,(byte *)"symmetricEnabled");
  var::var(avStack_b8,(var)0x0);
  NamedValueSet::getWithDefault
            ((long *)avStack_70,(long *)pCVar1,(long *)aIStack_d8,(long *)avStack_b8);
  bVar3 = var::operator_cast_to_bool(avStack_70);
  var::~var(avStack_70);
  var::~var(avStack_b8);
  Identifier::~Identifier(aIStack_d8);
  Identifier::Identifier(aIStack_d8,(byte *)"hoverExpansion");
  var::var(0,avStack_b8);
  NamedValueSet::getWithDefault
            ((long *)avStack_70,(long *)pCVar1,(long *)aIStack_d8,(long *)avStack_b8);
  fVar7 = (float)param_8 * DAT_005d9044 + (float)param_6;
  fVar8 = (float)param_9 * DAT_005d9044 + (float)param_7;
  fVar9 = DAT_005d9068 * (float)iVar6;
  fVar10 = (float)iVar6 * DAT_005d9044 + DAT_005d98c8 * fVar9 + DAT_005d98cc;
  var::operator_cast_to_float(avStack_70);
  fStack_8c = extraout_XMM0_Da;
  var::~var(avStack_70);
  var::~var(avStack_b8);
  Identifier::~Identifier(aIStack_d8);
  Path::Path((Path *)avStack_70);
  Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,param_2,param_3,(Path *)avStack_70,'\x01');
  this = pGStack_88;
  Colour::Colour((Colour *)&uStack_90,(Colour)0x28,(Colour)0x28,(Colour)0x28);
  Graphics::setColour(this,uStack_90);
  PathStrokeType::PathStrokeType(fVar9,(PathStrokeType *)aIStack_d8,1,2);
  avStack_b8 = (var  [16])ZEXT416(DAT_005d9038);
  uStack_a8 = 0x3f800000;
  Graphics::strokePath(this,(undefined8 *)avStack_70,(PathStrokeType *)aIStack_d8,avStack_b8);
  PathStrokeType::~PathStrokeType();
  Path::Path((Path *)avStack_b8);
  if (bVar3) {
    fVar11 = (param_2 + param_3) * DAT_005d9044;
    fVar12 = fStack_48 + DAT_005d98c8 + fStack_48 + DAT_005d98c8;
    if (DAT_005d908c <= (float)(_DAT_005d91c0 & (uint)fVar12)) {
      if (0.0 <= fVar12) {
        Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,fVar11,
                            fVar12 * (param_3 - fVar11) + fVar11,(Path *)avStack_b8,'\x01');
      }
      else {
        Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,
                            (param_2 - fVar11) * (float)(_DAT_005d91c0 & (uint)fVar12) + fVar11,
                            fVar11,(Path *)avStack_b8,'\x01');
      }
    }
    else {
      Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,DAT_005d98d8 + fVar11,fVar11 + _DAT_005d98dc
                          ,(Path *)avStack_b8,'\x01');
    }
  }
  else {
    fVar12 = fStack_48 * (param_3 - param_2) + param_2;
    fVar11 = param_2 + DAT_005d98d0;
    if (param_2 + DAT_005d98d0 <= fVar12) {
      fVar11 = fVar12;
    }
    fVar12 = (fStack_8c * _DAT_005d98d4 + DAT_005d98d0) * DAT_005d9044;
    if (bVar2) {
      param_2 = fVar11 - fVar12;
      fVar11 = fVar11 + fVar12;
    }
    Path::addCentredArc(fVar7,fVar8,fVar10,fVar10,0.0,param_2,fVar11,(Path *)avStack_b8,'\x01');
  }
  uVar4 = Component::isColourSpecified(param_10,0x1001311);
  if ((char)uVar4 == '\0') {
    uVar5 = Colours::white;
  }
  else {
    uVar4 = Component::findColour(param_10,0x1001311,'\0');
    uVar5 = (int)uVar4;
  }
  Graphics::setColour(this,uVar5);
  PathStrokeType::PathStrokeType(fVar9,aPStack_80,1,2);
  aIStack_d8 = (Identifier  [16])ZEXT416(DAT_005d9038);
  uStack_c8 = 0x3f800000;
  Graphics::strokePath(this,(undefined8 *)avStack_b8,aPStack_80,aIStack_d8);
  PathStrokeType::~PathStrokeType();
  Path::~Path((Path *)avStack_b8);
  Path::~Path((Path *)avStack_70);
  return;
}


