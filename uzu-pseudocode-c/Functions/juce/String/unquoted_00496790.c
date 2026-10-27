// Function : unquoted
// Namespace: juce:String
// Entry    : 00496790
// Prototype: undefined unquoted(undefined8 * param_1, undefined8 * param_2)
// Body     : 00496790 - 00496a30


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::unquoted() const */

void __cdecl juce::String::unquoted(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
  pbVar6 = (byte *)*param_2;
  bVar7 = *pbVar6;
  uVar1 = (uint)bVar7;
  if ((char)bVar7 < '\0') {
    if ((bVar7 & 0x40) == 0) {
      uVar1 = bVar7 & 0x7f;
    }
    else {
      uVar5 = 0x3f;
      if ((bVar7 & 0x20) != 0) {
        uVar5 = uVar1 & 0x10 ^ 0x1f;
      }
      uVar1 = uVar1 & uVar5;
      if (((((pbVar6[1] & 0xc0) == 0x80) &&
           (uVar1 = pbVar6[1] & 0x3f | uVar1 << 6, (bVar7 & 0x20) != 0)) &&
          ((pbVar6[2] & 0xc0) == 0x80)) &&
         ((uVar1 = pbVar6[2] & 0x3f | uVar1 << 6, (bVar7 >> 5 & (bVar7 & 0x10) == 0) == 0 &&
          ((pbVar6[3] & 0xffffffc0) == 0x80)))) {
        uVar1 = uVar1 << 6 | pbVar6[3] & 0x3f;
      }
    }
  }
  if ((uVar1 != 0x27) && (uVar1 != 0x22)) {
    *param_1 = pbVar6;
    pbVar6 = pbVar6 + -0x10;
    if (pbVar6 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
      UNLOCK();
    }
    return;
  }
  iVar8 = 1;
  iVar9 = 0;
  iVar3 = 0;
  pbVar2 = pbVar6;
  bVar4 = bVar7;
  do {
    if ((char)bVar4 < '\0') {
      do {
        bVar4 = pbVar2[1];
        pbVar2 = pbVar2 + 1;
      } while ((bVar4 & 0xc0) == 0x80);
    }
    else {
      if (bVar4 == 0) {
        if (iVar3 < 1) {
          do {
            bVar7 = pbVar6[-1];
            if ((bVar7 & 0xc0) == 0x80) {
              bVar7 = pbVar6[-2];
              if ((bVar7 & 0xc0) == 0x80) {
                bVar7 = pbVar6[-3];
                if ((bVar7 & 0xc0) == 0x80) {
                  bVar7 = pbVar6[-4];
                  pbVar6 = pbVar6 + -4;
                }
                else {
                  pbVar6 = pbVar6 + -3;
                }
              }
              else {
                pbVar6 = pbVar6 + -2;
              }
            }
            else {
              pbVar6 = pbVar6 + -1;
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        else if (iVar3 != 1) {
          do {
            pbVar2 = pbVar6 + 1;
            if (((char)bVar7 < '\0') && ((bVar7 & 0x40) != 0)) {
              if ((bVar7 & 0x20) == 0) {
                pbVar2 = pbVar6 + 2;
              }
              else {
                pbVar2 = pbVar6 + (4 - (ulong)((bVar7 & 0x10) == 0));
              }
            }
            pbVar6 = pbVar2;
            bVar7 = *pbVar6;
            iVar9 = iVar9 + -1;
          } while (1 < iVar9);
        }
        uVar1 = (uint)bVar7;
        if ((char)bVar7 < '\0') {
          if ((bVar7 & 0x40) == 0) {
            uVar1 = bVar7 & 0x7f;
          }
          else {
            uVar5 = 0x3f;
            if ((bVar7 & 0x20) != 0) {
              uVar5 = uVar1 & 0x10 ^ 0x1f;
            }
            uVar1 = uVar1 & uVar5;
            if (((((pbVar6[1] & 0xc0) == 0x80) &&
                 (uVar1 = pbVar6[1] & 0x3f | uVar1 << 6, (bVar7 & 0x20) != 0)) &&
                ((pbVar6[2] & 0xc0) == 0x80)) &&
               ((uVar1 = pbVar6[2] & 0x3f | uVar1 << 6, (bVar7 >> 5 & (bVar7 & 0x10) == 0) == 0 &&
                ((pbVar6[3] & 0xc0) == 0x80)))) {
              uVar1 = uVar1 << 6 | pbVar6[3] & 0x3f;
            }
          }
        }
        substring(param_1,param_2,1,iVar3 - (uint)(uVar1 == 0x27 || uVar1 == 0x22));
        return;
      }
      bVar4 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar8 = iVar8 + -1;
    iVar9 = iVar9 + 1;
  } while( true );
}


