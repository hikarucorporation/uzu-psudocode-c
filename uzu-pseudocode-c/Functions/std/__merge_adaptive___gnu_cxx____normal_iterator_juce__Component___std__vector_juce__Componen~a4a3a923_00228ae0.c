// Function : __merge_adaptive<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,juce::Component**,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>
// Namespace: std
// Entry    : 00228ae0
// Prototype: void __merge_adaptive<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,juce::Component**,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>(long * param_1, long * param_2, long * param_3, long param_4, long param_5, long * param_6, long param_7)
// Body     : 00228ae0 - 0022a5a2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__merge_adaptive<__gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >, long, juce::Component**,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}> >(__gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, long, long, juce::Component**, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>) */

void __cdecl
std::
__merge_adaptive<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,juce::Component**,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
          (long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6,
          long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ushort uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ushort uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  bool bVar32;
  long *local_68;
  long *local_58;
  long local_48;
  
  local_48 = param_4;
  while ((param_5 < local_48 || (param_7 < local_48))) {
    if (param_5 <= param_7) goto LAB_002297f8;
    if (param_5 < local_48) {
      lVar17 = local_48 / 2;
      plVar30 = param_1 + lVar17;
      plVar26 = param_2;
      if (0 < (long)param_3 - (long)param_2) {
        uVar23 = (ulong)((long)param_3 - (long)param_2) >> 3;
        do {
          uVar20 = uVar23 >> 1;
          uVar14 = __gnu_cxx::__ops::
                   _Iter_comp_val<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
                   ::operator()(plVar26[uVar20],*plVar30);
          if ((char)uVar14 != '\0') {
            plVar26 = plVar26 + uVar20 + 1;
            uVar20 = ~uVar20 + uVar23;
          }
          uVar23 = uVar20;
        } while (0 < (long)uVar20);
      }
      lVar29 = (long)plVar26 - (long)param_2 >> 3;
    }
    else {
      lVar29 = param_5 / 2;
      plVar26 = param_2 + lVar29;
      plVar30 = param_1;
      if (0 < (long)param_2 - (long)param_1) {
        uVar23 = (ulong)((long)param_2 - (long)param_1) >> 3;
        do {
          uVar20 = uVar23 >> 1;
          uVar14 = __gnu_cxx::__ops::
                   _Val_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
                   ::operator()(*plVar26,plVar30[uVar20]);
          if ((char)uVar14 == '\0') {
            plVar30 = plVar30 + uVar20 + 1;
            uVar20 = ~uVar20 + uVar23;
          }
          uVar23 = uVar20;
        } while (0 < (long)uVar20);
      }
      lVar17 = (long)plVar30 - (long)param_1 >> 3;
    }
    local_48 = local_48 - lVar17;
    if ((lVar29 < local_48) && (lVar29 <= param_7)) {
      plVar13 = plVar30;
      if (lVar29 != 0) {
        uVar23 = (long)plVar26 - (long)param_2;
        plVar15 = param_6;
        if (0 < (long)uVar23) {
          uVar20 = uVar23 >> 3;
          uVar23 = uVar20 + (uVar23 < 8);
          if ((uVar23 < 4) || ((param_6 < param_2 + uVar23 && (param_2 < param_6 + uVar23)))) {
            plVar18 = param_2;
          }
          else {
            uVar27 = uVar23 & 0xfffffffffffffffc;
            uVar25 = (uVar27 - 4 >> 2) + 1;
            uVar31 = (ulong)((uint)uVar25 & 3);
            if (uVar27 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              uVar25 = uVar25 & 0x7ffffffffffffffc;
              lVar24 = 0;
              do {
                lVar22 = (param_2 + lVar24)[1];
                lVar4 = param_2[lVar24 + 2];
                lVar5 = (param_2 + lVar24 + 2)[1];
                param_6[lVar24] = param_2[lVar24];
                (param_6 + lVar24)[1] = lVar22;
                param_6[lVar24 + 2] = lVar4;
                (param_6 + lVar24 + 2)[1] = lVar5;
                lVar22 = (param_2 + lVar24 + 4)[1];
                lVar4 = param_2[lVar24 + 6];
                lVar5 = (param_2 + lVar24 + 6)[1];
                param_6[lVar24 + 4] = param_2[lVar24 + 4];
                (param_6 + lVar24 + 4)[1] = lVar22;
                param_6[lVar24 + 6] = lVar4;
                (param_6 + lVar24 + 6)[1] = lVar5;
                lVar22 = (param_2 + lVar24 + 8)[1];
                lVar4 = param_2[lVar24 + 10];
                lVar5 = (param_2 + lVar24 + 10)[1];
                param_6[lVar24 + 8] = param_2[lVar24 + 8];
                (param_6 + lVar24 + 8)[1] = lVar22;
                param_6[lVar24 + 10] = lVar4;
                (param_6 + lVar24 + 10)[1] = lVar5;
                lVar22 = (param_2 + lVar24 + 0xc)[1];
                lVar4 = param_2[lVar24 + 0xe];
                lVar5 = (param_2 + lVar24 + 0xe)[1];
                param_6[lVar24 + 0xc] = param_2[lVar24 + 0xc];
                (param_6 + lVar24 + 0xc)[1] = lVar22;
                param_6[lVar24 + 0xe] = lVar4;
                (param_6 + lVar24 + 0xe)[1] = lVar5;
                lVar24 = lVar24 + 0x10;
                uVar25 = uVar25 - 4;
              } while (uVar25 != 0);
            }
            if (uVar31 != 0) {
              lVar22 = 0;
              do {
                puVar2 = (undefined8 *)((long)param_2 + lVar22 + lVar24 * 8);
                uVar14 = puVar2[1];
                puVar1 = (undefined8 *)((long)param_2 + lVar22 + lVar24 * 8 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((long)param_6 + lVar22 + lVar24 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar14;
                puVar1 = (undefined8 *)((long)param_6 + lVar22 + lVar24 * 8 + 0x10);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                lVar22 = lVar22 + 0x20;
              } while (uVar31 * 0x20 != lVar22);
            }
            plVar15 = param_6 + uVar27;
            if (uVar23 == uVar27) goto joined_r0x00228d81;
            uVar20 = uVar20 - uVar27;
            plVar18 = param_2 + uVar27;
          }
          uVar20 = uVar20 + 1;
          do {
            *plVar15 = *plVar18;
            plVar18 = plVar18 + 1;
            plVar15 = plVar15 + 1;
            uVar20 = uVar20 - 1;
          } while (1 < uVar20);
        }
joined_r0x00228d81:
        uVar23 = (long)param_2 - (long)plVar30;
        if (0 < (long)uVar23) {
          uVar31 = uVar23 >> 3;
          uVar20 = uVar31 + (uVar23 < 8);
          if ((uVar20 < 4) ||
             ((lVar24 = -uVar31 - (ulong)(uVar23 < 8), plVar26 + lVar24 < param_2 &&
              (param_2 + lVar24 < plVar26)))) {
            plVar18 = plVar26;
          }
          else {
            uVar25 = uVar20 & 0xfffffffffffffffc;
            uVar23 = (uVar25 - 4 >> 2) + 1;
            if (uVar25 - 4 == 0) {
              lVar24 = 0;
            }
            else {
              uVar27 = (uVar23 & 0x7ffffffffffffffe) - 2;
              uVar28 = (uVar27 >> 1) + 1;
              if (uVar27 == 0) {
                lVar24 = 0;
              }
              else {
                uVar27 = uVar28 & 0xfffffffffffffffe;
                lVar24 = 0;
                do {
                  lVar22 = param_2[lVar24 + -4];
                  lVar4 = (param_2 + lVar24 + -4)[1];
                  lVar5 = (param_2 + lVar24 + -2)[1];
                  plVar26[lVar24 + -2] = param_2[lVar24 + -2];
                  (plVar26 + lVar24 + -2)[1] = lVar5;
                  plVar26[lVar24 + -4] = lVar22;
                  (plVar26 + lVar24 + -4)[1] = lVar4;
                  lVar22 = param_2[lVar24 + -8];
                  lVar4 = (param_2 + lVar24 + -8)[1];
                  lVar5 = (param_2 + lVar24 + -6)[1];
                  plVar26[lVar24 + -6] = param_2[lVar24 + -6];
                  (plVar26 + lVar24 + -6)[1] = lVar5;
                  plVar26[lVar24 + -8] = lVar22;
                  (plVar26 + lVar24 + -8)[1] = lVar4;
                  lVar22 = param_2[lVar24 + -0xc];
                  lVar4 = (param_2 + lVar24 + -0xc)[1];
                  lVar5 = (param_2 + lVar24 + -10)[1];
                  plVar26[lVar24 + -10] = param_2[lVar24 + -10];
                  (plVar26 + lVar24 + -10)[1] = lVar5;
                  plVar26[lVar24 + -0xc] = lVar22;
                  (plVar26 + lVar24 + -0xc)[1] = lVar4;
                  lVar22 = param_2[lVar24 + -0x10];
                  lVar4 = (param_2 + lVar24 + -0x10)[1];
                  lVar5 = (param_2 + lVar24 + -0xe)[1];
                  plVar26[lVar24 + -0xe] = param_2[lVar24 + -0xe];
                  (plVar26 + lVar24 + -0xe)[1] = lVar5;
                  plVar26[lVar24 + -0x10] = lVar22;
                  (plVar26 + lVar24 + -0x10)[1] = lVar4;
                  lVar24 = lVar24 + -0x10;
                  uVar27 = uVar27 - 2;
                } while (uVar27 != 0);
                lVar24 = -lVar24;
                if ((uVar28 & 1) == 0) goto LAB_002296b0;
              }
              lVar22 = param_2[-4 - lVar24];
              lVar4 = param_2[-3 - lVar24];
              lVar5 = param_2[-1 - lVar24];
              plVar26[-2 - lVar24] = param_2[-2 - lVar24];
              plVar26[-1 - lVar24] = lVar5;
              plVar26[-4 - lVar24] = lVar22;
              plVar26[-3 - lVar24] = lVar4;
              lVar22 = -lVar24;
              lVar4 = param_2[lVar22 + -8];
              lVar5 = (param_2 + lVar22 + -8)[1];
              lVar8 = (param_2 + lVar22 + -6)[1];
              plVar26[lVar22 + -6] = param_2[lVar22 + -6];
              (plVar26 + lVar22 + -6)[1] = lVar8;
              plVar26[lVar22 + -8] = lVar4;
              (plVar26 + lVar22 + -8)[1] = lVar5;
              lVar24 = lVar24 + 8;
            }
LAB_002296b0:
            if ((uVar23 & 1) != 0) {
              lVar22 = param_2[-4 - lVar24];
              lVar4 = param_2[-3 - lVar24];
              lVar5 = param_2[-1 - lVar24];
              plVar26[-2 - lVar24] = param_2[-2 - lVar24];
              plVar26[-1 - lVar24] = lVar5;
              plVar26[-4 - lVar24] = lVar22;
              plVar26[-3 - lVar24] = lVar4;
            }
            if (uVar20 == uVar25) goto LAB_00228dfc;
            uVar31 = uVar31 - uVar25;
            plVar18 = plVar26 + -uVar25;
            param_2 = param_2 + -uVar25;
          }
          lVar24 = 0;
          do {
            plVar18[lVar24 + -1] = param_2[lVar24 + -1];
            uVar23 = uVar31 + lVar24;
            lVar24 = lVar24 + -1;
          } while (1 < uVar23);
        }
LAB_00228dfc:
        uVar23 = (long)plVar15 - (long)param_6;
        if (0 < (long)uVar23) {
          uVar20 = uVar23 >> 3;
          uVar23 = uVar20 + (uVar23 < 8);
          if ((uVar23 < 4) || ((plVar30 < param_6 + uVar23 && (param_6 < plVar30 + uVar23)))) {
            plVar15 = param_6;
          }
          else {
            uVar27 = uVar23 & 0xfffffffffffffffc;
            uVar25 = (uVar27 - 4 >> 2) + 1;
            uVar31 = (ulong)((uint)uVar25 & 3);
            if (uVar27 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              uVar25 = uVar25 & 0x7ffffffffffffffc;
              lVar24 = 0;
              do {
                lVar22 = (param_6 + lVar24)[1];
                lVar4 = param_6[lVar24 + 2];
                lVar5 = (param_6 + lVar24 + 2)[1];
                plVar30[lVar24] = param_6[lVar24];
                (plVar30 + lVar24)[1] = lVar22;
                plVar30[lVar24 + 2] = lVar4;
                (plVar30 + lVar24 + 2)[1] = lVar5;
                lVar22 = (param_6 + lVar24 + 4)[1];
                lVar4 = param_6[lVar24 + 6];
                lVar5 = (param_6 + lVar24 + 6)[1];
                plVar30[lVar24 + 4] = param_6[lVar24 + 4];
                (plVar30 + lVar24 + 4)[1] = lVar22;
                plVar30[lVar24 + 6] = lVar4;
                (plVar30 + lVar24 + 6)[1] = lVar5;
                lVar22 = (param_6 + lVar24 + 8)[1];
                lVar4 = param_6[lVar24 + 10];
                lVar5 = (param_6 + lVar24 + 10)[1];
                plVar30[lVar24 + 8] = param_6[lVar24 + 8];
                (plVar30 + lVar24 + 8)[1] = lVar22;
                plVar30[lVar24 + 10] = lVar4;
                (plVar30 + lVar24 + 10)[1] = lVar5;
                lVar22 = (param_6 + lVar24 + 0xc)[1];
                lVar4 = param_6[lVar24 + 0xe];
                lVar5 = (param_6 + lVar24 + 0xe)[1];
                plVar30[lVar24 + 0xc] = param_6[lVar24 + 0xc];
                (plVar30 + lVar24 + 0xc)[1] = lVar22;
                plVar30[lVar24 + 0xe] = lVar4;
                (plVar30 + lVar24 + 0xe)[1] = lVar5;
                lVar24 = lVar24 + 0x10;
                uVar25 = uVar25 - 4;
              } while (uVar25 != 0);
            }
            if (uVar31 != 0) {
              lVar22 = 0;
              do {
                puVar2 = (undefined8 *)((long)param_6 + lVar22 + lVar24 * 8);
                uVar14 = puVar2[1];
                puVar1 = (undefined8 *)((long)param_6 + lVar22 + lVar24 * 8 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((long)plVar30 + lVar22 + lVar24 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar14;
                puVar1 = (undefined8 *)((long)plVar30 + lVar22 + lVar24 * 8 + 0x10);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                lVar22 = lVar22 + 0x20;
              } while (uVar31 * 0x20 != lVar22);
            }
            plVar13 = plVar30 + uVar27;
            if (uVar23 == uVar27) {
              goto LAB_00228b4b;
            }
            uVar20 = uVar20 - uVar27;
            plVar15 = param_6 + uVar27;
          }
          uVar20 = uVar20 + 1;
          do {
            *plVar13 = *plVar15;
            plVar15 = plVar15 + 1;
            plVar13 = plVar13 + 1;
            uVar20 = uVar20 - 1;
          } while (1 < uVar20);
        }
      }
    }
    else if (param_7 < local_48) {
      plVar13 = _V2::
                __rotate<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>>
                          (plVar30,param_2,plVar26);
    }
    else {
      plVar13 = plVar26;
      if (local_48 != 0) {
        uVar23 = (long)param_2 - (long)plVar30;
        plVar15 = param_6;
        if (0 < (long)uVar23) {
          uVar20 = uVar23 >> 3;
          uVar23 = uVar20 + (uVar23 < 8);
          if ((uVar23 < 4) || ((param_6 < plVar30 + uVar23 && (plVar30 < param_6 + uVar23)))) {
            plVar18 = plVar30;
          }
          else {
            uVar27 = uVar23 & 0xfffffffffffffffc;
            uVar25 = (uVar27 - 4 >> 2) + 1;
            uVar31 = (ulong)((uint)uVar25 & 3);
            if (uVar27 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              uVar25 = uVar25 & 0x7ffffffffffffffc;
              lVar24 = 0;
              do {
                lVar22 = (plVar30 + lVar24)[1];
                lVar4 = plVar30[lVar24 + 2];
                lVar5 = (plVar30 + lVar24 + 2)[1];
                param_6[lVar24] = plVar30[lVar24];
                (param_6 + lVar24)[1] = lVar22;
                param_6[lVar24 + 2] = lVar4;
                (param_6 + lVar24 + 2)[1] = lVar5;
                lVar22 = (plVar30 + lVar24 + 4)[1];
                lVar4 = plVar30[lVar24 + 6];
                lVar5 = (plVar30 + lVar24 + 6)[1];
                param_6[lVar24 + 4] = plVar30[lVar24 + 4];
                (param_6 + lVar24 + 4)[1] = lVar22;
                param_6[lVar24 + 6] = lVar4;
                (param_6 + lVar24 + 6)[1] = lVar5;
                lVar22 = (plVar30 + lVar24 + 8)[1];
                lVar4 = plVar30[lVar24 + 10];
                lVar5 = (plVar30 + lVar24 + 10)[1];
                param_6[lVar24 + 8] = plVar30[lVar24 + 8];
                (param_6 + lVar24 + 8)[1] = lVar22;
                param_6[lVar24 + 10] = lVar4;
                (param_6 + lVar24 + 10)[1] = lVar5;
                lVar22 = (plVar30 + lVar24 + 0xc)[1];
                lVar4 = plVar30[lVar24 + 0xe];
                lVar5 = (plVar30 + lVar24 + 0xe)[1];
                param_6[lVar24 + 0xc] = plVar30[lVar24 + 0xc];
                (param_6 + lVar24 + 0xc)[1] = lVar22;
                param_6[lVar24 + 0xe] = lVar4;
                (param_6 + lVar24 + 0xe)[1] = lVar5;
                lVar24 = lVar24 + 0x10;
                uVar25 = uVar25 - 4;
              } while (uVar25 != 0);
            }
            if (uVar31 != 0) {
              lVar22 = 0;
              do {
                puVar2 = (undefined8 *)((long)plVar30 + lVar22 + lVar24 * 8);
                uVar14 = puVar2[1];
                puVar1 = (undefined8 *)((long)plVar30 + lVar22 + lVar24 * 8 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((long)param_6 + lVar22 + lVar24 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar14;
                puVar1 = (undefined8 *)((long)param_6 + lVar22 + lVar24 * 8 + 0x10);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                lVar22 = lVar22 + 0x20;
              } while (uVar31 * 0x20 != lVar22);
            }
            plVar15 = param_6 + uVar27;
            if (uVar23 == uVar27) goto joined_r0x00228f01;
            uVar20 = uVar20 - uVar27;
            plVar18 = plVar30 + uVar27;
          }
          uVar20 = uVar20 + 1;
          do {
            *plVar15 = *plVar18;
            plVar18 = plVar18 + 1;
            plVar15 = plVar15 + 1;
            uVar20 = uVar20 - 1;
          } while (1 < uVar20);
        }
joined_r0x00228f01:
        uVar23 = (long)plVar26 - (long)param_2;
        if (0 < (long)uVar23) {
          uVar20 = uVar23 >> 3;
          uVar23 = uVar20 + (uVar23 < 8);
          if ((uVar23 < 4) || ((plVar30 < param_2 + uVar23 && (param_2 < plVar30 + uVar23)))) {
            plVar18 = plVar30;
          }
          else {
            uVar31 = uVar23 & 0xfffffffffffffffc;
            uVar27 = (uVar31 - 4 >> 2) + 1;
            uVar25 = (ulong)((uint)uVar27 & 3);
            if (uVar31 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              uVar27 = uVar27 & 0x7ffffffffffffffc;
              lVar24 = 0;
              do {
                lVar22 = (param_2 + lVar24)[1];
                lVar4 = param_2[lVar24 + 2];
                lVar5 = (param_2 + lVar24 + 2)[1];
                plVar30[lVar24] = param_2[lVar24];
                (plVar30 + lVar24)[1] = lVar22;
                plVar30[lVar24 + 2] = lVar4;
                (plVar30 + lVar24 + 2)[1] = lVar5;
                lVar22 = (param_2 + lVar24 + 4)[1];
                lVar4 = param_2[lVar24 + 6];
                lVar5 = (param_2 + lVar24 + 6)[1];
                plVar30[lVar24 + 4] = param_2[lVar24 + 4];
                (plVar30 + lVar24 + 4)[1] = lVar22;
                plVar30[lVar24 + 6] = lVar4;
                (plVar30 + lVar24 + 6)[1] = lVar5;
                lVar22 = (param_2 + lVar24 + 8)[1];
                lVar4 = param_2[lVar24 + 10];
                lVar5 = (param_2 + lVar24 + 10)[1];
                plVar30[lVar24 + 8] = param_2[lVar24 + 8];
                (plVar30 + lVar24 + 8)[1] = lVar22;
                plVar30[lVar24 + 10] = lVar4;
                (plVar30 + lVar24 + 10)[1] = lVar5;
                lVar22 = (param_2 + lVar24 + 0xc)[1];
                lVar4 = param_2[lVar24 + 0xe];
                lVar5 = (param_2 + lVar24 + 0xe)[1];
                plVar30[lVar24 + 0xc] = param_2[lVar24 + 0xc];
                (plVar30 + lVar24 + 0xc)[1] = lVar22;
                plVar30[lVar24 + 0xe] = lVar4;
                (plVar30 + lVar24 + 0xe)[1] = lVar5;
                lVar24 = lVar24 + 0x10;
                uVar27 = uVar27 - 4;
              } while (uVar27 != 0);
            }
            if (uVar25 != 0) {
              lVar22 = 0;
              do {
                puVar2 = (undefined8 *)((long)param_2 + lVar22 + lVar24 * 8);
                uVar14 = puVar2[1];
                puVar1 = (undefined8 *)((long)param_2 + lVar22 + lVar24 * 8 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((long)plVar30 + lVar22 + lVar24 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar14;
                puVar1 = (undefined8 *)((long)plVar30 + lVar22 + lVar24 * 8 + 0x10);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                lVar22 = lVar22 + 0x20;
              } while (uVar25 * 0x20 != lVar22);
            }
            if (uVar23 == uVar31) goto LAB_00228f67;
            uVar20 = uVar20 - uVar31;
            plVar18 = plVar30 + uVar31;
            param_2 = param_2 + uVar31;
          }
          uVar20 = uVar20 + 1;
          lVar24 = 0;
          do {
            *(undefined8 *)((long)plVar18 + lVar24) = *(undefined8 *)((long)param_2 + lVar24);
            uVar20 = uVar20 - 1;
            lVar24 = lVar24 + 8;
          } while (1 < uVar20);
        }
LAB_00228f67:
        uVar23 = (long)plVar15 - (long)param_6;
        if (0 < (long)uVar23) {
          uVar31 = uVar23 >> 3;
          uVar20 = uVar31 + (uVar23 < 8);
          if ((3 < uVar20) &&
             ((lVar24 = -uVar31 - (ulong)(uVar23 < 8), plVar15 <= plVar26 + lVar24 ||
              (plVar26 <= plVar15 + lVar24)))) {
            uVar25 = uVar20 & 0xfffffffffffffffc;
            uVar23 = (uVar25 - 4 >> 2) + 1;
            if (uVar25 - 4 == 0) {
              lVar24 = 0;
            }
            else {
              uVar27 = (uVar23 & 0x7ffffffffffffffe) - 2;
              uVar28 = (uVar27 >> 1) + 1;
              if (uVar27 == 0) {
                lVar24 = 0;
              }
              else {
                uVar27 = uVar28 & 0xfffffffffffffffe;
                lVar24 = 0;
                do {
                  lVar22 = plVar15[lVar24 + -4];
                  lVar4 = (plVar15 + lVar24 + -4)[1];
                  lVar5 = (plVar15 + lVar24 + -2)[1];
                  plVar26[lVar24 + -2] = plVar15[lVar24 + -2];
                  (plVar26 + lVar24 + -2)[1] = lVar5;
                  plVar26[lVar24 + -4] = lVar22;
                  (plVar26 + lVar24 + -4)[1] = lVar4;
                  lVar22 = plVar15[lVar24 + -8];
                  lVar4 = (plVar15 + lVar24 + -8)[1];
                  lVar5 = (plVar15 + lVar24 + -6)[1];
                  plVar26[lVar24 + -6] = plVar15[lVar24 + -6];
                  (plVar26 + lVar24 + -6)[1] = lVar5;
                  plVar26[lVar24 + -8] = lVar22;
                  (plVar26 + lVar24 + -8)[1] = lVar4;
                  lVar22 = plVar15[lVar24 + -0xc];
                  lVar4 = (plVar15 + lVar24 + -0xc)[1];
                  lVar5 = (plVar15 + lVar24 + -10)[1];
                  plVar26[lVar24 + -10] = plVar15[lVar24 + -10];
                  (plVar26 + lVar24 + -10)[1] = lVar5;
                  plVar26[lVar24 + -0xc] = lVar22;
                  (plVar26 + lVar24 + -0xc)[1] = lVar4;
                  lVar22 = plVar15[lVar24 + -0x10];
                  lVar4 = (plVar15 + lVar24 + -0x10)[1];
                  lVar5 = (plVar15 + lVar24 + -0xe)[1];
                  plVar26[lVar24 + -0xe] = plVar15[lVar24 + -0xe];
                  (plVar26 + lVar24 + -0xe)[1] = lVar5;
                  plVar26[lVar24 + -0x10] = lVar22;
                  (plVar26 + lVar24 + -0x10)[1] = lVar4;
                  lVar24 = lVar24 + -0x10;
                  uVar27 = uVar27 - 2;
                } while (uVar27 != 0);
                lVar24 = -lVar24;
                if ((uVar28 & 1) == 0) goto LAB_00229760;
              }
              lVar22 = plVar15[-4 - lVar24];
              lVar4 = plVar15[-3 - lVar24];
              lVar5 = plVar15[-1 - lVar24];
              plVar26[-2 - lVar24] = plVar15[-2 - lVar24];
              plVar26[-1 - lVar24] = lVar5;
              plVar26[-4 - lVar24] = lVar22;
              plVar26[-3 - lVar24] = lVar4;
              lVar22 = -lVar24;
              lVar4 = plVar15[lVar22 + -8];
              lVar5 = (plVar15 + lVar22 + -8)[1];
              lVar8 = (plVar15 + lVar22 + -6)[1];
              plVar26[lVar22 + -6] = plVar15[lVar22 + -6];
              (plVar26 + lVar22 + -6)[1] = lVar8;
              plVar26[lVar22 + -8] = lVar4;
              (plVar26 + lVar22 + -8)[1] = lVar5;
              lVar24 = lVar24 + 8;
            }
LAB_00229760:
            if ((uVar23 & 1) != 0) {
              lVar22 = plVar15[-4 - lVar24];
              lVar4 = plVar15[-3 - lVar24];
              lVar5 = plVar15[-1 - lVar24];
              plVar26[-2 - lVar24] = plVar15[-2 - lVar24];
              plVar26[-1 - lVar24] = lVar5;
              plVar26[-4 - lVar24] = lVar22;
              plVar26[-3 - lVar24] = lVar4;
            }
            plVar13 = plVar26 + -uVar25;
            if (uVar20 == uVar25) {
              goto LAB_00228b4b;
            }
            uVar31 = uVar31 - uVar25;
            plVar15 = plVar15 + -uVar25;
          }
          uVar31 = uVar31 + 1;
          do {
            plVar15 = plVar15 + -1;
            plVar13[-1] = *plVar15;
            plVar13 = plVar13 + -1;
            uVar31 = uVar31 - 1;
          } while (1 < uVar31);
        }
      }
    }
LAB_00228b4b:
    __merge_adaptive<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,juce::Component**,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
              (param_1,plVar30,plVar13,lVar17,lVar29,param_6,param_7);
    param_5 = param_5 - lVar29;
    param_1 = plVar13;
    param_2 = plVar26;
  }
  uVar23 = (long)param_2 - (long)param_1;
  if ((long)uVar23 < 1) {
    return;
  }
  uVar20 = uVar23 >> 3;
  uVar23 = uVar20 + (uVar23 < 8);
  local_68 = param_6;
  if ((uVar23 < 4) || ((param_6 < param_1 + uVar23 && (param_1 < param_6 + uVar23)))) {
    plVar26 = param_1;
    plVar30 = param_6;
    goto LAB_00229860;
  }
  uVar31 = uVar23 & 0xfffffffffffffffc;
  uVar27 = (uVar31 - 4 >> 2) + 1;
  uVar25 = (ulong)((uint)uVar27 & 3);
  if (uVar31 - 4 < 0xc) {
    lVar29 = 0;
  }
  else {
    uVar27 = uVar27 & 0x7ffffffffffffffc;
    lVar29 = 0;
    do {
      lVar17 = (param_1 + lVar29)[1];
      lVar24 = param_1[lVar29 + 2];
      lVar22 = (param_1 + lVar29 + 2)[1];
      param_6[lVar29] = param_1[lVar29];
      (param_6 + lVar29)[1] = lVar17;
      param_6[lVar29 + 2] = lVar24;
      (param_6 + lVar29 + 2)[1] = lVar22;
      lVar17 = (param_1 + lVar29 + 4)[1];
      lVar24 = param_1[lVar29 + 6];
      lVar22 = (param_1 + lVar29 + 6)[1];
      param_6[lVar29 + 4] = param_1[lVar29 + 4];
      (param_6 + lVar29 + 4)[1] = lVar17;
      param_6[lVar29 + 6] = lVar24;
      (param_6 + lVar29 + 6)[1] = lVar22;
      lVar17 = (param_1 + lVar29 + 8)[1];
      lVar24 = param_1[lVar29 + 10];
      lVar22 = (param_1 + lVar29 + 10)[1];
      param_6[lVar29 + 8] = param_1[lVar29 + 8];
      (param_6 + lVar29 + 8)[1] = lVar17;
      param_6[lVar29 + 10] = lVar24;
      (param_6 + lVar29 + 10)[1] = lVar22;
      lVar17 = (param_1 + lVar29 + 0xc)[1];
      lVar24 = param_1[lVar29 + 0xe];
      lVar22 = (param_1 + lVar29 + 0xe)[1];
      param_6[lVar29 + 0xc] = param_1[lVar29 + 0xc];
      (param_6 + lVar29 + 0xc)[1] = lVar17;
      param_6[lVar29 + 0xe] = lVar24;
      (param_6 + lVar29 + 0xe)[1] = lVar22;
      lVar29 = lVar29 + 0x10;
      uVar27 = uVar27 - 4;
    } while (uVar27 != 0);
  }
  if (uVar25 != 0) {
    lVar17 = 0;
    do {
      puVar2 = (undefined8 *)((long)param_1 + lVar17 + lVar29 * 8);
      uVar14 = puVar2[1];
      puVar1 = (undefined8 *)((long)param_1 + lVar17 + lVar29 * 8 + 0x10);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)((long)param_6 + lVar17 + lVar29 * 8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      puVar1 = (undefined8 *)((long)param_6 + lVar17 + lVar29 * 8 + 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      lVar17 = lVar17 + 0x20;
    } while (uVar25 * 0x20 != lVar17);
  }
  plVar30 = param_6 + uVar31;
  if (uVar23 != uVar31) {
    uVar20 = uVar20 - uVar31;
    plVar26 = param_1 + uVar31;
LAB_00229860:
    uVar20 = uVar20 + 1;
    do {
      *plVar30 = *plVar26;
      plVar26 = plVar26 + 1;
      plVar30 = plVar30 + 1;
      uVar20 = uVar20 - 1;
    } while (1 < uVar20);
  }
joined_r0x0022988c:
  if (plVar30 == local_68) {
    return;
  }
  do {
    if (param_2 == param_3) {
      uVar23 = (long)plVar30 - (long)local_68;
      if ((long)uVar23 < 1) {
        return;
      }
      uVar20 = uVar23 >> 3;
      uVar23 = uVar20 + (uVar23 < 8);
      if ((3 < uVar23) && ((local_68 + uVar23 <= param_1 || (param_1 + uVar23 <= local_68)))) {
        uVar31 = uVar23 & 0xfffffffffffffffc;
        uVar27 = (uVar31 - 4 >> 2) + 1;
        uVar25 = (ulong)((uint)uVar27 & 3);
        if (uVar31 - 4 < 0xc) {
          lVar29 = 0;
        }
        else {
          uVar27 = uVar27 & 0x7ffffffffffffffc;
          lVar29 = 0;
          do {
            lVar17 = (local_68 + lVar29)[1];
            lVar24 = local_68[lVar29 + 2];
            lVar22 = (local_68 + lVar29 + 2)[1];
            param_1[lVar29] = local_68[lVar29];
            (param_1 + lVar29)[1] = lVar17;
            param_1[lVar29 + 2] = lVar24;
            (param_1 + lVar29 + 2)[1] = lVar22;
            lVar17 = (local_68 + lVar29 + 4)[1];
            lVar24 = local_68[lVar29 + 6];
            lVar22 = (local_68 + lVar29 + 6)[1];
            param_1[lVar29 + 4] = local_68[lVar29 + 4];
            (param_1 + lVar29 + 4)[1] = lVar17;
            param_1[lVar29 + 6] = lVar24;
            (param_1 + lVar29 + 6)[1] = lVar22;
            lVar17 = (local_68 + lVar29 + 8)[1];
            lVar24 = local_68[lVar29 + 10];
            lVar22 = (local_68 + lVar29 + 10)[1];
            param_1[lVar29 + 8] = local_68[lVar29 + 8];
            (param_1 + lVar29 + 8)[1] = lVar17;
            param_1[lVar29 + 10] = lVar24;
            (param_1 + lVar29 + 10)[1] = lVar22;
            lVar17 = (local_68 + lVar29 + 0xc)[1];
            lVar24 = local_68[lVar29 + 0xe];
            lVar22 = (local_68 + lVar29 + 0xe)[1];
            param_1[lVar29 + 0xc] = local_68[lVar29 + 0xc];
            (param_1 + lVar29 + 0xc)[1] = lVar17;
            param_1[lVar29 + 0xe] = lVar24;
            (param_1 + lVar29 + 0xe)[1] = lVar22;
            lVar29 = lVar29 + 0x10;
            uVar27 = uVar27 - 4;
          } while (uVar27 != 0);
        }
        if (uVar25 != 0) {
          lVar17 = 0;
          do {
            puVar2 = (undefined8 *)((long)local_68 + lVar17 + lVar29 * 8);
            uVar14 = puVar2[1];
            puVar1 = (undefined8 *)((long)local_68 + lVar17 + lVar29 * 8 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)((long)param_1 + lVar17 + lVar29 * 8);
            *puVar1 = *puVar2;
            puVar1[1] = uVar14;
            puVar1 = (undefined8 *)((long)param_1 + lVar17 + lVar29 * 8 + 0x10);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            lVar17 = lVar17 + 0x20;
          } while (uVar25 * 0x20 != lVar17);
        }
        if (uVar23 == uVar31) {
          return;
        }
        uVar20 = uVar20 - uVar31;
        param_1 = param_1 + uVar31;
        local_68 = local_68 + uVar31;
      }
      uVar20 = uVar20 + 1;
      lVar29 = 0;
      do {
        *(undefined8 *)((long)param_1 + lVar29) = *(undefined8 *)((long)local_68 + lVar29);
        uVar20 = uVar20 - 1;
        lVar29 = lVar29 + 8;
      } while (1 < uVar20);
      return;
    }
    lVar29 = *param_2;
    lVar17 = *local_68;
    if ((long)*(int *)(lVar29 + 0xd4) != 0) {
      plVar26 = (long *)(*(long *)(lVar29 + 200) + 8);
      lVar24 = (long)*(int *)(lVar29 + 0xd4) * 0x18;
      do {
        if (plVar26[-1] == juce::explicitFocusOrderId) goto LAB_00229935;
        plVar26 = plVar26 + 3;
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != 0);
    }
    plVar26 = (long *)&juce::getNullVarRef()::nullVar;
    if (juce::getNullVarRef()::nullVar == '\0') {
      iVar11 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
      plVar26 = (long *)&juce::getNullVarRef()::nullVar;
      if (iVar11 != 0) {
        juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
        __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
        __cxa_guard_release(&juce::getNullVarRef()::nullVar);
        plVar26 = (long *)&juce::getNullVarRef()::nullVar;
      }
    }
LAB_00229935:
                    /* try { // try from 0022993c to 0022993e has its CatchHandler @ 0022a5ab */
    uVar9 = (**(code **)(*plVar26 + 0x10))(plVar26 + 1);
    if ((int)uVar9 < 1) {
      uVar9 = 0x7fffffff;
    }
    uVar16 = *(ushort *)(lVar29 + 0xe8);
    iVar11 = *(int *)(lVar29 + 0x38);
    iVar3 = *(int *)(lVar29 + 0x3c);
    if ((long)*(int *)(lVar17 + 0xd4) != 0) {
      plVar26 = (long *)(*(long *)(lVar17 + 200) + 8);
      lVar29 = (long)*(int *)(lVar17 + 0xd4) * 0x18;
      do {
        if (plVar26[-1] == juce::explicitFocusOrderId) goto LAB_002299b5;
        plVar26 = plVar26 + 3;
        lVar29 = lVar29 + -0x18;
      } while (lVar29 != 0);
    }
    plVar26 = (long *)&juce::getNullVarRef()::nullVar;
    if (juce::getNullVarRef()::nullVar == '\0') {
      iVar12 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
      plVar26 = (long *)&juce::getNullVarRef()::nullVar;
      if (iVar12 != 0) {
        juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
        __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
        __cxa_guard_release(&juce::getNullVarRef()::nullVar);
        plVar26 = (long *)&juce::getNullVarRef()::nullVar;
      }
    }
LAB_002299b5:
                    /* try { // try from 002299bc to 002299be has its CatchHandler @ 0022a5a3 */
    uVar10 = (**(code **)(*plVar26 + 0x10))(plVar26 + 1);
    if ((int)uVar10 < 1) {
      uVar10 = 0x7fffffff;
    }
    bVar32 = uVar10 <= uVar9;
    if (((((uVar9 == uVar10) &&
          (uVar21 = uVar16 >> 0xb & 1, uVar16 = *(ushort *)(lVar17 + 0xe8) >> 0xb & 1,
          bVar32 = (uVar16 ^ 1) <= (uVar21 ^ 1), uVar21 == uVar16)) &&
         (bVar32 = *(int *)(lVar17 + 0x3c) <= iVar3, iVar3 == *(int *)(lVar17 + 0x3c))) &&
        (bVar32 = *(int *)(lVar17 + 0x38) <= iVar11, iVar11 == *(int *)(lVar17 + 0x38))) ||
       (-1 < (char)(bVar32 * '\x02' + -1))) goto LAB_002298ac;
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (local_68 == plVar30) {
      return;
    }
  } while( true );
LAB_0022a068:
  param_3 = plVar26 + -1;
  plVar26[-1] = *param_2;
  if (param_2 == param_1) goto code_r0x0022a082;
  goto LAB_00229df9;
LAB_002298ac:
  *param_1 = *local_68;
  local_68 = local_68 + 1;
  param_1 = param_1 + 1;
  goto joined_r0x0022988c;
code_r0x0022a082:
  plVar13 = plVar30 + 1;
  uVar20 = (long)plVar13 - (long)param_6;
  if ((long)uVar20 < 1) {
    return;
  }
  uVar31 = uVar20 >> 3;
  uVar25 = (uVar31 - (7 < uVar20)) + 1;
  if ((uVar25 < 4) ||
     ((param_3 + (-uVar31 - (ulong)(uVar20 < 8)) < plVar13 &&
      (plVar30 + ((uVar20 >= 8) - uVar31) < param_3)))) goto LAB_0022a525;
  uVar27 = uVar25 & 0xfffffffffffffffc;
  uVar28 = (uVar27 - 4 >> 2) + 1;
  if (uVar27 - 4 == 0) {
    lVar29 = 0;
LAB_0022a4da:
    plVar30 = plVar30 + -lVar29;
    lVar17 = plVar30[-3];
    lVar24 = plVar30[-2];
    lVar22 = *plVar30;
    plVar26[-3 - lVar29] = plVar30[-1];
    plVar26[-2 - lVar29] = lVar22;
    plVar26[-5 - lVar29] = lVar17;
    plVar26[-4 - lVar29] = lVar24;
  }
  else {
    uVar19 = (uVar28 & 0x7ffffffffffffffe) - 2;
    if (uVar19 == 0) {
      lVar29 = 0;
    }
    else {
      uVar23 = ((((((uVar23 >> 3) - (ulong)(7 < uVar20)) + 1 & 0xfffffffffffffffc) - 4 >> 2) + 1 &
                0xfffffffffffffffe) - 2 >> 1) + 1 & 0xfffffffffffffffe;
      lVar29 = 0;
      do {
        lVar17 = plVar30[lVar29 + -3];
        lVar24 = (plVar30 + lVar29 + -3)[1];
        lVar22 = (plVar30 + lVar29 + -1)[1];
        plVar26[lVar29 + -3] = plVar30[lVar29 + -1];
        (plVar26 + lVar29 + -3)[1] = lVar22;
        plVar26[lVar29 + -5] = lVar17;
        (plVar26 + lVar29 + -5)[1] = lVar24;
        lVar17 = plVar30[lVar29 + -7];
        lVar24 = (plVar30 + lVar29 + -7)[1];
        lVar22 = (plVar30 + lVar29 + -5)[1];
        plVar26[lVar29 + -7] = plVar30[lVar29 + -5];
        (plVar26 + lVar29 + -7)[1] = lVar22;
        plVar26[lVar29 + -9] = lVar17;
        (plVar26 + lVar29 + -9)[1] = lVar24;
        lVar17 = plVar30[lVar29 + -0xb];
        lVar24 = (plVar30 + lVar29 + -0xb)[1];
        lVar22 = (plVar30 + lVar29 + -9)[1];
        plVar26[lVar29 + -0xb] = plVar30[lVar29 + -9];
        (plVar26 + lVar29 + -0xb)[1] = lVar22;
        plVar26[lVar29 + -0xd] = lVar17;
        (plVar26 + lVar29 + -0xd)[1] = lVar24;
        lVar17 = plVar30[lVar29 + -0xf];
        lVar24 = (plVar30 + lVar29 + -0xf)[1];
        lVar22 = (plVar30 + lVar29 + -0xd)[1];
        plVar26[lVar29 + -0xf] = plVar30[lVar29 + -0xd];
        (plVar26 + lVar29 + -0xf)[1] = lVar22;
        plVar26[lVar29 + -0x11] = lVar17;
        (plVar26 + lVar29 + -0x11)[1] = lVar24;
        lVar29 = lVar29 + -0x10;
        uVar23 = uVar23 - 2;
      } while (uVar23 != 0);
      lVar29 = -lVar29;
    }
    if (((uVar19 >> 1) + 1 & 1) != 0) {
      plVar15 = plVar30 + -lVar29;
      lVar17 = plVar15[-3];
      lVar24 = plVar15[-2];
      lVar22 = *plVar15;
      plVar26[-3 - lVar29] = plVar15[-1];
      plVar26[-2 - lVar29] = lVar22;
      plVar26[-5 - lVar29] = lVar17;
      plVar26[-4 - lVar29] = lVar24;
      lVar17 = -lVar29;
      lVar24 = plVar30[lVar17 + -7];
      lVar22 = (plVar30 + lVar17 + -7)[1];
      lVar4 = (plVar30 + lVar17 + -5)[1];
      plVar26[lVar17 + -7] = plVar30[lVar17 + -5];
      (plVar26 + lVar17 + -7)[1] = lVar4;
      plVar26[lVar17 + -9] = lVar24;
      (plVar26 + lVar17 + -9)[1] = lVar22;
      lVar29 = lVar29 + 8;
    }
    if ((uVar28 & 1) != 0) goto LAB_0022a4da;
  }
  if (uVar25 == uVar27) {
    return;
  }
  uVar31 = uVar31 - uVar27;
  param_3 = param_3 + -uVar27;
  plVar13 = plVar13 + -uVar27;
LAB_0022a525:
  lVar29 = 0;
  do {
    param_3[lVar29 + -1] = plVar13[lVar29 + -1];
    uVar23 = uVar31 + lVar29;
    lVar29 = lVar29 + -1;
  } while (1 < uVar23);
  return;
LAB_002297f8:
  uVar23 = (long)param_3 - (long)param_2;
  plVar30 = param_6;
  if (0 < (long)uVar23) {
    uVar20 = uVar23 >> 3;
    uVar23 = uVar20 + (uVar23 < 8);
    plVar26 = param_2;
    if ((3 < uVar23) && ((param_2 + uVar23 <= param_6 || (param_6 + uVar23 <= param_2)))) {
      uVar31 = uVar23 & 0xfffffffffffffffc;
      uVar27 = (uVar31 - 4 >> 2) + 1;
      uVar25 = (ulong)((uint)uVar27 & 3);
      if (uVar31 - 4 < 0xc) {
        lVar29 = 0;
      }
      else {
        uVar27 = uVar27 & 0x7ffffffffffffffc;
        lVar29 = 0;
        do {
          lVar17 = (param_2 + lVar29)[1];
          lVar24 = param_2[lVar29 + 2];
          lVar22 = (param_2 + lVar29 + 2)[1];
          param_6[lVar29] = param_2[lVar29];
          (param_6 + lVar29)[1] = lVar17;
          param_6[lVar29 + 2] = lVar24;
          (param_6 + lVar29 + 2)[1] = lVar22;
          lVar17 = (param_2 + lVar29 + 4)[1];
          lVar24 = param_2[lVar29 + 6];
          lVar22 = (param_2 + lVar29 + 6)[1];
          param_6[lVar29 + 4] = param_2[lVar29 + 4];
          (param_6 + lVar29 + 4)[1] = lVar17;
          param_6[lVar29 + 6] = lVar24;
          (param_6 + lVar29 + 6)[1] = lVar22;
          lVar17 = (param_2 + lVar29 + 8)[1];
          lVar24 = param_2[lVar29 + 10];
          lVar22 = (param_2 + lVar29 + 10)[1];
          param_6[lVar29 + 8] = param_2[lVar29 + 8];
          (param_6 + lVar29 + 8)[1] = lVar17;
          param_6[lVar29 + 10] = lVar24;
          (param_6 + lVar29 + 10)[1] = lVar22;
          lVar17 = (param_2 + lVar29 + 0xc)[1];
          lVar24 = param_2[lVar29 + 0xe];
          lVar22 = (param_2 + lVar29 + 0xe)[1];
          param_6[lVar29 + 0xc] = param_2[lVar29 + 0xc];
          (param_6 + lVar29 + 0xc)[1] = lVar17;
          param_6[lVar29 + 0xe] = lVar24;
          (param_6 + lVar29 + 0xe)[1] = lVar22;
          lVar29 = lVar29 + 0x10;
          uVar27 = uVar27 - 4;
        } while (uVar27 != 0);
      }
      if (uVar25 != 0) {
        lVar17 = 0;
        do {
          puVar2 = (undefined8 *)((long)param_2 + lVar17 + lVar29 * 8);
          uVar14 = puVar2[1];
          puVar1 = (undefined8 *)((long)param_2 + lVar17 + lVar29 * 8 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)param_6 + lVar17 + lVar29 * 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar14;
          puVar1 = (undefined8 *)((long)param_6 + lVar17 + lVar29 * 8 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar17 = lVar17 + 0x20;
        } while (uVar25 * 0x20 != lVar17);
      }
      plVar30 = param_6 + uVar31;
      if (uVar23 == uVar31) goto LAB_00229dc8;
      uVar20 = uVar20 - uVar31;
      plVar26 = param_2 + uVar31;
    }
    uVar20 = uVar20 + 1;
    do {
      *plVar30 = *plVar26;
      plVar26 = plVar26 + 1;
      plVar30 = plVar30 + 1;
      uVar20 = uVar20 - 1;
    } while (1 < uVar20);
  }
LAB_00229dc8:
  if (param_1 != param_2) {
    if (plVar30 == param_6) {
      return;
    }
    plVar30 = plVar30 + -1;
LAB_00229df9:
    plVar26 = param_3;
    param_2 = param_2 + -1;
    uVar23 = (8 - (long)param_6) + (long)plVar30;
    do {
      lVar29 = *plVar30;
      lVar17 = *param_2;
      if ((long)*(int *)(lVar29 + 0xd4) != 0) {
        plVar13 = (long *)(*(long *)(lVar29 + 200) + 8);
        lVar24 = (long)*(int *)(lVar29 + 0xd4) * 0x18;
        do {
          if (plVar13[-1] == juce::explicitFocusOrderId) goto LAB_00229e75;
          plVar13 = plVar13 + 3;
          lVar24 = lVar24 + -0x18;
        } while (lVar24 != 0);
      }
      plVar13 = (long *)&juce::getNullVarRef()::nullVar;
      if (juce::getNullVarRef()::nullVar == '\0') {
        iVar11 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
        plVar13 = (long *)&juce::getNullVarRef()::nullVar;
        if (iVar11 != 0) {
          juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
          __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
          __cxa_guard_release(&juce::getNullVarRef()::nullVar);
          plVar13 = (long *)&juce::getNullVarRef()::nullVar;
        }
      }
LAB_00229e75:
                    /* try { // try from 00229e7c to 00229e7e has its CatchHandler @ 0022a5bb */
      uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13 + 1);
      if ((int)uVar9 < 1) {
        uVar9 = 0x7fffffff;
      }
      uVar16 = *(ushort *)(lVar29 + 0xe8);
      iVar11 = *(int *)(lVar29 + 0x38);
      iVar3 = *(int *)(lVar29 + 0x3c);
      if ((long)*(int *)(lVar17 + 0xd4) != 0) {
        plVar13 = (long *)(*(long *)(lVar17 + 200) + 8);
        lVar29 = (long)*(int *)(lVar17 + 0xd4) * 0x18;
        do {
          if (plVar13[-1] == juce::explicitFocusOrderId) goto LAB_00229ef5;
          plVar13 = plVar13 + 3;
          lVar29 = lVar29 + -0x18;
        } while (lVar29 != 0);
      }
      plVar13 = (long *)&juce::getNullVarRef()::nullVar;
      if (juce::getNullVarRef()::nullVar == '\0') {
        iVar12 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
        plVar13 = (long *)&juce::getNullVarRef()::nullVar;
        if (iVar12 != 0) {
          juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
          __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
          __cxa_guard_release(&juce::getNullVarRef()::nullVar);
          plVar13 = (long *)&juce::getNullVarRef()::nullVar;
        }
      }
LAB_00229ef5:
                    /* try { // try from 00229efc to 00229efe has its CatchHandler @ 0022a5b3 */
      uVar10 = (**(code **)(*plVar13 + 0x10))(plVar13 + 1);
      if ((int)uVar10 < 1) {
        uVar10 = 0x7fffffff;
      }
      bVar32 = uVar10 <= uVar9;
      if (((((uVar9 != uVar10) ||
            (uVar21 = uVar16 >> 0xb & 1, uVar16 = *(ushort *)(lVar17 + 0xe8) >> 0xb & 1,
            bVar32 = (uVar16 ^ 1) <= (uVar21 ^ 1), uVar21 != uVar16)) ||
           (bVar32 = *(int *)(lVar17 + 0x3c) <= iVar3, iVar3 != *(int *)(lVar17 + 0x3c))) ||
          (bVar32 = *(int *)(lVar17 + 0x38) <= iVar11, iVar11 != *(int *)(lVar17 + 0x38))) &&
         ((char)(bVar32 * '\x02' + -1) < '\0')) goto LAB_0022a068;
      plVar26[-1] = *plVar30;
      if (plVar30 == param_6) {
        return;
      }
      plVar26 = plVar26 + -1;
      plVar30 = plVar30 + -1;
      uVar23 = uVar23 - 8;
    } while( true );
  }
  uVar23 = (long)plVar30 - (long)param_6;
  if ((long)uVar23 < 1) {
    return;
  }
  uVar20 = uVar23 >> 3;
  uVar31 = uVar20 + (uVar23 < 8);
  local_58 = param_3;
  if ((uVar31 < 4) ||
     ((lVar29 = -uVar20 - (ulong)(uVar23 < 8), param_3 + lVar29 < plVar30 &&
      (plVar30 + lVar29 < param_3)))) goto LAB_0022a442;
  uVar25 = uVar31 & 0xfffffffffffffffc;
  uVar23 = (uVar25 - 4 >> 2) + 1;
  if (uVar25 - 4 == 0) {
    lVar29 = 0;
LAB_0022a2f6:
    lVar17 = plVar30[-4 - lVar29];
    lVar24 = plVar30[-3 - lVar29];
    lVar22 = plVar30[-1 - lVar29];
    param_3[-2 - lVar29] = plVar30[-2 - lVar29];
    param_3[-1 - lVar29] = lVar22;
    param_3[-4 - lVar29] = lVar17;
    param_3[-3 - lVar29] = lVar24;
  }
  else {
    uVar28 = (uVar23 & 0x7ffffffffffffffe) - 2;
    uVar27 = (uVar28 >> 1) + 1;
    if (uVar28 == 0) {
      lVar29 = 0;
    }
    else {
      uVar28 = uVar27 & 0xfffffffffffffffe;
      lVar29 = 0;
      do {
        lVar17 = plVar30[lVar29 + -4];
        lVar24 = (plVar30 + lVar29 + -4)[1];
        lVar22 = (plVar30 + lVar29 + -2)[1];
        param_3[lVar29 + -2] = plVar30[lVar29 + -2];
        (param_3 + lVar29 + -2)[1] = lVar22;
        param_3[lVar29 + -4] = lVar17;
        (param_3 + lVar29 + -4)[1] = lVar24;
        lVar17 = plVar30[lVar29 + -8];
        lVar24 = (plVar30 + lVar29 + -8)[1];
        lVar22 = (plVar30 + lVar29 + -6)[1];
        param_3[lVar29 + -6] = plVar30[lVar29 + -6];
        (param_3 + lVar29 + -6)[1] = lVar22;
        param_3[lVar29 + -8] = lVar17;
        (param_3 + lVar29 + -8)[1] = lVar24;
        lVar17 = plVar30[lVar29 + -0xc];
        lVar24 = (plVar30 + lVar29 + -0xc)[1];
        lVar22 = (plVar30 + lVar29 + -10)[1];
        param_3[lVar29 + -10] = plVar30[lVar29 + -10];
        (param_3 + lVar29 + -10)[1] = lVar22;
        param_3[lVar29 + -0xc] = lVar17;
        (param_3 + lVar29 + -0xc)[1] = lVar24;
        lVar17 = plVar30[lVar29 + -0x10];
        lVar24 = (plVar30 + lVar29 + -0x10)[1];
        lVar22 = (plVar30 + lVar29 + -0xe)[1];
        param_3[lVar29 + -0xe] = plVar30[lVar29 + -0xe];
        (param_3 + lVar29 + -0xe)[1] = lVar22;
        param_3[lVar29 + -0x10] = lVar17;
        (param_3 + lVar29 + -0x10)[1] = lVar24;
        lVar29 = lVar29 + -0x10;
        uVar28 = uVar28 - 2;
      } while (uVar28 != 0);
      lVar29 = -lVar29;
    }
    if ((uVar27 & 1) != 0) {
      lVar17 = plVar30[-4 - lVar29];
      lVar24 = plVar30[-3 - lVar29];
      lVar22 = plVar30[-1 - lVar29];
      param_3[-2 - lVar29] = plVar30[-2 - lVar29];
      param_3[-1 - lVar29] = lVar22;
      param_3[-4 - lVar29] = lVar17;
      param_3[-3 - lVar29] = lVar24;
      lVar17 = -lVar29;
      lVar24 = plVar30[lVar17 + -8];
      lVar22 = (plVar30 + lVar17 + -8)[1];
      lVar4 = (plVar30 + lVar17 + -6)[1];
      param_3[lVar17 + -6] = plVar30[lVar17 + -6];
      (param_3 + lVar17 + -6)[1] = lVar4;
      param_3[lVar17 + -8] = lVar24;
      (param_3 + lVar17 + -8)[1] = lVar22;
      lVar29 = lVar29 + 8;
    }
    if ((uVar23 & 1) != 0) goto LAB_0022a2f6;
  }
  if (uVar31 == uVar25) {
    return;
  }
  uVar20 = uVar20 - uVar25;
  local_58 = param_3 + -uVar25;
  plVar30 = plVar30 + -uVar25;
LAB_0022a442:
  lVar29 = 0;
  do {
    local_58[lVar29 + -1] = plVar30[lVar29 + -1];
    uVar23 = uVar20 + lVar29;
    lVar29 = lVar29 + -1;
  } while (1 < uVar23);
  return;
}


