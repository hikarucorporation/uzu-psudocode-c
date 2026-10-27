// Function : ~CallbackHelper
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232960
// Prototype: undefined ~CallbackHelper(CallbackHelper * this)
// Body     : 00232960 - 00232964


/* juce::Button::CallbackHelper::~CallbackHelper() */

void __thiscall juce::Button::CallbackHelper::~CallbackHelper(CallbackHelper *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  *(undefined ***)this = &PTR__Timer_00712bc8;
  if (0 < *(int *)(this + 0x10)) {
    lVar5 = *(long *)(this + 0x18);
    pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x1a0));
    uVar6 = *(ulong *)(this + 8);
    lVar8 = *(long *)(lVar5 + 0x1c8);
    lVar10 = *(long *)(lVar5 + 0x1d0);
    lVar11 = lVar10 - lVar8 >> 4;
    if (uVar6 < lVar11 - 1U) {
      uVar9 = uVar6;
      if ((~(uint)uVar6 + (int)lVar11 & 1) != 0) {
        puVar3 = (undefined8 *)(lVar8 + (uVar6 + 1) * 0x10);
        uVar7 = puVar3[1];
        puVar2 = (undefined8 *)(lVar8 + uVar6 * 0x10);
        *puVar2 = *puVar3;
        puVar2[1] = uVar7;
        lVar8 = *(long *)(lVar5 + 0x1c8);
        *(ulong *)(*(long *)(lVar8 + uVar6 * 0x10) + 8) = uVar6;
        uVar9 = uVar6 + 1;
      }
      if (lVar11 - 2U != uVar6) {
        lVar10 = uVar9 * 0x10 + 0x10;
        do {
          uVar7 = ((undefined8 *)(lVar8 + lVar10))[1];
          puVar3 = (undefined8 *)(lVar8 + -0x10 + lVar10);
          *puVar3 = *(undefined8 *)(lVar8 + lVar10);
          puVar3[1] = uVar7;
          lVar8 = *(long *)(lVar5 + 0x1c8);
          *(ulong *)(*(long *)(lVar8 + -0x10 + lVar10) + 8) = uVar9;
          puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar10);
          uVar7 = puVar3[1];
          *(undefined8 *)(lVar8 + lVar10) = *puVar3;
          ((undefined8 *)(lVar8 + lVar10))[1] = uVar7;
          lVar8 = *(long *)(lVar5 + 0x1c8);
          *(ulong *)(*(long *)(lVar8 + lVar10) + 8) = uVar9 + 1;
          lVar10 = lVar10 + 0x20;
          uVar9 = uVar9 + 2;
        } while (uVar9 != lVar11 - 1U);
      }
      lVar10 = *(long *)(lVar5 + 0x1d0);
    }
    *(long *)(lVar5 + 0x1d0) = lVar10 + -0x10;
    pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x1a0));
    *(undefined4 *)(this + 0x10) = 0;
  }
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x004862bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = this_00 + 8;
      iVar4 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = (int)*(long *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar4 + -1;
    }
    if (iVar4 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      return;
    }
  }
  return;
}


