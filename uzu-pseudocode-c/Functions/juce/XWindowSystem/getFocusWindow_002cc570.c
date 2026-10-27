// Function : getFocusWindow
// Namespace: juce:XWindowSystem
// Entry    : 002cc570
// Prototype: XWindowSystem * getFocusWindow(XWindowSystem * this)
// Body     : 002cc570 - 002cc5aa


/* juce::XWindowSystem::getFocusWindow(unsigned long) const */

XWindowSystem * __thiscall juce::XWindowSystem::getFocusWindow(XWindowSystem *this)

{
  long lVar1;
  juce *this_00;
  XWindowSystem *pXVar2;
  
  lVar1 = getPeerFor((long)this);
  if (lVar1 == 0) {
    this_00 = (juce *)0x0;
  }
  else {
    this_00 = (juce *)__dynamic_cast(lVar1,&ComponentPeer::typeinfo,&LinuxComponentPeer::typeinfo,0)
    ;
  }
  pXVar2 = (XWindowSystem *)juce_getCurrentFocusWindow(this_00);
  if (pXVar2 == (XWindowSystem *)0x0) {
    pXVar2 = this;
  }
  return pXVar2;
}


