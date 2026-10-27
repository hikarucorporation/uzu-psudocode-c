// Function : __merge_sort_loop<juce::Component**,__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>
// Namespace: std
// Entry    : 00227db0
// Prototype: void __merge_sort_loop<juce::Component**,__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>(long * param_1, long * param_2, long * param_3, long param_4)
// Body     : 00227db0 - 00228abb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__merge_sort_loop<juce::Component**, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}> >(juce::Component**, juce::Component**,
   __gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>) */

void __cdecl
std::
__merge_sort_loop<juce::Component**,__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ushort uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ushort uVar30;
  bool bVar31;
  long *local_68;
  
  lVar18 = param_4 * 2;
  lVar13 = (long)param_2 - (long)param_1 >> 3;
  if (lVar18 <= lVar13) {
    plVar19 = param_1 + param_4;
    plVar29 = param_1;
    local_68 = param_1;
    do {
      local_68 = local_68 + param_4 * 2;
      plVar25 = plVar29 + param_4;
      param_1 = plVar29 + param_4 * 2;
      plVar15 = plVar25;
      if (!(lVar18 == param_4 || param_4 == 0)) {
        plVar23 = param_3;
        do {
          lVar13 = *plVar15;
          lVar17 = *plVar29;
          if ((long)*(int *)(lVar13 + 0xd4) != 0) {
            plVar26 = (long *)(*(long *)(lVar13 + 200) + 8);
            lVar20 = (long)*(int *)(lVar13 + 0xd4) * 0x18;
            do {
              if (plVar26[-1] == juce::explicitFocusOrderId) goto LAB_002282e5;
              plVar26 = plVar26 + 3;
              lVar20 = lVar20 + -0x18;
            } while (lVar20 != 0);
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
LAB_002282e5:
                    /* try { // try from 002282ec to 002282ee has its CatchHandler @ 00228ad4 */
          uVar9 = (**(code **)(*plVar26 + 0x10))(plVar26 + 1);
          if ((int)uVar9 < 1) {
            uVar9 = 0x7fffffff;
          }
          uVar16 = *(ushort *)(lVar13 + 0xe8);
          iVar11 = *(int *)(lVar13 + 0x38);
          iVar3 = *(int *)(lVar13 + 0x3c);
          if ((long)*(int *)(lVar17 + 0xd4) != 0) {
            plVar26 = (long *)(*(long *)(lVar17 + 200) + 8);
            lVar13 = (long)*(int *)(lVar17 + 0xd4) * 0x18;
            do {
              if (plVar26[-1] == juce::explicitFocusOrderId) goto LAB_00228365;
              plVar26 = plVar26 + 3;
              lVar13 = lVar13 + -0x18;
            } while (lVar13 != 0);
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
LAB_00228365:
                    /* try { // try from 0022836c to 0022836e has its CatchHandler @ 00228acc */
          uVar10 = (**(code **)(*plVar26 + 0x10))(plVar26 + 1);
          if ((int)uVar10 < 1) {
            uVar10 = 0x7fffffff;
          }
          bVar31 = uVar10 <= uVar9;
          if (uVar9 == uVar10) {
            uVar30 = uVar16 >> 0xb & 1;
            uVar16 = *(ushort *)(lVar17 + 0xe8) >> 0xb & 1;
            bVar31 = (uVar16 ^ 1) <= (uVar30 ^ 1);
            if (uVar30 == uVar16) {
              bVar31 = *(int *)(lVar17 + 0x3c) <= iVar3;
              if (iVar3 != *(int *)(lVar17 + 0x3c)) goto joined_r0x00228265;
              bVar31 = *(int *)(lVar17 + 0x38) <= iVar11;
              if (iVar11 != *(int *)(lVar17 + 0x38)) goto joined_r0x00228400;
            }
            else {
joined_r0x00228400:
              if ((char)(bVar31 * '\x02' + -1) < '\0') goto LAB_00228420;
            }
LAB_0022826b:
            *plVar23 = *plVar29;
            plVar29 = plVar29 + 1;
          }
          else {
joined_r0x00228265:
            if (-1 < (char)(bVar31 * '\x02' + -1)) goto LAB_0022826b;
LAB_00228420:
            *plVar23 = *plVar15;
            plVar15 = plVar15 + 1;
          }
          param_3 = plVar23 + 1;
          if (plVar29 == plVar25) break;
          param_3 = plVar23 + 1;
          plVar23 = param_3;
        } while (plVar15 != param_1);
      }
      uVar21 = (long)plVar25 - (long)plVar29;
      plVar25 = param_3;
      if (0 < (long)uVar21) {
        uVar14 = uVar21 >> 3;
        uVar28 = (uVar14 - (7 < uVar21)) + 1;
        if (3 < uVar28) {
          lVar13 = -(ulong)(7 < uVar21);
          if ((plVar29 + uVar14 + lVar13 + 1 <= param_3) ||
             (param_3 + uVar14 + lVar13 + 1 <= plVar29)) {
            uVar21 = uVar28 & 0xfffffffffffffffc;
            if (uVar21 - 4 < 0xc) {
              lVar17 = 0;
            }
            else {
              uVar22 = ((((ulong)((long)plVar19 - (long)plVar29) >> 3) + lVar13 + 1 &
                        0xfffffffffffffffc) - 4 >> 2) + 1 & 0xfffffffffffffffc;
              lVar17 = 0;
              do {
                lVar20 = (plVar29 + lVar17)[1];
                lVar24 = plVar29[lVar17 + 2];
                lVar4 = (plVar29 + lVar17 + 2)[1];
                param_3[lVar17] = plVar29[lVar17];
                (param_3 + lVar17)[1] = lVar20;
                param_3[lVar17 + 2] = lVar24;
                (param_3 + lVar17 + 2)[1] = lVar4;
                lVar20 = (plVar29 + lVar17 + 4)[1];
                lVar24 = plVar29[lVar17 + 6];
                lVar4 = (plVar29 + lVar17 + 6)[1];
                param_3[lVar17 + 4] = plVar29[lVar17 + 4];
                (param_3 + lVar17 + 4)[1] = lVar20;
                param_3[lVar17 + 6] = lVar24;
                (param_3 + lVar17 + 6)[1] = lVar4;
                lVar20 = (plVar29 + lVar17 + 8)[1];
                lVar24 = plVar29[lVar17 + 10];
                lVar4 = (plVar29 + lVar17 + 10)[1];
                param_3[lVar17 + 8] = plVar29[lVar17 + 8];
                (param_3 + lVar17 + 8)[1] = lVar20;
                param_3[lVar17 + 10] = lVar24;
                (param_3 + lVar17 + 10)[1] = lVar4;
                lVar20 = (plVar29 + lVar17 + 0xc)[1];
                lVar24 = plVar29[lVar17 + 0xe];
                lVar4 = (plVar29 + lVar17 + 0xe)[1];
                param_3[lVar17 + 0xc] = plVar29[lVar17 + 0xc];
                (param_3 + lVar17 + 0xc)[1] = lVar20;
                param_3[lVar17 + 0xe] = lVar24;
                (param_3 + lVar17 + 0xe)[1] = lVar4;
                lVar17 = lVar17 + 0x10;
                uVar22 = uVar22 - 4;
              } while (uVar22 != 0);
            }
            if (((uVar21 - 4 >> 2) + 1 & 3) != 0) {
              lVar20 = 0;
              do {
                puVar2 = (undefined8 *)((long)plVar29 + lVar20 + lVar17 * 8);
                uVar6 = puVar2[1];
                puVar1 = (undefined8 *)((long)plVar29 + lVar20 + lVar17 * 8 + 0x10);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)((long)param_3 + lVar20 + lVar17 * 8);
                *puVar1 = *puVar2;
                puVar1[1] = uVar6;
                puVar1 = (undefined8 *)((long)param_3 + lVar20 + lVar17 * 8 + 0x10);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                lVar20 = lVar20 + 0x20;
              } while ((ulong)((byte)(((byte)(((char)lVar13 +
                                               (char)((uint)((int)plVar19 - (int)plVar29) >> 3) + 1U
                                              & 0xc) - 4) >> 2) + 1) & 3) * 0x20 != lVar20);
            }
            plVar25 = param_3 + uVar21;
            if (uVar28 == uVar21) goto LAB_00228588;
            uVar14 = uVar14 - uVar21;
            plVar29 = plVar29 + uVar21;
          }
        }
        uVar14 = uVar14 + 1;
        do {
          *plVar25 = *plVar29;
          plVar29 = plVar29 + 1;
          plVar25 = plVar25 + 1;
          uVar14 = uVar14 - 1;
        } while (1 < uVar14);
      }
LAB_00228588:
      plVar29 = (long *)(((long)plVar25 - (long)param_3 & 0xfffffffffffffff8U) + (long)param_3);
      uVar21 = (long)param_1 - (long)plVar15;
      if (0 < (long)uVar21) {
        uVar14 = uVar21 >> 3;
        uVar28 = (uVar14 - (7 < uVar21)) + 1;
        if (3 < uVar28) {
          lVar13 = (long)plVar25 - (long)param_3 >> 3;
          if ((plVar15 + (uVar14 - (7 < uVar21)) + 1 <= plVar29) ||
             (param_3 + ((lVar13 + uVar14) - (ulong)(7 < uVar21)) + 1 <= plVar15)) {
            lVar17 = -(ulong)(7 < uVar21);
            uVar21 = uVar28 & 0xfffffffffffffffc;
            if (uVar21 - 4 < 0xc) {
              lVar20 = 0;
            }
            else {
              uVar22 = ((((ulong)((long)local_68 - (long)plVar15) >> 3) + lVar17 + 1 &
                        0xfffffffffffffffc) - 4 >> 2) + 1 & 0xfffffffffffffffc;
              lVar20 = 0;
              do {
                lVar24 = (plVar15 + lVar20)[1];
                lVar4 = plVar15[lVar20 + 2];
                lVar5 = (plVar15 + lVar20 + 2)[1];
                param_3[lVar13 + lVar20] = plVar15[lVar20];
                (param_3 + lVar13 + lVar20)[1] = lVar24;
                param_3[lVar13 + lVar20 + 2] = lVar4;
                (param_3 + lVar13 + lVar20 + 2)[1] = lVar5;
                lVar24 = (plVar15 + lVar20 + 4)[1];
                lVar4 = plVar15[lVar20 + 6];
                lVar5 = (plVar15 + lVar20 + 6)[1];
                param_3[lVar13 + lVar20 + 4] = plVar15[lVar20 + 4];
                (param_3 + lVar13 + lVar20 + 4)[1] = lVar24;
                param_3[lVar13 + lVar20 + 6] = lVar4;
                (param_3 + lVar13 + lVar20 + 6)[1] = lVar5;
                lVar24 = (plVar15 + lVar20 + 8)[1];
                lVar4 = plVar15[lVar20 + 10];
                lVar5 = (plVar15 + lVar20 + 10)[1];
                param_3[lVar13 + lVar20 + 8] = plVar15[lVar20 + 8];
                (param_3 + lVar13 + lVar20 + 8)[1] = lVar24;
                param_3[lVar13 + lVar20 + 10] = lVar4;
                (param_3 + lVar13 + lVar20 + 10)[1] = lVar5;
                lVar24 = (plVar15 + lVar20 + 0xc)[1];
                lVar4 = plVar15[lVar20 + 0xe];
                lVar5 = (plVar15 + lVar20 + 0xe)[1];
                param_3[lVar13 + lVar20 + 0xc] = plVar15[lVar20 + 0xc];
                (param_3 + lVar13 + lVar20 + 0xc)[1] = lVar24;
                param_3[lVar13 + lVar20 + 0xe] = lVar4;
                (param_3 + lVar13 + lVar20 + 0xe)[1] = lVar5;
                lVar20 = lVar20 + 0x10;
                uVar22 = uVar22 - 4;
              } while (uVar22 != 0);
            }
            if (((uVar21 - 4 >> 2) + 1 & 3) != 0) {
              lVar13 = (lVar13 + lVar20) * 8;
              lVar24 = 0;
              do {
                puVar2 = (undefined8 *)((long)plVar15 + lVar24 + lVar20 * 8);
                uVar6 = puVar2[1];
                puVar1 = (undefined8 *)((long)plVar15 + lVar24 + lVar20 * 8 + 0x10);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)((long)param_3 + lVar24 + lVar13);
                *puVar1 = *puVar2;
                puVar1[1] = uVar6;
                puVar1 = (undefined8 *)((long)param_3 + lVar24 + lVar13 + 0x10);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                lVar24 = lVar24 + 0x20;
              } while ((ulong)((byte)(((byte)(((char)lVar17 +
                                               (char)((uint)((int)local_68 - (int)plVar15) >> 3) +
                                               1U & 0xc) - 4) >> 2) + 1) & 3) * 0x20 != lVar24);
            }
            plVar29 = plVar29 + uVar21;
            if (uVar28 == uVar21) goto LAB_002281f0;
            uVar14 = uVar14 - uVar21;
            plVar15 = plVar15 + uVar21;
          }
        }
        uVar14 = uVar14 + 1;
        do {
          *plVar29 = *plVar15;
          plVar15 = plVar15 + 1;
          plVar29 = plVar29 + 1;
          uVar14 = uVar14 - 1;
        } while (1 < uVar14);
      }
LAB_002281f0:
      param_3 = plVar29;
      lVar13 = (long)param_2 - (long)param_1 >> 3;
      plVar19 = plVar19 + param_4 * 2;
      plVar29 = param_1;
    } while (lVar18 <= lVar13);
  }
  if (param_4 < lVar13) {
    lVar13 = param_4;
  }
  plVar19 = param_1 + lVar13;
  plVar29 = plVar19;
  plVar25 = param_3;
  if (lVar13 != 0) {
    while (plVar25 = param_3, plVar29 != param_2) {
      lVar18 = *plVar29;
      lVar13 = *param_1;
      if ((long)*(int *)(lVar18 + 0xd4) != 0) {
        plVar25 = (long *)(*(long *)(lVar18 + 200) + 8);
        lVar17 = (long)*(int *)(lVar18 + 0xd4) * 0x18;
        do {
          if (plVar25[-1] == juce::explicitFocusOrderId) goto LAB_00227e95;
          plVar25 = plVar25 + 3;
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != 0);
      }
      plVar25 = (long *)&juce::getNullVarRef()::nullVar;
      if (juce::getNullVarRef()::nullVar == '\0') {
        iVar11 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
        plVar25 = (long *)&juce::getNullVarRef()::nullVar;
        if (iVar11 != 0) {
          juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
          __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
          __cxa_guard_release(&juce::getNullVarRef()::nullVar);
          plVar25 = (long *)&juce::getNullVarRef()::nullVar;
        }
      }
LAB_00227e95:
                    /* try { // try from 00227e9f to 00227ea1 has its CatchHandler @ 00228ac4 */
      uVar9 = (**(code **)(*plVar25 + 0x10))(plVar25 + 1);
      if ((int)uVar9 < 1) {
        uVar9 = 0x7fffffff;
      }
      uVar16 = *(ushort *)(lVar18 + 0xe8);
      iVar11 = *(int *)(lVar18 + 0x38);
      iVar3 = *(int *)(lVar18 + 0x3c);
      if ((long)*(int *)(lVar13 + 0xd4) != 0) {
        plVar25 = (long *)(*(long *)(lVar13 + 200) + 8);
        lVar18 = (long)*(int *)(lVar13 + 0xd4) * 0x18;
        do {
          if (plVar25[-1] == juce::explicitFocusOrderId) goto LAB_00227f15;
          plVar25 = plVar25 + 3;
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != 0);
      }
      plVar25 = (long *)&juce::getNullVarRef()::nullVar;
      if (juce::getNullVarRef()::nullVar == '\0') {
        iVar12 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
        plVar25 = (long *)&juce::getNullVarRef()::nullVar;
        if (iVar12 != 0) {
          juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
          __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
          __cxa_guard_release(&juce::getNullVarRef()::nullVar);
          plVar25 = (long *)&juce::getNullVarRef()::nullVar;
        }
      }
LAB_00227f15:
                    /* try { // try from 00227f1c to 00227f1e has its CatchHandler @ 00228abc */
      uVar10 = (**(code **)(*plVar25 + 0x10))(plVar25 + 1);
      if ((int)uVar10 < 1) {
        uVar10 = 0x7fffffff;
      }
      bVar31 = uVar10 <= uVar9;
      if (((uVar9 == uVar10) &&
          (uVar30 = uVar16 >> 0xb & 1, uVar16 = *(ushort *)(lVar13 + 0xe8) >> 0xb & 1,
          bVar31 = (uVar16 ^ 1) <= (uVar30 ^ 1), uVar30 == uVar16)) &&
         (bVar31 = *(int *)(lVar13 + 0x3c) <= iVar3, iVar3 == *(int *)(lVar13 + 0x3c))) {
        if ((iVar11 != *(int *)(lVar13 + 0x38)) &&
           ((char)((*(int *)(lVar13 + 0x38) <= iVar11) * '\x02' + -1) < '\0')) goto LAB_00227fbe;
LAB_00227e10:
        *param_3 = *param_1;
        param_1 = param_1 + 1;
      }
      else {
        if (-1 < (char)(bVar31 * '\x02' + -1)) goto LAB_00227e10;
LAB_00227fbe:
        *param_3 = *plVar29;
        plVar29 = plVar29 + 1;
      }
      plVar25 = param_3 + 1;
      if (param_1 == plVar19) break;
      param_3 = param_3 + 1;
    }
  }
  uVar21 = (long)plVar19 - (long)param_1;
  plVar19 = plVar25;
  if (0 < (long)uVar21) {
    uVar14 = uVar21 >> 3;
    uVar21 = uVar14 + (uVar21 < 8);
    if ((3 < uVar21) && ((param_1 + uVar21 <= plVar25 || (plVar25 + uVar21 <= param_1)))) {
      uVar22 = uVar21 & 0xfffffffffffffffc;
      uVar27 = (uVar22 - 4 >> 2) + 1;
      uVar28 = (ulong)((uint)uVar27 & 3);
      if (uVar22 - 4 < 0xc) {
        lVar18 = 0;
      }
      else {
        uVar27 = uVar27 & 0xfffffffffffffffc;
        lVar18 = 0;
        do {
          lVar13 = (param_1 + lVar18)[1];
          lVar17 = param_1[lVar18 + 2];
          lVar20 = (param_1 + lVar18 + 2)[1];
          plVar25[lVar18] = param_1[lVar18];
          (plVar25 + lVar18)[1] = lVar13;
          plVar25[lVar18 + 2] = lVar17;
          (plVar25 + lVar18 + 2)[1] = lVar20;
          lVar13 = (param_1 + lVar18 + 4)[1];
          lVar17 = param_1[lVar18 + 6];
          lVar20 = (param_1 + lVar18 + 6)[1];
          plVar25[lVar18 + 4] = param_1[lVar18 + 4];
          (plVar25 + lVar18 + 4)[1] = lVar13;
          plVar25[lVar18 + 6] = lVar17;
          (plVar25 + lVar18 + 6)[1] = lVar20;
          lVar13 = (param_1 + lVar18 + 8)[1];
          lVar17 = param_1[lVar18 + 10];
          lVar20 = (param_1 + lVar18 + 10)[1];
          plVar25[lVar18 + 8] = param_1[lVar18 + 8];
          (plVar25 + lVar18 + 8)[1] = lVar13;
          plVar25[lVar18 + 10] = lVar17;
          (plVar25 + lVar18 + 10)[1] = lVar20;
          lVar13 = (param_1 + lVar18 + 0xc)[1];
          lVar17 = param_1[lVar18 + 0xe];
          lVar20 = (param_1 + lVar18 + 0xe)[1];
          plVar25[lVar18 + 0xc] = param_1[lVar18 + 0xc];
          (plVar25 + lVar18 + 0xc)[1] = lVar13;
          plVar25[lVar18 + 0xe] = lVar17;
          (plVar25 + lVar18 + 0xe)[1] = lVar20;
          lVar18 = lVar18 + 0x10;
          uVar27 = uVar27 - 4;
        } while (uVar27 != 0);
      }
      if (uVar28 != 0) {
        lVar13 = 0;
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar13 + lVar18 * 8);
          uVar6 = puVar2[1];
          puVar1 = (undefined8 *)((long)param_1 + lVar13 + lVar18 * 8 + 0x10);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          puVar1 = (undefined8 *)((long)plVar25 + lVar13 + lVar18 * 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1 = (undefined8 *)((long)plVar25 + lVar13 + lVar18 * 8 + 0x10);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          lVar13 = lVar13 + 0x20;
        } while (uVar28 * 0x20 != lVar13);
      }
      plVar19 = plVar25 + uVar22;
      if (uVar21 == uVar22) goto LAB_00228118;
      uVar14 = uVar14 - uVar22;
      param_1 = param_1 + uVar22;
    }
    uVar14 = uVar14 + 1;
    do {
      *plVar19 = *param_1;
      param_1 = param_1 + 1;
      plVar19 = plVar19 + 1;
      uVar14 = uVar14 - 1;
    } while (1 < uVar14);
  }
LAB_00228118:
  uVar21 = (long)param_2 - (long)plVar29;
  if (0 < (long)uVar21) {
    plVar15 = (long *)(((long)plVar19 - (long)plVar25 & 0xfffffffffffffff8U) + (long)plVar25);
    uVar14 = uVar21 >> 3;
    uVar28 = uVar14 + (uVar21 < 8);
    if (3 < uVar28) {
      lVar18 = (long)plVar19 - (long)plVar25 >> 3;
      if ((plVar29 + ((uVar14 + 1) - (ulong)(7 < uVar21)) <= plVar15) ||
         (plVar25 + ((lVar18 + uVar14) - (ulong)(7 < uVar21)) + 1 <= plVar29)) {
        uVar27 = uVar28 & 0xfffffffffffffffc;
        uVar22 = (uVar27 - 4 >> 2) + 1;
        uVar21 = (ulong)((uint)uVar22 & 3);
        if (uVar27 - 4 < 0xc) {
          lVar13 = 0;
        }
        else {
          uVar22 = uVar22 & 0xfffffffffffffffc;
          lVar13 = 0;
          do {
            lVar17 = (plVar29 + lVar13)[1];
            lVar20 = plVar29[lVar13 + 2];
            lVar24 = (plVar29 + lVar13 + 2)[1];
            plVar25[lVar18 + lVar13] = plVar29[lVar13];
            (plVar25 + lVar18 + lVar13)[1] = lVar17;
            plVar25[lVar18 + lVar13 + 2] = lVar20;
            (plVar25 + lVar18 + lVar13 + 2)[1] = lVar24;
            lVar17 = (plVar29 + lVar13 + 4)[1];
            lVar20 = plVar29[lVar13 + 6];
            lVar24 = (plVar29 + lVar13 + 6)[1];
            plVar25[lVar18 + lVar13 + 4] = plVar29[lVar13 + 4];
            (plVar25 + lVar18 + lVar13 + 4)[1] = lVar17;
            plVar25[lVar18 + lVar13 + 6] = lVar20;
            (plVar25 + lVar18 + lVar13 + 6)[1] = lVar24;
            lVar17 = (plVar29 + lVar13 + 8)[1];
            lVar20 = plVar29[lVar13 + 10];
            lVar24 = (plVar29 + lVar13 + 10)[1];
            plVar25[lVar18 + lVar13 + 8] = plVar29[lVar13 + 8];
            (plVar25 + lVar18 + lVar13 + 8)[1] = lVar17;
            plVar25[lVar18 + lVar13 + 10] = lVar20;
            (plVar25 + lVar18 + lVar13 + 10)[1] = lVar24;
            lVar17 = (plVar29 + lVar13 + 0xc)[1];
            lVar20 = plVar29[lVar13 + 0xe];
            lVar24 = (plVar29 + lVar13 + 0xe)[1];
            plVar25[lVar18 + lVar13 + 0xc] = plVar29[lVar13 + 0xc];
            (plVar25 + lVar18 + lVar13 + 0xc)[1] = lVar17;
            plVar25[lVar18 + lVar13 + 0xe] = lVar20;
            (plVar25 + lVar18 + lVar13 + 0xe)[1] = lVar24;
            lVar13 = lVar13 + 0x10;
            uVar22 = uVar22 - 4;
          } while (uVar22 != 0);
        }
        if (uVar21 != 0) {
          lVar18 = (lVar18 + lVar13) * 8;
          lVar17 = 0;
          do {
            puVar2 = (undefined8 *)((long)plVar29 + lVar17 + lVar13 * 8);
            uVar6 = puVar2[1];
            puVar1 = (undefined8 *)((long)plVar29 + lVar17 + lVar13 * 8 + 0x10);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            puVar1 = (undefined8 *)((long)plVar25 + lVar17 + lVar18);
            *puVar1 = *puVar2;
            puVar1[1] = uVar6;
            puVar1 = (undefined8 *)((long)plVar25 + lVar17 + lVar18 + 0x10);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            lVar17 = lVar17 + 0x20;
          } while (uVar21 * 0x20 != lVar17);
        }
        if (uVar28 == uVar27) {
          return;
        }
        uVar14 = uVar14 - uVar27;
        plVar15 = plVar15 + uVar27;
        plVar29 = plVar29 + uVar27;
      }
    }
    uVar14 = uVar14 + 1;
    lVar18 = 0;
    do {
      *(undefined8 *)((long)plVar15 + lVar18) = *(undefined8 *)((long)plVar29 + lVar18);
      uVar14 = uVar14 - 1;
      lVar18 = lVar18 + 8;
    } while (1 < uVar14);
  }
  return;
}


