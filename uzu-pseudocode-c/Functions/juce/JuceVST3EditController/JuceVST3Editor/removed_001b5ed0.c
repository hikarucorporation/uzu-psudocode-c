// Function : removed
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5ed0
// Prototype: undefined8 removed(JuceVST3Editor * this)
// Body     : 001b5ed0 - 001b5f63


/* juce::JuceVST3EditController::JuceVST3Editor::removed() */

undefined8 __thiscall juce::JuceVST3EditController::JuceVST3Editor::removed(JuceVST3Editor *this)

{
  ContentWrapperComponent *this_00;
  MessageManagerLock local_b0 [160];
  
  this_00 = *(ContentWrapperComponent **)(this + 0xd8);
  if (this_00 != (ContentWrapperComponent *)0x0) {
    *(undefined8 *)(this + 0xd8) = 0;
                    /* try { // try from 001b5ef4 to 001b5eff has its CatchHandler @ 001b5f64 */
    MessageManagerLock::MessageManagerLock(local_b0,0);
    ContentWrapperComponent::~ContentWrapperComponent(this_00);
    operator_delete(this_00);
    MessageManagerLock::~MessageManagerLock(local_b0);
    if (this[0xc0] != (JuceVST3Editor)0x0) {
      this[0xc0] = (JuceVST3Editor)0x0;
    }
  }
  if (this[0xa8] != (JuceVST3Editor)0x0) {
    this[0xa8] = (JuceVST3Editor)0x0;
    ScopedRunLoop::~ScopedRunLoop((ScopedRunLoop *)(this + 0x78));
  }
  *(undefined8 *)(this + 0x28) = 0;
  (**(code **)(*(long *)this + 0x80))(this);
  return 0;
}


