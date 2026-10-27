// Function : createFromFixedLength
// Namespace: juce:StringHolderUtils
// Entry    : 0048a3e0
// Prototype: undefined createFromFixedLength(byte * param_1, long param_2)
// Body     : 0048a3e0 - 0048a5fa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::StringHolderUtils::createFromFixedLength(char const*, unsigned long) */

void __cdecl juce::StringHolderUtils::createFromFixedLength(byte *param_1,long param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  byte bVar5;
  sbyte sVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar13 = param_2 + 4U & 0xfffffffffffffffc;
  puVar4 = operator_new__(uVar13 + 0x17);
  LOCK();
  *puVar4 = 0;
  UNLOCK();
  *(ulong *)(puVar4 + 2) = uVar13;
  pbVar10 = (byte *)(puVar4 + 4);
  if (1 < (int)param_2 + 1) {
    iVar11 = (int)param_2 + 2;
    do {
      pbVar1 = param_1 + 1;
      bVar5 = *param_1;
      uVar12 = (uint)bVar5;
      if ((char)bVar5 < '\0') {
        if ((bVar5 & 0x40) == 0) {
          uVar12 = bVar5 & 0x7f;
        }
        else {
          if ((bVar5 & 0x20) == 0) {
            uVar12 = 0x3f;
            lVar8 = 0;
            bVar2 = false;
            bVar3 = false;
          }
          else {
            bVar2 = true;
            if ((bVar5 & 0x10) == 0) {
              uVar12 = 0x1f;
              lVar8 = 1;
              bVar3 = false;
            }
            else {
              uVar12 = 0xf;
              lVar8 = 2;
              bVar3 = true;
            }
          }
          uVar12 = bVar5 & uVar12;
          if ((param_1[1] & 0xc0) == 0x80) {
            pbVar7 = param_1 + lVar8 + 2;
            uVar12 = param_1[1] & 0x3f | uVar12 << 6;
            pbVar1 = pbVar7;
            if (bVar2) {
              bVar5 = param_1[2];
              pbVar1 = param_1 + 2;
              if (((bVar5 & 0xc0) == 0x80) &&
                 (uVar12 = bVar5 & 0x3f | uVar12 << 6, pbVar1 = pbVar7, bVar3)) {
                uVar9 = (uint)param_1[3];
                pbVar1 = param_1 + 3;
                if ((uVar9 & 0xffffffc0) == 0x80) {
                  uVar12 = uVar12 << 6 | uVar9 & 0x3f;
                  pbVar1 = pbVar7;
                }
              }
            }
          }
        }
      }
      param_1 = pbVar1;
      if (uVar12 == 0) break;
      if (uVar12 < 0x80) {
        *pbVar10 = (byte)uVar12;
        pbVar10 = pbVar10 + 1;
      }
      else {
        uVar9 = 0xffff < uVar12 | 2;
        if (uVar12 < 0x800) {
          uVar9 = 1;
        }
        bVar5 = (byte)uVar9;
        sVar6 = bVar5 * '\x06';
        *pbVar10 = (byte)(uVar12 >> sVar6) | (byte)(0xff << (bVar5 ^ 7));
        pbVar10[1] = (byte)(uVar12 >> ((bVar5 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
        if (uVar12 < 0x800) {
          pbVar10 = pbVar10 + 2;
        }
        else {
          pbVar10[2] = (byte)(uVar12 >> (sVar6 - 0xcU & 0x1f)) & 0x3f | 0x80;
          if (uVar9 - 1 < 2) {
            pbVar10 = pbVar10 + 3;
          }
          else {
            pbVar10[3] = (byte)(uVar12 >> (sVar6 - 0x12U & 0x1f)) & 0x3f | 0x80;
            pbVar10 = pbVar10 + 4;
          }
        }
      }
      iVar11 = iVar11 + -1;
    } while (2 < iVar11);
  }
  *pbVar10 = 0;
  return;
}


