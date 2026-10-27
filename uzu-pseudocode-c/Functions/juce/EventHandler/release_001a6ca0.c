// Function : release
// Namespace: juce:EventHandler
// Entry    : 001a6ca0
// Prototype: int release(EventHandler * this)
// Body     : 001a6ca0 - 001a6ccc


/* juce::EventHandler::release() */

int __thiscall juce::EventHandler::release(EventHandler *this)

{
  EventHandler *pEVar1;
  int iVar2;
  
  LOCK();
  pEVar1 = this + 0x20;
  iVar2 = *(int *)pEVar1;
  *(int *)pEVar1 = *(int *)pEVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    ~EventHandler(this);
    operator_delete(this);
  }
  return iVar2 + -1;
}


