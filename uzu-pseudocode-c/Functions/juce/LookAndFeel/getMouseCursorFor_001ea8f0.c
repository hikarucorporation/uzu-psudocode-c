// Function : getMouseCursorFor
// Namespace: juce:LookAndFeel
// Entry    : 001ea8f0
// Prototype: long * getMouseCursorFor(long * param_1, undefined8 param_2, long * param_3)
// Body     : 001ea8f0 - 001eaa99


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel::getMouseCursorFor(juce::Component&) */

long * __cdecl juce::LookAndFeel::getMouseCursorFor(long *param_1,undefined8 param_2,long *param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long *plVar3;
  long lVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (**(code **)(*param_3 + 0xf0))(param_1,param_3);
  puVar6 = PTR___libc_single_threaded_00715c50;
  plVar3 = (long *)param_3[6];
  do {
    if ((((plVar3 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) ||
        (*(int *)(lVar4 + 0x20) != 0)) || (*(char *)(lVar4 + 0x24) == '\0')) {
      return param_1;
    }
                    /* try { // try from 001ea98c to 001ea997 has its CatchHandler @ 001eaa9a */
    (**(code **)(*plVar3 + 0xf0))(&local_48,plVar3);
    uVar7 = (undefined4)local_48;
    uVar8 = local_48._4_4_;
    uVar9 = (undefined4)uStack_40;
    uVar10 = uStack_40._4_4_;
    local_48 = 0;
    uStack_40 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    p_Var5 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    *(undefined4 *)param_1 = uVar7;
    *(undefined4 *)((long)param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined4 *)((long)param_1 + 0xc) = uVar10;
    if (p_Var5 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var5 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var5 + 8) = 0;
        (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
        (**(code **)(*(long *)p_Var5 + 0x18))(p_Var5);
        p_Var5 = uStack_40;
      }
      else {
        if (*puVar6 == '\0') {
          LOCK();
          p_Var1 = p_Var5 + 8;
          iVar2 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar2 = (int)*(long *)(p_Var5 + 8);
          *(int *)(p_Var5 + 8) = iVar2 + -1;
        }
        if (iVar2 != 1) goto LAB_001ea95a;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var5);
        p_Var5 = uStack_40;
      }
      uStack_40 = p_Var5;
      if (p_Var5 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(p_Var5 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var5 + 8) = 0;
          (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
          (**(code **)(*(long *)p_Var5 + 0x18))(p_Var5);
        }
        else {
          if (*puVar6 == '\0') {
            LOCK();
            p_Var1 = p_Var5 + 8;
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = (int)*(long *)(p_Var5 + 8);
            *(int *)(p_Var5 + 8) = iVar2 + -1;
          }
          if (iVar2 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var5);
          }
        }
      }
    }
LAB_001ea95a:
    plVar3 = (long *)plVar3[6];
  } while( true );
}


