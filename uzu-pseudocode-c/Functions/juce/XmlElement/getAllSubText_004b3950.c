// Function : getAllSubText
// Namespace: juce:XmlElement
// Entry    : 004b3950
// Prototype: undefined getAllSubText(long * param_1, XmlElement * param_2)
// Body     : 004b3950 - 004b3c93


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlElement::getAllSubText() const */

void __cdecl juce::XmlElement::getAllSubText(long *param_1,XmlElement *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *__src;
  bool bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long *plVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  XmlElement *pXVar11;
  long lVar12;
  uint uVar13;
  undefined4 *__dest;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  XmlElement *pXVar17;
  byte *pbVar18;
  byte *local_80;
  undefined **local_78;
  long local_70;
  long *local_68;
  void *local_60;
  long local_50 [2];
  ulong local_40;
  
  if (**(char **)(param_2 + 0x18) == '\0') {
    pXVar17 = param_2;
  }
  else {
    do {
      pXVar17 = *(XmlElement **)(param_2 + 8);
      if (pXVar17 == (XmlElement *)0x0) {
LAB_004b39c0:
        MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_78,0x400);
        pXVar17 = *(XmlElement **)(param_2 + 8);
        if (pXVar17 != (XmlElement *)0x0) {
          do {
                    /* try { // try from 004b39fc to 004b3a06 has its CatchHandler @ 004b3ce1 */
            getAllSubText((long *)&local_80,pXVar17);
            pbVar18 = local_80;
            lVar12 = 0;
            pbVar6 = local_80;
            while( true ) {
              pbVar1 = pbVar6 + 1;
              bVar2 = *pbVar6;
              uVar10 = (uint)bVar2;
              if ((char)bVar2 < '\0') {
                if ((bVar2 & 0x40) == 0) {
                  uVar10 = bVar2 & 0x7f;
                }
                else {
                  if ((bVar2 & 0x20) == 0) {
                    uVar10 = 0x3f;
                    lVar16 = 0;
                    bVar3 = false;
                    bVar4 = false;
                  }
                  else {
                    bVar3 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar10 = 0x1f;
                      lVar16 = 1;
                      bVar4 = false;
                    }
                    else {
                      uVar10 = 0xf;
                      lVar16 = 2;
                      bVar4 = true;
                    }
                  }
                  uVar10 = bVar2 & uVar10;
                  if ((pbVar6[1] & 0xffffffc0) == 0x80) {
                    pbVar15 = pbVar6 + lVar16 + 2;
                    uVar10 = pbVar6[1] & 0x3f | uVar10 << 6;
                    pbVar1 = pbVar15;
                    if (bVar3) {
                      uVar13 = (uint)pbVar6[2];
                      pbVar1 = pbVar6 + 2;
                      if (((uVar13 & 0xffffffc0) == 0x80) &&
                         (uVar10 = uVar13 & 0x3f | uVar10 << 6, pbVar1 = pbVar15, bVar4)) {
                        uVar13 = (uint)pbVar6[3];
                        pbVar1 = pbVar6 + 3;
                        if ((uVar13 & 0xffffffc0) == 0x80) {
                          uVar10 = uVar10 << 6 | uVar13 & 0x3f;
                          pbVar1 = pbVar15;
                        }
                      }
                    }
                  }
                }
              }
              pbVar6 = pbVar1;
              if (uVar10 == 0) break;
              lVar16 = 1;
              if ((0x7f < uVar10) && (lVar16 = 2, 0x7ff < uVar10)) {
                lVar16 = 4 - (ulong)(uVar10 < 0x10000);
              }
              lVar12 = lVar12 + lVar16;
            }
                    /* try { // try from 004b3b45 to 004b3b4d has its CatchHandler @ 004b3cb5 */
            (*(code *)local_78[5])(&local_78,local_80,lVar12);
            pbVar18 = pbVar18 + -0x10;
            if (pbVar18 != (byte *)&emptyString) {
              LOCK();
              iVar5 = *(int *)pbVar18;
              *(int *)pbVar18 = *(int *)pbVar18 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                operator_delete__(pbVar18);
              }
            }
            pXVar17 = *(XmlElement **)pXVar17;
          } while (pXVar17 != (XmlElement *)0x0);
        }
        if (local_68 == (long *)0x0) {
          local_68 = local_50;
        }
        else if (local_40 < (ulong)local_68[1]) {
          *(undefined1 *)(*local_68 + local_40) = 0;
        }
        __src = (char *)*local_68;
        __dest = (undefined4 *)&DAT_0061ac58;
        if ((__src != (char *)0x0) && (*__src != '\0')) {
          uVar14 = local_40 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004b3c01 to 004b3c05 has its CatchHandler @ 004b3c94 */
          puVar9 = operator_new__(uVar14 + 0x17);
          LOCK();
          *puVar9 = 0;
          UNLOCK();
          *(ulong *)(puVar9 + 2) = uVar14;
          __dest = puVar9 + 4;
          memcpy(__dest,__src,local_40);
          *(undefined1 *)((long)puVar9 + local_40 + 0x10) = 0;
        }
        *param_1 = (long)__dest;
        local_78 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004b3c3e to 004b3c47 has its CatchHandler @ 004b3c96 */
        MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_78);
        free(local_60);
        local_78 = &PTR__OutputStream_00713440;
        piVar8 = (int *)(local_70 + -0x10);
        if (piVar8 == &emptyString) {
          return;
        }
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          operator_delete__(piVar8);
          return;
        }
        return;
      }
      iVar5 = 1;
      pXVar11 = pXVar17;
      do {
        pXVar11 = *(XmlElement **)pXVar11;
        iVar5 = iVar5 + -1;
      } while (pXVar11 != (XmlElement *)0x0);
      if (iVar5 != 0) goto LAB_004b39c0;
      param_2 = pXVar17;
    } while (**(char **)(pXVar17 + 0x18) != '\0');
  }
  plVar7 = getText(pXVar17);
  lVar12 = *plVar7;
  *param_1 = lVar12;
  piVar8 = (int *)(lVar12 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  return;
}


