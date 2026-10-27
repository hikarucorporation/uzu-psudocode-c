// Function : timerCallback
// Namespace: juce:CustomDial
// Entry    : 0016b7d0
// Prototype: undefined timerCallback(CustomDial * this)
// Body     : 0016b7d0 - 0016b8a9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CustomDial::timerCallback() */

void __thiscall juce::CustomDial::timerCallback(CustomDial *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Identifier aIStack_38 [8];
  var local_30 [16];
  
  fVar1 = 0.0;
  if (this[0x1d3] != (CustomDial)0x0) {
    fVar1 = DAT_005d9038;
  }
  fVar3 = (fVar1 - *(float *)(this + 0x1d4)) * DAT_005d9088 + *(float *)(this + 0x1d4);
  fVar2 = (float)((uint)(fVar1 - fVar3) & _DAT_005d91c0);
  *(float *)(this + 0x1d4) = fVar3;
  if (fVar2 < DAT_005d908c) {
    *(float *)(this + 0x1d4) = fVar1;
    Timer::stopTimer((Timer *)(this + 0x1a8));
  }
  Identifier::Identifier(aIStack_38,(byte *)"hoverExpansion");
  var::var((double)*(float *)(this + 0x1d4),local_30);
                    /* try { // try from 0016b876 to 0016b883 has its CatchHandler @ 0016b8aa */
  NamedValueSet::set((NamedValueSet *)(this + 200),(long *)aIStack_38,(long *)local_30);
  var::~var(local_30);
  Identifier::~Identifier(aIStack_38);
  Component::repaint((Component *)this);
  return;
}


