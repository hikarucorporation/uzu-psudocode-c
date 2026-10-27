// Function : writeEscapedChar
// Namespace: juce:JSONFormatter
// Entry    : 004aeeb0
// Prototype: undefined writeEscapedChar(long * param_1, uint param_2)
// Body     : 004aeeb0 - 004af1cc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONFormatter::writeEscapedChar(juce::OutputStream&, unsigned short) */

void __cdecl juce::JSONFormatter::writeEscapedChar(long *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  size_t sVar18;
  size_t __n;
  char acStack_3c [6];
  char acStack_36 [6];
  
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e6277,2);
  lVar13 = -4;
  __n = 0;
  do {
    sVar18 = __n;
    lVar17 = lVar13;
    acStack_36[lVar17] = "0123456789abcdef"[param_2 & 0xf];
    __n = sVar18 + 1;
    bVar3 = 0xf < param_2;
    lVar13 = lVar17 + -1;
    param_2 = param_2 >> 4;
  } while (bVar3);
  uVar15 = -(lVar17 + -1) & 0xfffffffffffffffc;
  piVar7 = operator_new__(uVar15 + 0x17);
  LOCK();
  *piVar7 = 0;
  UNLOCK();
  *(ulong *)(piVar7 + 2) = uVar15;
  pbVar9 = (byte *)(piVar7 + 4);
  memcpy(pbVar9,acStack_36 + lVar17,__n);
  *(undefined1 *)((long)piVar7 + sVar18 + 0x11) = 0;
  bVar1 = *(byte *)(piVar7 + 4);
  if (bVar1 == 0) {
    uVar10 = 4;
    pbVar12 = pbVar9;
  }
  else {
    pbVar11 = pbVar9;
    iVar5 = 5;
    do {
      iVar6 = iVar5;
      pbVar12 = pbVar11 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar12 = pbVar11 + 2;
        }
        else {
          pbVar12 = pbVar11 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      bVar1 = *pbVar12;
      iVar5 = iVar6 + -1;
      pbVar11 = pbVar12;
    } while (bVar1 != 0);
    if (iVar5 < 2) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      pbVar12 = pbVar9;
      goto LAB_004af04e;
    }
    uVar10 = iVar6 - 2;
  }
                    /* try { // try from 004aefe5 to 004aefe9 has its CatchHandler @ 004af1cd */
  puVar8 = operator_new__(((ulong)(pbVar12 + ((ulong)uVar10 - (long)pbVar9) + 4) &
                          0xfffffffffffffffc) + 0x17);
  LOCK();
  *puVar8 = 0;
  UNLOCK();
  *(ulong *)(puVar8 + 2) =
       (ulong)(pbVar12 + ((ulong)uVar10 - (long)pbVar9) + 4) & 0xfffffffffffffffc;
  pbVar12 = (byte *)(puVar8 + 4);
  memset(pbVar12,0x30,(ulong)uVar10);
  bVar1 = *pbVar9;
  *(byte *)((ulong)(uVar10 - 1) + 0x11 + (long)puVar8) = bVar1;
  if (bVar1 != 0) {
    lVar13 = 0;
    do {
      cVar2 = *(char *)((long)piVar7 + lVar13 + 0x11);
      *(char *)((long)puVar8 + lVar13 + (ulong)(uVar10 - 1) + 0x12) = cVar2;
      lVar13 = lVar13 + 1;
    } while (cVar2 != '\0');
  }
LAB_004af04e:
  lVar13 = 0;
  pbVar9 = pbVar12;
  while( true ) {
    pbVar11 = pbVar9 + 1;
    bVar1 = *pbVar9;
    uVar10 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar10 = bVar1 & 0x7f;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          uVar10 = 0x3f;
          lVar17 = 0;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar10 = 0x1f;
            lVar17 = 1;
            bVar4 = false;
          }
          else {
            uVar10 = 0xf;
            lVar17 = 2;
            bVar4 = true;
          }
        }
        uVar10 = bVar1 & uVar10;
        if ((pbVar9[1] & 0xffffffc0) == 0x80) {
          pbVar16 = pbVar9 + lVar17 + 2;
          uVar10 = pbVar9[1] & 0x3f | uVar10 << 6;
          pbVar11 = pbVar16;
          if (bVar3) {
            uVar14 = (uint)pbVar9[2];
            pbVar11 = pbVar9 + 2;
            if ((uVar14 & 0xffffffc0) == 0x80) {
              uVar10 = uVar14 & 0x3f | uVar10 << 6;
              pbVar11 = pbVar16;
              if (bVar4) {
                uVar14 = (uint)pbVar9[3];
                pbVar11 = pbVar9 + 3;
                if ((uVar14 & 0xffffffc0) == 0x80) {
                  uVar10 = uVar10 << 6 | uVar14 & 0x3f;
                  pbVar11 = pbVar16;
                }
              }
            }
          }
        }
      }
    }
    pbVar9 = pbVar11;
    if (uVar10 == 0) break;
    lVar17 = 1;
    if ((0x7f < uVar10) && (lVar17 = 2, 0x7ff < uVar10)) {
      lVar17 = 4 - (ulong)(uVar10 < 0x10000);
    }
    lVar13 = lVar13 + lVar17;
  }
                    /* try { // try from 004af177 to 004af17f has its CatchHandler @ 004af1e1 */
  (**(code **)(*param_1 + 0x28))(param_1,pbVar12,lVar13);
  LOCK();
  pbVar9 = pbVar12 + -0x10;
  iVar5 = *(int *)pbVar9;
  *(int *)pbVar9 = *(int *)pbVar9 + -1;
  UNLOCK();
  if (iVar5 == 0) {
    operator_delete__(pbVar12 + -0x10);
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    operator_delete__(piVar7);
  }
  return;
}


