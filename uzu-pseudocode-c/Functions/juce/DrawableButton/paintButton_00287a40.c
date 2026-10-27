// Function : paintButton
// Namespace: juce:DrawableButton
// Entry    : 00287a40
// Prototype: undefined paintButton(DrawableButton * this, undefined8 param_1, undefined1 param_2, undefined1 param_3)
// Body     : 00287a40 - 00287b5e


/* juce::DrawableButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::DrawableButton::paintButton
          (DrawableButton *this,undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  uint uVar1;
  DrawableButton *pDVar2;
  Desktop *this_00;
  ulong uVar3;
  LookAndFeel_V4 *pLVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  
  pDVar2 = this;
  do {
    if ((*(long *)(pDVar2 + 0x68) != 0) &&
       (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pDVar2 + 0x68) + 0x10),
       pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_00287ab0;
    pDVar2 = *(DrawableButton **)(pDVar2 + 0x30);
  } while (pDVar2 != (DrawableButton *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00287a89 to 00287a92 has its CatchHandler @ 00287b72 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00287a96 to 00287a9d has its CatchHandler @ 00287b5f */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00287ab0:
  pLVar4 = pLVar4 + 8;
  if (*(int *)(this + 0x1f8) - 3U < 2) {
                    /* try { // try from 00287ad1 to 00287ad6 has its CatchHandler @ 00287b8a */
    local_38 = param_1;
    (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_48);
                    /* try { // try from 00287ae0 to 00287ae5 has its CatchHandler @ 00287b82 */
    uVar1 = (**(code **)(CONCAT44(uStack_44,local_48) + 0x30))(local_40);
                    /* try { // try from 00287aed to 00287af2 has its CatchHandler @ 00287b7a */
    (**(code **)(CONCAT44(uStack_44,local_48) + 0x58))(local_40);
    uVar3 = Component::findColour((Component *)this,uVar1 & 0xff | 0x1000100,'\0');
    local_48 = (undefined4)uVar3;
    (**(code **)(*(long *)pLVar4 + 0x10))(pLVar4,local_38,this,&local_48,param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00287b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pLVar4 + 0x48))(pLVar4,param_1,this,param_2,param_3);
  return;
}


