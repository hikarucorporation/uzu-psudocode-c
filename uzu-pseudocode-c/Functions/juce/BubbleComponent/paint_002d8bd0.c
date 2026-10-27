// Function : paint
// Namespace: juce:BubbleComponent
// Entry    : 002d8bd0
// Prototype: undefined paint(BubbleComponent * this, long param_1)
// Body     : 002d8bd0 - 002d8d02


/* juce::BubbleComponent::paint(juce::Graphics&) */

void __thiscall juce::BubbleComponent::paint(BubbleComponent *this,long param_1)

{
  undefined8 uVar1;
  BubbleComponent *pBVar2;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar3;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 local_20;
  
  pBVar2 = this;
  do {
    if ((*(long *)(pBVar2 + 0x68) != 0) &&
       (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pBVar2 + 0x68) + 0x10),
       pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_002d8c40;
    pBVar2 = *(BubbleComponent **)(pBVar2 + 0x30);
  } while (pBVar2 != (BubbleComponent *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d8c19 to 002d8c22 has its CatchHandler @ 002d8d16 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002d8c26 to 002d8c2d has its CatchHandler @ 002d8d03 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002d8c40:
  local_20 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 0x100) >> 0x20),
                      (float)(int)*(undefined8 *)(this + 0x100));
  local_38 = (float)(int)*(undefined8 *)(this + 0xf0);
  fStack_34 = (float)(int)((ulong)*(undefined8 *)(this + 0xf0) >> 0x20);
  fStack_30 = (float)(int)*(undefined8 *)(this + 0xf8);
  fStack_2c = (float)(int)((ulong)*(undefined8 *)(this + 0xf8) >> 0x20);
  (**(code **)(*(long *)(pLVar3 + 0x30) + 0x10))(pLVar3 + 0x30,param_1,this,&local_20,&local_38);
  local_38 = *(float *)(this + 0xf0);
  fStack_34 = *(float *)(this + 0xf4);
  fStack_30 = *(float *)(this + 0xf8);
  fStack_2c = *(float *)(this + 0xfc);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),&local_38);
  uVar1 = *(undefined8 *)(this + 0xf0);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar1);
  (**(code **)(*(long *)this + 0x1a0))
            (this,param_1,*(undefined4 *)(this + 0xf8),*(undefined4 *)(this + 0xfc));
  return;
}


