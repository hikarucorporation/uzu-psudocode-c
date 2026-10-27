// Function : toUTF16
// Namespace: juce:String
// Entry    : 004a8a40
// Prototype: ushort * toUTF16(String * this)
// Body     : 004a8a40 - 004a8dd1


/* juce::String::toUTF16() const */

ushort * __thiscall juce::String::toUTF16(String *this)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  size_t sVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  
  pbVar11 = *(byte **)this;
  bVar3 = *pbVar11;
  if (bVar3 == 0) {
    return (ushort *)&emptyChar;
  }
  lVar13 = 0;
  pbVar1 = pbVar11;
  while( true ) {
    uVar17 = (uint)bVar3;
    pbVar12 = pbVar1 + 1;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar17 = uVar17 & 0x7f;
      }
      else {
        if ((bVar3 & 0x20) == 0) {
          uVar15 = 0x3f;
          lVar10 = 0;
          bVar4 = false;
          bVar5 = false;
        }
        else {
          bVar4 = true;
          if ((bVar3 & 0x10) == 0) {
            uVar15 = 0x1f;
            lVar10 = 1;
            bVar5 = false;
          }
          else {
            uVar15 = 0xf;
            lVar10 = 2;
            bVar5 = true;
          }
        }
        uVar17 = uVar17 & uVar15;
        if ((pbVar1[1] & 0xc0) == 0x80) {
          pbVar9 = pbVar1 + lVar10 + 2;
          uVar17 = pbVar1[1] & 0x3f | uVar17 << 6;
          pbVar12 = pbVar9;
          if (bVar4) {
            pbVar12 = pbVar1 + 2;
            if ((*pbVar12 & 0xffffffc0) == 0x80) {
              uVar17 = *pbVar12 & 0x3f | uVar17 << 6;
              pbVar12 = pbVar9;
              if (bVar5) {
                uVar15 = (uint)pbVar1[3];
                pbVar12 = pbVar1 + 3;
                if ((uVar15 & 0xffffffc0) == 0x80) {
                  uVar17 = uVar17 << 6 | uVar15 & 0x3f;
                  pbVar12 = pbVar9;
                }
              }
            }
          }
        }
      }
    }
    if (uVar17 == 0) break;
    lVar13 = lVar13 + 2 + (ulong)(0xffff < uVar17) * 2;
    bVar3 = *pbVar12;
    pbVar1 = pbVar12;
  }
  sVar6 = strlen((char *)pbVar11);
  uVar17 = (int)sVar6 + 4U & 0xfffffffc;
  lVar13 = lVar13 + (ulong)uVar17;
  pbVar1 = pbVar11 + -0x10;
  if (pbVar1 == (byte *)&emptyString) {
    uVar18 = lVar13 + 6U & 0xfffffffffffffffc;
    puVar7 = operator_new__(uVar18 + 0x17);
    LOCK();
    *puVar7 = 0;
    UNLOCK();
    *(ulong *)(puVar7 + 2) = uVar18;
    *(undefined1 *)(puVar7 + 4) = 0;
    pbVar11 = (byte *)(puVar7 + 4);
  }
  else {
    uVar14 = lVar13 + 2U | 1;
    uVar18 = *(ulong *)(pbVar11 + -8);
    if (uVar14 <= uVar18) {
      if (*(int *)pbVar1 < 1) goto LAB_004a8c6b;
      uVar18 = *(ulong *)(pbVar11 + -8);
    }
    if (uVar18 < uVar14) {
      uVar18 = uVar14;
    }
    uVar18 = uVar18 + 3 & 0xfffffffffffffffc;
    puVar7 = operator_new__(uVar18 + 0x17);
    LOCK();
    *puVar7 = 0;
    UNLOCK();
    *(ulong *)(puVar7 + 2) = uVar18;
    pbVar12 = (byte *)(puVar7 + 4);
    memcpy(pbVar12,pbVar11,*(size_t *)(pbVar11 + -8));
    LOCK();
    pbVar11 = pbVar11 + -0x10;
    iVar2 = *(int *)pbVar11;
    *(int *)pbVar11 = *(int *)pbVar11 + -1;
    UNLOCK();
    pbVar11 = pbVar12;
    if (iVar2 == 0) {
      operator_delete__(pbVar1);
    }
  }
LAB_004a8c6b:
  *(byte **)this = pbVar11;
  bVar3 = *pbVar11;
  puVar8 = (ushort *)(pbVar11 + (int)uVar17);
  pbVar1 = pbVar11;
  while( true ) {
    uVar15 = (uint)bVar3;
    pbVar12 = pbVar1 + 1;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar15 = uVar15 & 0x7f;
      }
      else {
        if ((bVar3 & 0x20) == 0) {
          uVar16 = 0x3f;
          lVar13 = 0;
          bVar4 = false;
          bVar5 = false;
        }
        else {
          bVar4 = true;
          if ((bVar3 & 0x10) == 0) {
            uVar16 = 0x1f;
            lVar13 = 1;
            bVar5 = false;
          }
          else {
            uVar16 = 0xf;
            lVar13 = 2;
            bVar5 = true;
          }
        }
        uVar15 = uVar15 & uVar16;
        if ((pbVar1[1] & 0xffffffc0) == 0x80) {
          pbVar9 = pbVar1 + lVar13 + 2;
          uVar15 = pbVar1[1] & 0x3f | uVar15 << 6;
          pbVar12 = pbVar9;
          if (bVar4) {
            pbVar12 = pbVar1 + 2;
            if ((*pbVar12 & 0xffffffc0) == 0x80) {
              uVar15 = *pbVar12 & 0x3f | uVar15 << 6;
              pbVar12 = pbVar9;
              if (bVar5) {
                pbVar12 = pbVar1 + 3;
                if ((*pbVar12 & 0xffffffc0) == 0x80) {
                  uVar15 = uVar15 << 6 | *pbVar12 & 0x3f;
                  pbVar12 = pbVar9;
                }
              }
            }
          }
        }
      }
    }
    if (uVar15 == 0) break;
    if (uVar15 < 0x10000) {
      *puVar8 = (ushort)uVar15;
      puVar8 = puVar8 + 1;
    }
    else {
      *puVar8 = (short)(uVar15 + 0x3ff0000 >> 10) + 0xd800;
      puVar8[1] = (ushort)uVar15 & 0x3ff | 0xdc00;
      puVar8 = puVar8 + 2;
    }
    bVar3 = *pbVar12;
    pbVar1 = pbVar12;
  }
  *puVar8 = 0;
  return (ushort *)(pbVar11 + (int)uVar17);
}


