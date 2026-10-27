// Function : getSizeInUnits
// Namespace: juce:TextEditor:RemoveAction
// Entry    : 00248a60
// Prototype: int getSizeInUnits(RemoveAction * this)
// Body     : 00248a60 - 00248bce


/* juce::TextEditor::RemoveAction::getSizeInUnits() */

int __thiscall juce::TextEditor::RemoveAction::getSizeInUnits(RemoveAction *this)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  
  puVar11 = *(undefined8 **)(this + 0x38);
  iVar4 = 0;
  do {
    if (puVar11 == *(undefined8 **)(this + 0x40)) {
      return iVar4;
    }
    iVar9 = 0;
    pbVar5 = (byte *)*puVar11;
LAB_00248a93:
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    uVar7 = (uint)bVar1;
    if (-1 < (char)bVar1) goto joined_r0x00248aa3;
    if ((bVar1 & 0x40) == 0) {
      uVar7 = uVar7 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_00248a70;
      goto LAB_00248b88;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar8 = 0x3f;
      lVar12 = 0;
      bVar2 = false;
      bVar3 = false;
    }
    else {
      bVar2 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar8 = 0x1f;
        lVar12 = 1;
        bVar3 = false;
      }
      else {
        uVar8 = 0xf;
        lVar12 = 2;
        bVar3 = true;
      }
    }
    uVar7 = uVar7 & uVar8;
    if ((pbVar5[1] & 0xffffffc0) != 0x80) {
joined_r0x00248aa3:
      if (uVar7 == 0) goto LAB_00248a70;
LAB_00248b88:
      iVar10 = 1;
      if ((0x7f < uVar7) && (iVar10 = 2, 0x7ff < uVar7)) {
        iVar10 = 4 - (uint)(uVar7 < 0x10000);
      }
      iVar9 = iVar9 + iVar10;
      pbVar5 = pbVar6;
      goto LAB_00248a93;
    }
    pbVar13 = pbVar5 + lVar12 + 2;
    uVar7 = pbVar5[1] & 0x3f | uVar7 << 6;
    pbVar6 = pbVar13;
    if (!bVar2) goto joined_r0x00248aa3;
    pbVar6 = pbVar5 + 2;
    if ((*pbVar6 & 0xc0) == 0x80) {
      uVar7 = *pbVar6 & 0x3f | uVar7 << 6;
      pbVar6 = pbVar13;
      if (bVar3) {
        uVar8 = (uint)pbVar5[3];
        pbVar6 = pbVar5 + 3;
        if ((uVar8 & 0xffffffc0) == 0x80) {
          uVar7 = uVar7 << 6 | uVar8 & 0x3f;
          pbVar6 = pbVar13;
        }
      }
      goto joined_r0x00248aa3;
    }
    if (uVar7 != 0) goto LAB_00248b88;
LAB_00248a70:
    iVar4 = iVar4 + iVar9;
    puVar11 = puVar11 + 1;
  } while( true );
}


