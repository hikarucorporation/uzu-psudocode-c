// Function : __insertion_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>
// Namespace: std
// Entry    : 00227070
// Prototype: void __insertion_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>(long * param_1, long * param_2)
// Body     : 00227070 - 00227380


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}> >(__gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>) */

void __cdecl
std::
__insertion_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
          (long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ushort uVar14;
  bool bVar15;
  long *local_50;
  ulong local_48;
  
  if ((param_1 != param_2) && (plVar12 = param_1 + 1, plVar12 != param_2)) {
    local_48 = 8;
    local_50 = param_1;
    do {
      uVar7 = __gnu_cxx::__ops::
              _Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
              ::operator()(*plVar12,*param_1);
      lVar2 = *plVar12;
      plVar13 = plVar12;
      if ((char)uVar7 == '\0') {
        do {
          lVar9 = plVar13[-1];
          if ((long)*(int *)(lVar2 + 0xd4) != 0) {
            plVar11 = (long *)(*(long *)(lVar2 + 200) + 8);
            lVar10 = (long)*(int *)(lVar2 + 0xd4) * 0x18;
            do {
              if (plVar11[-1] == juce::explicitFocusOrderId) goto LAB_002271b5;
              plVar11 = plVar11 + 3;
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != 0);
          }
          plVar11 = (long *)&juce::getNullVarRef()::nullVar;
          if (juce::getNullVarRef()::nullVar == '\0') {
            iVar5 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
            plVar11 = (long *)&juce::getNullVarRef()::nullVar;
            if (iVar5 != 0) {
              juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
              __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
              __cxa_guard_release(&juce::getNullVarRef()::nullVar);
              plVar11 = (long *)&juce::getNullVarRef()::nullVar;
            }
          }
LAB_002271b5:
                    /* try { // try from 002271bc to 002271be has its CatchHandler @ 00227389 */
          uVar3 = (**(code **)(*plVar11 + 0x10))(plVar11 + 1);
          if ((int)uVar3 < 1) {
            uVar3 = 0x7fffffff;
          }
          uVar8 = *(ushort *)(lVar2 + 0xe8);
          iVar5 = *(int *)(lVar2 + 0x38);
          iVar1 = *(int *)(lVar2 + 0x3c);
          if ((long)*(int *)(lVar9 + 0xd4) != 0) {
            plVar11 = (long *)(*(long *)(lVar9 + 200) + 8);
            lVar10 = (long)*(int *)(lVar9 + 0xd4) * 0x18;
            do {
              if (plVar11[-1] == juce::explicitFocusOrderId) goto LAB_00227235;
              plVar11 = plVar11 + 3;
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != 0);
          }
          plVar11 = (long *)&juce::getNullVarRef()::nullVar;
          if (juce::getNullVarRef()::nullVar == '\0') {
            iVar6 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
            plVar11 = (long *)&juce::getNullVarRef()::nullVar;
            if (iVar6 != 0) {
              juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
              __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
              __cxa_guard_release(&juce::getNullVarRef()::nullVar);
              plVar11 = (long *)&juce::getNullVarRef()::nullVar;
            }
          }
LAB_00227235:
                    /* try { // try from 0022723c to 0022723e has its CatchHandler @ 00227381 */
          uVar4 = (**(code **)(*plVar11 + 0x10))(plVar11 + 1);
          if ((int)uVar4 < 1) {
            uVar4 = 0x7fffffff;
          }
          bVar15 = uVar4 <= uVar3;
          if (((((uVar3 == uVar4) &&
                (uVar14 = uVar8 >> 0xb & 1, uVar8 = *(ushort *)(lVar9 + 0xe8) >> 0xb & 1,
                bVar15 = (uVar8 ^ 1) <= (uVar14 ^ 1), uVar14 == uVar8)) &&
               (bVar15 = *(int *)(lVar9 + 0x3c) <= iVar1, iVar1 == *(int *)(lVar9 + 0x3c))) &&
              (bVar15 = *(int *)(lVar9 + 0x38) <= iVar5, iVar5 == *(int *)(lVar9 + 0x38))) ||
             (-1 < (char)(bVar15 * '\x02' + -1))) goto LAB_002270c0;
          *plVar13 = plVar13[-1];
          plVar13 = plVar13 + -1;
        } while( true );
      }
      plVar13 = param_1;
      if (0 < (long)plVar12 - (long)param_1) {
        lVar9 = 1;
        do {
          local_50[lVar9] = local_50[lVar9 + -1];
          lVar10 = (local_48 >> 3) + lVar9;
          lVar9 = lVar9 + -1;
        } while (1 < lVar10 - 1U);
      }
LAB_002270c0:
      *plVar13 = lVar2;
      plVar12 = plVar12 + 1;
      local_48 = local_48 + 8;
      local_50 = local_50 + 1;
    } while (plVar12 != param_2);
  }
  return;
}


