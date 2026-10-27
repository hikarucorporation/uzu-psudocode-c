// Function : size
// Namespace: juce:AudioChannelSet
// Entry    : 004d31f0
// Prototype: int size(AudioChannelSet * this)
// Body     : 004d31f0 - 004d33bd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioChannelSet::size() const */

int __thiscall juce::AudioChannelSet::size(AudioChannelSet *this)

{
  AudioChannelSet *pAVar1;
  AudioChannelSet *pAVar2;
  bool bVar3;
  AudioChannelSet *pAVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  pAVar4 = this + 8;
  if (*(AudioChannelSet **)this != (AudioChannelSet *)0x0) {
    pAVar4 = *(AudioChannelSet **)this;
  }
  uVar17 = *(uint *)(this + 0x20);
  if ((int)uVar17 < 0) {
    return 0;
  }
  uVar5 = (ulong)(uVar17 >> 5);
  iVar9 = 0;
  if (0xdf < uVar17) {
    uVar8 = (ulong)((uint)(uVar5 + 1) & 0xfffffff8);
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    lVar7 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    do {
      pAVar2 = pAVar4 + lVar7 * 4 + uVar5 * 4 + -0x1c;
      pAVar1 = pAVar4 + lVar7 * 4 + uVar5 * 4 + -0xc;
      uVar21 = *(uint *)(pAVar1 + 0xc) - (*(uint *)(pAVar1 + 0xc) >> 1 & _DAT_005ddbd0);
      uVar23 = *(uint *)(pAVar1 + 8) - (*(uint *)(pAVar1 + 8) >> 1 & _UNK_005ddbd4);
      uVar25 = *(uint *)(pAVar1 + 4) - (*(uint *)(pAVar1 + 4) >> 1 & _UNK_005ddbd8);
      uVar27 = *(uint *)pAVar1 - (*(uint *)pAVar1 >> 1 & _UNK_005ddbdc);
      uVar17 = *(uint *)(pAVar2 + 0xc) - (*(uint *)(pAVar2 + 0xc) >> 1 & _DAT_005ddbd0);
      uVar18 = *(uint *)(pAVar2 + 8) - (*(uint *)(pAVar2 + 8) >> 1 & _UNK_005ddbd4);
      uVar19 = *(uint *)(pAVar2 + 4) - (*(uint *)(pAVar2 + 4) >> 1 & _UNK_005ddbd8);
      uVar20 = *(uint *)pAVar2 - (*(uint *)pAVar2 >> 1 & _UNK_005ddbdc);
      uVar22 = (uVar21 & _DAT_005de010) + (uVar21 >> 2 & _DAT_005de010);
      uVar24 = (uVar23 & _UNK_005de014) + (uVar23 >> 2 & _UNK_005de014);
      uVar26 = (uVar25 & _UNK_005de018) + (uVar25 >> 2 & _UNK_005de018);
      uVar28 = (uVar27 & _UNK_005de01c) + (uVar27 >> 2 & _UNK_005de01c);
      uVar21 = (uVar17 & _DAT_005de010) + (uVar17 >> 2 & _DAT_005de010);
      uVar23 = (uVar18 & _UNK_005de014) + (uVar18 >> 2 & _UNK_005de014);
      uVar25 = (uVar19 & _UNK_005de018) + (uVar19 >> 2 & _UNK_005de018);
      uVar27 = (uVar20 & _UNK_005de01c) + (uVar20 >> 2 & _UNK_005de01c);
      uVar17 = (uVar22 >> 4) + uVar22 & _DAT_005d9980;
      uVar18 = (uVar24 >> 4) + uVar24 & _UNK_005d9984;
      uVar19 = (uVar26 >> 4) + uVar26 & _UNK_005d9988;
      uVar20 = (uVar28 >> 4) + uVar28 & _UNK_005d998c;
      uVar21 = (uVar21 >> 4) + uVar21 & _DAT_005d9980;
      uVar23 = (uVar23 >> 4) + uVar23 & _UNK_005d9984;
      uVar25 = (uVar25 >> 4) + uVar25 & _UNK_005d9988;
      uVar27 = (uVar27 >> 4) + uVar27 & _UNK_005d998c;
      uVar17 = (uVar17 >> 8) + uVar17;
      uVar18 = (uVar18 >> 8) + uVar18;
      uVar19 = (uVar19 >> 8) + uVar19;
      uVar20 = (uVar20 >> 8) + uVar20;
      uVar21 = (uVar21 >> 8) + uVar21;
      uVar23 = (uVar23 >> 8) + uVar23;
      uVar25 = (uVar25 >> 8) + uVar25;
      uVar27 = (uVar27 >> 8) + uVar27;
      iVar9 = iVar9 + ((uVar17 >> 0x10) + uVar17 & _DAT_005de340);
      iVar10 = iVar10 + ((uVar18 >> 0x10) + uVar18 & _UNK_005de344);
      iVar11 = iVar11 + ((uVar19 >> 0x10) + uVar19 & _UNK_005de348);
      iVar12 = iVar12 + ((uVar20 >> 0x10) + uVar20 & _UNK_005de34c);
      iVar13 = iVar13 + ((uVar21 >> 0x10) + uVar21 & _DAT_005de340);
      iVar14 = iVar14 + ((uVar23 >> 0x10) + uVar23 & _UNK_005de344);
      iVar15 = iVar15 + ((uVar25 >> 0x10) + uVar25 & _UNK_005de348);
      iVar16 = iVar16 + ((uVar27 >> 0x10) + uVar27 & _UNK_005de34c);
      lVar7 = lVar7 + -8;
    } while (-lVar7 != uVar8);
    iVar9 = iVar16 + iVar12 + iVar14 + iVar10 + iVar15 + iVar11 + iVar13 + iVar9;
    if (uVar5 + 1 == uVar8) {
      return iVar9;
    }
    uVar5 = uVar5 - uVar8;
  }
  lVar7 = uVar5 + 1;
  do {
    uVar17 = *(uint *)(pAVar4 + lVar7 * 4 + -4) -
             (*(uint *)(pAVar4 + lVar7 * 4 + -4) >> 1 & 0x55555555);
    uVar17 = (uVar17 & 0x33333333) + (uVar17 >> 2 & 0x33333333);
    uVar17 = (uVar17 >> 4) + uVar17 & 0xf0f0f0f;
    uVar17 = (uVar17 >> 8) + uVar17;
    iVar9 = iVar9 + ((uVar17 >> 0x10) + uVar17 & 0xff);
    lVar6 = lVar7 + -1;
    bVar3 = 0 < lVar7;
    lVar7 = lVar6;
  } while (lVar6 != 0 && bVar3);
  return iVar9;
}


