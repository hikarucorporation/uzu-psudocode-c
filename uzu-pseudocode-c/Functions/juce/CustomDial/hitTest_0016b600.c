// Function : hitTest
// Namespace: juce:CustomDial
// Entry    : 0016b600
// Prototype: bool hitTest(CustomDial * this, int param_1, int param_2)
// Body     : 0016b600 - 0016b74d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CustomDial::hitTest(int, int) */

bool __thiscall juce::CustomDial::hitTest(CustomDial *this,int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  Identifier local_58 [8];
  var local_50 [16];
  var local_40 [16];
  
  auVar5 = Component::getLocalBounds((Component *)this);
  Identifier::Identifier(local_58,(byte *)"showSegments");
  var::var(local_50,(var)0x0);
                    /* try { // try from 0016b64d to 0016b65f has its CatchHandler @ 0016b74e */
  NamedValueSet::getWithDefault
            ((long *)local_40,(long *)(this + 200),(long *)local_58,(long *)local_50);
  fVar2 = (float)auVar5._8_4_;
  fVar3 = (float)auVar5._12_4_;
  bVar1 = var::operator_cast_to_bool(local_40);
  var::~var(local_40);
  var::~var(local_50);
  Identifier::~Identifier(local_58);
  fVar4 = fVar3;
  if (fVar2 <= fVar3) {
    fVar4 = fVar2;
  }
  fVar4 = fVar4 * DAT_005d9044;
  if (bVar1) {
    fVar4 = fVar4 + _DAT_005d9084;
  }
  fVar2 = (float)param_1 - (fVar2 * DAT_005d9044 + (float)auVar5._0_4_);
  fVar3 = (float)param_2 - (fVar3 * DAT_005d9044 + (float)auVar5._4_4_);
  fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  return fVar2 <= fVar4;
}


