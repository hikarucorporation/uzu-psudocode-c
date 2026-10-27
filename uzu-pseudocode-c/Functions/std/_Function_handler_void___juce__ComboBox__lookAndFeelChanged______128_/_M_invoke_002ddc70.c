// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__ComboBox__lookAndFeelChanged______128_
// Entry    : 002ddc70
// Prototype: ulong _M_invoke(long * param_1)
// Body     : 002ddc70 - 002ddcd7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::ComboBox::lookAndFeelChanged()::$_128>::_M_invoke(std::_Any_data const&) */

ulong __cdecl
std::_Function_handler<void(),juce::ComboBox::lookAndFeelChanged()::$_128>::_M_invoke(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  uVar6 = 0;
  puVar1 = (uint *)(*(long *)(lVar4 + 0x110) + 0x18);
  LOCK();
  uVar3 = *puVar1;
  if (uVar3 == 0) {
    *puVar1 = 1;
  }
  else {
    uVar6 = (ulong)uVar3;
  }
  UNLOCK();
  if (uVar3 == 0) {
    plVar5 = *(long **)(lVar4 + 0x110);
    if (((juce::MessageManager::instance != 0) &&
        (*(int *)(juce::MessageManager::instance + 8) == 0)) &&
       (juce::InternalMessageQueue::singletonHolder._40_8_ != 0)) {
      uVar6 = juce::InternalMessageQueue::postMessage
                        ((InternalMessageQueue *)juce::InternalMessageQueue::singletonHolder._40_8_,
                         (long)plVar5);
      return uVar6;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    uVar6 = *(ulong *)(lVar4 + 0x110);
    LOCK();
    *(undefined4 *)(uVar6 + 0x18) = 0;
    UNLOCK();
  }
  return uVar6;
}


