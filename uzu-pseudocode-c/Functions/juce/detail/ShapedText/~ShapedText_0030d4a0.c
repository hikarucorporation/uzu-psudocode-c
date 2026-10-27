// Function : ~ShapedText
// Namespace: juce:detail:ShapedText
// Entry    : 0030d4a0
// Prototype: undefined ~ShapedText(ShapedText * this)
// Body     : 0030d4a0 - 0030d507


/* juce::detail::ShapedText::~ShapedText() */

void __thiscall juce::detail::ShapedText::~ShapedText(ShapedText *this)

{
  ShapedText *pSVar1;
  int iVar2;
  
  if (this != (ShapedText *)0x0) {
    if (*(long *)(this + 8) == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x0030d4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      pSVar1 = this + 8;
      iVar2 = *(int *)pSVar1;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
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


