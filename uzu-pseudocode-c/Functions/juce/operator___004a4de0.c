// Function : operator<<
// Namespace: juce
// Entry    : 004a4de0
// Prototype: long * operator<<(long * param_1, byte * param_2)
// Body     : 004a4de0 - 004a4f34


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::OutputStream&, juce::String const&) */

long * __cdecl juce::operator<<(long *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  
  lVar7 = 0;
  pbVar4 = param_2;
LAB_004a4df3:
  pbVar5 = pbVar4 + 1;
  bVar1 = *pbVar4;
  uVar6 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar6 = uVar6 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_004a4f21;
      goto LAB_004a4ee4;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar8 = 0x3f;
      lVar9 = 0;
      bVar2 = false;
      bVar3 = false;
    }
    else {
      bVar2 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar8 = 0x1f;
        lVar9 = 1;
        bVar3 = false;
      }
      else {
        uVar8 = 0xf;
        lVar9 = 2;
        bVar3 = true;
      }
    }
    uVar6 = uVar6 & uVar8;
    if ((pbVar4[1] & 0xc0) == 0x80) {
      pbVar10 = pbVar4 + lVar9 + 2;
      uVar6 = pbVar4[1] & 0x3f | uVar6 << 6;
      pbVar5 = pbVar10;
      if (!bVar2) goto joined_r0x004a4ee2;
      pbVar5 = pbVar4 + 2;
      if ((*pbVar5 & 0xc0) != 0x80) {
        if (uVar6 != 0) goto LAB_004a4ee4;
LAB_004a4f21:
        (**(code **)(*param_1 + 0x28))(param_1,param_2,lVar7);
        return param_1;
      }
      uVar6 = *pbVar5 & 0x3f | uVar6 << 6;
      pbVar5 = pbVar10;
      if (bVar3) {
        uVar8 = (uint)pbVar4[3];
        pbVar5 = pbVar4 + 3;
        if ((uVar8 & 0xffffffc0) == 0x80) {
          uVar6 = uVar6 << 6 | uVar8 & 0x3f;
          pbVar5 = pbVar10;
        }
      }
    }
  }
joined_r0x004a4ee2:
  if (uVar6 == 0) goto LAB_004a4f21;
LAB_004a4ee4:
  lVar9 = 1;
  if ((0x7f < uVar6) && (lVar9 = 2, 0x7ff < uVar6)) {
    lVar9 = 4 - (ulong)(uVar6 < 0x10000);
  }
  lVar7 = lVar7 + lVar9;
  pbVar4 = pbVar5;
  goto LAB_004a4df3;
}


