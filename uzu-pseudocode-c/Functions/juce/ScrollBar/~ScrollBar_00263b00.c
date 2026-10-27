// Function : ~ScrollBar
// Namespace: juce:ScrollBar
// Entry    : 00263b00
// Prototype: undefined ~ScrollBar(ScrollBar * this)
// Body     : 00263b00 - 00263d95


/* juce::ScrollBar::~ScrollBar() */

void __thiscall juce::ScrollBar::~ScrollBar(ScrollBar *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int *piVar2;
  int iVar3;
  Button *pBVar4;
  undefined8 *puVar5;
  long *plVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  void *pvVar8;
  long *plVar9;
  
  *(undefined ***)this = &PTR__ScrollBar_00708bc0;
  *(undefined ***)(this + 0xf0) = &PTR__ScrollBar_00708d78;
  *(undefined ***)(this + 0x100) = &PTR__ScrollBar_00708da0;
  pBVar4 = *(Button **)(this + 0x180);
  *(undefined8 *)(this + 0x180) = 0;
  if (pBVar4 != (Button *)0x0) {
    Button::~Button(pBVar4);
    operator_delete(pBVar4);
  }
  pBVar4 = *(Button **)(this + 0x188);
  *(undefined8 *)(this + 0x188) = 0;
  if (pBVar4 != (Button *)0x0) {
    Button::~Button(pBVar4);
    operator_delete(pBVar4);
  }
  if (*(int *)(this + 0x1b0) == 2) {
    puVar5 = *(undefined8 **)(this + 400);
    *(undefined4 *)((long)puVar5 + 0xc) = 0;
    if (*(int *)(puVar5 + 1) != 0) {
      free((void *)*puVar5);
      *puVar5 = 0;
    }
    *(undefined4 *)(puVar5 + 1) = 0;
    plVar6 = (long *)(*(undefined8 **)(this + 0x1a0))[1];
    for (plVar9 = (long *)**(undefined8 **)(this + 0x1a0); plVar9 != plVar6; plVar9 = plVar9 + 1) {
      *(undefined4 *)(*plVar9 + 4) = 0;
    }
  }
  p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x1a8);
  if (p_Var7 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00263c45:
    p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x198);
  }
  else if (*(long *)(p_Var7 + 8) == 0x100000001) {
    *(undefined8 *)(p_Var7 + 8) = 0;
    (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
    (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x198);
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var7 + 8;
      iVar3 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(p_Var7 + 8);
      *(int *)(p_Var7 + 8) = iVar3 + -1;
    }
    if (iVar3 != 1) goto LAB_00263c45;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
    p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x198);
  }
  if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var7 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
      pBVar4 = *(Button **)(this + 0x188);
      goto joined_r0x00263c82;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var7 + 8;
      iVar3 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(p_Var7 + 8);
      *(int *)(p_Var7 + 8) = iVar3 + -1;
    }
    if (iVar3 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
      pBVar4 = *(Button **)(this + 0x188);
      goto joined_r0x00263c82;
    }
  }
  pBVar4 = *(Button **)(this + 0x188);
joined_r0x00263c82:
  if (pBVar4 != (Button *)0x0) {
    Button::~Button(pBVar4);
    operator_delete(pBVar4);
  }
  *(undefined8 *)(this + 0x188) = 0;
  pBVar4 = *(Button **)(this + 0x180);
  if (pBVar4 != (Button *)0x0) {
    Button::~Button(pBVar4);
    operator_delete(pBVar4);
  }
  *(undefined8 *)(this + 0x180) = 0;
  Timer::~Timer((Timer *)(this + 0x100));
  *(undefined ***)(this + 0xf0) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0xf8) + 0x18) = 0;
  UNLOCK();
  pvVar8 = *(void **)(this + 0xf8);
  if (pvVar8 != (void *)0x0) {
    LOCK();
    piVar2 = (int *)((long)pvVar8 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(pvVar8);
    }
  }
  Component::~Component((Component *)this);
  return;
}


