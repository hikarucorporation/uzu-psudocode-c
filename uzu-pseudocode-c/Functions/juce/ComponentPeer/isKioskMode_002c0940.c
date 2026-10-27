// Function : isKioskMode
// Namespace: juce:ComponentPeer
// Entry    : 002c0940
// Prototype: undefined8 isKioskMode(ComponentPeer * this)
// Body     : 002c0940 - 002c0984


/* juce::ComponentPeer::isKioskMode() const */

undefined8 __thiscall juce::ComponentPeer::isKioskMode(ComponentPeer *this)

{
  Desktop *this_00;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002c0960 to 002c0967 has its CatchHandler @ 002c0985 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  return CONCAT71((int7)((ulong)*(long *)(Desktop::instance + 0x110) >> 8),
                  *(long *)(Desktop::instance + 0x110) == *(long *)(this + 8));
}


