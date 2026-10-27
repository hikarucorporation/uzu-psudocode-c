// Function : getDesktopScaleFactor
// Namespace: juce:OutlineWindowComponent
// Entry    : 002b9280
// Prototype: ulong getDesktopScaleFactor(OutlineWindowComponent * this)
// Body     : 002b9280 - 002b92e0


/* juce::OutlineWindowComponent::getDesktopScaleFactor() const */

ulong __thiscall juce::OutlineWindowComponent::getDesktopScaleFactor(OutlineWindowComponent *this)

{
  long *plVar1;
  Desktop *this_00;
  ulong uVar2;
  
  if ((*(long *)(this + 0xf0) != 0) &&
     (plVar1 = *(long **)(*(long *)(this + 0xf0) + 0x10), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x002b92a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x88))();
    return uVar2;
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002b92c2 to 002b92c9 has its CatchHandler @ 002b92e1 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  return (ulong)*(uint *)(Desktop::instance + 0x130);
}


