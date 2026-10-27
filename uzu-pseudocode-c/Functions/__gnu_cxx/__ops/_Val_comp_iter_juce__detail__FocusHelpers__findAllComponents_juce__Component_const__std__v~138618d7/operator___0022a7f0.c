// Function : operator()
// Namespace: __gnu_cxx:__ops:_Val_comp_iter_juce__detail__FocusHelpers__findAllComponents_juce__Component_const__std__v~138618d7
// Entry    : 0022a7f0
// Prototype: undefined8 operator()(long param_1, long param_2)
// Body     : 0022a7f0 - 0022a9fb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   __gnu_cxx::__ops::_Val_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>::TEMPNAMEPLACEHOLDERVALUE(juce::Component* const&,
   __gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >) */

undefined8 __cdecl
__gnu_cxx::__ops::
_Val_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
::operator()(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined7 uVar7;
  byte bVar8;
  ushort uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ushort uVar13;
  
  if ((long)*(int *)(param_1 + 0xd4) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 200) + 8);
    lVar10 = (long)*(int *)(param_1 + 0xd4) * 0x18;
    do {
      if (plVar11[-1] == juce::explicitFocusOrderId) goto LAB_0022a855;
      plVar11 = plVar11 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  plVar11 = (long *)&juce::getNullVarRef()::nullVar;
  if (juce::getNullVarRef()::nullVar == '\0') {
    iVar3 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
    if (iVar3 != 0) {
      juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
      plVar11 = (long *)&juce::getNullVarRef()::nullVar;
      __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
      __cxa_guard_release(&juce::getNullVarRef()::nullVar);
    }
  }
LAB_0022a855:
                    /* try { // try from 0022a85c to 0022a861 has its CatchHandler @ 0022aa04 */
  uVar2 = (**(code **)(*plVar11 + 0x10))(plVar11 + 1);
  uVar12 = 0x7fffffff;
  if (0 < (int)uVar2) {
    uVar12 = uVar2;
  }
  uVar9 = *(ushort *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((long)*(int *)(param_2 + 0xd4) != 0) {
    plVar11 = (long *)(*(long *)(param_2 + 200) + 8);
    lVar10 = (long)*(int *)(param_2 + 0xd4) * 0x18;
    do {
      if (plVar11[-1] == juce::explicitFocusOrderId) goto LAB_0022a8d5;
      plVar11 = plVar11 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  plVar11 = (long *)&juce::getNullVarRef()::nullVar;
  if (juce::getNullVarRef()::nullVar == '\0') {
    iVar4 = __cxa_guard_acquire(&juce::getNullVarRef()::nullVar);
    if (iVar4 != 0) {
      juce::getNullVarRef()::nullVar = &juce::var::Instance::attributesVoid;
      plVar11 = (long *)&juce::getNullVarRef()::nullVar;
      __cxa_atexit(juce::var::~var,&juce::getNullVarRef()::nullVar,&__dso_handle);
      __cxa_guard_release(&juce::getNullVarRef()::nullVar);
    }
  }
LAB_0022a8d5:
                    /* try { // try from 0022a8dc to 0022a8e1 has its CatchHandler @ 0022a9fc */
  uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11 + 1);
  uVar2 = 0x7fffffff;
  if (0 < (int)(uint)uVar5) {
    uVar2 = (uint)uVar5;
  }
  uVar6 = CONCAT71((int7)((ulong)uVar5 >> 8),uVar2 <= uVar12);
  if ((uVar12 == uVar2) &&
     (uVar13 = uVar9 >> 0xb & 1, uVar9 = *(ushort *)(param_2 + 0xe8) >> 0xb & 1,
     uVar6 = (ulong)((uVar9 ^ 1) <= (uVar13 ^ 1)), uVar13 == uVar9)) {
    iVar4 = *(int *)(param_2 + 0x3c);
    uVar6 = (ulong)CONCAT31((int3)((uint)iVar4 >> 8),iVar4 <= iVar1);
    if (iVar1 == iVar4) {
      bVar8 = (*(int *)(param_2 + 0x38) <= iVar3) * '\x02' - 1;
      if (iVar3 == *(int *)(param_2 + 0x38)) {
        bVar8 = 0;
      }
      uVar7 = 0;
      goto LAB_0022a94a;
    }
  }
  uVar7 = (undefined7)(uVar6 >> 8);
  bVar8 = (char)uVar6 * '\x02' - 1;
LAB_0022a94a:
  return CONCAT71(uVar7,bVar8 >> 7);
}


