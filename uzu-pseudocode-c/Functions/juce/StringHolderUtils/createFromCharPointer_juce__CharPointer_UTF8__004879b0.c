// Function : createFromCharPointer<juce::CharPointer_UTF8>
// Namespace: juce:StringHolderUtils
// Entry    : 004879b0
// Prototype: undefined4 * createFromCharPointer<juce::CharPointer_UTF8>(byte * param_1)
// Body     : 004879b0 - 00487b37


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CharPointer_UTF8
   juce::StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(juce::CharPointer_UTF8) */

undefined4 * __cdecl
juce::StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(byte *param_1)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = (undefined4 *)&DAT_0061ac58;
  if ((param_1 != (byte *)0x0) && (bVar10 = *param_1, bVar10 != 0)) {
    lVar12 = 0;
    pbVar5 = param_1;
    while( true ) {
      pbVar1 = pbVar5 + 1;
      uVar7 = (uint)bVar10;
      if ((char)bVar10 < '\0') {
        if ((bVar10 & 0x40) == 0) {
          uVar7 = uVar7 & 0x7f;
        }
        else {
          if ((bVar10 & 0x20) == 0) {
            uVar11 = 0x3f;
            lVar9 = 0;
            bVar2 = false;
            bVar3 = false;
          }
          else {
            bVar2 = true;
            if ((bVar10 & 0x10) == 0) {
              uVar11 = 0x1f;
              lVar9 = 1;
              bVar3 = false;
            }
            else {
              uVar11 = 0xf;
              lVar9 = 2;
              bVar3 = true;
            }
          }
          uVar7 = uVar7 & uVar11;
          if ((pbVar5[1] & 0xc0) == 0x80) {
            pbVar8 = pbVar5 + lVar9 + 2;
            uVar7 = pbVar5[1] & 0x3f | uVar7 << 6;
            pbVar1 = pbVar8;
            if (bVar2) {
              uVar11 = (uint)pbVar5[2];
              pbVar1 = pbVar5 + 2;
              if (((uVar11 & 0xffffffc0) == 0x80) &&
                 (uVar7 = uVar11 & 0x3f | uVar7 << 6, pbVar1 = pbVar8, bVar3)) {
                uVar11 = (uint)pbVar5[3];
                pbVar1 = pbVar5 + 3;
                if ((uVar11 & 0xffffffc0) == 0x80) {
                  uVar7 = uVar7 << 6 | uVar11 & 0x3f;
                  pbVar1 = pbVar8;
                }
              }
            }
          }
        }
      }
      pbVar5 = pbVar1;
      if (uVar7 == 0) break;
      lVar9 = 1;
      if ((0x7f < uVar7) && (lVar9 = 2, 0x7ff < uVar7)) {
        lVar9 = 4 - (ulong)(uVar7 < 0x10000);
      }
      lVar12 = lVar12 + lVar9;
      bVar10 = *pbVar5;
    }
    uVar13 = lVar12 + 4U & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar13 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar13;
    puVar4 = puVar6 + 4;
    bVar10 = *param_1;
    *(byte *)(puVar6 + 4) = bVar10;
    if (bVar10 != 0) {
      lVar12 = 0;
      do {
        bVar10 = param_1[lVar12 + 1];
        *(byte *)((long)puVar6 + lVar12 + 0x11) = bVar10;
        lVar12 = lVar12 + 1;
      } while (bVar10 != 0);
    }
  }
  return puVar4;
}


