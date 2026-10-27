// Function : replaceCharacter
// Namespace: juce:String
// Entry    : 004a8150
// Prototype: undefined replaceCharacter(undefined8 * param_1, byte * param_2, uint param_3, uint param_4)
// Body     : 004a8150 - 004a8410


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::replaceCharacter(wchar_t, wchar_t) const */

void __cdecl
juce::String::replaceCharacter(undefined8 *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  undefined4 *local_60;
  byte *local_58;
  undefined4 *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  bVar6 = *param_2;
  if (bVar6 != 0) {
    pbVar10 = param_2;
    do {
      pbVar1 = pbVar10 + 1;
      if ((char)bVar6 < '\0') {
        if ((bVar6 & 0x40) == 0) {
          uVar4 = bVar6 & 0x7f;
        }
        else {
          if ((bVar6 & 0x20) == 0) {
            uVar4 = 0x3f;
            lVar11 = 0;
            bVar2 = false;
            bVar3 = false;
          }
          else {
            bVar2 = true;
            if ((bVar6 & 0x10) == 0) {
              uVar4 = 0x1f;
              lVar11 = 1;
              bVar3 = false;
            }
            else {
              uVar4 = 0xf;
              lVar11 = 2;
              bVar3 = true;
            }
          }
          uVar4 = bVar6 & uVar4;
          if ((pbVar10[1] & 0xffffffc0) == 0x80) {
            pbVar12 = pbVar10 + lVar11 + 2;
            uVar4 = pbVar10[1] & 0x3f | uVar4 << 6;
            pbVar1 = pbVar12;
            if (bVar2) {
              uVar5 = (uint)pbVar10[2];
              pbVar1 = pbVar10 + 2;
              if (((uVar5 & 0xffffffc0) == 0x80) &&
                 (uVar4 = uVar5 & 0x3f | uVar4 << 6, pbVar1 = pbVar12, bVar3)) {
                bVar6 = pbVar10[3];
                pbVar1 = pbVar10 + 3;
                if ((bVar6 & 0xc0) == 0x80) {
                  uVar4 = uVar4 << 6 | bVar6 & 0x3f;
                  pbVar1 = pbVar12;
                }
              }
            }
          }
        }
      }
      else {
        uVar4 = (uint)bVar6;
      }
      pbVar10 = pbVar1;
      if (uVar4 == param_3) {
        local_60 = (undefined4 *)&DAT_0061ac58;
        local_50 = (undefined4 *)0x0;
        local_48 = *(long *)(param_2 + -8);
        local_40 = 0;
        uVar7 = local_48 + 4U & 0xfffffffffffffffc;
        local_58 = param_2;
        local_38 = param_1;
        local_60 = operator_new__(uVar7 + 0x17);
        LOCK();
        *local_60 = 0;
        UNLOCK();
        *(ulong *)(local_60 + 2) = uVar7;
        *(undefined1 *)(local_60 + 4) = 0;
        local_60 = local_60 + 4;
        local_50 = local_60;
        do {
          pbVar10 = local_58 + 1;
          bVar6 = *local_58;
          uVar4 = (uint)bVar6;
          if ((char)bVar6 < '\0') {
            if ((bVar6 & 0x40) == 0) {
              uVar4 = uVar4 & 0x7f;
            }
            else {
              uVar9 = uVar4 & 0x20;
              uVar8 = uVar4 & 0x10;
              uVar5 = uVar8 ^ 0x1f;
              if ((bVar6 & 0x20) == 0) {
                uVar5 = 0x3f;
              }
              uVar4 = uVar5 & uVar4;
              if ((*pbVar10 & 0xffffffc0) == 0x80) {
                pbVar1 = local_58 + 2;
                uVar4 = *pbVar10 & 0x3f | uVar4 << 6;
                pbVar10 = pbVar1;
                if (((bVar6 & 0x20) != 0) && ((*pbVar1 & 0xffffffc0) == 0x80)) {
                  pbVar10 = local_58 + 3;
                  uVar4 = *pbVar1 & 0x3f | uVar4 << 6;
                  if (((byte)((byte)(uVar8 >> 4) & (byte)(uVar9 >> 5)) != 0) &&
                     ((*pbVar10 & 0xffffffc0) == 0x80)) {
                    uVar4 = uVar4 << 6 | *pbVar10 & 0x3f;
                    pbVar10 = local_58 + 4;
                  }
                }
              }
              else {
              }
            }
          }
          local_58 = pbVar10;
          uVar5 = param_4;
          if (uVar4 != param_3) {
            uVar5 = uVar4;
          }
                    /* try { // try from 004a83ca to 004a83d3 has its CatchHandler @ 004a8411 */
          StringCreationHelper::write((StringCreationHelper *)&local_60,uVar5);
        } while (uVar5 != 0);
        *local_38 = local_60;
        return;
      }
      bVar6 = *pbVar10;
    } while (bVar6 != 0);
  }
  *param_1 = param_2;
  pbVar10 = param_2 + -0x10;
  if (pbVar10 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar10 = *(int *)pbVar10 + 1;
    UNLOCK();
  }
  return;
}


