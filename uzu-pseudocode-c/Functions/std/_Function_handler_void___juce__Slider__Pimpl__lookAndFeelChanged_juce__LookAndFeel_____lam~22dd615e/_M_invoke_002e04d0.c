// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__Slider__Pimpl__lookAndFeelChanged_juce__LookAndFeel_____lam~22dd615e
// Entry    : 002e04d0
// Prototype: undefined _M_invoke(undefined8 * param_1)
// Body     : 002e04d0 - 002e05a8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,
   bool)#1}::operator()(juce::Button&, bool) const::{lambda()#1}>::_M_invoke(std::_Any_data const&)
    */

void __cdecl
std::
_Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::operator()(juce::Button&,bool)const::{lambda()#1}>
::_M_invoke(undefined8 *param_1)

{
  Pimpl *pPVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long local_28;
  undefined1 local_20 [8];
  
  pPVar1 = (Pimpl *)*param_1;
  dVar4 = *(double *)(pPVar1 + 0x108);
  if (*(char *)(param_1 + 1) == '\0') {
    dVar4 = (double)((ulong)dVar4 ^ _DAT_00652d10);
  }
  if (*(int *)(pPVar1 + 0x20) == 8) {
    plVar2 = *(long **)(pPVar1 + 0x18);
    (**(code **)(**(long **)(pPVar1 + 0x50) + 0x10))(&local_28);
                    /* try { // try from 002e051e to 002e0529 has its CatchHandler @ 002e05dd */
    dVar5 = (double)(**(code **)(local_28 + 0x20))(local_20);
                    /* try { // try from 002e052f to 002e0534 has its CatchHandler @ 002e05d5 */
    (**(code **)(local_28 + 0x58))(local_20);
    dVar4 = (double)(**(code **)(*plVar2 + 0x1d0))(dVar5 + dVar4,plVar2,0);
    if (*(long *)(pPVar1 + 0x200) == 0) {
      lVar3 = *(long *)(pPVar1 + 0x18);
      juce::Slider::Pimpl::sendDragStart(*(Pimpl **)(lVar3 + 0x1a0));
                    /* try { // try from 002e057c to 002e058d has its CatchHandler @ 002e05b1 */
      juce::Slider::Pimpl::setValue(dVar4,pPVar1,2);
      pPVar1 = *(Pimpl **)(lVar3 + 0x1a0);
      if (pPVar1 != (Pimpl *)0x0) {
                    /* try { // try from 002e059a to 002e059e has its CatchHandler @ 002e05a9 */
        juce::Slider::Pimpl::sendDragEnd(pPVar1);
      }
    }
    else {
      juce::Slider::Pimpl::setValue(dVar4,pPVar1,2);
    }
  }
  return;
}


