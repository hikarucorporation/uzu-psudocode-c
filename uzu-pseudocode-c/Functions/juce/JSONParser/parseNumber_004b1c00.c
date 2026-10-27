// Function : parseNumber
// Namespace: juce:JSONParser
// Entry    : 004b1c00
// Prototype: undefined parseNumber(undefined8 * param_1, JSONParser * param_2, char param_3)
// Body     : 004b1c00 - 004b1eec


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONParser::parseNumber(bool) */

void __cdecl juce::JSONParser::parseNumber(undefined8 *param_1,JSONParser *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long local_38;
  
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar13 = pbVar3 + 1;
  *(byte **)(param_2 + 8) = pbVar13;
  bVar1 = *pbVar3;
  uVar7 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar7 = uVar7 & 0x7f;
    }
    else {
      uVar10 = uVar7 & 0x20;
      uVar9 = uVar7 & 0x10;
      uVar4 = 0x3f;
      if ((bVar1 & 0x20) != 0) {
        uVar4 = uVar9 ^ 0x1f;
      }
      uVar7 = uVar4 & uVar7;
      bVar2 = *pbVar13;
      if ((bVar2 & 0xffffffc0) == 0x80) {
        pbVar13 = pbVar3 + 2;
        uVar7 = bVar2 & 0x3f | uVar7 << 6;
        *(byte **)(param_2 + 8) = pbVar13;
        if (((bVar1 & 0x20) != 0) && (bVar1 = *pbVar13, (bVar1 & 0xffffffc0) == 0x80)) {
          pbVar13 = pbVar3 + 3;
          *(byte **)(param_2 + 8) = pbVar13;
          uVar7 = bVar1 & 0x3f | uVar7 << 6;
          if (((byte)((byte)(uVar9 >> 4) & (byte)(uVar10 >> 5)) != 0) &&
             (bVar1 = *pbVar13, (bVar1 & 0xffffffc0) == 0x80)) {
            pbVar13 = pbVar3 + 4;
            *(byte **)(param_2 + 8) = pbVar13;
            uVar7 = uVar7 << 6 | bVar1 & 0x3f;
          }
        }
      }
    }
  }
  uVar12 = (ulong)(int)(uVar7 - 0x30);
  while( true ) {
    pbVar8 = pbVar13 + 1;
    *(byte **)(param_2 + 8) = pbVar8;
    bVar1 = *pbVar13;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar7 = uVar7 & 0x7f;
      }
      else {
        uVar10 = uVar7 & 0x20;
        uVar4 = uVar7 & 0x10;
        uVar9 = uVar4 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar9 = 0x3f;
        }
        uVar7 = uVar9 & uVar7;
        bVar2 = *pbVar8;
        if ((bVar2 & 0xc0) == 0x80) {
          pbVar8 = pbVar13 + 2;
          uVar7 = bVar2 & 0x3f | uVar7 << 6;
          *(byte **)(param_2 + 8) = pbVar8;
          if (((bVar1 & 0x20) != 0) && (bVar1 = *pbVar8, (bVar1 & 0xc0) == 0x80)) {
            pbVar8 = pbVar13 + 3;
            *(byte **)(param_2 + 8) = pbVar8;
            uVar7 = bVar1 & 0x3f | uVar7 << 6;
            if (((byte)((byte)(uVar4 >> 4) & (byte)(uVar10 >> 5)) != 0) &&
               (bVar1 = *pbVar8, (bVar1 & 0xffffffc0) == 0x80)) {
              pbVar8 = pbVar13 + 4;
              *(byte **)(param_2 + 8) = pbVar8;
              uVar7 = bVar1 & 0x3f | uVar7 << 6;
            }
          }
        }
      }
    }
    if (9 < uVar7 - 0x30) break;
    uVar12 = (ulong)(uVar7 - 0x30) + uVar12 * 10;
    pbVar13 = pbVar8;
  }
  if ((uVar7 - 0x2e < 0x38) && ((0x80000000800001U >> ((ulong)(uVar7 - 0x2e) & 0x3f) & 1) != 0)) {
    *(byte **)(param_2 + 8) = pbVar3;
    uVar14 = CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)(param_2 + 8));
    if (param_3 != '\0') {
      uVar14 = CONCAT44((uint)((ulong)uVar14 >> 0x20) ^ _UNK_00652d14,(uint)uVar14 ^ _DAT_00652d10);
    }
    *param_1 = &var::Instance::attributesDouble;
    param_1[1] = uVar14;
  }
  else {
    iVar5 = iswspace(uVar7);
    if (iVar5 == 0) {
      if (uVar7 < 0x5d) {
        if ((uVar7 != 0) && (uVar7 != 0x2c)) goto LAB_004b1e99;
      }
      else if ((uVar7 != 0x5d) && (uVar7 != 0x7d)) {
LAB_004b1e99:
        juce::String::String((String *)&local_38,(byte *)"Syntax error in number");
                    /* try { // try from 004b1ead to 004b1eba has its CatchHandler @ 004b1ebb */
        uVar14 = throwError(param_2,(undefined8 *)&local_38,pbVar13);
                    /* catch() { ... } // from try @ 004b1ead with catch @ 004b1ebb */
        piVar11 = (int *)(local_38 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            operator_delete__(piVar11);
          }
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar14);
      }
    }
    *(byte **)(param_2 + 8) = pbVar13;
    uVar6 = -uVar12;
    if (param_3 == '\0') {
      uVar6 = uVar12;
    }
    if ((uVar12 & 0xffffffff80000000) == 0) {
      *param_1 = &var::Instance::attributesInt;
      *(int *)(param_1 + 1) = (int)uVar6;
    }
    else {
      *param_1 = var::Instance::attributesInt64;
      param_1[1] = uVar6;
    }
  }
  return;
}


