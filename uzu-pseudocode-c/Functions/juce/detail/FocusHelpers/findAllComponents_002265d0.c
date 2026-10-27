// Function : findAllComponents
// Namespace: juce:detail:FocusHelpers
// Entry    : 002265d0
// Prototype: undefined findAllComponents(long param_1, vector<juce::Component*,std::allocator<juce::Component*>> * param_2, undefined * param_3, int param_4)
// Body     : 002265d0 - 00226a35


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::FocusHelpers::findAllComponents(juce::Component const*,
   std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool (juce::Component::*)()
   const, juce::FocusTraverser::SkipDisabledComponents) */

void __cdecl
juce::detail::FocusHelpers::findAllComponents
          (long param_1,vector<juce::Component*,std::allocator<juce::Component*>> *param_2,
          undefined *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  vector<juce::Component*,std::allocator<juce::Component*>> *this;
  code *pcVar10;
  char cVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *local_60;
  long *local_58;
  vector<juce::Component*,std::allocator<juce::Component*>> *local_50;
  code *local_48;
  long *local_40;
  ulong local_38;
  
  if ((param_1 != 0) && ((long)*(int *)(param_1 + 100) != 0)) {
    plVar23 = *(long **)(param_1 + 0x58);
    plVar15 = plVar23 + *(int *)(param_1 + 100);
    plVar20 = (long *)0x0;
    plVar18 = (long *)0x0;
    plVar12 = (long *)0x0;
    local_50 = param_2;
    local_48 = (code *)param_3;
    local_40 = plVar15;
    do {
      lVar19 = *plVar23;
      if ((*(uint3 *)(lVar19 + 0xe8) & 2) != 0) {
        if ((*(uint3 *)(lVar19 + 0xe8) & 0x8000) == 0) {
          lVar21 = lVar19;
          do {
            lVar21 = *(long *)(lVar21 + 0x30);
            if (lVar21 == 0) goto LAB_0022668c;
          } while ((*(ushort *)(lVar21 + 0xe8) & 0x8000) == 0);
        }
        if (param_4 == 0) {
LAB_0022668c:
          if (plVar18 == plVar12) {
            lVar21 = (long)plVar18 - (long)plVar20;
            if (lVar21 == 0x7ffffffffffffff8) {
                    /* try { // try from 00226a2a to 00226a35 has its CatchHandler @ 00226a38 */
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            uVar17 = lVar21 >> 3;
            uVar13 = uVar17;
            if (lVar21 == 0) {
              uVar13 = 1;
            }
            local_38 = uVar13 + uVar17;
            if (0xfffffffffffffff < local_38) {
              local_38 = 0xfffffffffffffff;
            }
            if (CARRY8(uVar13,uVar17)) {
              local_38 = 0xfffffffffffffff;
            }
            local_58 = plVar18;
            if (local_38 == 0) {
              plVar14 = (long *)0x0;
              *(long *)(uVar17 * 8) = lVar19;
              if (0 < lVar21) goto LAB_00226705;
LAB_00226763:
              plVar18 = plVar14 + uVar17;
            }
            else {
                    /* try { // try from 002266f3 to 002266f7 has its CatchHandler @ 00226a36 */
              plVar14 = operator_new(local_38 * 8);
              plVar14[uVar17] = lVar19;
              if (lVar21 < 1) goto LAB_00226763;
LAB_00226705:
              plVar18 = plVar14;
              if (plVar20 != local_58) {
                plVar15 = plVar20;
                if (0x17 < lVar21 - 8U) {
                  uVar22 = (lVar21 - 8U >> 3) + 1;
                  uVar13 = uVar22 & 0xfffffffffffffffc;
                  uVar16 = (uVar13 - 4 >> 2) + 1;
                  uVar17 = (ulong)((uint)uVar16 & 3);
                  if (uVar13 - 4 < 0xc) {
                    lVar19 = 0;
                  }
                  else {
                    uVar16 = uVar16 & 0x7ffffffffffffffc;
                    lVar19 = 0;
                    do {
                      lVar21 = (plVar20 + lVar19)[1];
                      lVar4 = plVar20[lVar19 + 2];
                      lVar5 = (plVar20 + lVar19 + 2)[1];
                      plVar14[lVar19] = plVar20[lVar19];
                      (plVar14 + lVar19)[1] = lVar21;
                      plVar14[lVar19 + 2] = lVar4;
                      (plVar14 + lVar19 + 2)[1] = lVar5;
                      lVar21 = (plVar20 + lVar19 + 4)[1];
                      lVar4 = plVar20[lVar19 + 6];
                      lVar5 = (plVar20 + lVar19 + 6)[1];
                      plVar14[lVar19 + 4] = plVar20[lVar19 + 4];
                      (plVar14 + lVar19 + 4)[1] = lVar21;
                      plVar14[lVar19 + 6] = lVar4;
                      (plVar14 + lVar19 + 6)[1] = lVar5;
                      lVar21 = (plVar20 + lVar19 + 8)[1];
                      lVar4 = plVar20[lVar19 + 10];
                      lVar5 = (plVar20 + lVar19 + 10)[1];
                      plVar14[lVar19 + 8] = plVar20[lVar19 + 8];
                      (plVar14 + lVar19 + 8)[1] = lVar21;
                      plVar14[lVar19 + 10] = lVar4;
                      (plVar14 + lVar19 + 10)[1] = lVar5;
                      lVar21 = (plVar20 + lVar19 + 0xc)[1];
                      lVar4 = plVar20[lVar19 + 0xe];
                      lVar5 = (plVar20 + lVar19 + 0xe)[1];
                      plVar14[lVar19 + 0xc] = plVar20[lVar19 + 0xc];
                      (plVar14 + lVar19 + 0xc)[1] = lVar21;
                      plVar14[lVar19 + 0xe] = lVar4;
                      (plVar14 + lVar19 + 0xe)[1] = lVar5;
                      lVar19 = lVar19 + 0x10;
                      uVar16 = uVar16 - 4;
                    } while (uVar16 != 0);
                  }
                  if (uVar17 != 0) {
                    lVar21 = 0;
                    do {
                      puVar2 = (undefined8 *)((long)plVar20 + lVar21 + lVar19 * 8);
                      uVar6 = puVar2[1];
                      puVar1 = (undefined8 *)((long)plVar20 + lVar21 + lVar19 * 8 + 0x10);
                      uVar7 = *puVar1;
                      uVar8 = puVar1[1];
                      puVar1 = (undefined8 *)((long)plVar14 + lVar21 + lVar19 * 8);
                      *puVar1 = *puVar2;
                      puVar1[1] = uVar6;
                      puVar1 = (undefined8 *)((long)plVar14 + lVar21 + lVar19 * 8 + 0x10);
                      *puVar1 = uVar7;
                      puVar1[1] = uVar8;
                      lVar21 = lVar21 + 0x20;
                    } while (uVar17 * 0x20 != lVar21);
                  }
                  plVar18 = plVar14 + uVar13;
                  if (uVar22 == uVar13) goto LAB_00226863;
                  plVar15 = plVar20 + uVar13;
                }
                do {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                } while (plVar15 != local_58);
              }
            }
LAB_00226863:
            if (plVar20 != (long *)0x0) {
              operator_delete(plVar20);
            }
            plVar18 = plVar18 + 1;
            plVar12 = plVar14 + local_38;
            plVar15 = local_40;
            plVar20 = plVar14;
          }
          else {
            *plVar18 = lVar19;
            plVar18 = plVar18 + 1;
          }
        }
      }
      puVar9 = PTR_nothrow_00715580;
      plVar23 = plVar23 + 1;
    } while (plVar23 != plVar15);
    if (plVar20 != plVar18) {
      if (0 < (long)plVar18 - (long)plVar20) {
        uVar13 = (ulong)((long)plVar18 - (long)plVar20) >> 3;
        do {
          uVar17 = (long)(uVar13 + 1) >> 1;
          plVar15 = operator_new(uVar17 * 8,(nothrow_t *)puVar9);
          if (plVar15 != (long *)0x0) {
            std::
            __stable_sort_adaptive<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,juce::Component**,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
                      (plVar20,plVar18,plVar15,uVar17);
            goto LAB_00226915;
          }
          bVar3 = 2 < uVar13;
          uVar13 = uVar17;
        } while (bVar3);
      }
      std::
      __inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
                (plVar20,plVar18);
      plVar15 = (long *)0x0;
LAB_00226915:
      operator_delete(plVar15);
      pcVar10 = local_48;
      this = local_50;
      plVar15 = plVar20;
      if (((ulong)local_48 & 1) == 0) {
        do {
          plVar23 = (long *)*plVar15;
          plVar12 = *(long **)(this + 8);
          local_60 = plVar23;
          if (plVar12 == *(long **)(this + 0x10)) {
                    /* try { // try from 00226970 to 00226998 has its CatchHandler @ 00226a3c */
            std::vector<juce::Component*,std::allocator<juce::Component*>>::
            _M_realloc_insert<juce::Component*const&>(this,plVar12,&local_60);
          }
          else {
            *plVar12 = (long)plVar23;
            *(long *)(this + 8) = *(long *)(this + 8) + 8;
          }
          cVar11 = (*pcVar10)(plVar23);
          if (cVar11 == '\0') {
            findAllComponents((long)plVar23,this,pcVar10,param_4);
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar18);
      }
      else {
        do {
          plVar23 = (long *)*plVar15;
          plVar12 = *(long **)(this + 8);
          local_60 = plVar23;
          if (plVar12 == *(long **)(this + 0x10)) {
                    /* try { // try from 002269d0 to 002269fd has its CatchHandler @ 00226a3a */
            std::vector<juce::Component*,std::allocator<juce::Component*>>::
            _M_realloc_insert<juce::Component*const&>(this,plVar12,&local_60);
          }
          else {
            *plVar12 = (long)plVar23;
            *(long *)(this + 8) = *(long *)(this + 8) + 8;
          }
          cVar11 = (**(code **)(pcVar10 + *plVar23 + -1))(plVar23);
          if (cVar11 == '\0') {
            findAllComponents((long)plVar23,this,pcVar10,param_4);
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar18);
      }
    }
    if (plVar20 != (long *)0x0) {
      operator_delete(plVar20);
      return;
    }
  }
  return;
}


