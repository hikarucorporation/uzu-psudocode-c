// Function : ButtonParameterAttachment
// Namespace: juce:ButtonParameterAttachment
// Entry    : 001c1320
// Prototype: undefined ButtonParameterAttachment(ButtonParameterAttachment * this, AudioProcessorParameter * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001c1320 - 001c1642


/* juce::ButtonParameterAttachment::ButtonParameterAttachment(juce::RangedAudioParameter&,
   juce::Button&, juce::UndoManager*) */

void __thiscall
juce::ButtonParameterAttachment::ButtonParameterAttachment
          (ButtonParameterAttachment *this,AudioProcessorParameter *param_1,undefined8 param_2,
          undefined8 param_3)

{
  ButtonParameterAttachment *pBVar1;
  int *piVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  
  *(undefined ***)this = &PTR__ButtonParameterAttachment_00706ae0;
  *(undefined8 *)(this + 8) = param_2;
  pBVar1 = this + 0x10;
  *(undefined ***)(this + 0x10) = &PTR__Listener_00706d50;
  *(undefined ***)(this + 0x18) = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this + 0x20) = 0;
  puVar5 = operator_new(0x20);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar5[2] = this + 0x18;
  *(undefined4 *)(puVar5 + 3) = 0;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  pvVar8 = *(void **)(this + 0x20);
  *(undefined8 **)(this + 0x20) = puVar5;
  if (pvVar8 != (void *)0x0) {
    LOCK();
    piVar2 = (int *)((long)pvVar8 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(pvVar8);
    }
  }
  *(undefined ***)(this + 0x10) = &PTR__ParameterAttachment_00706a20;
  *(undefined ***)(this + 0x18) = &PTR__ParameterAttachment_00706a58;
  *(AudioProcessorParameter **)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = param_3;
  *(code **)(this + 0x58) =
       std::
       _Function_handler<void(float),juce::ButtonParameterAttachment::ButtonParameterAttachment(juce::RangedAudioParameter&,juce::Button&,juce::UndoManager*)::$_18>
       ::_M_invoke;
  *(ButtonParameterAttachment **)(this + 0x40) = this;
  *(undefined8 *)(this + 0x48) = 0;
  *(code **)(this + 0x50) =
       std::
       _Function_handler<void(float),juce::ButtonParameterAttachment::ButtonParameterAttachment(juce::RangedAudioParameter&,juce::Button&,juce::UndoManager*)::$_18>
       ::_M_manager;
  AudioProcessorParameter::addListener(param_1,(long)pBVar1);
  this[0x60] = (ButtonParameterAttachment)0x0;
                    /* try { // try from 001c1406 to 001c1413 has its CatchHandler @ 001c1653 */
  (**(code **)(**(long **)(this + 0x28) + 0x10))();
  (**(code **)(*(long *)pBVar1 + 0x10))(pBVar1,0);
  lVar7 = *(long *)(this + 8);
  if (*(int *)(lVar7 + 0x180) != 2) {
    LOCK();
    bVar12 = *(int *)(lVar7 + 0x180) == 0;
    if (bVar12) {
      *(int *)(lVar7 + 0x180) = 1;
    }
    UNLOCK();
    if (bVar12) {
                    /* try { // try from 001c143a to 001c1443 has its CatchHandler @ 001c164b */
      puVar5 = operator_new(0x20);
      puVar5[1] = 0x100000001;
      *puVar5 = &PTR___Sp_counted_base_00710f18;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined8 **)(lVar7 + 0x160) = puVar5 + 2;
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar7 + 0x168);
      *(undefined8 **)(lVar7 + 0x168) = puVar5;
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar6 = *(ulong *)(p_Var4 + 8);
        if (uVar6 == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var3 = p_Var4 + 8;
            uVar6 = (ulong)*(uint *)p_Var3;
            *(uint *)p_Var3 = *(uint *)p_Var3 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var4 + 8) = (int)uVar6 + -1;
          }
          if ((int)uVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
      }
                    /* try { // try from 001c14f0 to 001c14f9 has its CatchHandler @ 001c1643 */
      puVar5 = operator_new(0x28);
      puVar5[1] = 0x100000001;
      *puVar5 = &PTR___Sp_counted_base_00710f68;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined8 **)(lVar7 + 0x170) = puVar5 + 2;
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar7 + 0x178);
      *(undefined8 **)(lVar7 + 0x178) = puVar5;
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar6 = *(ulong *)(p_Var4 + 8);
        if (uVar6 == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var3 = p_Var4 + 8;
            uVar6 = (ulong)*(uint *)p_Var3;
            *(uint *)p_Var3 = *(uint *)p_Var3 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var4 + 8) = (int)uVar6 + -1;
          }
          if ((int)uVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
      }
      LOCK();
      *(undefined4 *)(lVar7 + 0x180) = 2;
      UNLOCK();
    }
    else {
      while (*(int *)(lVar7 + 0x180) != 2) {
        sched_yield();
      }
    }
  }
  puVar5 = *(undefined8 **)(lVar7 + 0x160);
  pvVar8 = (void *)*puVar5;
  iVar9 = *(int *)((long)puVar5 + 0xc);
  lVar7 = (long)iVar9;
  if (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (*(ButtonParameterAttachment **)((long)pvVar8 + lVar10) == this) {
        return;
      }
      lVar10 = lVar10 + 8;
    } while (lVar7 * 8 != lVar10);
  }
  if ((int)*(uint *)(puVar5 + 1) <= iVar9) {
    uVar11 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar5 + 1) != uVar11) {
      if ((int)uVar11 < 1) {
        free(pvVar8);
        *puVar5 = 0;
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = realloc(pvVar8,(ulong)uVar11 << 3);
        *puVar5 = pvVar8;
      }
    }
    *(uint *)(puVar5 + 1) = uVar11;
    iVar9 = *(int *)((long)puVar5 + 0xc);
    lVar7 = (long)iVar9;
  }
  *(int *)((long)puVar5 + 0xc) = iVar9 + 1;
  *(ButtonParameterAttachment **)((long)pvVar8 + lVar7 * 8) = this;
  return;
}


