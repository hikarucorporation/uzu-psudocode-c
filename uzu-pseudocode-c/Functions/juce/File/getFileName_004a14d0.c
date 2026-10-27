// Function : getFileName
// Namespace: juce:File
// Entry    : 004a14d0
// Prototype: undefined8 * getFileName(undefined8 * param_1, undefined8 * param_2)
// Body     : 004a14d0 - 004a167a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::File::getFileName() const */

undefined8 * __cdecl juce::File::getFileName(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  
  pbVar11 = (byte *)*param_2;
  bVar12 = *pbVar11;
  if (bVar12 != 0) {
    iVar3 = -1;
    iVar8 = 0;
    pbVar10 = pbVar11;
    bVar6 = bVar12;
    do {
      pbVar9 = pbVar10 + 1;
      uVar5 = (uint)bVar6;
      if ((char)bVar6 < '\0') {
        if ((bVar6 & 0x40) == 0) {
          uVar5 = uVar5 & 0x7f;
          goto LAB_004a14fc;
        }
        if ((bVar6 & 0x20) == 0) {
          uVar7 = 0x3f;
          lVar14 = 0;
          bVar1 = false;
          bVar2 = false;
        }
        else {
          bVar1 = true;
          if ((bVar6 & 0x10) == 0) {
            uVar7 = 0x1f;
            lVar14 = 1;
            bVar2 = false;
          }
          else {
            uVar7 = 0xf;
            lVar14 = 2;
            bVar2 = true;
          }
        }
        uVar5 = uVar7 & uVar5;
        bVar6 = pbVar10[1];
        if ((bVar6 & 0xffffffc0) == 0x80) {
          pbVar13 = pbVar10 + lVar14 + 2;
          uVar5 = bVar6 & 0x3f | uVar5 << 6;
          pbVar9 = pbVar13;
          if (!bVar1) goto LAB_004a14fc;
          pbVar9 = pbVar10 + 2;
          bVar6 = *pbVar9;
          if ((bVar6 & 0xffffffc0) == 0x80) {
            uVar5 = bVar6 & 0x3f | uVar5 << 6;
            pbVar9 = pbVar13;
            if (bVar2) {
              pbVar9 = pbVar10 + 3;
              bVar6 = *pbVar9;
              if ((bVar6 & 0xc0) != 0x80) goto LAB_004a1500;
              uVar5 = uVar5 << 6 | bVar6 & 0x3f;
              pbVar9 = pbVar13;
            }
            goto LAB_004a14fc;
          }
          goto LAB_004a1500;
        }
      }
      else {
LAB_004a14fc:
        bVar6 = *pbVar9;
LAB_004a1500:
      }
      pbVar10 = pbVar9;
      if (uVar5 == 0x2f) {
        iVar3 = iVar8;
      }
      iVar8 = iVar8 + 1;
    } while (bVar6 != 0);
    if (-1 < iVar3) {
      iVar3 = iVar3 + 2;
      while( true ) {
        pbVar10 = pbVar11 + 1;
        if (((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) {
          if ((bVar12 & 0x20) == 0) {
            pbVar10 = pbVar11 + 2;
          }
          else {
            pbVar10 = pbVar11 + (4 - (ulong)((bVar12 & 0x10) == 0));
          }
        }
        iVar3 = iVar3 + -1;
        if (iVar3 < 2) break;
        bVar12 = *pbVar10;
        pbVar11 = pbVar10;
        if (bVar12 == 0) {
          puVar4 = (undefined4 *)&DAT_0061ac58;
LAB_004a166c:
          *param_1 = puVar4;
          return param_1;
        }
      }
      puVar4 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar10);
      goto LAB_004a166c;
    }
  }
  *param_1 = pbVar11;
  pbVar11 = pbVar11 + -0x10;
  if (pbVar11 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar11 = *(int *)pbVar11 + 1;
    UNLOCK();
  }
  return param_1;
}


