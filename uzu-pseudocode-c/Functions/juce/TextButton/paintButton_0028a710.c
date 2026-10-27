// Function : paintButton
// Namespace: juce:TextButton
// Entry    : 0028a710
// Prototype: undefined paintButton(TextButton * this, undefined8 param_1, undefined1 param_2, undefined1 param_3)
// Body     : 0028a710 - 0028a814


/* juce::TextButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::TextButton::paintButton
          (TextButton *this,undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  TextButton *pTVar3;
  Desktop *this_00;
  ulong uVar4;
  LookAndFeel_V4 *pLVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  
  pTVar3 = this;
  do {
    if ((*(long *)(pTVar3 + 0x68) != 0) &&
       (pLVar5 = *(LookAndFeel_V4 **)(*(long *)(pTVar3 + 0x68) + 0x10),
       pLVar5 != (LookAndFeel_V4 *)0x0)) goto LAB_0028a780;
    pTVar3 = *(TextButton **)(pTVar3 + 0x30);
  } while (pTVar3 != (TextButton *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028a759 to 0028a762 has its CatchHandler @ 0028a828 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028a766 to 0028a76d has its CatchHandler @ 0028a815 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0028a780:
                    /* try { // try from 0028a78f to 0028a794 has its CatchHandler @ 0028a840 */
  local_38 = param_1;
  (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_48);
                    /* try { // try from 0028a79e to 0028a7a3 has its CatchHandler @ 0028a838 */
  uVar2 = (**(code **)(CONCAT44(uStack_44,local_48) + 0x30))(local_40);
                    /* try { // try from 0028a7aa to 0028a7af has its CatchHandler @ 0028a830 */
  (**(code **)(CONCAT44(uStack_44,local_48) + 0x58))(local_40);
  pLVar5 = pLVar5 + 8;
  uVar4 = Component::findColour((Component *)this,uVar2 & 0xff | 0x1000100,'\0');
  uVar1 = local_38;
  local_48 = (undefined4)uVar4;
  (**(code **)(*(long *)pLVar5 + 0x10))(pLVar5,local_38,this,&local_48,param_2,param_3);
  (**(code **)(*(long *)pLVar5 + 0x28))(pLVar5,uVar1,this,param_2,param_3);
  return;
}


