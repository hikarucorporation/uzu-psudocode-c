// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__MouseCursor__SharedCursorHandle_std__allocator_void_____gnu_~1c32c203
// Entry    : 001e75a0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 001e75a0 - 001e7665


/* std::_Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  XWindowSystem *pXVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(this + 0x28) != 0) {
                    /* try { // try from 001e75b6 to 001e75fd has its CatchHandler @ 001e767e */
    pXVar4 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        juce::XWindowSystem::singletonHolder);
    lVar2 = *(long *)(this + 0x28);
    if ((lVar2 != 0) && (*(long *)(pXVar4 + 0x148) != 0)) {
      if ((juce::XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar6 = *(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
        lVar5 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar5 + 0x210))(lVar6);
      }
                    /* try { // try from 001e75fe to 001e7612 has its CatchHandler @ 001e766e */
      lVar6 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar6 + 0x130))(*(undefined8 *)(pXVar4 + 0x148),lVar2);
      if ((juce::XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar2 = *(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 001e762b to 001e7638 has its CatchHandler @ 001e7666 */
        lVar6 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x360))(lVar2);
      }
    }
  }
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e7657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


