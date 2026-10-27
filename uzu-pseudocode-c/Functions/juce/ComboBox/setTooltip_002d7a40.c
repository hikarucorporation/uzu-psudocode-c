// Function : setTooltip
// Namespace: juce:ComboBox
// Entry    : 002d7a40
// Prototype: undefined setTooltip(ComboBox * this, long * param_1)
// Body     : 002d7a40 - 002d7aaa


/* juce::ComboBox::setTooltip(juce::String const&) */

void __thiscall juce::ComboBox::setTooltip(ComboBox *this,long *param_1)

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
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002d7aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(this + 0x1b8) + 0xf0) + 0x18))
            (*(long *)(this + 0x1b8) + 0xf0,param_1);
  return;
}


