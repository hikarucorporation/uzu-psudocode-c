// Function : sanitiseLevels
// Namespace: juce:EdgeTable
// Entry    : 002ee1e0
// Prototype: undefined sanitiseLevels(EdgeTable * this, char param_1)
// Body     : 002ee1e0 - 002ee593


/* juce::EdgeTable::sanitiseLevels(bool) */

void __thiscall juce::EdgeTable::sanitiseLevels(EdgeTable *this,char param_1)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*__src) [16];
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  if (0 < *(int *)(this + 0x1c)) {
    puVar17 = *(uint **)this;
    iVar6 = *(int *)(this + 0x1c);
    do {
      uVar24 = *puVar17;
      uVar25 = (ulong)uVar24;
      if (0 < (int)uVar24) {
        __src = (undefined1 (*) [16])(puVar17 + 1);
        pauVar23 = (undefined1 (*) [16])(puVar17 + uVar25 * 2 + 1);
        if (uVar25 != 0) {
          lVar27 = (long)pauVar23 - (long)__src;
          uVar22 = 0x3f;
          if (lVar27 >> 3 != 0) {
            for (; (ulong)(lVar27 >> 3) >> uVar22 == 0; uVar22 = uVar22 - 1) {
            }
          }
          std::__introsort_loop<juce::EdgeTable::LineItem*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (__src,pauVar23,(uVar22 ^ 0x3f) * 2 ^ 0x7e);
          if (lVar27 < 0x81) {
            pauVar13 = (undefined1 (*) [16])(puVar17 + 3);
            if (pauVar23 != pauVar13) {
              uVar22 = 8;
              pauVar11 = __src;
              do {
                uVar4 = *(undefined8 *)*pauVar13;
                if (*(int *)*pauVar13 < *(int *)*__src) {
                  if (0 < (long)pauVar13 - (long)__src) {
                    lVar27 = 1;
                    do {
                      *(undefined8 *)(*pauVar11 + lVar27 * 8) =
                           *(undefined8 *)(pauVar11[-1] + lVar27 * 8 + 8);
                      lVar26 = (uVar22 >> 3) + lVar27;
                      lVar27 = lVar27 + -1;
                    } while (1 < lVar26 - 1U);
                  }
                  pauVar9 = __src;
                }
                else {
                  iVar16 = (int)uVar4;
                  pauVar9 = pauVar13;
                  if (iVar16 < *(int *)*pauVar11) {
                    pauVar10 = pauVar13;
                    do {
                      pauVar9 = (undefined1 (*) [16])(pauVar10[-1] + 8);
                      *(undefined8 *)*pauVar10 = *(undefined8 *)(pauVar10[-1] + 8);
                      pauVar1 = pauVar10 + -1;
                      pauVar10 = pauVar9;
                    } while (iVar16 < *(int *)*pauVar1);
                  }
                }
                *(undefined8 *)*pauVar9 = uVar4;
                pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
                uVar22 = uVar22 + 8;
                pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
              } while (pauVar13 != pauVar23);
            }
          }
          else {
            lVar26 = 1;
            lVar28 = 0;
            pauVar13 = __src;
            pauVar11 = (undefined1 (*) [16])(puVar17 + 3);
            do {
              lVar3 = lVar26 * 8;
              uVar4 = *(undefined8 *)(*__src + lVar26 * 8);
              if (*(int *)(*__src + lVar26 * 8) < *(int *)*__src) {
                memmove((undefined1 (*) [16])(puVar17 + 3),__src,lVar28 * 8 + 8);
                pauVar9 = __src;
              }
              else {
                iVar16 = (int)uVar4;
                pauVar9 = (undefined1 (*) [16])(*__src + lVar3);
                if (iVar16 < *(int *)*pauVar13) {
                  pauVar13 = pauVar11;
                  do {
                    pauVar9 = (undefined1 (*) [16])(pauVar13[-1] + 8);
                    *(undefined8 *)*pauVar13 = *(undefined8 *)(pauVar13[-1] + 8);
                    pauVar10 = pauVar13 + -1;
                    pauVar13 = pauVar9;
                  } while (iVar16 < *(int *)*pauVar10);
                }
              }
              *(undefined8 *)*pauVar9 = uVar4;
              lVar26 = lVar26 + 1;
              lVar28 = lVar28 + 1;
              pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
              pauVar13 = (undefined1 (*) [16])(*__src + lVar3);
            } while (lVar26 != 0x10);
            pauVar13 = (undefined1 (*) [16])(puVar17 + 0x21);
            if (pauVar23 != pauVar13) {
              if ((lVar27 - 0x88U & 8) == 0) {
                uVar4 = *(undefined8 *)(puVar17 + 0x21);
                uVar8 = puVar17[0x1f];
                while ((int)uVar4 < (int)uVar8) {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)((long)pauVar13[-1] + 8);
                  uVar8 = *(uint *)pauVar13[-1];
                  pauVar13 = (undefined1 (*) [16])((long)pauVar13[-1] + 8);
                }
                *(undefined8 *)*pauVar13 = uVar4;
                pauVar13 = (undefined1 (*) [16])(puVar17 + 0x23);
              }
              if (7 < lVar27 - 0x88U) {
                puVar14 = (uint *)((long)*pauVar13 + 8);
                do {
                  uVar4 = *(undefined8 *)*pauVar13;
                  iVar16 = (int)uVar4;
                  pauVar11 = pauVar13;
                  if (iVar16 < (int)*(uint *)((long)pauVar13[-1] + 8)) {
                    pauVar9 = pauVar13;
                    do {
                      pauVar11 = (undefined1 (*) [16])((long)pauVar9[-1] + 8);
                      *(undefined8 *)*pauVar9 = *(undefined8 *)((long)pauVar9[-1] + 8);
                      pauVar10 = pauVar9 + -1;
                      pauVar9 = pauVar11;
                    } while (iVar16 < (int)*(uint *)*pauVar10);
                  }
                  *(undefined8 *)*pauVar11 = uVar4;
                  uVar4 = *(undefined8 *)((long)*pauVar13 + 8);
                  iVar16 = (int)uVar4;
                  if (iVar16 < (int)*(uint *)*pauVar13) {
                    puVar12 = puVar14;
                    do {
                      puVar21 = puVar12 + -2;
                      *(undefined8 *)puVar12 = *(undefined8 *)(puVar12 + -2);
                      puVar2 = puVar12 + -4;
                      puVar12 = puVar21;
                    } while (iVar16 < (int)*puVar2);
                  }
                  else {
                    puVar21 = (uint *)((long)*pauVar13 + 8);
                  }
                  *(undefined8 *)puVar21 = uVar4;
                  pauVar13 = pauVar13 + 1;
                  puVar14 = puVar14 + 4;
                } while (pauVar13 != pauVar23);
              }
            }
          }
        }
        pauVar13 = __src;
        if (__src < pauVar23) {
          uVar8 = 0;
          do {
            uVar8 = uVar8 + *(int *)(*__src + 4);
            puVar7 = *__src;
            while( true ) {
              __src = (undefined1 (*) [16])(*__src + 8);
              uVar24 = (uint)uVar25;
              if ((pauVar23 <= __src) || (*(int *)*__src != *(int *)puVar7)) break;
              uVar8 = uVar8 + *(int *)(*__src + 4);
              uVar25 = (ulong)(uVar24 - 1);
            }
            uVar20 = -uVar8;
            if ((int)-uVar8 < 0) {
              uVar20 = uVar8;
            }
            uVar15 = 0xff;
            if (uVar20 < 0x100) {
              uVar15 = uVar20;
            }
            uVar18 = uVar20 & 0x1ff;
            uVar19 = uVar18 ^ 0x1ff;
            if (uVar18 < 0x100) {
              uVar19 = uVar18;
            }
            if (param_1 != '\0') {
              uVar19 = uVar15;
            }
            if (uVar20 < 0x100) {
              uVar19 = uVar15;
            }
            *(int *)*pauVar13 = *(int *)puVar7;
            *(uint *)(*pauVar13 + 4) = uVar19;
            pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
          } while (__src < pauVar23);
        }
        *puVar17 = uVar24;
        *(undefined4 *)(pauVar13[-1] + 0xc) = 0;
      }
      puVar17 = puVar17 + *(int *)(this + 0x24);
      bVar5 = 1 < iVar6;
      iVar6 = iVar6 + -1;
    } while (bVar5);
  }
  return;
}


