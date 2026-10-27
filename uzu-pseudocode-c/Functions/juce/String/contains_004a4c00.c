// Function : contains
// Namespace: juce:String
// Entry    : 004a4c00
// Prototype: undefined8 contains(String * this, byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 004a4c00 - 004a4d7e


/* juce::String::contains(juce::StringRef) const */

undefined8 __thiscall
juce::String::contains
          (String *this,byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  undefined4 extraout_var;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  pbVar3 = (byte *)CONCAT71((int7)((ulong)in_RAX >> 8),*param_1);
  if (*param_1 != 0) {
    iVar8 = 0;
    pbVar6 = param_1;
    do {
      pbVar5 = pbVar6 + 1;
      if ((char)pbVar3 < '\0') {
        do {
          bVar1 = pbVar6[1];
          pbVar5 = pbVar6 + 1;
          pbVar6 = pbVar5;
        } while ((bVar1 & 0xc0) == 0x80);
      }
      else {
        if ((char)pbVar3 == '\0') goto LAB_004a4c54;
        bVar1 = *pbVar5;
      }
      pbVar3 = (byte *)(ulong)bVar1;
      iVar8 = iVar8 + 1;
      pbVar6 = pbVar5;
    } while( true );
  }
  iVar9 = 0;
  goto LAB_004a4d6f;
LAB_004a4c54:
  iVar9 = 0;
  pbVar5 = *(byte **)this;
  while( true ) {
    uVar2 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar5,param_1,iVar8,pbVar6,param_4,(uint)param_5);
    pbVar3 = (byte *)CONCAT44(extraout_var,uVar2);
    if (uVar2 == 0) break;
    pbVar3 = pbVar5 + 1;
    bVar1 = *pbVar5;
    pbVar6 = (byte *)(ulong)bVar1;
    if (-1 < (char)bVar1) goto LAB_004a4d50;
    if ((bVar1 & 0x40) == 0) {
      pbVar6 = (byte *)(ulong)(bVar1 & 0x7f);
      if ((bVar1 & 0x7f) == 0) goto LAB_004a4d66;
    }
    else {
      if ((bVar1 & 0x20) == 0) {
        uVar2 = 0x3f;
        lVar10 = 0;
        param_5 = 0;
        param_4 = 0;
      }
      else {
        param_5 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        if ((bVar1 & 0x10) == 0) {
          uVar2 = 0x1f;
          lVar10 = 1;
          param_4 = 0;
        }
        else {
          uVar2 = 0xf;
          lVar10 = 2;
          param_4 = CONCAT71((int7)((ulong)param_4 >> 8),1);
        }
      }
      uVar2 = bVar1 & uVar2;
      pbVar6 = (byte *)(ulong)uVar2;
      if ((pbVar5[1] & 0xc0) == 0x80) {
        pbVar4 = pbVar5 + lVar10 + 2;
        uVar2 = pbVar5[1] & 0x3f | uVar2 << 6;
        pbVar6 = (byte *)(ulong)uVar2;
        pbVar3 = pbVar4;
        if ((char)param_5 == '\0') goto LAB_004a4d50;
        pbVar3 = pbVar5 + 2;
        if ((*pbVar3 & 0xffffffc0) != 0x80) goto LAB_004a4d50;
        uVar2 = *pbVar3 & 0x3f | uVar2 << 6;
        pbVar6 = (byte *)(ulong)uVar2;
        pbVar3 = pbVar4;
        if ((char)param_4 == '\0') goto LAB_004a4d50;
        uVar7 = (uint)pbVar5[3];
        pbVar3 = pbVar5 + 3;
        if ((uVar7 & 0xffffffc0) == 0x80) {
          uVar2 = uVar2 << 6 | uVar7 & 0x3f;
          pbVar6 = (byte *)(ulong)uVar2;
          pbVar3 = pbVar4;
        }
      }
      else {
LAB_004a4d50:
        uVar2 = (uint)pbVar6;
      }
      if (uVar2 == 0) {
LAB_004a4d66:
        iVar9 = -1;
        break;
      }
    }
    iVar9 = iVar9 + 1;
    pbVar5 = pbVar3;
  }
LAB_004a4d6f:
  return CONCAT71((int7)((ulong)pbVar3 >> 8),-1 < iVar9);
}


