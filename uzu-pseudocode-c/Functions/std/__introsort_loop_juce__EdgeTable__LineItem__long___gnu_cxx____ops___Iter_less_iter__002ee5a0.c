// Function : __introsort_loop<juce::EdgeTable::LineItem*,long,__gnu_cxx::__ops::_Iter_less_iter>
// Namespace: std
// Entry    : 002ee5a0
// Prototype: void __introsort_loop<juce::EdgeTable::LineItem*,long,__gnu_cxx::__ops::_Iter_less_iter>(undefined1[16] * param_1, undefined1[16] * param_2, long param_3)
// Body     : 002ee5a0 - 002ee9fa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__introsort_loop<juce::EdgeTable::LineItem*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(juce::EdgeTable::LineItem*, juce::EdgeTable::LineItem*, long,
   __gnu_cxx::__ops::_Iter_less_iter) */

void __cdecl
std::__introsort_loop<juce::EdgeTable::LineItem*,long,__gnu_cxx::__ops::_Iter_less_iter>
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  
  uVar16 = (long)param_2 - (long)param_1;
  if (0x80 < (long)uVar16) {
    do {
      bVar20 = param_3 == 0;
      param_3 = param_3 + -1;
      if (bVar20) {
        uVar16 = (long)param_2 - (long)param_1;
        if (0xf < (long)uVar16) {
          lVar11 = (long)uVar16 >> 3;
          lVar19 = (lVar11 - (lVar11 + -2 >> 0x3f)) + -2 >> 1;
          lVar11 = (lVar11 - (lVar11 + -1 >> 0x3f)) + -1 >> 1;
          if ((uVar16 & 8) == 0) {
            lVar14 = lVar19;
            do {
              uVar5 = *(undefined8 *)(*param_1 + lVar14 * 8);
              lVar9 = lVar14;
              if (lVar14 < lVar11) {
                lVar17 = lVar14;
                do {
                  if (*(int *)param_1[lVar17 + 1] < *(int *)(param_1[lVar17] + 8)) {
                    lVar9 = lVar17 * 2 + 1;
                  }
                  else {
                    lVar9 = lVar17 * 2 + 2;
                  }
                  *(undefined8 *)(*param_1 + lVar17 * 8) = *(undefined8 *)(*param_1 + lVar9 * 8);
                  lVar17 = lVar9;
                } while (lVar9 < lVar11);
              }
              if (lVar9 == lVar19) {
                *(undefined8 *)(*param_1 + lVar19 * 8) = *(undefined8 *)(param_1[lVar19] + 8);
                lVar9 = lVar19 * 2 + 1;
              }
              if (lVar14 < lVar9) {
                do {
                  lVar17 = (lVar9 - (lVar9 + -1 >> 0x3f)) + -1 >> 1;
                  if ((int)uVar5 <= *(int *)(*param_1 + lVar17 * 8)) goto LAB_002ee760;
                  *(undefined8 *)(*param_1 + lVar9 * 8) = *(undefined8 *)(*param_1 + lVar17 * 8);
                  lVar9 = lVar17;
                } while (lVar14 < lVar17);
              }
              else {
LAB_002ee760:
                lVar17 = lVar9;
              }
              *(undefined8 *)(*param_1 + lVar17 * 8) = uVar5;
              bVar20 = lVar14 != 0;
              lVar14 = lVar14 + -1;
            } while (bVar20);
          }
          else {
            do {
              uVar5 = *(undefined8 *)(*param_1 + lVar19 * 8);
              lVar14 = lVar19;
              if (lVar19 < lVar11) {
                do {
                  if (*(int *)param_1[lVar14 + 1] < *(int *)(param_1[lVar14] + 8)) {
                    lVar9 = lVar14 * 2 + 1;
                  }
                  else {
                    lVar9 = lVar14 * 2 + 2;
                  }
                  *(undefined8 *)(*param_1 + lVar14 * 8) = *(undefined8 *)(*param_1 + lVar9 * 8);
                  lVar14 = lVar9;
                } while (lVar9 < lVar11);
                if (lVar19 < lVar9) {
                  do {
                    lVar14 = (lVar9 - (lVar9 + -1 >> 0x3f)) + -1 >> 1;
                    if ((int)uVar5 <= *(int *)(*param_1 + lVar14 * 8)) goto LAB_002ee830;
                    *(undefined8 *)(*param_1 + lVar9 * 8) = *(undefined8 *)(*param_1 + lVar14 * 8);
                    lVar9 = lVar14;
                  } while (lVar19 < lVar14);
                }
                else {
LAB_002ee830:
                  lVar14 = lVar9;
                }
              }
              *(undefined8 *)(*param_1 + lVar14 * 8) = uVar5;
              bVar20 = lVar19 != 0;
              lVar19 = lVar19 + -1;
            } while (bVar20);
          }
        }
        do {
          uVar5 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = *(undefined8 *)*param_1;
          param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
          uVar16 = (long)param_2 - (long)param_1;
          lVar11 = (long)uVar16 >> 3;
          if ((long)uVar16 < 0x11) {
            uVar15 = 0;
          }
          else {
            uVar12 = 0;
            do {
              if (*(int *)param_1[uVar12 + 1] < *(int *)(param_1[uVar12] + 8)) {
                uVar15 = uVar12 * 2 + 1;
              }
              else {
                uVar15 = uVar12 * 2 + 2;
              }
              *(undefined8 *)(*param_1 + uVar12 * 8) = *(undefined8 *)(*param_1 + uVar15 * 8);
              uVar12 = uVar15;
            } while ((long)uVar15 < (lVar11 - (lVar11 + -1 >> 0x3f)) + -1 >> 1);
          }
          if (((uVar16 & 8) == 0) && (uVar15 == (lVar11 - (lVar11 + -2 >> 0x3f)) + -2 >> 1)) {
            *(undefined8 *)(*param_1 + uVar15 * 8) = *(undefined8 *)(param_1[uVar15] + 8);
            uVar15 = uVar15 * 2 + 1;
          }
          if (0 < (long)uVar15) {
            do {
              uVar12 = uVar15 - 1;
              uVar18 = uVar12 >> 1;
              if ((int)uVar5 <= *(int *)(*param_1 + uVar18 * 8)) goto LAB_002ee8f0;
              *(undefined8 *)(*param_1 + uVar15 * 8) = *(undefined8 *)(*param_1 + uVar18 * 8);
              uVar15 = uVar18;
            } while (1 < uVar12);
            uVar15 = 0;
          }
LAB_002ee8f0:
          *(undefined8 *)(*param_1 + uVar15 * 8) = uVar5;
          if ((long)uVar16 < 9) {
            return;
          }
        } while( true );
      }
      uVar16 = uVar16 >> 4;
      iVar2 = *(int *)(*param_1 + 8);
      iVar3 = *(int *)(*param_1 + uVar16 * 8);
      iVar4 = *(int *)(param_2[-1] + 8);
      if (iVar2 < iVar3) {
        if (iVar3 < iVar4) {
          uVar5 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + uVar16 * 8);
          *(undefined8 *)(*param_1 + uVar16 * 8) = uVar5;
        }
        else {
          uVar5 = *(undefined8 *)*param_1;
          if (iVar2 < iVar4) {
            *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
            *(undefined8 *)(param_2[-1] + 8) = uVar5;
          }
          else {
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = uVar5;
          }
        }
      }
      else if (iVar2 < iVar4) {
        auVar1 = *param_1;
        auVar21._8_4_ = auVar1._0_4_;
        auVar21._0_8_ = auVar1._8_8_;
        auVar21._12_4_ = auVar1._4_4_;
        *param_1 = auVar21;
      }
      else {
        uVar5 = *(undefined8 *)*param_1;
        if (iVar3 < iVar4) {
          *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar5;
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + uVar16 * 8);
          *(undefined8 *)(*param_1 + uVar16 * 8) = uVar5;
        }
      }
      pauVar7 = param_2;
      pauVar10 = (undefined1 (*) [16])(*param_1 + 8);
      while( true ) {
        uVar16 = (long)pauVar10 + (-8 - (long)param_1);
        pauVar13 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        do {
          pauVar10 = pauVar13;
          pauVar13 = (undefined1 (*) [16])(*pauVar10 + 8);
          uVar16 = uVar16 + 8;
        } while (*(int *)(*pauVar10 + 8) < *(int *)*param_1);
        pauVar10 = pauVar10 + 1;
        pauVar8 = pauVar7;
        do {
          pauVar7 = (undefined1 (*) [16])(pauVar8[-1] + 8);
          pauVar6 = pauVar8 + -1;
          pauVar8 = pauVar7;
        } while (*(int *)*param_1 < *(int *)(*pauVar6 + 8));
        if (pauVar7 <= pauVar13) break;
        uVar5 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar7;
        *(undefined8 *)*pauVar7 = uVar5;
      }
      __introsort_loop<juce::EdgeTable::LineItem*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (pauVar13,param_2,param_3);
      param_2 = pauVar13;
    } while (0x80 < (long)uVar16);
  }
  return;
}


