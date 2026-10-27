// Function : paint
// Namespace: juce:Button
// Entry    : 0022d490
// Prototype: undefined paint(Button * this, undefined8 param_1)
// Body     : 0022d490 - 0022d4ef


/* juce::Button::paint(juce::Graphics&) */

void __thiscall juce::Button::paint(Button *this,undefined8 param_1)

{
  Button *pBVar1;
  
  if (this[499] != (Button)0x0) {
    pBVar1 = this;
    do {
      if ((*(ushort *)(pBVar1 + 0xe8) & 0x8000) != 0) goto LAB_0022d4c1;
      pBVar1 = *(Button **)(pBVar1 + 0x30);
    } while (pBVar1 != (Button *)0x0);
    *(undefined2 *)(this + 499) = 0x100;
  }
LAB_0022d4c1:
  (**(code **)(*(long *)this + 0x1b8))
            (this,param_1,*(int *)(this + 0x1b8) != 0,*(int *)(this + 0x1b8) == 2);
  *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(this + 0x1b8);
  return;
}


