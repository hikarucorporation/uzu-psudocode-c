// Function : keyPressed
// Namespace: juce:Button
// Entry    : 0022d4f0
// Prototype: undefined8 keyPressed(Button * this, int * param_1)
// Body     : 0022d4f0 - 0022d52d


/* juce::Button::keyPressed(juce::KeyPress const&) */

undefined8 __thiscall juce::Button::keyPressed(Button *this,int *param_1)

{
  Button *pBVar1;
  undefined8 uVar2;
  
  pBVar1 = this;
  do {
    if ((*(ushort *)(pBVar1 + 0xe8) & 0x8000) != 0) {
      return 0;
    }
    pBVar1 = *(Button **)(pBVar1 + 0x30);
  } while (pBVar1 != (Button *)0x0);
  if (*param_1 == 0xd) {
    uVar2 = (**(code **)(*(long *)this + 0x198))();
    return CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return 0;
}


