// Function : getPathUpToLastSlash
// Namespace: juce:File
// Entry    : 00499290
// Prototype: undefined getPathUpToLastSlash(undefined8 * param_1, undefined8 * param_2)
// Body     : 00499290 - 0049947c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::File::getPathUpToLastSlash() const */

void __cdecl juce::File::getPathUpToLastSlash(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  size_t __n;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  
  pbVar15 = (byte *)*param_2;
  bVar12 = *pbVar15;
  if (bVar12 != 0) {
    iVar3 = -1;
    iVar7 = 0;
    pbVar6 = pbVar15;
    bVar5 = bVar12;
    do {
      pbVar10 = pbVar6 + 1;
      uVar8 = (uint)bVar5;
      if ((char)bVar5 < '\0') {
        if ((bVar5 & 0x40) == 0) {
          uVar8 = uVar8 & 0x7f;
          goto LAB_004992bf;
        }
        if ((bVar5 & 0x20) == 0) {
          uVar11 = 0x3f;
          lVar14 = 0;
          bVar1 = false;
          bVar2 = false;
        }
        else {
          bVar1 = true;
          if ((bVar5 & 0x10) == 0) {
            uVar11 = 0x1f;
            lVar14 = 1;
            bVar2 = false;
          }
          else {
            uVar11 = 0xf;
            lVar14 = 2;
            bVar2 = true;
          }
        }
        uVar8 = uVar11 & uVar8;
        bVar5 = pbVar6[1];
        if ((bVar5 & 0xffffffc0) == 0x80) {
          pbVar13 = pbVar6 + lVar14 + 2;
          uVar8 = bVar5 & 0x3f | uVar8 << 6;
          pbVar10 = pbVar13;
          if (!bVar1) goto LAB_004992bf;
          pbVar10 = pbVar6 + 2;
          bVar5 = *pbVar10;
          if ((bVar5 & 0xc0) == 0x80) {
            uVar8 = bVar5 & 0x3f | uVar8 << 6;
            pbVar10 = pbVar13;
            if (bVar2) {
              pbVar10 = pbVar6 + 3;
              bVar5 = *pbVar10;
              if ((bVar5 & 0xffffffc0) != 0x80) goto LAB_004992c3;
              uVar8 = uVar8 << 6 | bVar5 & 0x3f;
              pbVar10 = pbVar13;
            }
            goto LAB_004992bf;
          }
          goto LAB_004992c3;
        }
      }
      else {
LAB_004992bf:
        bVar5 = *pbVar10;
LAB_004992c3:
      }
      pbVar6 = pbVar10;
      if (uVar8 == 0x2f) {
        iVar3 = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (bVar5 != 0);
    if (iVar3 < 1) {
      if (iVar3 == 0) {
        puVar4 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(&DAT_0065be94);
        *param_1 = puVar4;
        return;
      }
    }
    else {
      pbVar6 = pbVar15;
      do {
        pbVar10 = pbVar6 + 1;
        if (((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) {
          if ((bVar12 & 0x20) == 0) {
            pbVar10 = pbVar6 + 2;
          }
          else {
            pbVar10 = pbVar6 + (4 - (ulong)((bVar12 & 0x10) == 0));
          }
        }
        pbVar6 = pbVar10;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          __n = (long)pbVar6 - (long)pbVar15;
          uVar9 = __n + 4 & 0xfffffffffffffffc;
          puVar4 = operator_new__(uVar9 + 0x17);
          LOCK();
          *puVar4 = 0;
          UNLOCK();
          *(ulong *)(puVar4 + 2) = uVar9;
          memcpy(puVar4 + 4,pbVar15,__n);
          *(undefined1 *)((long)puVar4 + __n + 0x10) = 0;
          *param_1 = puVar4 + 4;
          return;
        }
        bVar12 = *pbVar6;
      } while (bVar12 != 0);
    }
  }
  *param_1 = pbVar15;
  pbVar15 = pbVar15 + -0x10;
  if (pbVar15 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar15 = *(int *)pbVar15 + 1;
    UNLOCK();
  }
  return;
}


