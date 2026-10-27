// Function : ~ReferenceCountedObjectPtr
// Namespace: juce:ReferenceCountedObjectPtr_juce__ValueTree__SharedObject_
// Entry    : 004c0490
// Prototype: undefined ~ReferenceCountedObjectPtr(ReferenceCountedObjectPtr<juce::ValueTree::SharedObject> * this)
// Body     : 004c0490 - 004c04b2


/* juce::ReferenceCountedObjectPtr<juce::ValueTree::SharedObject>::~ReferenceCountedObjectPtr() */

void __thiscall
juce::ReferenceCountedObjectPtr<juce::ValueTree::SharedObject>::~ReferenceCountedObjectPtr
          (ReferenceCountedObjectPtr<juce::ValueTree::SharedObject> *this)

{
  ReferenceCountedObjectPtr<juce::ValueTree::SharedObject> *pRVar1;
  
  if (this != (ReferenceCountedObjectPtr<juce::ValueTree::SharedObject> *)0x0) {
    LOCK();
    pRVar1 = this + 8;
    *(int *)pRVar1 = *(int *)pRVar1 + -1;
    UNLOCK();
    if (*(int *)pRVar1 == 0) {
      ValueTree::SharedObject::~SharedObject((SharedObject *)this);
      operator_delete(this);
      return;
    }
  }
  return;
}


