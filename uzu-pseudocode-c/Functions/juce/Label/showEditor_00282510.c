// Function : showEditor
// Namespace: juce:Label
// Entry    : 00282510
// Prototype: undefined showEditor(undefined8 param_1, float param_2, Label * this)
// Body     : 00282510 - 002829b8


/* juce::Label::showEditor() */

void __thiscall juce::Label::showEditor(undefined8 param_1,float param_2,Label *this)

{
  Component *pCVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  byte *pbVar3;
  char cVar4;
  long *plVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *__ptr;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 *******in_R9;
  TextEditor *this_00;
  bool bVar17;
  undefined8 uVar18;
  undefined4 local_50;
  int iStack_4c;
  long local_48;
  undefined1 local_40 [8];
  char *local_38;
  
  if (*(long *)(this + 0x1c0) == 0) {
    lVar7 = (**(code **)(*(long *)this + 0x198))();
    plVar5 = *(long **)(this + 0x1c0);
    *(long *)(this + 0x1c0) = lVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      lVar7 = *(long *)(this + 0x1c0);
    }
    uVar11 = 10;
    uVar16 = 10;
    Component::setBounds
              ((Component *)(lVar7 + 8),*(int *)(lVar7 + 0x40),*(int *)(lVar7 + 0x44),10,10);
    pCVar1 = (Component *)(*(long *)(this + 0x1c0) + 8);
    if (*(long *)(this + 0x1c0) == 0) {
      this_00 = (TextEditor *)0x0;
    }
    else {
      (**(code **)(*(long *)pCVar1 + 0x60))(pCVar1,1);
      Component::addChildComponent((Component *)this,pCVar1,0xffffffff);
      this_00 = *(TextEditor **)(this + 0x1c0);
    }
    (**(code **)(**(long **)(this + 0x178) + 0x10))(&local_48);
                    /* try { // try from 002825d2 to 002825dc has its CatchHandler @ 00282a36 */
    (**(code **)(local_48 + 0x28))(&local_50,local_40);
                    /* try { // try from 002825e2 to 002825e7 has its CatchHandler @ 00282a2e */
    uVar18 = (**(code **)(local_48 + 0x58))(local_40);
                    /* try { // try from 002825e8 to 002825f6 has its CatchHandler @ 002829fc */
    TextEditor::setText(uVar18,param_2,this_00,(String *)&local_50,0,uVar11,uVar16,in_R9);
    piVar15 = (int *)(CONCAT44(iStack_4c,local_50) + -0x10);
    if (piVar15 != &emptyString) {
      LOCK();
      iVar10 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        operator_delete__(piVar15);
      }
    }
    lVar7 = *(long *)(this + 0x1c0);
    *(undefined4 *)(lVar7 + 0x2e8) = *(undefined4 *)(this + 0x20c);
    if (*(int *)(lVar7 + 0x318) != 2) {
      LOCK();
      bVar17 = *(int *)(lVar7 + 0x318) == 0;
      if (bVar17) {
        *(int *)(lVar7 + 0x318) = 1;
      }
      UNLOCK();
      if (bVar17) {
                    /* try { // try from 00282657 to 00282660 has its CatchHandler @ 002829c1 */
        puVar8 = operator_new(0x20);
        puVar8[1] = 0x100000001;
        *puVar8 = &PTR___Sp_counted_base_00711510;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(undefined8 **)(lVar7 + 0x2f8) = puVar8 + 2;
        p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar7 + 0x300);
        *(undefined8 **)(lVar7 + 0x300) = puVar8;
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar9 = *(ulong *)(p_Var6 + 8);
          if (uVar9 == 0x100000001) {
            *(undefined8 *)(p_Var6 + 8) = 0;
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var2 = p_Var6 + 8;
              uVar9 = (ulong)*(uint *)p_Var2;
              *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var6 + 8) = (int)uVar9 + -1;
            }
            if ((int)uVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
            }
          }
        }
                    /* try { // try from 00282710 to 00282719 has its CatchHandler @ 002829b9 */
        puVar8 = operator_new(0x28);
        puVar8[1] = 0x100000001;
        *puVar8 = &PTR___Sp_counted_base_00711560;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        *(undefined8 **)(lVar7 + 0x308) = puVar8 + 2;
        p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar7 + 0x310);
        *(undefined8 **)(lVar7 + 0x310) = puVar8;
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar9 = *(ulong *)(p_Var6 + 8);
          if (uVar9 == 0x100000001) {
            *(undefined8 *)(p_Var6 + 8) = 0;
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var2 = p_Var6 + 8;
              uVar9 = (ulong)*(uint *)p_Var2;
              *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var6 + 8) = (int)uVar9 + -1;
            }
            if ((int)uVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
            }
          }
        }
        LOCK();
        *(undefined4 *)(lVar7 + 0x318) = 2;
        UNLOCK();
      }
      else {
        while (*(int *)(lVar7 + 0x318) != 2) {
          sched_yield();
        }
      }
    }
    puVar8 = *(undefined8 **)(lVar7 + 0x2f8);
    __ptr = (void *)*puVar8;
    iVar10 = *(int *)((long)puVar8 + 0xc);
    lVar7 = (long)iVar10;
    if (lVar7 != 0) {
      lVar13 = 0;
      do {
        if (*(Label **)((long)__ptr + lVar13) == this + 0x100) goto LAB_00282850;
        lVar13 = lVar13 + 8;
      } while (lVar7 * 8 != lVar13);
    }
    if ((int)*(uint *)(puVar8 + 1) <= iVar10) {
      uVar14 = iVar10 + ((iVar10 - (iVar10 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar8 + 1) != uVar14) {
        if ((int)uVar14 < 1) {
          free(__ptr);
          *puVar8 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar14 << 3);
          *puVar8 = __ptr;
        }
      }
      *(uint *)(puVar8 + 1) = uVar14;
      iVar10 = *(int *)((long)puVar8 + 0xc);
      lVar7 = (long)iVar10;
    }
    *(int *)((long)puVar8 + 0xc) = iVar10 + 1;
    *(Label **)((long)__ptr + lVar7 * 8) = this + 0x100;
LAB_00282850:
    Component::grabKeyboardFocusInternal((Component *)(*(long *)(this + 0x1c0) + 8),2,'\x01',0);
    plVar5 = *(long **)(this + 0x1c0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x178) + 0x10))(&local_48);
                    /* try { // try from 0028289b to 002828a5 has its CatchHandler @ 002829e4 */
      (**(code **)(local_48 + 0x28))(&local_38,local_40);
                    /* try { // try from 002828ab to 002828b0 has its CatchHandler @ 002829dc */
      (**(code **)(local_48 + 0x58))(local_40);
      iVar10 = 0;
      pcVar12 = local_38;
      do {
        cVar4 = *pcVar12;
        if (cVar4 < '\0') {
          do {
            pbVar3 = (byte *)(pcVar12 + 1);
            pcVar12 = pcVar12 + 1;
          } while ((*pbVar3 & 0xc0) == 0x80);
        }
        else {
          pcVar12 = pcVar12 + 1;
          if (cVar4 == '\0') {
            local_50 = 0;
            iStack_4c = 0;
            if (-1 < iVar10) {
              iStack_4c = iVar10;
            }
                    /* try { // try from 00282908 to 00282912 has its CatchHandler @ 002829c9 */
            (**(code **)(*plVar5 + 0x20))(plVar5);
            piVar15 = (int *)(local_38 + -0x10);
            if (piVar15 != &emptyString) {
              LOCK();
              iVar10 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar10 == 0) {
                operator_delete__(piVar15);
              }
            }
            (**(code **)(*(long *)this + 0x140))(this);
            Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
            (**(code **)(*(long *)this + 0x1b0))(this);
            Component::enterModalState((Component *)this,(long *)0x0);
            Component::grabKeyboardFocusInternal
                      ((Component *)(*(long *)(this + 0x1c0) + 8),2,'\x01',0);
            return;
          }
        }
        iVar10 = iVar10 + 1;
      } while( true );
    }
  }
  return;
}


