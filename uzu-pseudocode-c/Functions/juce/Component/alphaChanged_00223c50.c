// Function : alphaChanged
// Namespace: juce:Component
// Entry    : 00223c50
// Prototype: undefined alphaChanged(Component * this)
// Body     : 00223c50 - 00223d14


/* juce::Component::alphaChanged() */

void __thiscall juce::Component::alphaChanged(Component *this)

{
  int iVar1;
  Desktop *this_00;
  long lVar2;
  
  if ((*(ushort *)(this + 0xe8) & 1) == 0) {
    internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    return;
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00223c96 to 00223c9f has its CatchHandler @ 00223d28 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00223ca3 to 00223caa has its CatchHandler @ 00223d15 */
    Desktop::Desktop(this_00);
    iVar1 = *(int *)(this_00 + 0xdc);
    Desktop::instance = this_00;
  }
  else {
    iVar1 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar1 != 0) {
    lVar2 = 0;
    do {
      if ((Component *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar2))[1] == this) {
                    /* WARNING: Could not recover jumptable at 0x00223d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar2) + 0x110))
                  ((float)(byte)~(byte)this[0xec] / DAT_005de3b0);
        return;
      }
      lVar2 = lVar2 + 8;
    } while ((long)iVar1 * 8 != lVar2);
  }
  return;
}


