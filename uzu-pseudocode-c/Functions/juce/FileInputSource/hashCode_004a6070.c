// Function : hashCode
// Namespace: juce:FileInputSource
// Entry    : 004a6070
// Prototype: ulong hashCode(FileInputSource * this)
// Body     : 004a6070 - 004a61d0


/* juce::FileInputSource::hashCode() const */

ulong __thiscall juce::FileInputSource::hashCode(FileInputSource *this)

{
  byte *__file;
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  stat64 sStack_a8;
  
  __file = *(byte **)(this + 8);
  bVar8 = *__file;
  if (bVar8 == 0) {
    if (this[0x10] == (FileInputSource)0x0) {
      return 0;
    }
    uVar9 = 0;
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    pbVar6 = __file;
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        if ((bVar8 & 0x40) == 0) {
          uVar10 = uVar10 & 0x7f;
          goto LAB_004a6096;
        }
        if ((bVar8 & 0x20) == 0) {
          uVar5 = 0x3f;
          lVar12 = 0;
          bVar1 = false;
          bVar2 = false;
        }
        else {
          bVar1 = true;
          if ((bVar8 & 0x10) == 0) {
            uVar5 = 0x1f;
            lVar12 = 1;
            bVar2 = false;
          }
          else {
            uVar5 = 0xf;
            lVar12 = 2;
            bVar2 = true;
          }
        }
        uVar10 = uVar5 & uVar10;
        bVar8 = pbVar6[1];
        if ((bVar8 & 0xc0) == 0x80) {
          pbVar11 = pbVar6 + lVar12 + 2;
          uVar10 = bVar8 & 0x3f | uVar10 << 6;
          pbVar7 = pbVar11;
          if (!bVar1) goto LAB_004a6096;
          pbVar7 = pbVar6 + 2;
          bVar8 = *pbVar7;
          if ((bVar8 & 0xffffffc0) == 0x80) {
            uVar10 = bVar8 & 0x3f | uVar10 << 6;
            pbVar7 = pbVar11;
            if (bVar2) {
              pbVar7 = pbVar6 + 3;
              bVar8 = *pbVar7;
              if ((bVar8 & 0xc0) != 0x80) goto LAB_004a609a;
              uVar10 = uVar10 << 6 | bVar8 & 0x3f;
              pbVar7 = pbVar11;
            }
            goto LAB_004a6096;
          }
          goto LAB_004a609a;
        }
      }
      else {
LAB_004a6096:
        bVar8 = *pbVar7;
LAB_004a609a:
      }
      pbVar6 = pbVar7;
      iVar4 = uVar10 + iVar4 * 0x1f;
    } while (bVar8 != 0);
    uVar9 = (ulong)iVar4;
    if (this[0x10] == (FileInputSource)0x0) {
      return uVar9;
    }
    iVar4 = stat64((char *)__file,&sStack_a8);
    if (iVar4 == 0) {
      uVar3 = sStack_a8.st_mtim.tv_sec * 1000;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar9 ^ uVar3;
}


