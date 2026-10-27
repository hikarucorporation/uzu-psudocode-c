// Function : trimCharactersAtEnd
// Namespace: juce:String
// Entry    : 00495b20
// Prototype: undefined trimCharactersAtEnd(undefined8 * param_1, byte * param_2, byte * param_3)
// Body     : 00495b20 - 00495e6b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::trimCharactersAtEnd(juce::StringRef) const */

void __cdecl juce::String::trimCharactersAtEnd(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  bool bVar2;
  size_t sVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  
  if ((*param_2 != 0) && (sVar3 = strlen((char *)param_2), 0 < (long)sVar3)) {
    pbVar4 = param_2 + sVar3;
    if (*param_3 == 0) {
      bVar13 = pbVar4[-1];
      pbVar17 = pbVar4;
      if ((bVar13 & 0xc0) == 0x80) {
        pbVar17 = pbVar4 + -1;
        bVar13 = pbVar4[-2];
        if ((bVar13 & 0xc0) == 0x80) {
          pbVar17 = pbVar4 + -2;
          bVar13 = pbVar4[-3];
          if ((bVar13 & 0xc0) == 0x80) {
            pbVar17 = pbVar4 + -3;
            bVar13 = pbVar4[-4];
          }
        }
      }
      if ((char)bVar13 < '\0') {
        uVar8 = (uint)bVar13;
        pbVar16 = pbVar17;
joined_r0x00495d87:
        pbVar17 = pbVar16;
        if (((char)bVar13 < '\0') && ((uVar8 & 0x40) != 0)) {
          if ((uVar8 & 0x20) == 0) {
            pbVar17 = pbVar17 + 1;
          }
          else {
            pbVar17 = pbVar17 + (3 - (ulong)((uVar8 & 0x10) == 0));
          }
        }
      }
    }
    else {
      pbVar17 = pbVar4;
      uVar8 = 0;
LAB_00495b71:
      do {
        pbVar16 = pbVar17;
        pbVar17 = pbVar16 + -1;
        bVar13 = pbVar16[-1];
        if ((bVar13 & 0xc0) == 0x80) {
          bVar18 = uVar8 < 3;
          uVar8 = uVar8 + 1;
          if (bVar18) goto LAB_00495b71;
        }
        uVar8 = (uint)bVar13;
        uVar10 = uVar8;
        if ((char)bVar13 < '\0') {
          uVar10 = (uint)bVar13;
          if ((bVar13 & 0x40) == 0) {
            uVar10 = uVar10 & 0x7f;
          }
          else {
            uVar9 = uVar10 & 0x10 ^ 0x1f;
            if ((bVar13 & 0x20) == 0) {
              uVar9 = 0x3f;
            }
            uVar10 = uVar9 & uVar10;
            if (((((*pbVar16 & 0xffffffc0) == 0x80) &&
                 (uVar10 = *pbVar16 & 0x3f | uVar10 << 6, (bVar13 & 0x20) != 0)) &&
                ((pbVar16[1] & 0xffffffc0) == 0x80)) &&
               ((uVar10 = pbVar16[1] & 0x3f | uVar10 << 6, (bVar13 >> 5 & (bVar13 & 0x10) == 0) == 0
                && ((pbVar16[2] & 0xffffffc0) == 0x80)))) {
              uVar10 = uVar10 << 6 | pbVar16[2] & 0x3f;
            }
          }
        }
        pbVar6 = param_3;
        bVar7 = *param_3;
        while( true ) {
          pbVar1 = pbVar6 + 1;
          uVar9 = (uint)bVar7;
          if ((char)bVar7 < '\0') {
            if ((bVar7 & 0x40) == 0) {
              uVar9 = uVar9 & 0x7f;
            }
            else {
              if ((bVar7 & 0x20) == 0) {
                uVar14 = 0x3f;
                lVar11 = 0;
                bVar18 = false;
                bVar2 = false;
              }
              else {
                bVar18 = true;
                if ((bVar7 & 0x10) == 0) {
                  uVar14 = 0x1f;
                  lVar11 = 1;
                  bVar2 = false;
                }
                else {
                  uVar14 = 0xf;
                  lVar11 = 2;
                  bVar2 = true;
                }
              }
              uVar9 = uVar9 & uVar14;
              if ((pbVar6[1] & 0xc0) == 0x80) {
                pbVar12 = pbVar6 + lVar11 + 2;
                uVar9 = pbVar6[1] & 0x3f | uVar9 << 6;
                pbVar1 = pbVar12;
                if (bVar18) {
                  bVar7 = pbVar6[2];
                  pbVar1 = pbVar6 + 2;
                  if ((bVar7 & 0xc0) == 0x80) {
                    uVar9 = bVar7 & 0x3f | uVar9 << 6;
                    pbVar1 = pbVar12;
                    if (bVar2) {
                      bVar7 = pbVar6[3];
                      pbVar1 = pbVar6 + 3;
                      if ((bVar7 & 0xc0) == 0x80) {
                        uVar9 = uVar9 << 6 | bVar7 & 0x3f;
                        pbVar1 = pbVar12;
                      }
                    }
                  }
                }
              }
            }
          }
          pbVar6 = pbVar1;
          if (uVar9 == uVar10) break;
          bVar7 = *pbVar6;
          if (bVar7 == 0) goto joined_r0x00495d87;
        }
        uVar8 = 0;
      } while (param_2 < pbVar17);
    }
    if (pbVar17 < pbVar4) {
      sVar3 = (long)pbVar17 - (long)param_2;
      uVar15 = sVar3 + 4 & 0xfffffffffffffffc;
      puVar5 = operator_new__(uVar15 + 0x17);
      LOCK();
      *puVar5 = 0;
      UNLOCK();
      *(ulong *)(puVar5 + 2) = uVar15;
      memcpy(puVar5 + 4,param_2,sVar3);
      *(undefined1 *)((long)puVar5 + sVar3 + 0x10) = 0;
      *param_1 = puVar5 + 4;
      return;
    }
  }
  *param_1 = param_2;
  pbVar4 = param_2 + -0x10;
  if (pbVar4 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar4 = *(int *)pbVar4 + 1;
    UNLOCK();
  }
  return;
}


