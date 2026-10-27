// Function : getPeer
// Namespace: juce:Component
// Entry    : 002d5ba0
// Prototype: long getPeer(Component * this)
// Body     : 002d5ba0 - 002d5c3f


/* juce::Component::getPeer() const */

long __thiscall juce::Component::getPeer(Component *this)

{
  int iVar1;
  Desktop *this_00;
  long lVar2;
  
  do {
    if ((*(ushort *)(this + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d5be0 to 002d5be9 has its CatchHandler @ 002d5c53 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 002d5bed to 002d5bf4 has its CatchHandler @ 002d5c40 */
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
          if (*(Component **)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar2) + 8) == this) {
            return *(long *)(*(long *)(Desktop::instance + 0xd0) + lVar2);
          }
          lVar2 = lVar2 + 8;
        } while ((long)iVar1 * 8 != lVar2);
      }
      return 0;
    }
    this = *(Component **)(this + 0x30);
  } while (this != (Component *)0x0);
  return 0;
}


