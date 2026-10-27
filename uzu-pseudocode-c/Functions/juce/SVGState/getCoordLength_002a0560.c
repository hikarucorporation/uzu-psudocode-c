// Function : getCoordLength
// Namespace: juce:SVGState
// Entry    : 002a0560
// Prototype: ulong getCoordLength(float param_1, undefined8 param_2_00, undefined8 param_3, String * param_4)
// Body     : 002a0560 - 002a069c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::SVGState::getCoordLength(juce::String const&, float) const */

ulong __cdecl
juce::SVGState::getCoordLength
          (float param_1,undefined8 param_2_00,undefined8 param_3,String *param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  double dVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  long local_20;
  
  uVar10 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = *(long *)param_4;
  dVar7 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_20);
  fVar9 = (float)dVar7;
  pcVar5 = *(char **)param_4;
  iVar6 = 0;
  do {
    cVar2 = *pcVar5;
    if (cVar2 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar5 + 1);
        pcVar5 = pcVar5 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar5 = pcVar5 + 1;
      if (cVar2 == '\0') {
        uVar8 = 0;
        if ((float)(_DAT_005d91c0 & (uint)fVar9) < DAT_005d94c8 && !NAN(fVar9)) {
          uVar8 = CONCAT44(uVar10,fVar9);
        }
        if (2 < iVar6) {
          fVar9 = (float)uVar8;
          uVar3 = juce::String::operator[](param_4,iVar6 + -2);
          uVar4 = juce::String::operator[](param_4,iVar6 + -1);
          if ((uVar3 == 0x69) && (uVar4 == 0x6e)) {
            uVar8 = (ulong)(uint)(fVar9 * _DAT_0065261c);
          }
          else if ((uVar3 == 0x6d) && (uVar4 == 0x6d)) {
            uVar8 = (ulong)(uint)(fVar9 * _DAT_005de510);
          }
          else if ((uVar3 == 99) && (uVar4 == 0x6d)) {
            uVar8 = (ulong)(uint)(fVar9 * _DAT_005de50c);
          }
          else if ((uVar3 == 0x70) && (uVar4 == 99)) {
            uVar8 = (ulong)(uint)(fVar9 * DAT_005d906c);
          }
          else {
            uVar8 = uVar8 & 0xffffffff;
            if (uVar4 == 0x25) {
              uVar8 = (ulong)(uint)(fVar9 * param_1 * DAT_00652618);
            }
          }
        }
        return uVar8;
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


