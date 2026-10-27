// Function : operator()
// Namespace: std:less_juce__Graphics__drawText_juce__String_const__juce__Rectangle_float__juce__Justificati~d2510c84
// Entry    : 003069e0
// Prototype: undefined8 operator()(long * param_1, long * param_2)
// Body     : 003069e0 - 00306b06


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::less<juce::Graphics::drawText(juce::String const&, juce::Rectangle<float>,
   juce::Justification, bool)
   const::ArrangementArgs>::TEMPNAMEPLACEHOLDERVALUE(juce::Graphics::drawText(juce::String const&,
   juce::Rectangle<float>, juce::Justification, bool) const::ArrangementArgs const&,
   juce::Graphics::drawText(juce::String const&, juce::Rectangle<float>, juce::Justification, bool)
   const::ArrangementArgs const&) const */

undefined8 __cdecl
std::
less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
::operator()(long *param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulong uVar8;
  
                    /* try { // try from 003069fc to 00306a00 has its CatchHandler @ 00306b0f */
  bVar5 = juce::FontOptions::operator<
                    ((FontOptions *)(*param_1 + 0x18),(undefined8 *)(*param_2 + 0x18));
  uVar7 = CONCAT71(extraout_var,1);
  if (!bVar5) {
                    /* try { // try from 00306a1b to 00306a1f has its CatchHandler @ 00306b07 */
    bVar5 = juce::FontOptions::operator<
                      ((FontOptions *)(*param_2 + 0x18),(undefined8 *)(*param_1 + 0x18));
    if (bVar5) {
      uVar7 = 0;
    }
    else {
      pbVar3 = (byte *)param_2[1];
      pbVar4 = (byte *)param_1[1];
      uVar6 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar4,pbVar3);
      if ((int)uVar6 < 0) {
        uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_00,uVar6) >> 8),0xff);
      }
      else {
        uVar6 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar3,pbVar4);
        if ((int)uVar6 < 0) {
          uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_01,uVar6) >> 8),1);
        }
        else {
          fVar1 = *(float *)(param_1 + 2);
          fVar2 = *(float *)(param_2 + 2);
          uVar6 = (uint)(byte)((fVar1 != fVar2) * '\x02');
          if (fVar2 < fVar1) {
            uVar6 = 1;
          }
          uVar8 = (ulong)uVar6;
          if (fVar1 < fVar2) {
            uVar8 = 0xff;
          }
          if ((char)uVar8 == '\0') {
            fVar1 = *(float *)((long)param_1 + 0x14);
            fVar2 = *(float *)((long)param_2 + 0x14);
            uVar6 = (uint)(byte)((fVar1 != fVar2) * '\x02');
            if (fVar2 < fVar1) {
              uVar6 = 1;
            }
            uVar8 = (ulong)uVar6;
            if (fVar1 < fVar2) {
              uVar8 = 0xff;
            }
            if ((char)uVar8 == '\0') {
              uVar8 = 0xff;
              if ((int)param_2[3] <= (int)param_1[3]) {
                uVar8 = (ulong)((int)param_2[3] < (int)param_1[3]);
              }
              if (((char)uVar8 == '\0') &&
                 (uVar8 = (ulong)(byte)((*(byte *)((long)param_2 + 0x1c) <=
                                        *(byte *)((long)param_1 + 0x1c)) * '\x02' - 1),
                 *(byte *)((long)param_1 + 0x1c) == *(byte *)((long)param_2 + 0x1c))) {
                uVar8 = 0;
              }
            }
          }
        }
      }
      uVar7 = CONCAT71((int7)(uVar8 >> 8),(char)uVar8 == -1);
    }
  }
  return uVar7;
}


