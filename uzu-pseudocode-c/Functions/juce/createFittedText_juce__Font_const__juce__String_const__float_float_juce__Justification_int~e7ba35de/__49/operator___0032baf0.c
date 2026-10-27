// Function : operator()
// Namespace: juce:createFittedText_juce__Font_const__juce__String_const__float_float_juce__Justification_int~e7ba35de:__49
// Entry    : 0032baf0
// Prototype: ulong operator()(ulong param_1, undefined8 param_2, $_49 * this, long param_4)
// Body     : 0032baf0 - 0032bb60


/* juce::createFittedText(juce::Font const&, juce::String const&, float, float, juce::Justification,
   int, float, juce::detail::ShapedTextOptions)::$_49::TEMPNAMEPLACEHOLDERVALUE() const */

ulong __thiscall
juce::
createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
::$_49::operator()(ulong param_1,undefined8 param_2,__49 *this,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)param_1;
  if (param_4 - (long)this != 0) {
    lVar1 = 0;
    fVar4 = 0.0;
    do {
      fVar3 = *(float *)(this + lVar1);
      if (*(float *)(this + lVar1) <= fVar4) {
        fVar3 = fVar4;
      }
      lVar1 = lVar1 + 4;
      fVar4 = fVar3;
    } while ((param_4 - (long)this >> 2) * 4 != lVar1);
    if ((fVar3 != 0.0) || (NAN(fVar3))) {
      fVar3 = ((float)param_2 * fVar2) / (fVar3 + DAT_00652618);
      fVar4 = DAT_005d9038;
      if (fVar3 <= DAT_005d9038) {
        fVar4 = fVar3;
      }
      return CONCAT44((uint)((ulong)param_2 >> 0x20) & (uint)(param_1 >> 0x20),
                      -(uint)(fVar3 < fVar2) & (uint)fVar2) |
             (ulong)(~-(uint)(fVar3 < fVar2) & (uint)fVar4);
    }
  }
  return param_1;
}


