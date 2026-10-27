// Function : throwError
// Namespace: juce:JSONParser
// Entry    : 004b0370
// Prototype: undefined throwError(JSONParser * this, undefined8 * param_1, byte * param_2)
// Body     : 004b0370 - 004b04f7


/* juce::JSONParser::throwError(juce::String, juce::CharPointer_UTF8) */

void __thiscall juce::JSONParser::throwError(JSONParser *this,undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar2 = *param_1;
  *param_1 = &DAT_0061ac58;
  if (*(byte **)this < param_2) {
    uVar9 = 0x100000001;
    pbVar6 = *(byte **)this;
    do {
      bVar1 = *pbVar6;
      uVar8 = (uint)bVar1;
      if (uVar8 == 0) break;
      uVar4 = uVar8 & 0x40;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          uVar8 = uVar8 & 0x7f;
          uVar4 = 0;
        }
        else {
          uVar4 = uVar8 & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar4 = 0x3f;
          }
          uVar8 = uVar4 & uVar8;
          uVar4 = 1;
          if (((((pbVar6[1] & 0xc0) == 0x80) &&
               (uVar8 = pbVar6[1] & 0x3f | uVar8 << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar6[2] & 0xc0) == 0x80)) &&
             ((uVar8 = pbVar6[2] & 0x3f | uVar8 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar6[3] & 0xc0) == 0x80)))) {
            uVar8 = uVar8 << 6 | pbVar6[3] & 0x3f;
          }
        }
      }
      iVar5 = (int)uVar9;
      uVar9 = uVar9 + 0x100000000;
      if (uVar8 == 10) {
        uVar9 = (ulong)(iVar5 + 1) | 0x100000000;
      }
      pbVar7 = pbVar6 + 1;
      if (((char)bVar1 < '\0') && (uVar4 != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar7 = pbVar6 + 2;
        }
        else {
          pbVar7 = pbVar6 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar6 = pbVar7;
    } while (pbVar7 < param_2);
  }
  else {
    uVar9 = 0x100000001;
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(0x10);
  *puVar3 = uVar2;
  puVar3[1] = uVar9;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&ErrorException::typeinfo,ErrorException::~ErrorException);
}


