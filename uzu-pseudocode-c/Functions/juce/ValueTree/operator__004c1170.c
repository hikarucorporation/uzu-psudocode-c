// Function : operator=
// Namespace: juce:ValueTree
// Entry    : 004c1170
// Prototype: ValueTree * operator=(ValueTree * this, long * param_1)
// Body     : 004c1170 - 004c1467


/* juce::ValueTree::TEMPNAMEPLACEHOLDERVALUE(juce::ValueTree const&) */

ValueTree * __thiscall juce::ValueTree::operator=(ValueTree *this,long *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  uint uVar2;
  long lVar3;
  long lVar4;
  SharedObject *pSVar5;
  long *plVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  undefined8 *puVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  SharedObject *pSVar16;
  int local_48;
  int local_44;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  
  if (*(long *)this == *param_1) {
    return this;
  }
  if ((*(int *)(this + 0x28) != 2) || (*(int *)(*(long *)(this + 8) + 0xc) == 0)) {
    pSVar16 = (SharedObject *)*param_1;
    pSVar5 = *(SharedObject **)this;
    if (pSVar16 == (SharedObject *)0x0) {
      *(undefined8 *)this = 0;
    }
    else {
      if (pSVar5 == pSVar16) {
        return this;
      }
      LOCK();
      *(int *)(pSVar16 + 8) = *(int *)(pSVar16 + 8) + 1;
      UNLOCK();
      pSVar5 = *(SharedObject **)this;
      *(SharedObject **)this = pSVar16;
    }
    if (pSVar5 == (SharedObject *)0x0) {
      return this;
    }
    LOCK();
    pSVar16 = pSVar5 + 8;
    *(int *)pSVar16 = *(int *)pSVar16 + -1;
    UNLOCK();
    if (*(int *)pSVar16 == 0) {
      SharedObject::~SharedObject(pSVar5);
      operator_delete(pSVar5);
      return this;
    }
    return this;
  }
  lVar3 = *(long *)this;
  if ((lVar3 != 0) && (uVar2 = *(uint *)(lVar3 + 0x44), 0 < (int)uVar2)) {
    lVar4 = *(long *)(lVar3 + 0x38);
    uVar13 = uVar2;
    uVar11 = 0;
    do {
      while( true ) {
        if (*(ValueTree **)(lVar4 + (long)(int)uVar11 * 8) == this) {
          if (uVar11 < uVar2) {
            pvVar9 = (void *)(lVar4 + (long)(int)uVar11 * 8);
            memmove(pvVar9,(void *)((long)pvVar9 + 8),(long)(int)(uVar2 + ~uVar11) << 3);
            iVar14 = *(int *)(lVar3 + 0x44);
            uVar2 = iVar14 - 1;
            *(uint *)(lVar3 + 0x44) = uVar2;
            iVar12 = iVar14 * 2 + -2;
            iVar14 = 0;
            if (-1 < iVar12) {
              iVar14 = iVar12;
            }
            if (iVar14 < *(int *)(lVar3 + 0x40)) {
              uVar13 = 8;
              if (8 < (int)uVar2) {
                uVar13 = uVar2;
              }
              if ((int)uVar13 < *(int *)(lVar3 + 0x40)) {
                pvVar9 = realloc(*(void **)(lVar3 + 0x38),(ulong)uVar13 << 3);
                *(void **)(lVar3 + 0x38) = pvVar9;
                *(uint *)(lVar3 + 0x40) = uVar13;
              }
            }
          }
          goto LAB_004c12b8;
        }
        uVar15 = (int)(uVar11 + uVar13) / 2;
        if (uVar15 == uVar11) goto LAB_004c12b8;
        if (*(ValueTree **)(lVar4 + (long)(int)uVar15 * 8) <= this) break;
        uVar13 = uVar15;
        if ((int)uVar15 <= (int)uVar11) goto LAB_004c12b8;
      }
      uVar11 = uVar15;
    } while ((int)uVar15 < (int)uVar13);
  }
LAB_004c12b8:
  if (*param_1 == 0) {
    pSVar16 = *(SharedObject **)this;
LAB_004c12ec:
    *(undefined8 *)this = 0;
  }
  else {
    SortedSet<juce::ValueTree*,juce::DummyCriticalSection>::add
              ((SortedSet<juce::ValueTree*,juce::DummyCriticalSection> *)(*param_1 + 0x38),
               (ulong)this);
    pSVar5 = (SharedObject *)*param_1;
    pSVar16 = *(SharedObject **)this;
    if (pSVar5 == (SharedObject *)0x0) goto LAB_004c12ec;
    if (pSVar16 == pSVar5) goto LAB_004c1310;
    LOCK();
    *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
    UNLOCK();
    pSVar16 = *(SharedObject **)this;
    *(SharedObject **)this = pSVar5;
  }
  if (pSVar16 != (SharedObject *)0x0) {
    LOCK();
    pSVar5 = pSVar16 + 8;
    *(int *)pSVar5 = *(int *)pSVar5 + -1;
    UNLOCK();
    if (*(int *)pSVar5 == 0) {
      SharedObject::~SharedObject(pSVar16);
      operator_delete(pSVar16);
    }
  }
LAB_004c1310:
  local_40 = (undefined1 *)&local_48;
  if (*(int *)(this + 0x28) == 2) {
    plVar6 = *(long **)(this + 8);
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      }
    }
    local_48 = 0;
    local_44 = *(int *)((long)plVar6 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x18);
    puVar7 = *(undefined8 **)(this_01 + 8);
    if (puVar7 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 004c1371 to 004c137a has its CatchHandler @ 004c1468 */
      std::
      vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,puVar7,&local_40);
    }
    else {
      *puVar7 = &local_48;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_40 = *(undefined1 **)(this + 0x18);
    local_38 = *(long *)(this + 0x20);
    if (local_38 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      }
    }
    iVar14 = local_44;
    local_30 = (undefined1 *)&local_48;
    for (; local_48 < iVar14; local_48 = local_48 + 1) {
      plVar8 = *(long **)(*plVar6 + (long)local_48 * 8);
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 004c13dc to 004c13e1 has its CatchHandler @ 004c146d */
        (**(code **)(*plVar8 + 0x38))(plVar8,this);
        iVar14 = local_44;
      }
    }
    ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::operator=(juce::ValueTree_const&)::$_1,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::operator=(juce::ValueTree_const&)::$_1&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::operator_(juce::ValueTree_const&)::__1,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::operator_(juce::ValueTree_const&)::__1&&)::_lambda()_1_>
                   *)&local_40);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar10 = *(ulong *)(this_00 + 8);
      if (uVar10 == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = this_00 + 8;
          uVar10 = (ulong)*(uint *)p_Var1;
          *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
          UNLOCK();
        }
        else {
          *(int *)(this_00 + 8) = (int)uVar10 + -1;
        }
        if ((int)uVar10 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  return this;
}


