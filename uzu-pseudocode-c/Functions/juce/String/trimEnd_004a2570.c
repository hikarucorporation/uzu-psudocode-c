// Function : trimEnd
// Namespace: juce:String
// Entry    : 004a2570
// Prototype: undefined trimEnd(long * param_1, long * param_2)
// Body     : 004a2570 - 004a27a7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::trimEnd() const */

void __cdecl juce::String::trimEnd(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulong uVar10;
  uint __wc;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *__dest;
  
  pbVar11 = (byte *)*param_2;
  if (*pbVar11 == 0) {
    *param_1 = (long)pbVar11;
    pbVar11 = pbVar11 + -0x10;
    if (pbVar11 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar11 = *(int *)pbVar11 + 1;
      UNLOCK();
    }
  }
  else {
    sVar7 = strlen((char *)pbVar11);
    pbVar12 = pbVar11 + sVar7;
    do {
      if (pbVar12 <= pbVar11) goto LAB_004a2722;
      bVar1 = pbVar12[-1];
      pbVar4 = pbVar12 + -1;
      pbVar3 = pbVar12;
      if ((bVar1 & 0xc0) == 0x80) {
        bVar1 = pbVar12[-2];
        pbVar4 = pbVar12 + -2;
        pbVar3 = pbVar12 + -1;
        if ((bVar1 & 0xc0) == 0x80) {
          bVar1 = pbVar12[-3];
          pbVar4 = pbVar12 + -3;
          pbVar3 = pbVar12 + -2;
          if ((bVar1 & 0xc0) == 0x80) {
            bVar1 = pbVar12[-4];
            pbVar4 = pbVar12 + -4;
            pbVar3 = pbVar12 + -3;
          }
        }
      }
      pbVar12 = pbVar4;
      __wc = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          __wc = __wc & 0x7f;
        }
        else {
          uVar6 = __wc & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar6 = 0x3f;
          }
          __wc = __wc & uVar6;
          if (((((pbVar12[1] & 0xc0) == 0x80) &&
               (__wc = pbVar12[1] & 0x3f | __wc << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar12[2] & 0xc0) == 0x80)) &&
             ((__wc = pbVar12[2] & 0x3f | __wc << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar12[3] & 0xffffffc0) == 0x80)))) {
            __wc = __wc << 6 | pbVar12[3] & 0x3f;
          }
        }
      }
      iVar5 = iswspace(__wc);
    } while (iVar5 != 0);
    bVar1 = *pbVar12;
    pbVar12 = pbVar3;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      if ((bVar1 & 0x20) == 0) {
        pbVar12 = pbVar3 + 1;
      }
      else {
        pbVar12 = pbVar3 + (3 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
LAB_004a2722:
    if (pbVar12 == pbVar11 + sVar7) {
      lVar2 = *param_2;
      *param_1 = lVar2;
      piVar9 = (int *)(lVar2 + -0x10);
      if (piVar9 != &emptyString) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
    }
    else {
      if (*pbVar11 == 0) {
        __dest = (undefined4 *)&DAT_0061ac58;
      }
      else {
        sVar7 = (long)pbVar12 - (long)pbVar11;
        uVar10 = sVar7 + 4 & 0xfffffffffffffffc;
        puVar8 = operator_new__(uVar10 + 0x17);
        LOCK();
        *puVar8 = 0;
        UNLOCK();
        *(ulong *)(puVar8 + 2) = uVar10;
        __dest = puVar8 + 4;
        memcpy(__dest,pbVar11,sVar7);
        *(undefined1 *)((long)puVar8 + sVar7 + 0x10) = 0;
      }
      *param_1 = (long)__dest;
    }
  }
  return;
}


