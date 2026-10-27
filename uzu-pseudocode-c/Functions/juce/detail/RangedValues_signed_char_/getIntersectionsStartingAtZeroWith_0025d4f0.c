// Function : getIntersectionsStartingAtZeroWith
// Namespace: juce:detail:RangedValues_signed_char_
// Entry    : 0025d4f0
// Prototype: undefined getIntersectionsStartingAtZeroWith(Ranges * param_1, long * param_2, ulong param_3, long param_4)
// Body     : 0025d4f0 - 0025d8be


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::RangedValues<signed char>::getIntersectionsStartingAtZeroWith(juce::Range<long
   long>) const */

void __cdecl
juce::detail::RangedValues<signed_char>::getIntersectionsStartingAtZeroWith
          (Ranges *param_1,long *param_2,ulong param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  long *plVar18;
  bool bVar19;
  undefined1 local_a9;
  void *local_a8;
  long lStack_a0;
  undefined8 local_98;
  long *local_88;
  long *plStack_80;
  undefined8 local_78;
  ulong local_68;
  long *local_60;
  ulong *local_58;
  Ranges *local_50;
  ulong *local_48;
  ulong *local_40;
  
  local_a8 = (void *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  Ranges::getIntersectionsWith(&local_48,(long *)*param_2,(long *)param_2[1],param_3,param_4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  local_78 = 0;
  local_58 = local_40;
  if (local_48 != local_40) {
    local_50 = param_1 + 0x18;
    puVar17 = local_48;
    local_68 = param_3;
    local_60 = param_2;
    do {
      uVar9 = *puVar17;
      plVar12 = (long *)*local_60;
      uVar10 = local_60[1] - (long)plVar12;
      plVar18 = plVar12;
      if (0 < (long)uVar10) {
        uVar15 = uVar10 >> 4;
        do {
          uVar6 = uVar15 >> 1;
          uVar7 = uVar6;
          if (plVar18[uVar6 * 2 + 1] <= (long)uVar9) {
            uVar7 = ~uVar6 + uVar15;
            plVar18 = plVar18 + uVar6 * 2 + 2;
          }
          uVar15 = uVar7;
        } while (0 < (long)uVar7);
      }
      if ((plVar18 != (long *)local_60[1]) && (*plVar18 <= (long)uVar9)) {
        uVar10 = (long)plVar18 - (long)plVar12;
      }
      uVar2 = *(undefined1 *)(local_60[3] + ((long)uVar10 >> 4));
                    /* try { // try from 0025d611 to 0025d61d has its CatchHandler @ 0025d8de */
      Ranges::set(param_1,uVar9,puVar17[1],&local_88);
      if ((long)plStack_80 - (long)local_88 != 0) {
        plVar18 = (long *)(((long)plStack_80 - (long)local_88) + (long)local_88);
        plVar12 = local_88;
        do {
          local_a9 = uVar2;
          if ((char)plVar12[5] == '\0') {
            puVar8 = *(undefined1 **)(param_1 + 0x20);
            puVar14 = (undefined1 *)(*(long *)(param_1 + 0x18) + *plVar12);
            if (puVar8 == *(undefined1 **)(param_1 + 0x28)) {
              std::vector<signed_char,std::allocator<signed_char>>::_M_realloc_insert<signed_char>
                        ((vector<signed_char,std::allocator<signed_char>> *)local_50,puVar14,
                         &local_a9);
            }
            else if (puVar8 == puVar14) {
              *puVar14 = uVar2;
              *(undefined1 **)(param_1 + 0x20) = puVar14 + 1;
            }
            else {
              puVar1 = puVar8 + -1;
              *puVar8 = puVar8[-1];
              *(undefined1 **)(param_1 + 0x20) = puVar8 + 1;
              puVar11 = puVar1 + -(long)puVar14;
              if (0 < (long)puVar11) {
                puVar16 = puVar1 + ~(ulong)puVar14;
                if (((ulong)puVar11 & 7) != 0) {
                  uVar9 = 1;
                  puVar5 = puVar1;
                  do {
                    puVar8 = puVar5;
                    *puVar8 = puVar8[-1];
                    uVar10 = uVar9 + 1;
                    bVar19 = uVar9 != ((ulong)puVar11 & 7);
                    uVar9 = uVar10;
                    puVar5 = puVar8 + -1;
                  } while (bVar19);
                  puVar11 = puVar1 + (-uVar10 - (long)puVar14) + 1;
                  puVar1 = puVar8 + -1;
                }
                if ((undefined1 *)0x6 < puVar16) {
                  lVar13 = -1;
                  do {
                    puVar8[lVar13] = puVar1[lVar13];
                    puVar8[lVar13 + -1] = puVar1[lVar13 + -1];
                    puVar8[lVar13 + -2] = puVar1[lVar13 + -2];
                    puVar8[lVar13 + -3] = puVar1[lVar13 + -3];
                    puVar8[lVar13 + -4] = puVar1[lVar13 + -4];
                    puVar8[lVar13 + -5] = puVar1[lVar13 + -5];
                    puVar8[lVar13 + -6] = puVar1[lVar13 + -6];
                    puVar8[lVar13 + -7] = puVar1[lVar13 + -7];
                    lVar3 = lVar13 + -8;
                    lVar13 = lVar13 + -8;
                  } while (puVar11 + lVar3 < (undefined1 *)0xfffffffffffffffe);
                }
              }
              *puVar14 = uVar2;
            }
          }
          else {
                    /* try { // try from 0025d640 to 0025d719 has its CatchHandler @ 0025d8e0 */
            applyOperation((RangedValues<signed_char> *)param_1,plVar12);
          }
          plVar12 = plVar12 + 6;
        } while (plVar12 != plVar18);
      }
      if (plStack_80 != local_88) {
        plStack_80 = local_88;
      }
      puVar17 = puVar17 + 2;
    } while (puVar17 != local_58);
    if (local_88 != (long *)0x0) {
      operator_delete(local_88);
    }
    param_3 = local_68;
  }
  if (local_48 != (ulong *)0x0) {
    operator_delete(local_48);
  }
  if ((long)param_3 < 0) {
    param_3 = 0;
  }
                    /* try { // try from 0025d80f to 0025d836 has its CatchHandler @ 0025d8bf */
  Ranges::erase(param_1,0,param_3,&local_a8);
  Ranges::shift(param_1,param_3,-param_3,&local_a8);
  pvVar4 = local_a8;
  if (lStack_a0 - (long)local_a8 != 0) {
    uVar9 = SUB168(SEXT816(lStack_a0 - (long)local_a8) * SEXT816(0x2aaaaaaaaaaaaaab),8);
    lVar13 = 0;
    do {
                    /* try { // try from 0025d874 to 0025d87b has its CatchHandler @ 0025d8c9 */
      applyOperation((RangedValues<signed_char> *)param_1,(long *)((long)pvVar4 + lVar13));
      lVar13 = lVar13 + 0x30;
    } while (((uVar9 >> 3) - ((long)uVar9 >> 0x3f)) * 0x30 != lVar13);
  }
                    /* try { // try from 0025d885 to 0025d893 has its CatchHandler @ 0025d8bf */
  mergeEqualItems((RangedValues<signed_char> *)param_1,0,(long *)&local_a8);
  if (local_a8 == (void *)0x0) {
    return;
  }
  operator_delete(local_a8);
  return;
}


