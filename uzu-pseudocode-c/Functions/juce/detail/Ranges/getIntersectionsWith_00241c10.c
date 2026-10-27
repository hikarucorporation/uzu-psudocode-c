// Function : getIntersectionsWith
// Namespace: juce:detail:Ranges
// Entry    : 00241c10
// Prototype: undefined getIntersectionsWith(undefined8 * param_1, long * param_2, long * param_3, long param_4, long param_5)
// Body     : 00241c10 - 00241e29


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::Ranges::getIntersectionsWith(juce::Range<long long>) const */

void __cdecl
juce::detail::Ranges::getIntersectionsWith
          (undefined8 *param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5 = param_2;
  if (0 < (long)param_3 - (long)param_2) {
    uVar7 = (ulong)((long)param_3 - (long)param_2) >> 4;
    do {
      uVar3 = uVar7 >> 1;
      uVar4 = uVar3;
      if (param_2[uVar3 * 2 + 1] <= param_4) {
        uVar4 = ~uVar3 + uVar7;
        param_2 = param_2 + uVar3 * 2 + 2;
      }
      uVar7 = uVar4;
    } while (0 < (long)uVar4);
    plVar5 = param_2;
    if (0 < (long)param_3 - (long)param_2) {
      uVar7 = (ulong)((long)param_3 - (long)param_2) >> 4;
      do {
        uVar3 = uVar7 >> 1;
        uVar4 = uVar3;
        if (plVar5[uVar3 * 2 + 1] < param_5) {
          uVar4 = ~uVar3 + uVar7;
          plVar5 = plVar5 + uVar3 * 2 + 2;
        }
        uVar7 = uVar4;
      } while (0 < (long)uVar4);
      goto LAB_00241cbb;
    }
  }
  param_2 = plVar5;
LAB_00241cbb:
  if (param_2 != plVar5 + (ulong)(plVar5 != param_3) * 2) {
    plVar12 = (long *)0x0;
    do {
      lVar13 = *param_2;
      if (*param_2 < param_4) {
        lVar13 = param_4;
      }
      lVar11 = param_2[1];
      if (param_5 < param_2[1]) {
        lVar11 = param_5;
      }
      if (lVar13 < lVar11) {
        if (plVar12 == (long *)param_1[2]) {
          plVar1 = (long *)*param_1;
          lVar6 = (long)plVar12 - (long)plVar1;
          if (lVar6 == 0x7ffffffffffffff0) {
                    /* try { // try from 00241e1e to 00241e29 has its CatchHandler @ 00241e2a */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar4 = lVar6 >> 4;
          uVar7 = uVar4;
          if (lVar6 == 0) {
            uVar7 = 1;
          }
          uVar3 = uVar7 + uVar4;
          if (0x7ffffffffffffff < uVar3) {
            uVar3 = 0x7ffffffffffffff;
          }
          if (CARRY8(uVar7,uVar4)) {
            uVar3 = 0x7ffffffffffffff;
          }
                    /* try { // try from 00241d82 to 00241d89 has its CatchHandler @ 00241e2c */
          plVar8 = operator_new(uVar3 * 0x10);
          plVar8[uVar4 * 2] = lVar13;
          plVar8[uVar4 * 2 + 1] = lVar11;
          if (plVar1 == plVar12) {
            plVar12 = plVar8 + 2;
          }
          else {
            plVar9 = plVar1;
            plVar2 = plVar8;
            do {
              plVar10 = plVar2;
              lVar13 = plVar9[1];
              *plVar10 = *plVar9;
              plVar10[1] = lVar13;
              plVar9 = plVar9 + 2;
              plVar2 = plVar10 + 2;
            } while (plVar9 != plVar12);
            plVar12 = plVar10 + 4;
          }
          if (plVar1 != (long *)0x0) {
            operator_delete(plVar1);
          }
          *param_1 = plVar8;
          param_1[1] = plVar12;
          param_1[2] = plVar8 + uVar3 * 2;
        }
        else {
          *plVar12 = lVar13;
          plVar12[1] = lVar11;
          plVar12 = plVar12 + 2;
          param_1[1] = plVar12;
        }
      }
      param_2 = param_2 + 2;
    } while (param_2 != plVar5 + (ulong)(plVar5 != param_3) * 2);
  }
  return;
}


