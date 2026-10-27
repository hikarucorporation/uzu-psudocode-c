// Function : ~AttachedEventLoop
// Namespace: juce:EventHandler:AttachedEventLoop
// Entry    : 001a6c10
// Prototype: undefined8 ~AttachedEventLoop(AttachedEventLoop * this)
// Body     : 001a6c10 - 001a6c27


/* juce::EventHandler::AttachedEventLoop::~AttachedEventLoop() */

undefined8 __thiscall
juce::EventHandler::AttachedEventLoop::~AttachedEventLoop(AttachedEventLoop *this)

{
  long *plVar1;
  undefined8 in_RAX;
  
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a6c23 to 001a6c25 has its CatchHandler @ 001a6c28 */
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(this + 8));
  }
  return in_RAX;
}


