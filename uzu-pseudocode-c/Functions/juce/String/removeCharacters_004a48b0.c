// Function : removeCharacters
// Namespace: juce:String
// Entry    : 004a48b0
// Prototype: undefined8 * removeCharacters(undefined8 * param_1, undefined8 * param_2, byte * param_3)
// Body     : 004a48b0 - 004a4b38


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::removeCharacters(juce::StringRef) const */

undefined8 * __cdecl
juce::String::removeCharacters(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined4 *local_58;
  byte *local_50;
  undefined4 *local_48;
  long local_40;
  undefined8 local_38;
  
  local_50 = (byte *)*param_2;
  if (*local_50 == 0) {
    local_58 = (undefined4 *)&DAT_0061ac58;
  }
  else {
    local_58 = (undefined4 *)&DAT_0061ac58;
    local_48 = (undefined4 *)0x0;
    local_40 = *(long *)(local_50 + -8);
    local_38 = 0;
    uVar9 = local_40 + 4U & 0xfffffffffffffffc;
    local_58 = operator_new__(uVar9 + 0x17);
    LOCK();
    *local_58 = 0;
    UNLOCK();
    *(ulong *)(local_58 + 2) = uVar9;
    *(undefined1 *)(local_58 + 4) = 0;
    local_58 = local_58 + 4;
    local_48 = local_58;
    do {
      pbVar5 = local_50 + 1;
      bVar2 = *local_50;
      uVar11 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar6 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          uVar11 = uVar6 & 0x7f;
        }
        else {
          uVar11 = uVar6 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar11 = 0x3f;
          }
          uVar11 = uVar11 & uVar6;
          if ((*pbVar5 & 0xffffffc0) == 0x80) {
            pbVar1 = local_50 + 2;
            uVar11 = *pbVar5 & 0x3f | uVar11 << 6;
            pbVar5 = pbVar1;
            if (((bVar2 & 0x20) != 0) && ((*pbVar1 & 0xffffffc0) == 0x80)) {
              pbVar5 = local_50 + 3;
              uVar11 = *pbVar1 & 0x3f | uVar11 << 6;
              if ((byte)((byte)((uVar6 & 0x10) >> 4) & (byte)((uVar6 & 0x20) >> 5)) != 0) {
                if ((*pbVar5 & 0xffffffc0) == 0x80) {
                  uVar11 = uVar11 << 6 | *pbVar5 & 0x3f;
                  pbVar5 = local_50 + 4;
                }
              }
            }
          }
          else {
          }
        }
      }
      local_50 = pbVar5;
      bVar2 = *param_3;
      if (bVar2 != 0) {
        pbVar5 = param_3;
        do {
          pbVar1 = pbVar5 + 1;
          uVar6 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            if ((bVar2 & 0x40) == 0) {
              uVar6 = uVar6 & 0x7f;
            }
            else {
              if ((bVar2 & 0x20) == 0) {
                uVar8 = 0x3f;
                lVar10 = 0;
                bVar3 = false;
                bVar4 = false;
              }
              else {
                bVar3 = true;
                if ((bVar2 & 0x10) == 0) {
                  uVar8 = 0x1f;
                  lVar10 = 1;
                  bVar4 = false;
                }
                else {
                  uVar8 = 0xf;
                  lVar10 = 2;
                  bVar4 = true;
                }
              }
              uVar6 = uVar6 & uVar8;
              if ((pbVar5[1] & 0xc0) == 0x80) {
                pbVar7 = pbVar5 + lVar10 + 2;
                uVar6 = pbVar5[1] & 0x3f | uVar6 << 6;
                pbVar1 = pbVar7;
                if (bVar3) {
                  uVar8 = (uint)pbVar5[2];
                  pbVar1 = pbVar5 + 2;
                  if ((uVar8 & 0xffffffc0) == 0x80) {
                    uVar6 = uVar8 & 0x3f | uVar6 << 6;
                    pbVar1 = pbVar7;
                    if (bVar4) {
                      uVar8 = (uint)pbVar5[3];
                      pbVar1 = pbVar5 + 3;
                      if ((uVar8 & 0xffffffc0) == 0x80) {
                        uVar6 = uVar6 << 6 | uVar8 & 0x3f;
                        pbVar1 = pbVar7;
                      }
                    }
                  }
                }
              }
            }
          }
          pbVar5 = pbVar1;
          if (uVar6 == uVar11) goto LAB_004a493a;
          bVar2 = *pbVar5;
        } while (bVar2 != 0);
      }
                    /* try { // try from 004a4930 to 004a4939 has its CatchHandler @ 004a4b39 */
      StringCreationHelper::write((StringCreationHelper *)&local_58,uVar11);
LAB_004a493a:
    } while (uVar11 != 0);
  }
  *param_1 = local_58;
  return param_1;
}


