// Function : containsIgnoreCase
// Namespace: juce:String
// Entry    : 004a7be0
// Prototype: undefined8 containsIgnoreCase(String * this, byte * param_1)
// Body     : 004a7be0 - 004a7d5e


/* juce::String::containsIgnoreCase(juce::StringRef) const */

undefined8 __thiscall juce::String::containsIgnoreCase(String *this,byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined4 extraout_var;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  
  pbVar7 = (byte *)CONCAT71((int7)((ulong)in_RAX >> 8),*param_1);
  if (*param_1 != 0) {
    iVar10 = 0;
    pbVar9 = param_1;
    do {
      pbVar13 = pbVar9 + 1;
      if ((char)pbVar7 < '\0') {
        do {
          bVar1 = pbVar9[1];
          pbVar13 = pbVar9 + 1;
          pbVar9 = pbVar13;
        } while ((bVar1 & 0xc0) == 0x80);
      }
      else {
        if ((char)pbVar7 == '\0') goto LAB_004a7c34;
        bVar1 = *pbVar13;
      }
      pbVar7 = (byte *)(ulong)bVar1;
      iVar10 = iVar10 + 1;
      pbVar9 = pbVar13;
    } while( true );
  }
  iVar11 = 0;
  goto LAB_004a7d4f;
LAB_004a7c34:
  iVar11 = 0;
  pbVar9 = *(byte **)this;
  while( true ) {
    uVar6 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar9,param_1,iVar10);
    pbVar7 = (byte *)CONCAT44(extraout_var,uVar6);
    if (uVar6 == 0) break;
    pbVar7 = pbVar9 + 1;
    bVar1 = *pbVar9;
    pbVar13 = pbVar7;
    uVar6 = (uint)bVar1;
    if (-1 < (char)bVar1) goto LAB_004a7d30;
    if ((bVar1 & 0x40) == 0) {
      if ((bVar1 & 0x7f) == 0) goto LAB_004a7d46;
      goto LAB_004a7d34;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar8 = 0x3f;
      lVar12 = 0;
      bVar4 = false;
      bVar5 = false;
    }
    else {
      bVar4 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar8 = 0x1f;
        lVar12 = 1;
        bVar5 = false;
      }
      else {
        uVar8 = 0xf;
        lVar12 = 2;
        bVar5 = true;
      }
    }
    uVar8 = bVar1 & uVar8;
    bVar1 = pbVar9[1];
    uVar6 = uVar8;
    if ((bVar1 & 0xc0) == 0x80) {
      pbVar7 = pbVar9 + lVar12 + 2;
      uVar6 = bVar1 & 0x3f | uVar8 << 6;
      pbVar13 = pbVar7;
      if (!bVar4) goto LAB_004a7d30;
      pbVar13 = pbVar9 + 2;
      bVar2 = *pbVar13;
      if ((bVar2 & 0xffffffc0) != 0x80) goto LAB_004a7d30;
      uVar6 = bVar2 & 0x3f | uVar6 << 6;
      pbVar13 = pbVar7;
      if (!bVar5) goto LAB_004a7d30;
      pbVar13 = pbVar9 + 3;
      bVar3 = *pbVar13;
      if ((bVar3 & 0xc0) == 0x80) {
        pbVar13 = pbVar7;
        if (!(((bVar2 & 0x3f) == 0 && ((bVar1 & 0x3f) == 0 && uVar8 == 0)) && (bVar3 & 0x3f) == 0))
        goto LAB_004a7d34;
        goto LAB_004a7d46;
      }
      pbVar7 = pbVar13;
      if (uVar6 == 0) goto LAB_004a7d46;
    }
    else {
LAB_004a7d30:
      pbVar7 = pbVar13;
      if (uVar6 == 0) {
LAB_004a7d46:
        iVar11 = -1;
        break;
      }
    }
LAB_004a7d34:
    iVar11 = iVar11 + 1;
    pbVar9 = pbVar13;
  }
LAB_004a7d4f:
  return CONCAT71((int7)((ulong)pbVar7 >> 8),-1 < iVar11);
}


