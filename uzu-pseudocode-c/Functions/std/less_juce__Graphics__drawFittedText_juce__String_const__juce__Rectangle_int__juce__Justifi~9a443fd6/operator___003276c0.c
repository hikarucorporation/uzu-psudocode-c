// Function : operator()
// Namespace: std:less_juce__Graphics__drawFittedText_juce__String_const__juce__Rectangle_int__juce__Justifi~9a443fd6
// Entry    : 003276c0
// Prototype: undefined8 operator()(long * param_1, long * param_2)
// Body     : 003276c0 - 003278b5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::less<juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>,
   juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs>::TEMPNAMEPLACEHOLDERVALUE(juce::Graphics::drawFittedText(juce::String
   const&, juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs const&, juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs const&) const */

undefined8 __cdecl
std::
less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
::operator()(long *param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulong uVar8;
  byte bVar9;
  
                    /* try { // try from 003276dc to 003276e0 has its CatchHandler @ 003278be */
  bVar6 = juce::FontOptions::operator<
                    ((FontOptions *)(*param_1 + 0x18),(undefined8 *)(*param_2 + 0x18));
  uVar8 = CONCAT71(extraout_var,bVar6);
  if (!bVar6) {
                    /* try { // try from 003276f8 to 003276fc has its CatchHandler @ 003278b6 */
    bVar6 = juce::FontOptions::operator<
                      ((FontOptions *)(*param_2 + 0x18),(undefined8 *)(*param_1 + 0x18));
    uVar8 = CONCAT71(extraout_var_00,bVar6);
    bVar9 = 1;
    if (bVar6) goto LAB_00327704;
    pbVar3 = (byte *)param_2[1];
    pbVar4 = (byte *)param_1[1];
    uVar7 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar4,pbVar3);
    uVar8 = CONCAT44(extraout_var_01,uVar7);
    if (-1 < (int)uVar7) {
      uVar7 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar3,pbVar4);
      uVar8 = CONCAT44(extraout_var_02,uVar7);
      if (-1 < (int)uVar7) {
        fVar1 = *(float *)(param_1 + 2);
        fVar2 = *(float *)(param_2 + 2);
        bVar9 = (fVar1 != fVar2) * '\x02';
        uVar8 = 0;
        if (fVar2 < fVar1) {
          bVar9 = 1;
        }
        if (fVar1 < fVar2) {
          bVar9 = 0xff;
        }
        if (bVar9 == 0) {
          fVar1 = *(float *)((long)param_1 + 0x14);
          fVar2 = *(float *)((long)param_2 + 0x14);
          bVar9 = (fVar1 != fVar2) * '\x02';
          if (fVar2 < fVar1) {
            bVar9 = 1;
          }
          if (fVar1 < fVar2) {
            bVar9 = 0xff;
          }
          if (bVar9 == 0) {
            uVar7 = *(uint *)(param_1 + 3);
            uVar8 = (ulong)uVar7;
            bVar9 = 0xff;
            if ((int)param_2[3] <= (int)uVar7) {
              bVar9 = (int)param_2[3] < (int)uVar7;
            }
            if (bVar9 == 0) {
              uVar7 = *(uint *)((long)param_1 + 0x1c);
              uVar8 = (ulong)uVar7;
              if (uVar7 == *(uint *)((long)param_2 + 0x1c)) {
                fVar1 = *(float *)(param_1 + 4);
                fVar2 = *(float *)(param_2 + 4);
                uVar8 = (ulong)(uVar7 & 0xffffff00);
                bVar9 = (fVar1 != fVar2) * '\x02';
                if (fVar2 < fVar1) {
                  bVar9 = 1;
                }
                if (fVar1 < fVar2) {
                  bVar9 = 0xff;
                }
                if (bVar9 == 0) {
                  fVar1 = *(float *)((long)param_1 + 0x24);
                  fVar2 = *(float *)((long)param_2 + 0x24);
                  bVar5 = (fVar1 != fVar2) * '\x02';
                  uVar8 = 0;
                  uVar7 = (uint)bVar5;
                  bVar9 = 1;
                  if (fVar1 <= fVar2) {
                    bVar9 = bVar5;
                  }
                  if (fVar1 < fVar2) {
                    bVar9 = 0xff;
                  }
                  if ((bVar9 != 0xff) &&
                     ((bVar9 != 0 ||
                      (bVar9 = 0xff,
                      *(float *)(param_2 + 5) < *(float *)(param_1 + 5) ||
                      *(float *)(param_2 + 5) == *(float *)(param_1 + 5))))) {
                    if (fVar1 < fVar2) {
                      uVar7 = 1;
                    }
                    uVar8 = (ulong)uVar7;
                    if (fVar2 < fVar1) {
                      uVar8 = 0xff;
                    }
                    if ((char)uVar8 == '\0') {
                      fVar1 = *(float *)(param_2 + 5);
                      fVar2 = *(float *)(param_1 + 5);
                      uVar7 = (uint)(byte)((fVar1 != fVar2) * '\x02');
                      if (fVar2 < fVar1) {
                        uVar7 = 1;
                      }
                      uVar8 = (ulong)uVar7;
                      if (fVar1 < fVar2) {
                        uVar8 = 0xff;
                      }
                    }
                    bVar9 = (char)uVar8 == -1;
                  }
                }
              }
              else {
                bVar9 = ((int)*(uint *)((long)param_2 + 0x1c) <= (int)uVar7) * '\x02' - 1;
              }
            }
          }
        }
      }
      goto LAB_00327704;
    }
  }
  bVar9 = 0xff;
LAB_00327704:
  return CONCAT71((int7)(uVar8 >> 8),bVar9 == 0xff);
}


