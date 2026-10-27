// Function : setOpaque
// Namespace: juce:Component
// Entry    : 0027add0
// Prototype: undefined setOpaque(Component * this, byte param_1)
// Body     : 0027add0 - 0027ae9c


/* juce::Component::setOpaque(bool) */

void __thiscall juce::Component::setOpaque(Component *this,byte param_1)

{
  uint3 uVar1;
  Desktop *this_00;
  long lVar2;
  
  uVar1 = *(uint3 *)(this + 0xe8);
  if (((uVar1 & 4) == 0) != (bool)param_1) {
    return;
  }
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = ((ushort)uVar1 & 0xfffb) + (ushort)param_1 * 4;
  if ((uVar1 & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027ae2a to 0027ae33 has its CatchHandler @ 0027aeb0 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 0027ae37 to 0027ae3e has its CatchHandler @ 0027ae9d */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
      lVar2 = 0;
      do {
        if (*(Component **)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar2) + 8) == this) {
          (**(code **)(*(long *)this + 0x70))
                    (this,*(undefined4 *)
                           (*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar2) + 0x10),0);
          break;
        }
        lVar2 = lVar2 + 8;
      } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar2);
    }
  }
  internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


