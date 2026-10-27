// Function : stringWriteToStream
// Namespace: juce:var:VariantType
// Entry    : 00488040
// Prototype: undefined stringWriteToStream(undefined8 * param_1, long * param_2)
// Body     : 00488040 - 004882e4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringWriteToStream(juce::var::ValueUnion const&, juce::OutputStream&) */

void __cdecl juce::var::VariantType::stringWriteToStream(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  void *__ptr;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  size_t __size;
  long lVar11;
  void *local_30;
  
  pbVar6 = (byte *)*param_1;
  lVar11 = 0;
  pbVar7 = pbVar6;
LAB_00488063:
  pbVar4 = pbVar7 + 1;
  bVar1 = *pbVar7;
  uVar5 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar5 = uVar5 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_00488191;
      goto LAB_00488154;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar8 = 0x3f;
      lVar9 = 0;
      bVar2 = false;
      bVar3 = false;
    }
    else {
      bVar2 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar8 = 0x1f;
        lVar9 = 1;
        bVar3 = false;
      }
      else {
        uVar8 = 0xf;
        lVar9 = 2;
        bVar3 = true;
      }
    }
    uVar5 = uVar5 & uVar8;
    if ((pbVar7[1] & 0xffffffc0) != 0x80) goto joined_r0x00488152;
    pbVar10 = pbVar7 + lVar9 + 2;
    uVar5 = pbVar7[1] & 0x3f | uVar5 << 6;
    pbVar4 = pbVar10;
    if (bVar2) {
      pbVar4 = pbVar7 + 2;
      if ((*pbVar4 & 0xffffffc0) != 0x80) {
        if (uVar5 != 0) goto LAB_00488154;
LAB_00488191:
        __size = lVar11 + 1;
        if ((__size == 0) || (__ptr = malloc(__size), __ptr == (void *)0x0)) {
          __ptr = (void *)0x0;
          do {
            pbVar7 = pbVar6 + 1;
            bVar1 = *pbVar6;
            uVar5 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar5 = uVar5 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar8 = 0x3f;
                  lVar9 = 0;
                  bVar2 = false;
                  bVar3 = false;
                }
                else {
                  bVar2 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar8 = 0x1f;
                    lVar9 = 1;
                    bVar3 = false;
                  }
                  else {
                    uVar8 = 0xf;
                    lVar9 = 2;
                    bVar3 = true;
                  }
                }
                uVar5 = uVar5 & uVar8;
                if ((pbVar6[1] & 0xc0) == 0x80) {
                  pbVar4 = pbVar6 + lVar9 + 2;
                  uVar5 = pbVar6[1] & 0x3f | uVar5 << 6;
                  pbVar7 = pbVar4;
                  if (bVar2) {
                    pbVar7 = pbVar6 + 2;
                    if ((*pbVar7 & 0xffffffc0) == 0x80) {
                      uVar5 = *pbVar7 & 0x3f | uVar5 << 6;
                      pbVar7 = pbVar4;
                      if (bVar3) {
                        pbVar7 = pbVar6 + 3;
                        if ((*pbVar7 & 0xffffffc0) == 0x80) {
                          uVar5 = uVar5 << 6 | *pbVar7 & 0x3f;
                          pbVar7 = pbVar4;
                        }
                      }
                    }
                  }
                }
              }
            }
            pbVar6 = pbVar7;
          } while (uVar5 != 0);
        }
        else {
          local_30 = __ptr;
          CharacterFunctions::copyWithDestByteLimit<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((long *)&local_30,pbVar6,__size);
        }
                    /* try { // try from 004881c5 to 004881ed has its CatchHandler @ 004882e5 */
        (**(code **)(*param_2 + 0x98))(param_2,(int)lVar11 + 2);
        (**(code **)(*param_2 + 0x30))(param_2,5);
        (**(code **)(*param_2 + 0x28))(param_2,__ptr,__size);
        free(__ptr);
        return;
      }
      uVar5 = *pbVar4 & 0x3f | uVar5 << 6;
      pbVar4 = pbVar10;
      if (bVar3) {
        bVar1 = pbVar7[3];
        pbVar4 = pbVar7 + 3;
        if ((bVar1 & 0xc0) == 0x80) {
          uVar5 = uVar5 << 6 | bVar1 & 0x3f;
          pbVar4 = pbVar10;
        }
      }
    }
  }
joined_r0x00488152:
  if (uVar5 == 0) goto LAB_00488191;
LAB_00488154:
  lVar9 = 1;
  if ((0x7f < uVar5) && (lVar9 = 2, 0x7ff < uVar5)) {
    lVar9 = 4 - (ulong)(uVar5 < 0x10000);
  }
  lVar11 = lVar11 + lVar9;
  pbVar7 = pbVar4;
  goto LAB_00488063;
}


