// Function : __merge_sort_loop<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,juce::Component**,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>
// Namespace: std
// Entry    : 002273a0
// Prototype: void __merge_sort_loop<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,juce::Component**,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>(long * param_1, long * param_2, long * param_3, long param_4)
// Body     : 002273a0 - 00227d95


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__merge_sort_loop<__gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >, juce::Component**, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}> >(__gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >, juce::Component**, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>) */

void __cdecl
std::
__merge_sort_loop<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,juce::Component**,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ushort uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  ushort uVar26;
  ulong uVar27;
  long *plVar28;
  bool bVar29;
  long *local_78;
  long *local_70;
  
  lVar17 = param_4 * 2;
  lVar12 = (long)param_2 - (long)param_1 >> 3;
  if (lVar17 <= lVar12) {
    local_70 = param_1 + param_4;
    plVar28 = param_1;
    local_78 = param_1;
    do {
      local_78 = local_78 + param_4 * 2;
      plVar25 = plVar28 + param_4;
      param_1 = plVar28 + param_4 * 2;
      plVar19 = plVar25;
      if (!(lVar17 == param_4 || param_4 == 0)) {
        plVar24 = param_3;
        do {
          lVar12 = *plVar19;
          lVar18 = *plVar28;
          if ((long)*(int *)(lVar12 + 0xd4) != 0) {
            plVar22 = (long *)(*(long *)(lVar12 + 200) + 8);
            lVar20 = (long)*(int *)(lVar12 + 0xd4) * 0x18;
            do {
              if (plVar22[-1] == juce::explicitFocusOrderId) goto LAB_00227655;
              plVar22 = plVar22 + 3;
              lVar20 = lVar20 + -0x18;
            } while (lVar20 != 0);
          }
          plVar22 = (long *)&juce::getNullVarRef()::nullVar;
          if (juce::getNullVarRef()::nullVar == '\0') {
            iVar10 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
            plVar22 = (long *)&juce::getNullVarRef()::nullVar;
            if (iVar10 != 0) {
              juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
              __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
              __cxa_guard_release(&juce::getNullVarRef()::nullVar);
              plVar22 = (long *)&juce::getNullVarRef()::nullVar;
            }
          }
LAB_00227655:
                    /* try { // try from 0022765c to 0022765e has its CatchHandler @ 00227d9e */
          uVar8 = (**(code **)(*plVar22 + 0x10))(plVar22 + 1);
          if ((int)uVar8 < 1) {
            uVar8 = 0x7fffffff;
          }
          uVar15 = *(ushort *)(lVar12 + 0xe8);
          iVar10 = *(int *)(lVar12 + 0x38);
          iVar3 = *(int *)(lVar12 + 0x3c);
          if ((long)*(int *)(lVar18 + 0xd4) != 0) {
            plVar22 = (long *)(*(long *)(lVar18 + 200) + 8);
            lVar12 = (long)*(int *)(lVar18 + 0xd4) * 0x18;
            do {
              if (plVar22[-1] == juce::explicitFocusOrderId) goto LAB_002276d5;
              plVar22 = plVar22 + 3;
              lVar12 = lVar12 + -0x18;
            } while (lVar12 != 0);
          }
          plVar22 = (long *)&juce::getNullVarRef()::nullVar;
          if (juce::getNullVarRef()::nullVar == '\0') {
            iVar11 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
            plVar22 = (long *)&juce::getNullVarRef()::nullVar;
            if (iVar11 != 0) {
              juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
              __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
              __cxa_guard_release(&juce::getNullVarRef()::nullVar);
              plVar22 = (long *)&juce::getNullVarRef()::nullVar;
            }
          }
LAB_002276d5:
                    /* try { // try from 002276dc to 002276de has its CatchHandler @ 00227d96 */
          uVar9 = (**(code **)(*plVar22 + 0x10))(plVar22 + 1);
          if ((int)uVar9 < 1) {
            uVar9 = 0x7fffffff;
          }
          bVar29 = uVar9 <= uVar8;
          if ((uVar8 == uVar9) &&
             (uVar26 = uVar15 >> 0xb & 1, uVar15 = *(ushort *)(lVar18 + 0xe8) >> 0xb & 1,
             bVar29 = (uVar15 ^ 1) <= (uVar26 ^ 1), uVar26 == uVar15)) {
            if (iVar3 == *(int *)(lVar18 + 0x3c)) {
              bVar29 = *(int *)(lVar18 + 0x38) <= iVar10;
              if (iVar10 != *(int *)(lVar18 + 0x38)) goto joined_r0x002275d0;
            }
            else if ((char)((*(int *)(lVar18 + 0x3c) <= iVar3) * '\x02' + -1) < '\0')
            goto LAB_00227770;
LAB_002275d6:
            *plVar24 = *plVar28;
            plVar28 = plVar28 + 1;
          }
          else {
joined_r0x002275d0:
            if (-1 < (char)(bVar29 * '\x02' + -1)) goto LAB_002275d6;
LAB_00227770:
            *plVar24 = *plVar19;
            plVar19 = plVar19 + 1;
          }
          param_3 = plVar24 + 1;
          if (plVar28 == plVar25) break;
          param_3 = plVar24 + 1;
          plVar24 = param_3;
        } while (plVar19 != param_1);
      }
      uVar27 = (long)plVar25 - (long)plVar28;
      if (0 < (long)uVar27) {
        uVar14 = uVar27 >> 3;
        uVar16 = (uVar14 - (7 < uVar27)) + 1;
        if (3 < uVar16) {
          lVar12 = -(ulong)(7 < uVar27);
          if ((plVar28 + uVar14 + lVar12 + 1 <= param_3) ||
             (param_3 + uVar14 + lVar12 + 1 <= plVar28)) {
            uVar27 = uVar16 & 0xfffffffffffffffc;
            if (uVar27 - 4 < 0xc) {
              lVar18 = 0;
            }
            else {
              uVar21 = ((((ulong)((long)local_70 - (long)plVar28) >> 3) + lVar12 + 1 &
                        0xfffffffffffffffc) - 4 >> 2) + 1 & 0xfffffffffffffffc;
              lVar18 = 0;
              do {
                lVar20 = (plVar28 + lVar18)[1];
                lVar4 = plVar28[lVar18 + 2];
                lVar5 = (plVar28 + lVar18 + 2)[1];
                param_3[lVar18] = plVar28[lVar18];
                (param_3 + lVar18)[1] = lVar20;
                param_3[lVar18 + 2] = lVar4;
                (param_3 + lVar18 + 2)[1] = lVar5;
                lVar20 = (plVar28 + lVar18 + 4)[1];
                lVar4 = plVar28[lVar18 + 6];
                lVar5 = (plVar28 + lVar18 + 6)[1];
                param_3[lVar18 + 4] = plVar28[lVar18 + 4];
                (param_3 + lVar18 + 4)[1] = lVar20;
                param_3[lVar18 + 6] = lVar4;
                (param_3 + lVar18 + 6)[1] = lVar5;
                lVar20 = (plVar28 + lVar18 + 8)[1];
                lVar4 = plVar28[lVar18 + 10];
                lVar5 = (plVar28 + lVar18 + 10)[1];
                param_3[lVar18 + 8] = plVar28[lVar18 + 8];
                (param_3 + lVar18 + 8)[1] = lVar20;
                param_3[lVar18 + 10] = lVar4;
                (param_3 + lVar18 + 10)[1] = lVar5;
                lVar20 = (plVar28 + lVar18 + 0xc)[1];
                lVar4 = plVar28[lVar18 + 0xe];
                lVar5 = (plVar28 + lVar18 + 0xe)[1];
                param_3[lVar18 + 0xc] = plVar28[lVar18 + 0xc];
                (param_3 + lVar18 + 0xc)[1] = lVar20;
                param_3[lVar18 + 0xe] = lVar4;
                (param_3 + lVar18 + 0xe)[1] = lVar5;
                lVar18 = lVar18 + 0x10;
                uVar21 = uVar21 - 4;
              } while (uVar21 != 0);
            }
            if (((uVar27 - 4 >> 2) + 1 & 3) != 0) {
              lVar20 = 0;
              do {
                puVar2 = (undefined8 *)((long)plVar28 + lVar20 + lVar18 * 8);
                uVar13 = puVar2[1];
                puVar1 = (undefined8 *)((long)plVar28 + lVar20 + lVar18 * 8 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((long)param_3 + lVar20 + lVar18 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar13;
                puVar1 = (undefined8 *)((long)param_3 + lVar20 + lVar18 * 8 + 0x10);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                lVar20 = lVar20 + 0x20;
              } while ((ulong)((byte)(((byte)(((char)lVar12 +
                                               (char)((uint)((int)local_70 - (int)plVar28) >> 3) +
                                               1U & 0xc) - 4) >> 2) + 1) & 3) * 0x20 != lVar20);
            }
            param_3 = param_3 + uVar27;
            if (uVar16 == uVar27) goto LAB_00227855;
            uVar14 = uVar14 - uVar27;
            plVar28 = plVar28 + uVar27;
          }
        }
        uVar14 = uVar14 + 1;
        do {
          *param_3 = *plVar28;
          plVar28 = plVar28 + 1;
          param_3 = param_3 + 1;
          uVar14 = uVar14 - 1;
        } while (1 < uVar14);
      }
LAB_00227855:
      uVar27 = (long)param_1 - (long)plVar19;
      if (0 < (long)uVar27) {
        uVar14 = uVar27 >> 3;
        uVar16 = (uVar14 - (7 < uVar27)) + 1;
        if (3 < uVar16) {
          lVar12 = -(ulong)(7 < uVar27);
          if ((plVar19 + uVar14 + lVar12 + 1 <= param_3) ||
             (param_3 + uVar14 + lVar12 + 1 <= plVar19)) {
            uVar27 = uVar16 & 0xfffffffffffffffc;
            if (uVar27 - 4 < 0xc) {
              lVar18 = 0;
            }
            else {
              uVar21 = ((((ulong)((long)local_78 - (long)plVar19) >> 3) + lVar12 + 1 &
                        0xfffffffffffffffc) - 4 >> 2) + 1 & 0xfffffffffffffffc;
              lVar18 = 0;
              do {
                lVar20 = (plVar19 + lVar18)[1];
                lVar4 = plVar19[lVar18 + 2];
                lVar5 = (plVar19 + lVar18 + 2)[1];
                param_3[lVar18] = plVar19[lVar18];
                (param_3 + lVar18)[1] = lVar20;
                param_3[lVar18 + 2] = lVar4;
                (param_3 + lVar18 + 2)[1] = lVar5;
                lVar20 = (plVar19 + lVar18 + 4)[1];
                lVar4 = plVar19[lVar18 + 6];
                lVar5 = (plVar19 + lVar18 + 6)[1];
                param_3[lVar18 + 4] = plVar19[lVar18 + 4];
                (param_3 + lVar18 + 4)[1] = lVar20;
                param_3[lVar18 + 6] = lVar4;
                (param_3 + lVar18 + 6)[1] = lVar5;
                lVar20 = (plVar19 + lVar18 + 8)[1];
                lVar4 = plVar19[lVar18 + 10];
                lVar5 = (plVar19 + lVar18 + 10)[1];
                param_3[lVar18 + 8] = plVar19[lVar18 + 8];
                (param_3 + lVar18 + 8)[1] = lVar20;
                param_3[lVar18 + 10] = lVar4;
                (param_3 + lVar18 + 10)[1] = lVar5;
                lVar20 = (plVar19 + lVar18 + 0xc)[1];
                lVar4 = plVar19[lVar18 + 0xe];
                lVar5 = (plVar19 + lVar18 + 0xe)[1];
                param_3[lVar18 + 0xc] = plVar19[lVar18 + 0xc];
                (param_3 + lVar18 + 0xc)[1] = lVar20;
                param_3[lVar18 + 0xe] = lVar4;
                (param_3 + lVar18 + 0xe)[1] = lVar5;
                lVar18 = lVar18 + 0x10;
                uVar21 = uVar21 - 4;
              } while (uVar21 != 0);
            }
            if (((uVar27 - 4 >> 2) + 1 & 3) != 0) {
              lVar20 = 0;
              do {
                puVar2 = (undefined8 *)((long)plVar19 + lVar20 + lVar18 * 8);
                uVar13 = puVar2[1];
                puVar1 = (undefined8 *)((long)plVar19 + lVar20 + lVar18 * 8 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((long)param_3 + lVar20 + lVar18 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar13;
                puVar1 = (undefined8 *)((long)param_3 + lVar20 + lVar18 * 8 + 0x10);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                lVar20 = lVar20 + 0x20;
              } while ((ulong)((byte)(((byte)(((char)lVar12 +
                                               (char)((uint)((int)local_78 - (int)plVar19) >> 3) +
                                               1U & 0xc) - 4) >> 2) + 1) & 3) * 0x20 != lVar20);
            }
            param_3 = param_3 + uVar27;
            if (uVar16 == uVar27) goto LAB_002274e0;
            uVar14 = uVar14 - uVar27;
            plVar19 = plVar19 + uVar27;
          }
        }
        uVar14 = uVar14 + 1;
        do {
          *param_3 = *plVar19;
          plVar19 = plVar19 + 1;
          param_3 = param_3 + 1;
          uVar14 = uVar14 - 1;
        } while (1 < uVar14);
      }
LAB_002274e0:
      lVar12 = (long)param_2 - (long)param_1 >> 3;
      local_70 = local_70 + param_4 * 2;
      plVar28 = param_1;
    } while (lVar17 <= lVar12);
  }
  if (param_4 < lVar12) {
    lVar12 = param_4;
  }
  plVar28 = param_1 + lVar12;
  plVar19 = plVar28;
  plVar25 = param_3;
  if (lVar12 != 0) {
    while (plVar25 = param_3, plVar19 != param_2) {
      uVar13 = __gnu_cxx::__ops::
               _Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
               ::operator()(*plVar19,*param_1);
      if ((char)uVar13 == '\0') {
        *param_3 = *param_1;
        param_1 = param_1 + 1;
      }
      else {
        *param_3 = *plVar19;
        plVar19 = plVar19 + 1;
      }
      plVar25 = param_3 + 1;
      if (param_1 == plVar28) break;
      param_3 = param_3 + 1;
    }
  }
  uVar27 = (long)plVar28 - (long)param_1;
  if (0 < (long)uVar27) {
    uVar14 = uVar27 >> 3;
    uVar27 = uVar14 + (uVar27 < 8);
    if ((3 < uVar27) && ((param_1 + uVar27 <= plVar25 || (plVar25 + uVar27 <= param_1)))) {
      uVar23 = uVar27 & 0xfffffffffffffffc;
      uVar21 = (uVar23 - 4 >> 2) + 1;
      uVar16 = (ulong)((uint)uVar21 & 3);
      if (uVar23 - 4 < 0xc) {
        lVar17 = 0;
      }
      else {
        uVar21 = uVar21 & 0xfffffffffffffffc;
        lVar17 = 0;
        do {
          lVar12 = (param_1 + lVar17)[1];
          lVar18 = param_1[lVar17 + 2];
          lVar20 = (param_1 + lVar17 + 2)[1];
          plVar25[lVar17] = param_1[lVar17];
          (plVar25 + lVar17)[1] = lVar12;
          plVar25[lVar17 + 2] = lVar18;
          (plVar25 + lVar17 + 2)[1] = lVar20;
          lVar12 = (param_1 + lVar17 + 4)[1];
          lVar18 = param_1[lVar17 + 6];
          lVar20 = (param_1 + lVar17 + 6)[1];
          plVar25[lVar17 + 4] = param_1[lVar17 + 4];
          (plVar25 + lVar17 + 4)[1] = lVar12;
          plVar25[lVar17 + 6] = lVar18;
          (plVar25 + lVar17 + 6)[1] = lVar20;
          lVar12 = (param_1 + lVar17 + 8)[1];
          lVar18 = param_1[lVar17 + 10];
          lVar20 = (param_1 + lVar17 + 10)[1];
          plVar25[lVar17 + 8] = param_1[lVar17 + 8];
          (plVar25 + lVar17 + 8)[1] = lVar12;
          plVar25[lVar17 + 10] = lVar18;
          (plVar25 + lVar17 + 10)[1] = lVar20;
          lVar12 = (param_1 + lVar17 + 0xc)[1];
          lVar18 = param_1[lVar17 + 0xe];
          lVar20 = (param_1 + lVar17 + 0xe)[1];
          plVar25[lVar17 + 0xc] = param_1[lVar17 + 0xc];
          (plVar25 + lVar17 + 0xc)[1] = lVar12;
          plVar25[lVar17 + 0xe] = lVar18;
          (plVar25 + lVar17 + 0xe)[1] = lVar20;
          lVar17 = lVar17 + 0x10;
          uVar21 = uVar21 - 4;
        } while (uVar21 != 0);
      }
      if (uVar16 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar12 + lVar17 * 8);
          uVar13 = puVar2[1];
          puVar1 = (undefined8 *)((long)param_1 + lVar12 + lVar17 * 8 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)plVar25 + lVar12 + lVar17 * 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar13;
          puVar1 = (undefined8 *)((long)plVar25 + lVar12 + lVar17 * 8 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar16 * 0x20 != lVar12);
      }
      plVar25 = plVar25 + uVar23;
      if (uVar27 == uVar23) goto LAB_00227c39;
      uVar14 = uVar14 - uVar23;
      param_1 = param_1 + uVar23;
    }
    uVar14 = uVar14 + 1;
    do {
      *plVar25 = *param_1;
      param_1 = param_1 + 1;
      plVar25 = plVar25 + 1;
      uVar14 = uVar14 - 1;
    } while (1 < uVar14);
  }
LAB_00227c39:
  uVar27 = (long)param_2 - (long)plVar19;
  if (0 < (long)uVar27) {
    uVar14 = uVar27 >> 3;
    uVar27 = uVar14 + (uVar27 < 8);
    if ((3 < uVar27) && ((plVar19 + uVar27 <= plVar25 || (plVar25 + uVar27 <= plVar19)))) {
      uVar23 = uVar27 & 0xfffffffffffffffc;
      uVar21 = (uVar23 - 4 >> 2) + 1;
      uVar16 = (ulong)((uint)uVar21 & 3);
      if (uVar23 - 4 < 0xc) {
        lVar17 = 0;
      }
      else {
        uVar21 = uVar21 & 0xfffffffffffffffc;
        lVar17 = 0;
        do {
          lVar12 = (plVar19 + lVar17)[1];
          lVar18 = plVar19[lVar17 + 2];
          lVar20 = (plVar19 + lVar17 + 2)[1];
          plVar25[lVar17] = plVar19[lVar17];
          (plVar25 + lVar17)[1] = lVar12;
          plVar25[lVar17 + 2] = lVar18;
          (plVar25 + lVar17 + 2)[1] = lVar20;
          lVar12 = (plVar19 + lVar17 + 4)[1];
          lVar18 = plVar19[lVar17 + 6];
          lVar20 = (plVar19 + lVar17 + 6)[1];
          plVar25[lVar17 + 4] = plVar19[lVar17 + 4];
          (plVar25 + lVar17 + 4)[1] = lVar12;
          plVar25[lVar17 + 6] = lVar18;
          (plVar25 + lVar17 + 6)[1] = lVar20;
          lVar12 = (plVar19 + lVar17 + 8)[1];
          lVar18 = plVar19[lVar17 + 10];
          lVar20 = (plVar19 + lVar17 + 10)[1];
          plVar25[lVar17 + 8] = plVar19[lVar17 + 8];
          (plVar25 + lVar17 + 8)[1] = lVar12;
          plVar25[lVar17 + 10] = lVar18;
          (plVar25 + lVar17 + 10)[1] = lVar20;
          lVar12 = (plVar19 + lVar17 + 0xc)[1];
          lVar18 = plVar19[lVar17 + 0xe];
          lVar20 = (plVar19 + lVar17 + 0xe)[1];
          plVar25[lVar17 + 0xc] = plVar19[lVar17 + 0xc];
          (plVar25 + lVar17 + 0xc)[1] = lVar12;
          plVar25[lVar17 + 0xe] = lVar18;
          (plVar25 + lVar17 + 0xe)[1] = lVar20;
          lVar17 = lVar17 + 0x10;
          uVar21 = uVar21 - 4;
        } while (uVar21 != 0);
      }
      if (uVar16 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)((long)plVar19 + lVar12 + lVar17 * 8);
          uVar13 = puVar2[1];
          puVar1 = (undefined8 *)((long)plVar19 + lVar12 + lVar17 * 8 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)plVar25 + lVar12 + lVar17 * 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar13;
          puVar1 = (undefined8 *)((long)plVar25 + lVar12 + lVar17 * 8 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar16 * 0x20 != lVar12);
      }
      if (uVar27 == uVar23) {
        return;
      }
      uVar14 = uVar14 - uVar23;
      plVar25 = plVar25 + uVar23;
      plVar19 = plVar19 + uVar23;
    }
    uVar14 = uVar14 + 1;
    lVar17 = 0;
    do {
      *(undefined8 *)((long)plVar25 + lVar17) = *(undefined8 *)((long)plVar19 + lVar17);
      uVar14 = uVar14 - 1;
      lVar17 = lVar17 + 8;
    } while (1 < uVar14);
  }
  return;
}


