// Function : toBase64Encoding
// Namespace: juce:MemoryBlock
// Entry    : 0048a050
// Prototype: undefined toBase64Encoding(undefined8 * param_1, long * param_2)
// Body     : 0048a050 - 0048a3a8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::MemoryBlock::toBase64Encoding() const */

void __cdecl juce::MemoryBlock::toBase64Encoding(undefined8 *param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined4 *puVar5;
  sbyte sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  byte *pbVar19;
  bool bVar20;
  byte local_3a [10];
  
  uVar9 = param_2[1];
  pbVar14 = local_3a + 1;
  local_3a[1] = 0;
  lVar12 = 0;
  uVar4 = uVar9;
  do {
    uVar7 = (uint)uVar4;
    uVar8 = (uVar4 & 0xffffffff) / 10;
    pbVar14[-1] = (char)uVar4 + (char)uVar8 * -10 | 0x30;
    pbVar14 = pbVar14 + -1;
    lVar12 = lVar12 + 1;
    uVar4 = uVar8;
  } while (9 < uVar7);
  pbVar14 = (byte *)StringHolderUtils::createFromFixedLength(pbVar14,lVar12);
  *param_1 = pbVar14;
  iVar17 = 0;
  iVar15 = 1;
  iVar16 = 0;
  pbVar3 = pbVar14;
  do {
    bVar2 = *pbVar3;
    if ((char)bVar2 < '\0') {
      do {
        pbVar19 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
      } while ((*pbVar19 & 0xc0) == 0x80);
    }
    else {
      pbVar3 = pbVar3 + 1;
      if (bVar2 == 0) break;
    }
    iVar16 = iVar16 + 1;
    iVar17 = iVar17 + -1;
    iVar15 = iVar15 + 1;
  } while( true );
  uVar18 = uVar9 * 8 | 4;
  uVar8 = uVar18 / 6;
  uVar4 = (long)iVar16 + uVar8 + 3;
  uVar9 = *(ulong *)(pbVar14 + -8);
  if (uVar4 <= uVar9) {
    if (*(int *)(pbVar14 + -0x10) < 1) {
      *param_1 = pbVar14;
      goto joined_r0x0048a1b8;
    }
    uVar9 = *(ulong *)(pbVar14 + -8);
  }
  if (uVar9 < uVar4) {
    uVar9 = uVar4;
  }
  uVar9 = uVar9 + 3 & 0xfffffffffffffffc;
                    /* try { // try from 0048a171 to 0048a175 has its CatchHandler @ 0048a3a9 */
  puVar5 = operator_new__(uVar9 + 0x17);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  *(ulong *)(puVar5 + 2) = uVar9;
  pbVar19 = (byte *)(puVar5 + 4);
  memcpy(pbVar19,pbVar14,*(size_t *)(pbVar14 + -8));
  LOCK();
  pbVar3 = pbVar14 + -0x10;
  iVar1 = *(int *)pbVar3;
  *(int *)pbVar3 = *(int *)pbVar3 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(pbVar14 + -0x10);
  }
  *param_1 = pbVar19;
  pbVar14 = pbVar19;
joined_r0x0048a1b8:
  if (iVar16 < 0) {
    do {
      if ((pbVar14[-1] & 0xc0) == 0x80) {
        if ((pbVar14[-2] & 0xc0) == 0x80) {
          if ((pbVar14[-3] & 0xc0) == 0x80) {
            pbVar14 = pbVar14 + -4;
          }
          else {
            pbVar14 = pbVar14 + -3;
          }
        }
        else {
          pbVar14 = pbVar14 + -2;
        }
      }
      else {
        pbVar14 = pbVar14 + -1;
      }
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  else if (iVar16 != 0) {
    do {
      bVar2 = *pbVar14;
      pbVar3 = pbVar14 + 1;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        if ((bVar2 & 0x20) == 0) {
          pbVar3 = pbVar14 + 2;
        }
        else {
          pbVar3 = pbVar14 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
      }
      pbVar14 = pbVar3;
      iVar15 = iVar15 + -1;
    } while (1 < iVar15);
  }
  *pbVar14 = 0x2e;
  pbVar14 = pbVar14 + 1;
  if (5 < uVar18) {
    uVar9 = 1;
    if (1 < uVar8) {
      uVar9 = uVar8;
    }
    uVar4 = 0;
    uVar8 = 0;
    do {
      uVar10 = uVar8 * 6 >> 3;
      uVar18 = param_2[1];
      uVar7 = 0;
      if (uVar10 < uVar18) {
        uVar7 = (uint)(uVar8 * 6) & 6;
        uVar11 = (ulong)uVar7;
        lVar12 = 8 - uVar11;
        if (uVar11 < 3) {
          lVar12 = 6;
        }
        sVar6 = (sbyte)uVar7;
        uVar7 = ((int)*(char *)(*param_2 + uVar10) & (0xffU >> (8U - (char)lVar12 & 0x1f)) << sVar6)
                >> sVar6;
        if ((2 < uVar11) && (uVar10 + 1 < uVar18)) {
          uVar11 = 6 - lVar12;
          uVar10 = (uVar4 >> 3) + 2;
          do {
            uVar13 = 8;
            if (uVar11 < 8) {
              uVar13 = uVar11;
            }
            uVar7 = ((uint)*(byte *)(*param_2 + -1 + uVar10) & 0xffU >> (8U - (char)uVar13 & 0x1f))
                    << ((byte)lVar12 & 0x1f) | uVar7;
            uVar11 = uVar11 - uVar13;
            if (uVar11 == 0) break;
            lVar12 = lVar12 + uVar13;
            bVar20 = uVar10 < uVar18;
            uVar10 = uVar10 + 1;
          } while (bVar20);
        }
      }
      *pbVar14 = ".ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+"[(int)uVar7];
      pbVar14 = pbVar14 + 1;
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 + 6;
    } while (uVar8 != uVar9);
  }
  *pbVar14 = 0;
  return;
}


