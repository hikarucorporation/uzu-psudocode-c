// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__Slider__Pimpl__lookAndFeelChanged_juce__LookAndFeel_____lam~a04b2aaf
// Entry    : 002e0070
// Prototype: undefined _M_invoke(undefined8 * param_1)
// Body     : 002e0070 - 002e0219


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void __cdecl
std::
_Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda()#1}>
::_M_invoke(undefined8 *param_1)

{
  int iVar1;
  Pimpl *this;
  long *plVar2;
  long lVar3;
  Pimpl *this_00;
  int *piVar4;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  double dVar5;
  double dVar6;
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  double local_58;
  ulong uStack_50;
  double local_48;
  ulong uStack_40;
  double local_38;
  ulong uStack_30;
  double local_28;
  ulong uStack_20;
  
  this = (Pimpl *)*param_1;
  plVar2 = *(long **)(this + 0x18);
  (**(code **)(**(long **)(*(long *)(this + 600) + 0x178) + 0x10))(&local_70);
                    /* try { // try from 002e00a3 to 002e00ad has its CatchHandler @ 002e0268 */
  (**(code **)(local_70 + 0x28))(&local_60,local_68);
                    /* try { // try from 002e00b3 to 002e00b8 has its CatchHandler @ 002e0260 */
  (**(code **)(local_70 + 0x58))(local_68);
                    /* try { // try from 002e00bc to 002e00dd has its CatchHandler @ 002e0280 */
  (**(code **)(*plVar2 + 0x1b0))(plVar2,&local_60);
  local_58 = (double)(**(code **)(*plVar2 + 0x1d0))(plVar2,0);
  piVar4 = (int *)(local_60 + -0x10);
  uStack_50 = extraout_XMM0_Qb;
  if (piVar4 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  (**(code **)(**(long **)(this + 0x50) + 0x10))(&local_70);
                    /* try { // try from 002e011e to 002e0123 has its CatchHandler @ 002e0258 */
  local_48 = (double)(**(code **)(local_70 + 0x20))(local_68);
  dVar5 = (double)((ulong)local_58 & _DAT_005d91b0);
  uStack_40 = uStack_50 & _UNK_005d91b8;
  if (dVar5 == DAT_005d94e0) {
LAB_002e01ac:
                    /* try { // try from 002e01b7 to 002e01bc has its CatchHandler @ 002e0250 */
    uStack_40 = extraout_XMM0_Qb_00;
    (**(code **)(local_70 + 0x58))(local_68);
    if ((local_58 == local_48) && (!NAN(local_58) && !NAN(local_48))) goto LAB_002e0208;
  }
  else {
    dVar6 = (double)(_DAT_005d91b0 & (ulong)local_48);
    if (dVar6 == DAT_005d94e0) goto LAB_002e01ac;
    local_38 = (double)((ulong)(local_58 - local_48) & _DAT_005d91b0);
    uStack_30 = uStack_50 & _UNK_005d91b8;
    local_48 = dVar5;
    local_28 = dVar6;
    uStack_20 = _UNK_005d91b8 & extraout_XMM0_Qb_00;
    if (local_38 <= DAT_005db368) {
                    /* try { // try from 002e0203 to 002e0207 has its CatchHandler @ 002e0222 */
      (**(code **)(local_70 + 0x58))(local_68);
      goto LAB_002e0208;
    }
                    /* try { // try from 002e0189 to 002e018d has its CatchHandler @ 002e022a */
    (**(code **)(local_70 + 0x58))(local_68);
    dVar5 = local_28;
    if (local_28 <= local_48) {
      dVar5 = local_48;
    }
    if (local_38 <= dVar5 * DAT_005db370) goto LAB_002e0208;
  }
  lVar3 = *(long *)(this + 0x18);
  juce::Slider::Pimpl::sendDragStart(*(Pimpl **)(lVar3 + 0x1a0));
                    /* try { // try from 002e01dd to 002e01ef has its CatchHandler @ 002e0232 */
  juce::Slider::Pimpl::setValue(local_58,this,2);
  this_00 = *(Pimpl **)(lVar3 + 0x1a0);
  if (this_00 != (Pimpl *)0x0) {
                    /* try { // try from 002e01fc to 002e0200 has its CatchHandler @ 002e021a */
    juce::Slider::Pimpl::sendDragEnd(this_00);
  }
LAB_002e0208:
  juce::Slider::Pimpl::updateText(this);
  return;
}


