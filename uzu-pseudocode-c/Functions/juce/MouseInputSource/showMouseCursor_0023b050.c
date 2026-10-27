// Function : showMouseCursor
// Namespace: juce:MouseInputSource
// Entry    : 0023b050
// Prototype: undefined showMouseCursor(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, MouseInputSourceImpl * param_4, long param_5, _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> * param_6)
// Body     : 0023b050 - 0023b0f8


/* WARNING: Unknown calling convention: __cdecl */
/* juce::MouseInputSource::showMouseCursor(juce::MouseCursor const&) */

void __cdecl
juce::MouseInputSource::showMouseCursor
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,MouseInputSourceImpl *param_4
          ,long param_5,_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *param_6)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long local_18;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_10;
  
  if (param_6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
    }
  }
                    /* try { // try from 0023b07a to 0023b083 has its CatchHandler @ 0023b0f9 */
  local_18 = param_5;
  local_10 = param_6;
  detail::MouseInputSourceImpl::showMouseCursor(param_1_00,param_2,param_3,param_4,&local_18,'\0');
  p_Var1 = local_10;
  if (local_10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(local_10 + 8) == 0x100000001) {
      *(undefined8 *)(local_10 + 8) = 0;
      (**(code **)(*(long *)local_10 + 0x10))(local_10);
                    /* WARNING: Could not recover jumptable at 0x0023b0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = local_10 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(local_10 + 8);
      *(int *)(local_10 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_10);
      return;
    }
  }
  return;
}


