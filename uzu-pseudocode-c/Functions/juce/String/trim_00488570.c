// Function : trim
// Namespace: juce:String
// Entry    : 00488570
// Prototype: undefined trim(long * param_1, long * param_2)
// Body     : 00488570 - 004888e4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::trim() const */

void __cdecl juce::String::trim(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *__dest;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *__src;
  byte *pbVar14;
  
  pbVar12 = (byte *)*param_2;
  bVar2 = *pbVar12;
  if (bVar2 == 0) {
    *param_1 = (long)pbVar12;
    pbVar12 = pbVar12 + -0x10;
    if (pbVar12 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar12 = *(int *)pbVar12 + 1;
      UNLOCK();
    }
  }
  else {
    sVar7 = strlen((char *)pbVar12);
    pbVar1 = pbVar12 + sVar7;
    __src = pbVar12;
    if (sVar7 != 0) {
      while( true ) {
        uVar11 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          if ((bVar2 & 0x40) == 0) {
            uVar11 = uVar11 & 0x7f;
          }
          else {
            uVar6 = uVar11 & 0x10 ^ 0x1f;
            if ((bVar2 & 0x20) == 0) {
              uVar6 = 0x3f;
            }
            uVar11 = uVar11 & uVar6;
            if (((((__src[1] & 0xffffffc0) == 0x80) &&
                 (uVar11 = __src[1] & 0x3f | uVar11 << 6, (bVar2 & 0x20) != 0)) &&
                ((__src[2] & 0xffffffc0) == 0x80)) &&
               ((uVar11 = __src[2] & 0x3f | uVar11 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
                ((__src[3] & 0xffffffc0) == 0x80)))) {
              uVar11 = uVar11 << 6 | __src[3] & 0x3f;
            }
          }
        }
        iVar5 = iswspace(uVar11);
        if (iVar5 == 0) goto LAB_004886ec;
        pbVar13 = __src + 1;
        bVar2 = *__src;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          if ((bVar2 & 0x20) == 0) {
            pbVar13 = __src + 2;
          }
          else {
            pbVar13 = __src + (4 - (ulong)((bVar2 & 0x10) == 0));
          }
        }
        if (pbVar13 == pbVar1) break;
        bVar2 = *pbVar13;
        __src = pbVar13;
      }
      __src = pbVar1;
    }
LAB_004886ec:
    pbVar13 = pbVar1;
    do {
      pbVar14 = pbVar13;
      if (pbVar14 <= __src) goto LAB_00488853;
      bVar2 = pbVar14[-1];
      pbVar13 = pbVar14 + -1;
      pbVar4 = pbVar14;
      if ((bVar2 & 0xc0) == 0x80) {
        bVar2 = pbVar14[-2];
        pbVar13 = pbVar14 + -2;
        pbVar4 = pbVar14 + -1;
        if ((bVar2 & 0xc0) == 0x80) {
          bVar2 = pbVar14[-3];
          pbVar13 = pbVar14 + -3;
          pbVar4 = pbVar14 + -2;
          if ((bVar2 & 0xc0) == 0x80) {
            bVar2 = pbVar14[-4];
            pbVar13 = pbVar14 + -4;
            pbVar4 = pbVar14 + -3;
          }
        }
      }
      pbVar14 = pbVar4;
      uVar11 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar11 = uVar11 & 0x7f;
        }
        else {
          uVar6 = uVar11 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar6 = 0x3f;
          }
          uVar11 = uVar11 & uVar6;
          if (((((pbVar13[1] & 0xc0) == 0x80) &&
               (uVar11 = pbVar13[1] & 0x3f | uVar11 << 6, (bVar2 & 0x20) != 0)) &&
              ((pbVar13[2] & 0xc0) == 0x80)) &&
             ((uVar11 = pbVar13[2] & 0x3f | uVar11 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
              ((pbVar13[3] & 0xffffffc0) == 0x80)))) {
            uVar11 = uVar11 << 6 | pbVar13[3] & 0x3f;
          }
        }
      }
      iVar5 = iswspace(uVar11);
    } while (iVar5 != 0);
    bVar2 = *pbVar13;
    if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
      if ((bVar2 & 0x20) == 0) {
        pbVar14 = pbVar14 + 1;
      }
      else {
        pbVar14 = pbVar14 + (3 - (ulong)((bVar2 & 0x10) == 0));
      }
    }
LAB_00488853:
    if ((__src == pbVar12) && (pbVar14 == pbVar1)) {
      lVar3 = *param_2;
      *param_1 = lVar3;
      piVar8 = (int *)(lVar3 + -0x10);
      if (piVar8 != &emptyString) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
    }
    else {
      if (*__src == 0) {
        __dest = (undefined4 *)&DAT_0061ac58;
      }
      else {
        sVar7 = (long)pbVar14 - (long)__src;
        uVar10 = sVar7 + 4 & 0xfffffffffffffffc;
        puVar9 = operator_new__(uVar10 + 0x17);
        LOCK();
        *puVar9 = 0;
        UNLOCK();
        *(ulong *)(puVar9 + 2) = uVar10;
        __dest = puVar9 + 4;
        memcpy(__dest,__src,sVar7);
        *(undefined1 *)((long)puVar9 + sVar7 + 0x10) = 0;
      }
      *param_1 = (long)__dest;
    }
  }
  return;
}


