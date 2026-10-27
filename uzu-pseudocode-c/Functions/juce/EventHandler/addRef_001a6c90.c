// Function : addRef
// Namespace: juce:EventHandler
// Entry    : 001a6c90
// Prototype: int addRef(EventHandler * this)
// Body     : 001a6c90 - 001a6c9d


/* juce::EventHandler::addRef() */

int __thiscall juce::EventHandler::addRef(EventHandler *this)

{
  EventHandler *pEVar1;
  int iVar2;
  
  LOCK();
  pEVar1 = this + 0x20;
  iVar2 = *(int *)pEVar1;
  *(int *)pEVar1 = *(int *)pEVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}


