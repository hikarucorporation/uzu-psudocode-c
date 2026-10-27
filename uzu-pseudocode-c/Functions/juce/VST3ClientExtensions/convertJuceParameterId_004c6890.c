// Function : convertJuceParameterId
// Namespace: juce:VST3ClientExtensions
// Entry    : 004c6890
// Prototype: uint convertJuceParameterId(undefined8 * param_1, char param_2)
// Body     : 004c6890 - 004c69a9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::VST3ClientExtensions::convertJuceParameterId(juce::String const&, bool) */

uint __cdecl juce::VST3ClientExtensions::convertJuceParameterId(undefined8 *param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  
  pbVar7 = (byte *)*param_1;
  bVar3 = *pbVar7;
  uVar4 = 0;
  do {
    if (bVar3 == 0) {
      uVar10 = uVar4 & 0x7fffffff;
      if (param_2 == '\0') {
        uVar10 = uVar4;
      }
      return uVar10;
    }
    pbVar8 = pbVar7 + 1;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
        goto LAB_004c689f;
      }
      if ((bVar3 & 0x20) == 0) {
        uVar5 = 0x3f;
        lVar6 = 0;
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        if ((bVar3 & 0x10) == 0) {
          uVar5 = 0x1f;
          lVar6 = 1;
          bVar2 = false;
        }
        else {
          uVar5 = 0xf;
          lVar6 = 2;
          bVar2 = true;
        }
      }
      uVar10 = uVar5 & uVar10;
      bVar3 = pbVar7[1];
      if ((bVar3 & 0xc0) == 0x80) {
        pbVar9 = pbVar7 + lVar6 + 2;
        uVar10 = bVar3 & 0x3f | uVar10 << 6;
        pbVar8 = pbVar9;
        if (!bVar1) goto LAB_004c689f;
        pbVar8 = pbVar7 + 2;
        bVar3 = *pbVar8;
        if ((bVar3 & 0xc0) == 0x80) {
          uVar10 = bVar3 & 0x3f | uVar10 << 6;
          pbVar8 = pbVar9;
          if (bVar2) {
            pbVar8 = pbVar7 + 3;
            bVar3 = *pbVar8;
            if ((bVar3 & 0xc0) != 0x80) goto LAB_004c68a3;
            uVar10 = uVar10 << 6 | bVar3 & 0x3f;
            pbVar8 = pbVar9;
          }
          goto LAB_004c689f;
        }
        goto LAB_004c68a3;
      }
    }
    else {
LAB_004c689f:
      bVar3 = *pbVar8;
LAB_004c68a3:
    }
    pbVar7 = pbVar8;
    uVar4 = uVar10 + uVar4 * 0x1f;
  } while( true );
}


