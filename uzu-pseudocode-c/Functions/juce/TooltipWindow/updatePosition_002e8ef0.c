// Function : updatePosition
// Namespace: juce:TooltipWindow
// Entry    : 002e8ef0
// Prototype: undefined updatePosition(Component * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 002e8ef0 - 002e8fb0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TooltipWindow::updatePosition(juce::String const&, juce::Point<int>, juce::Rectangle<int>)
    */

void __cdecl
juce::TooltipWindow::updatePosition
          (Component *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  Component *pCVar1;
  Desktop *this;
  LookAndFeel_V4 *pLVar2;
  undefined1 auVar3 [16];
  
  pCVar1 = param_1;
  do {
    if ((*(long *)(pCVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pCVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_002e8f60;
    pCVar1 = *(Component **)(pCVar1 + 0x30);
  } while (pCVar1 != (Component *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e8f39 to 002e8f42 has its CatchHandler @ 002e8fc4 */
    this = operator_new(0x1d0);
                    /* try { // try from 002e8f46 to 002e8f4d has its CatchHandler @ 002e8fb1 */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002e8f60:
  auVar3 = (**(code **)(*(long *)(pLVar2 + 0x70) + 0x10))
                     (pLVar2 + 0x70,param_2,param_3,param_4,param_5);
  Component::setBounds(param_1,auVar3._0_4_,auVar3._4_4_,auVar3._8_4_,auVar3._12_4_);
                    /* WARNING: Could not recover jumptable at 0x002e8faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x60))(param_1,1);
  return;
}


