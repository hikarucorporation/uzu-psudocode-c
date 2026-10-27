// Function : operator()
// Namespace: const:__19
// Entry    : 00274eb0
// Prototype: _func_getTextFromClipboard * operator()($_19 * this, long param_1, undefined8 param_2)
// Body     : 00274eb0 - 00274f63


/* juce::XWindowSystem::getTextFromClipboard() const::$_19::TEMPNAMEPLACEHOLDERVALUE(unsigned long)
   const */

_func_getTextFromClipboard * __thiscall
const::$_19::operator()(__19 *this,long param_1,undefined8 param_2)

{
  long lVar1;
  _func_getTextFromClipboard *p_Var2;
  ulong uVar3;
  _func_getTextFromClipboard *local_20;
  
  lVar1 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  lVar1 = (**(code **)(lVar1 + 0x198))(*(undefined8 *)(param_1 + 0x148),param_2);
  if (lVar1 == 0) {
    local_20 = (_func_getTextFromClipboard *)&DAT_0061ac58;
  }
  else {
    if (lVar1 == juce::juce_messageWindowHandle) {
      lVar1 = *(long *)(param_1 + 0x1a0);
      *(long *)this = lVar1;
      p_Var2 = (_func_getTextFromClipboard *)(lVar1 + -0x10);
      if (p_Var2 == (_func_getTextFromClipboard *)&juce::emptyString) {
        return p_Var2;
      }
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
      return p_Var2;
    }
    local_20 = (_func_getTextFromClipboard *)&DAT_0061ac58;
                    /* try { // try from 00274f28 to 00274f51 has its CatchHandler @ 00274f64 */
    uVar3 = juce::ClipboardHelpers::requestSelectionContent
                      (*(long *)(param_1 + 0x148),(long *)&local_20,param_2,
                       *(undefined8 *)(param_1 + 0x130));
    if ((char)uVar3 == '\0') {
      juce::ClipboardHelpers::requestSelectionContent
                (*(long *)(param_1 + 0x148),(long *)&local_20,param_2,0x1f);
    }
  }
  *(_func_getTextFromClipboard **)this = local_20;
  return local_20;
}


