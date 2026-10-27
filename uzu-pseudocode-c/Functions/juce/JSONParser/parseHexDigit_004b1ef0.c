// Function : parseHexDigit
// Namespace: juce:JSONParser
// Entry    : 004b1ef0
// Prototype: uint parseHexDigit(JSONParser * this)
// Body     : 004b1ef0 - 004b206c


/* juce::JSONParser::parseHexDigit() */

uint __thiscall juce::JSONParser::parseHexDigit(JSONParser *this)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  long local_10;
  
  pbVar8 = *(byte **)(this + 8);
  *(byte **)(this + 8) = pbVar8 + 1;
  bVar2 = *pbVar8;
  uVar7 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    if ((bVar2 & 0x40) == 0) {
      uVar7 = uVar7 & 0x7f;
    }
    else {
      uVar11 = uVar7 & 0x20;
      uVar10 = uVar7 & 0x10;
      uVar5 = 0x3f;
      if ((bVar2 & 0x20) != 0) {
        uVar5 = uVar10 ^ 0x1f;
      }
      uVar7 = uVar5 & uVar7;
      bVar3 = pbVar8[1];
      if ((bVar3 & 0xc0) == 0x80) {
        uVar7 = bVar3 & 0x3f | uVar7 << 6;
        *(byte **)(this + 8) = pbVar8 + 2;
        if (((bVar2 & 0x20) != 0) && (uVar5 = (uint)pbVar8[2], (uVar5 & 0xffffffc0) == 0x80)) {
          *(byte **)(this + 8) = pbVar8 + 3;
          uVar7 = uVar5 & 0x3f | uVar7 << 6;
          if (((byte)((byte)(uVar10 >> 4) & (byte)(uVar11 >> 5)) != 0) &&
             (uVar5 = (uint)pbVar8[3], (uVar5 & 0xffffffc0) == 0x80)) {
            *(byte **)(this + 8) = pbVar8 + 4;
            uVar7 = uVar5 & 0x3f | uVar7 << 6;
          }
        }
      }
    }
  }
  uVar5 = uVar7 - 0x30;
  if (9 < uVar5) {
    if (uVar7 - 0x61 < 6) {
      uVar5 = uVar7 - 0x57;
    }
    else {
      if (uVar7 - 0x47 < 0xfffffffa) {
        juce::String::String((String *)&local_10,(byte *)"Invalid hex character");
        lVar4 = *(long *)(this + 8);
        if ((*(byte *)(lVar4 + -1) & 0xc0) == 0x80) {
          if ((*(byte *)(lVar4 + -2) & 0xc0) == 0x80) {
            pbVar8 = (byte *)(lVar4 + -4);
            if ((*(byte *)(lVar4 + -3) & 0xc0) != 0x80) {
              pbVar8 = (byte *)(lVar4 + -3);
            }
          }
          else {
            pbVar8 = (byte *)(lVar4 + -2);
          }
        }
        else {
          pbVar8 = (byte *)(lVar4 + -1);
        }
                    /* try { // try from 004b202e to 004b203a has its CatchHandler @ 004b203b */
        uVar6 = throwError(this,&local_10,pbVar8);
                    /* catch() { ... } // from try @ 004b202e with catch @ 004b203b */
        piVar9 = (int *)(local_10 + -0x10);
        if (piVar9 != &emptyString) {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar9);
          }
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar6);
      }
      uVar5 = uVar7 - 0x37;
    }
  }
  return uVar5;
}


