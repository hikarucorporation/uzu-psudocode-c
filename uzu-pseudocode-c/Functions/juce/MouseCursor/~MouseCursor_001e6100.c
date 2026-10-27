// Function : ~MouseCursor
// Namespace: juce:MouseCursor
// Entry    : 001e6100
// Prototype: undefined ~MouseCursor(MouseCursor * this)
// Body     : 001e6100 - 001e6167


/* juce::MouseCursor::~MouseCursor() */

void __thiscall juce::MouseCursor::~MouseCursor(MouseCursor *this)

{
  MouseCursor *pMVar1;
  int iVar2;
  
  if (this != (MouseCursor *)0x0) {
    if (*(long *)(this + 8) == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x001e6134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      pMVar1 = this + 8;
      iVar2 = *(int *)pMVar1;
      *(int *)pMVar1 = *(int *)pMVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(this + 8);
      *(int *)(this + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this);
      return;
    }
  }
  return;
}


