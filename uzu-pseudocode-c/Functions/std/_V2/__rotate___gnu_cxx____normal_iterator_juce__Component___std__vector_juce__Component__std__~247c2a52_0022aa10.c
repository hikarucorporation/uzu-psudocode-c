// Function : __rotate<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>>
// Namespace: std:_V2
// Entry    : 0022aa10
// Prototype: undefined8 * __rotate<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>>(undefined8 * param_1, undefined8 * param_2, undefined8 * param_3)
// Body     : 0022aa10 - 0022b025


/* WARNING: Removing unreachable block (ram,0x0022ae86) */
/* WARNING: Removing unreachable block (ram,0x0022ae79) */
/* WARNING: Removing unreachable block (ram,0x0022b024) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >
   std::_V2::__rotate<__gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > > >(__gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   std::random_access_iterator_tag) */

undefined8 * __cdecl
std::_V2::
__rotate<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  
  if (param_1 == param_2) {
    return param_3;
  }
  if ((long)param_3 - (long)param_2 == 0) {
    return param_1;
  }
  uVar19 = (long)param_3 - (long)param_1 >> 3;
  lVar12 = (long)param_2 - (long)param_1;
  if (uVar19 != lVar12 >> 2) {
    puVar18 = (undefined8 *)(((long)param_3 - (long)param_2) + (long)param_1);
    uVar10 = lVar12 >> 3;
    do {
      while( true ) {
        uVar16 = uVar10;
        uVar15 = uVar19 - uVar16;
        if ((long)uVar15 <= (long)uVar16) break;
        if (uVar16 == 1) {
          uVar1 = *param_1;
          if (1 < (long)uVar19) {
            memmove(param_1,param_1 + 1,
                    (uVar19 + 0x1ffffffffffffffe +
                    (ulong)((uVar19 + 0x1fffffffffffffff & 0x1fffffffffffffff) == 0)) * 8 + 8);
          }
          param_1[uVar19 - 1] = uVar1;
          return puVar18;
        }
        if (0 < (long)uVar15) {
          puVar9 = param_1 + uVar16;
          if ((uVar15 < 4) || ((param_1 < param_1 + uVar19 && (puVar9 < param_1 + uVar15)))) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar15 & 0xfffffffffffffffc;
            uVar17 = (uVar10 - 4 >> 2) + 1;
            if (uVar10 - 4 == 0) {
              lVar12 = 0;
LAB_0022ad4c:
              uVar1 = param_1[lVar12];
              uVar3 = (param_1 + lVar12)[1];
              uVar4 = param_1[lVar12 + 2];
              uVar5 = (param_1 + lVar12 + 2)[1];
              uVar6 = (puVar9 + lVar12)[1];
              uVar7 = puVar9[lVar12 + 2];
              uVar8 = (puVar9 + lVar12 + 2)[1];
              param_1[lVar12] = puVar9[lVar12];
              (param_1 + lVar12)[1] = uVar6;
              param_1[lVar12 + 2] = uVar7;
              (param_1 + lVar12 + 2)[1] = uVar8;
              puVar9[lVar12] = uVar1;
              (puVar9 + lVar12)[1] = uVar3;
              puVar9[lVar12 + 2] = uVar4;
              (puVar9 + lVar12 + 2)[1] = uVar5;
            }
            else {
              uVar14 = uVar17 & 0x7ffffffffffffffe;
              lVar12 = 0;
              do {
                uVar1 = param_1[lVar12];
                uVar3 = (param_1 + lVar12)[1];
                uVar4 = param_1[lVar12 + 2];
                uVar5 = (param_1 + lVar12 + 2)[1];
                uVar6 = (param_1 + uVar16 + lVar12)[1];
                uVar7 = param_1[uVar16 + lVar12 + 2];
                uVar8 = (param_1 + uVar16 + lVar12 + 2)[1];
                param_1[lVar12] = param_1[uVar16 + lVar12];
                (param_1 + lVar12)[1] = uVar6;
                param_1[lVar12 + 2] = uVar7;
                (param_1 + lVar12 + 2)[1] = uVar8;
                param_1[uVar16 + lVar12] = uVar1;
                (param_1 + uVar16 + lVar12)[1] = uVar3;
                param_1[uVar16 + lVar12 + 2] = uVar4;
                (param_1 + uVar16 + lVar12 + 2)[1] = uVar5;
                uVar1 = param_1[lVar12 + 4];
                uVar3 = (param_1 + lVar12 + 4)[1];
                uVar4 = param_1[lVar12 + 6];
                uVar5 = (param_1 + lVar12 + 6)[1];
                uVar6 = (param_1 + uVar16 + lVar12 + 4)[1];
                uVar7 = param_1[uVar16 + lVar12 + 6];
                uVar8 = (param_1 + uVar16 + lVar12 + 6)[1];
                param_1[lVar12 + 4] = param_1[uVar16 + lVar12 + 4];
                (param_1 + lVar12 + 4)[1] = uVar6;
                param_1[lVar12 + 6] = uVar7;
                (param_1 + lVar12 + 6)[1] = uVar8;
                param_1[uVar16 + lVar12 + 4] = uVar1;
                (param_1 + uVar16 + lVar12 + 4)[1] = uVar3;
                param_1[uVar16 + lVar12 + 6] = uVar4;
                (param_1 + uVar16 + lVar12 + 6)[1] = uVar5;
                lVar12 = lVar12 + 8;
                uVar14 = uVar14 - 2;
              } while (uVar14 != 0);
              if ((uVar17 & 1) != 0) goto LAB_0022ad4c;
            }
            param_1 = param_1 + uVar10;
            if (uVar15 == uVar10) goto LAB_0022ab1b;
            puVar9 = puVar9 + uVar10;
          }
          lVar12 = 0;
          do {
            uVar1 = *param_1;
            *param_1 = puVar9[lVar12];
            puVar9[lVar12] = uVar1;
            param_1 = param_1 + 1;
            lVar12 = lVar12 + 1;
          } while ((uVar19 - uVar10) - uVar16 != lVar12);
        }
LAB_0022ab1b:
        if ((uVar19 | uVar16) >> 0x20 == 0) {
          uVar19 = (uVar19 & 0xffffffff) % (uVar16 & 0xffffffff);
        }
        else {
          uVar19 = (long)uVar19 % (long)uVar16;
        }
        if (uVar19 == 0) {
          return puVar18;
        }
        uVar10 = uVar16 - uVar19;
        uVar19 = uVar16;
      }
      puVar9 = param_1 + uVar19;
      if (uVar15 == 1) {
        uVar1 = puVar9[-1];
        puVar9 = puVar9 + -1;
        if (0 < (long)puVar9 - (long)param_1) {
          uVar19 = ((ulong)((long)puVar9 - (long)param_1) >> 3) + 1;
          do {
            *puVar9 = puVar9[-1];
            puVar9 = puVar9 + -1;
            uVar19 = uVar19 - 1;
          } while (1 < uVar19);
        }
        *param_1 = uVar1;
        return puVar18;
      }
      puVar13 = puVar9 + -uVar15;
      if ((long)uVar16 < 1) {
        param_1 = puVar13;
      }
      else {
        if (uVar16 < 4) {
LAB_0022abd0:
          uVar10 = 0;
        }
        else {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar16 - 1;
          lVar12 = SUB168(auVar2 * ZEXT816(8),0);
          if ((((param_1 + (uVar16 - 1) < (undefined8 *)((long)(param_1 + (uVar16 - 1)) - lVar12))
               || (param_1 + (uVar19 - 1) < (undefined8 *)((long)(param_1 + (uVar19 - 1)) - lVar12))
               ) || (SUB168(auVar2 * ZEXT816(8),8) != 0)) ||
             ((param_1 < puVar9 && (param_1 + uVar15 < puVar13)))) goto LAB_0022abd0;
          uVar10 = uVar16 & 0xfffffffffffffffc;
          uVar17 = (uVar10 - 4 >> 2) + 1;
          if (uVar10 - 4 == 0) {
            lVar12 = 0;
LAB_0022ae21:
            uVar1 = puVar13[-4 - lVar12];
            uVar3 = puVar13[-3 - lVar12];
            uVar4 = puVar13[-2 - lVar12];
            uVar5 = puVar13[-1 - lVar12];
            uVar6 = puVar9[-4 - lVar12];
            uVar7 = puVar9[-3 - lVar12];
            uVar8 = puVar9[-1 - lVar12];
            puVar13[-2 - lVar12] = puVar9[-2 - lVar12];
            puVar13[-1 - lVar12] = uVar8;
            puVar13[-4 - lVar12] = uVar6;
            puVar13[-3 - lVar12] = uVar7;
            puVar9[-2 - lVar12] = uVar4;
            puVar9[-1 - lVar12] = uVar5;
            puVar9[-4 - lVar12] = uVar1;
            puVar9[-3 - lVar12] = uVar3;
          }
          else {
            uVar14 = uVar17 & 0x7ffffffffffffffe;
            lVar12 = 0;
            do {
              uVar1 = param_1[uVar16 + lVar12 + -4];
              uVar3 = (param_1 + uVar16 + lVar12 + -4)[1];
              uVar4 = param_1[uVar16 + lVar12 + -2];
              uVar5 = (param_1 + uVar16 + lVar12 + -2)[1];
              uVar6 = param_1[uVar19 + lVar12 + -4];
              uVar7 = (param_1 + uVar19 + lVar12 + -4)[1];
              uVar8 = (param_1 + uVar19 + lVar12 + -2)[1];
              param_1[uVar16 + lVar12 + -2] = param_1[uVar19 + lVar12 + -2];
              (param_1 + uVar16 + lVar12 + -2)[1] = uVar8;
              param_1[uVar16 + lVar12 + -4] = uVar6;
              (param_1 + uVar16 + lVar12 + -4)[1] = uVar7;
              param_1[uVar19 + lVar12 + -2] = uVar4;
              (param_1 + uVar19 + lVar12 + -2)[1] = uVar5;
              param_1[uVar19 + lVar12 + -4] = uVar1;
              (param_1 + uVar19 + lVar12 + -4)[1] = uVar3;
              uVar1 = param_1[uVar16 + lVar12 + -8];
              uVar3 = (param_1 + uVar16 + lVar12 + -8)[1];
              uVar4 = param_1[uVar16 + lVar12 + -6];
              uVar5 = (param_1 + uVar16 + lVar12 + -6)[1];
              uVar6 = param_1[uVar19 + lVar12 + -8];
              uVar7 = (param_1 + uVar19 + lVar12 + -8)[1];
              uVar8 = (param_1 + uVar19 + lVar12 + -6)[1];
              param_1[uVar16 + lVar12 + -6] = param_1[uVar19 + lVar12 + -6];
              (param_1 + uVar16 + lVar12 + -6)[1] = uVar8;
              param_1[uVar16 + lVar12 + -8] = uVar6;
              (param_1 + uVar16 + lVar12 + -8)[1] = uVar7;
              param_1[uVar19 + lVar12 + -6] = uVar4;
              (param_1 + uVar19 + lVar12 + -6)[1] = uVar5;
              param_1[uVar19 + lVar12 + -8] = uVar1;
              (param_1 + uVar19 + lVar12 + -8)[1] = uVar3;
              lVar12 = lVar12 + -8;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            lVar12 = -lVar12;
            if ((uVar17 & 1) != 0) goto LAB_0022ae21;
          }
          if (uVar16 == uVar10) goto LAB_0022ac7e;
          puVar9 = puVar9 + -uVar10;
          puVar13 = puVar13 + -uVar10;
        }
        uVar17 = ~uVar10;
        uVar14 = uVar16 & 3;
        if (uVar14 != 0) {
          uVar11 = uVar14;
          do {
            uVar1 = puVar13[-1];
            puVar13[-1] = puVar9[-1];
            puVar13 = puVar13 + -1;
            puVar9[-1] = uVar1;
            puVar9 = puVar9 + -1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          uVar10 = uVar10 | uVar14;
        }
        if (2 < uVar17 + uVar16) {
          lVar12 = 0;
          do {
            uVar1 = puVar13[lVar12 + -1];
            puVar13[lVar12 + -1] = puVar9[lVar12 + -1];
            puVar9[lVar12 + -1] = uVar1;
            uVar1 = puVar13[lVar12 + -2];
            puVar13[lVar12 + -2] = puVar9[lVar12 + -2];
            puVar9[lVar12 + -2] = uVar1;
            uVar1 = puVar13[lVar12 + -3];
            puVar13[lVar12 + -3] = puVar9[lVar12 + -3];
            puVar9[lVar12 + -3] = uVar1;
            uVar1 = puVar13[lVar12 + -4];
            puVar13[lVar12 + -4] = puVar9[lVar12 + -4];
            puVar9[lVar12 + -4] = uVar1;
            lVar12 = lVar12 + -4;
          } while (uVar10 - uVar16 != lVar12);
        }
      }
LAB_0022ac7e:
      if ((uVar19 | uVar15) >> 0x20 == 0) {
        uVar10 = (uVar19 & 0xffffffff) % (uVar15 & 0xffffffff);
        uVar19 = uVar15;
        if (uVar10 == 0) {
          return puVar18;
        }
      }
      else {
        uVar10 = (long)uVar19 % (long)uVar15;
        uVar19 = uVar15;
        if (uVar10 == 0) {
          return puVar18;
        }
      }
    } while( true );
  }
  puVar18 = param_2;
  if ((lVar12 - 8U < 0x18) ||
     ((uVar19 = (lVar12 - 8U >> 3) + 1, param_1 < param_2 + uVar19 && (param_2 < param_1 + uVar19)))
     ) goto LAB_0022aff0;
  uVar16 = uVar19 & 0xfffffffffffffffc;
  uVar10 = (uVar16 - 4 >> 2) + 1;
  if (uVar16 - 4 == 0) {
    lVar12 = 0;
LAB_0022afba:
    uVar1 = param_1[lVar12];
    uVar3 = (param_1 + lVar12)[1];
    uVar4 = param_1[lVar12 + 2];
    uVar5 = (param_1 + lVar12 + 2)[1];
    uVar6 = (param_2 + lVar12)[1];
    uVar7 = param_2[lVar12 + 2];
    uVar8 = (param_2 + lVar12 + 2)[1];
    param_1[lVar12] = param_2[lVar12];
    (param_1 + lVar12)[1] = uVar6;
    param_1[lVar12 + 2] = uVar7;
    (param_1 + lVar12 + 2)[1] = uVar8;
    param_2[lVar12] = uVar1;
    (param_2 + lVar12)[1] = uVar3;
    param_2[lVar12 + 2] = uVar4;
    (param_2 + lVar12 + 2)[1] = uVar5;
  }
  else {
    uVar15 = uVar10 & 0xfffffffffffffffe;
    lVar12 = 0;
    do {
      uVar1 = param_1[lVar12];
      uVar3 = (param_1 + lVar12)[1];
      uVar4 = param_1[lVar12 + 2];
      uVar5 = (param_1 + lVar12 + 2)[1];
      uVar6 = (param_2 + lVar12)[1];
      uVar7 = param_2[lVar12 + 2];
      uVar8 = (param_2 + lVar12 + 2)[1];
      param_1[lVar12] = param_2[lVar12];
      (param_1 + lVar12)[1] = uVar6;
      param_1[lVar12 + 2] = uVar7;
      (param_1 + lVar12 + 2)[1] = uVar8;
      param_2[lVar12] = uVar1;
      (param_2 + lVar12)[1] = uVar3;
      param_2[lVar12 + 2] = uVar4;
      (param_2 + lVar12 + 2)[1] = uVar5;
      uVar1 = param_1[lVar12 + 4];
      uVar3 = (param_1 + lVar12 + 4)[1];
      uVar4 = param_1[lVar12 + 6];
      uVar5 = (param_1 + lVar12 + 6)[1];
      uVar6 = (param_2 + lVar12 + 4)[1];
      uVar7 = param_2[lVar12 + 6];
      uVar8 = (param_2 + lVar12 + 6)[1];
      param_1[lVar12 + 4] = param_2[lVar12 + 4];
      (param_1 + lVar12 + 4)[1] = uVar6;
      param_1[lVar12 + 6] = uVar7;
      (param_1 + lVar12 + 6)[1] = uVar8;
      param_2[lVar12 + 4] = uVar1;
      (param_2 + lVar12 + 4)[1] = uVar3;
      param_2[lVar12 + 6] = uVar4;
      (param_2 + lVar12 + 6)[1] = uVar5;
      lVar12 = lVar12 + 8;
      uVar15 = uVar15 - 2;
    } while (uVar15 != 0);
    if ((uVar10 & 1) != 0) goto LAB_0022afba;
  }
  if (uVar19 == uVar16) {
    return param_2;
  }
  puVar18 = param_2 + uVar16;
  param_1 = param_1 + uVar16;
LAB_0022aff0:
  do {
    uVar1 = *param_1;
    *param_1 = *puVar18;
    *puVar18 = uVar1;
    param_1 = param_1 + 1;
    puVar18 = puVar18 + 1;
  } while (param_1 != param_2);
  return param_2;
}


