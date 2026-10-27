// Function : fromString
// Namespace: juce:JuceVST3EditController:Param
// Entry    : 001affa0
// Prototype: ulong fromString(Param * this, ushort * param_1, double * param_2)
// Body     : 001affa0 - 001b0016


/* juce::JuceVST3EditController::Param::fromString(char16_t const*, double&) const */

ulong __thiscall
juce::JuceVST3EditController::Param::fromString(Param *this,ushort *param_1,double *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  String aSStack_28 [8];
  
  plVar1 = *(long **)(this + 0x340);
  if (plVar1 != (long *)0x0) {
    uVar3 = 0;
    lVar2 = __dynamic_cast(plVar1,&AudioProcessorParameter::typeinfo,&LegacyAudioParameter::typeinfo
                           ,0);
    if (lVar2 != 0) goto LAB_001b0008;
  }
  juce::String::String(aSStack_28,param_1);
                    /* try { // try from 001affeb to 001afff3 has its CatchHandler @ 001b0017 */
  fVar4 = (float)(**(code **)(*plVar1 + 0x58))(plVar1,aSStack_28);
  *param_2 = (double)fVar4;
  juce::String::~String(aSStack_28);
  uVar3 = CONCAT71((int7)((ulong)aSStack_28 >> 8),1);
LAB_001b0008:
  return uVar3 & 0xffffffff;
}


