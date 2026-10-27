// Function : createStringFromData
// Namespace: juce:String
// Entry    : 0048bad0
// Prototype: undefined createStringFromData(String * this, byte * param_1, uint param_2)
// Body     : 0048bad0 - 0048c056


/* juce::String::createStringFromData(void const*, int) */

void __thiscall juce::String::createStringFromData(String *this,byte *param_1,uint param_2)

{
  ulong uVar1;
  uint3 uVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *__ptr;
  uint *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  byte bVar13;
  sbyte sVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  size_t __n;
  ulong uVar23;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 *puStack_48;
  ulong local_40;
  undefined8 local_38;
  
  if ((param_1 == (byte *)0x0) || ((int)param_2 < 1)) {
    *(undefined1 **)this = &DAT_0061ac58;
    return;
  }
  bVar13 = *param_1;
  if (param_2 == 1) {
    puVar9 = operator_new__(0x1b);
    LOCK();
    *puVar9 = 0;
    UNLOCK();
    *(undefined8 *)(puVar9 + 2) = 4;
    *(undefined4 **)this = puVar9 + 4;
    if ((char)bVar13 < '\0') {
      *(byte *)(puVar9 + 4) = bVar13 >> 6 | 0xc0;
      puVar15 = (undefined1 *)((long)puVar9 + 0x12);
      *(byte *)((long)puVar9 + 0x11) = bVar13 & 0x3f | 0x80;
    }
    else {
      puVar15 = (undefined1 *)((long)puVar9 + 0x11);
      *(byte *)(puVar9 + 4) = bVar13;
    }
    *puVar15 = 0;
    return;
  }
  if (bVar13 == 0xff) {
    if (param_1[1] == 0xfe) {
      pcVar18 = ByteOrder::swapIfBigEndian<unsigned_short>;
LAB_0048bb97:
      uVar22 = (param_2 >> 1) - 1;
      local_40 = (ulong)uVar22;
      local_58 = (undefined4 *)&DAT_0061ac58;
      local_50 = 0;
      puStack_48 = (undefined4 *)0x0;
      local_38 = 0;
      uVar23 = local_40 + 4 & 0xfffffffffffffffc;
      local_58 = operator_new__(uVar23 + 0x17);
      LOCK();
      *local_58 = 0;
      UNLOCK();
      uVar16 = 0;
      *(ulong *)(local_58 + 2) = uVar23;
      *(undefined1 *)(local_58 + 4) = 0;
      local_58 = local_58 + 4;
      puStack_48 = local_58;
      if (3 < param_2) {
        do {
          uVar5 = (*pcVar18)(*(undefined2 *)(param_1 + uVar16 * 2 + 2));
          uVar8 = (int)uVar16 + 1;
          if (uVar8 == uVar22) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined2 *)(param_1 + (ulong)uVar8 * 2 + 2);
          }
          uVar7 = (*pcVar18)(uVar6);
          uVar8 = (uint)uVar5;
          if (((uVar5 & 0xfc00) == 0xd800) && ((uVar7 & 0xfc00) == 0xdc00)) {
            uVar8 = (uVar7 - 0xdc00 | (uint)uVar5 * 0x400 + 0xfca00000) + 0x10000;
          }
                    /* try { // try from 0048bc6e to 0048bc77 has its CatchHandler @ 0048c06c */
          StringCreationHelper::write((StringCreationHelper *)&local_58,uVar8);
          uVar8 = (int)uVar16 + (uint)((uVar5 & 0xfc00) == 0xd800 && (uVar7 & 0xfc00) == 0xdc00) + 1
          ;
          uVar16 = (ulong)uVar8;
        } while ((int)uVar8 < (int)uVar22);
      }
                    /* try { // try from 0048bc9e to 0048bca9 has its CatchHandler @ 0048c06a */
      StringCreationHelper::write((StringCreationHelper *)&local_58,0);
      *(undefined4 **)this = local_58;
      return;
    }
  }
  else if (bVar13 == 0xfe) {
    if (param_1[1] == 0xff) {
      pcVar18 = ByteOrder::swapIfLittleEndian<unsigned_short>;
      goto LAB_0048bb97;
    }
  }
  else if ((((2 < param_2) && (bVar13 == 0xef)) && (param_1[1] == 0xbb)) && (param_1[2] == 0xbf)) {
    param_1 = param_1 + 3;
    param_2 = param_2 - 3;
    if (param_2 == 0) {
      __n = 0;
      goto LAB_0048bfff;
    }
  }
  __n = (size_t)param_2;
  uVar16 = 0;
  do {
    bVar13 = param_1[uVar16];
    if (bVar13 == 0) break;
    if ((char)bVar13 < '\0') {
      if (bVar13 < 0xc0) {
LAB_0048bde7:
        __ptr = malloc(__n * 4 + 4);
        if (param_2 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          do {
            bVar13 = param_1[uVar16];
            uVar22 = (uint)bVar13;
            if ((char)bVar13 < -0x60) {
              uVar22 = (uint)*(ushort *)
                              (CharacterFunctions::
                               getUnicodeCharFromWindows1252Codepage(unsigned_char)::lookup +
                              (ulong)(bVar13 - 0x80) * 2);
            }
            __ptr[uVar16] = uVar22;
            uVar22 = (uint)param_1[uVar16 + 1];
            if ((char)param_1[uVar16 + 1] < -0x60) {
              uVar22 = (uint)*(ushort *)
                              (CharacterFunctions::
                               getUnicodeCharFromWindows1252Codepage(unsigned_char)::lookup +
                              (ulong)(uVar22 - 0x80) * 2);
            }
            __ptr[uVar16 + 1] = uVar22;
            uVar16 = uVar16 + 2;
          } while ((param_2 & 0xfffffffe) != uVar16);
        }
        if ((param_2 & 1) != 0) {
          bVar13 = param_1[uVar16];
          uVar22 = (uint)bVar13;
          if ((char)bVar13 < -0x60) {
            uVar22 = (uint)*(ushort *)
                            (CharacterFunctions::
                             getUnicodeCharFromWindows1252Codepage(unsigned_char)::lookup +
                            (ulong)(bVar13 - 0x80) * 2);
          }
          __ptr[uVar16] = uVar22;
        }
        __ptr[__n] = 0;
        uVar22 = *__ptr;
        if (uVar22 == 0) {
          pbVar11 = &DAT_0061ac58;
        }
        else {
          lVar19 = 0;
          puVar10 = __ptr;
          do {
            puVar10 = puVar10 + 1;
            lVar17 = 1;
            if ((0x7f < uVar22) && (lVar17 = 2, 0x7ff < uVar22)) {
              lVar17 = 4 - (ulong)(uVar22 < 0x10000);
            }
            lVar19 = lVar19 + lVar17;
            uVar22 = *puVar10;
          } while (uVar22 != 0);
          uVar16 = lVar19 + 4U & 0xfffffffffffffffc;
                    /* try { // try from 0048be84 to 0048be88 has its CatchHandler @ 0048c057 */
          puVar9 = operator_new__(uVar16 + 0x17);
          LOCK();
          *puVar9 = 0;
          UNLOCK();
          *(ulong *)(puVar9 + 2) = uVar16;
          pbVar11 = (byte *)(puVar9 + 4);
          uVar22 = *__ptr;
          pbVar21 = pbVar11;
          if (uVar22 != 0) {
            puVar10 = __ptr;
            do {
              puVar10 = puVar10 + 1;
              if (uVar22 < 0x80) {
                *pbVar21 = (byte)uVar22;
                pbVar21 = pbVar21 + 1;
              }
              else {
                uVar8 = 0xffff < uVar22 | 2;
                if (uVar22 < 0x800) {
                  uVar8 = 1;
                }
                bVar13 = (byte)uVar8;
                sVar14 = bVar13 * '\x06';
                *pbVar21 = (byte)(uVar22 >> sVar14) | (byte)(0xff << (bVar13 ^ 7));
                pbVar21[1] = (byte)(uVar22 >> ((bVar13 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f |
                             0x80;
                if (uVar22 < 0x800) {
                  pbVar21 = pbVar21 + 2;
                }
                else {
                  pbVar21[2] = (byte)(uVar22 >> (sVar14 - 0xcU & 0x1f)) & 0x3f | 0x80;
                  if (uVar8 - 1 < 2) {
                    pbVar21 = pbVar21 + 3;
                  }
                  else {
                    pbVar21[3] = (byte)(uVar22 >> (sVar14 - 0x12U & 0x1f)) & 0x3f | 0x80;
                    pbVar21 = pbVar21 + 4;
                  }
                }
              }
              uVar22 = *puVar10;
            } while (uVar22 != 0);
          }
          *pbVar21 = 0;
        }
        *(byte **)this = pbVar11;
        free(__ptr);
        return;
      }
      if (bVar13 < 0xe0) {
        bVar3 = true;
        bVar4 = false;
        uVar23 = 0;
      }
      else if (bVar13 < 0xf0) {
        uVar23 = 1;
        bVar4 = true;
        bVar3 = false;
      }
      else {
        if (0xf4 < bVar13) goto LAB_0048bde7;
        uVar23 = 2;
        bVar3 = false;
        bVar4 = false;
      }
      uVar1 = uVar16 + 1;
      uVar20 = __n;
      if (__n < uVar1) {
        uVar20 = uVar1;
      }
      if (~uVar16 + uVar20 <= uVar23) goto LAB_0048bde7;
      uVar22 = (uint)CONCAT11(bVar13,param_1[uVar1]);
      if (!bVar3) {
        uVar2 = CONCAT21(CONCAT11(bVar13,param_1[uVar1]),param_1[uVar16 + 2]);
        uVar22 = (uint)uVar2;
        if (!bVar4) {
          uVar22 = CONCAT31(uVar2,param_1[uVar16 + 3]);
        }
      }
      if ((uVar22 < 0xc280) ||
         ((uVar16 = uVar1 + uVar23, 0xdfbf < uVar22 &&
          ((uVar22 < 0xe0a080 ||
           ((0xeda07f < uVar22 &&
            ((uVar22 < 0xedbfc0 || ((0xefbfbf < uVar22 && (0x3ff3f3f < uVar22 + 0xf6f7f80)))))))))))
         ) goto LAB_0048bde7;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < __n);
LAB_0048bfff:
  if (*param_1 == 0) {
    puVar9 = (undefined4 *)&DAT_0061ac58;
  }
  else {
    uVar16 = __n + 4 & 0xfffffffffffffffc;
    puVar12 = operator_new__(uVar16 + 0x17);
    LOCK();
    *puVar12 = 0;
    UNLOCK();
    *(ulong *)(puVar12 + 2) = uVar16;
    puVar9 = puVar12 + 4;
    memcpy(puVar9,param_1,__n);
    *(undefined1 *)((long)puVar12 + __n + 0x10) = 0;
  }
  *(undefined4 **)this = puVar9;
  return;
}


