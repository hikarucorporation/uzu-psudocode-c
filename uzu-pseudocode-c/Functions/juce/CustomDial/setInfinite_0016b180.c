// Function : setInfinite
// Namespace: juce:CustomDial
// Entry    : 0016b180
// Prototype: undefined setInfinite(CustomDial * this, var param_2)
// Body     : 0016b180 - 0016b1e8


/* juce::CustomDial::setInfinite(bool) */

void __thiscall juce::CustomDial::setInfinite(CustomDial *this,var param_2)

{
  Identifier aIStack_38 [8];
  var local_30 [16];
  
  *(var *)(this + 0x1d1) = param_2;
  Identifier::Identifier(aIStack_38,(byte *)"infiniteEnabled");
  var::var(local_30,param_2);
                    /* try { // try from 0016b1be to 0016b1cb has its CatchHandler @ 0016b1e9 */
  NamedValueSet::set((NamedValueSet *)(this + 200),(long *)aIStack_38,(long *)local_30);
  var::~var(local_30);
  Identifier::~Identifier(aIStack_38);
  return;
}


