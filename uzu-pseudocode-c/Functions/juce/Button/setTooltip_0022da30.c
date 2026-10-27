// Function : setTooltip
// Namespace: juce:Button
// Entry    : 0022da30
// Prototype: undefined setTooltip(Button * this, long * param_1)
// Body     : 0022da30 - 0022da81


/* juce::Button::setTooltip(juce::String const&) */

void __thiscall juce::Button::setTooltip(Button *this,long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = *param_1;
  piVar4 = (int *)(lVar3 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    lVar3 = *param_1;
  }
  LOCK();
  lVar2 = *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = lVar3;
  UNLOCK();
  piVar4 = (int *)(lVar2 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
      this[0x1f7] = (Button)0x0;
      return;
    }
  }
  this[0x1f7] = (Button)0x0;
  return;
}


