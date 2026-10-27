// Function : ~SettableTooltipClient
// Namespace: juce:SettableTooltipClient
// Entry    : 001c5070
// Prototype: undefined ~SettableTooltipClient(SettableTooltipClient * this)
// Body     : 001c5070 - 001c50b5


/* juce::SettableTooltipClient::~SettableTooltipClient() */

void __thiscall juce::SettableTooltipClient::~SettableTooltipClient(SettableTooltipClient *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__SettableTooltipClient_0070ded0;
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      operator_delete(this);
      return;
    }
  }
  operator_delete(this);
  return;
}


