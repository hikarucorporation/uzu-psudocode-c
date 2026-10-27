// Function : ~AddOrRemoveChildAction
// Namespace: juce:ValueTree:SharedObject:AddOrRemoveChildAction
// Entry    : 004c2c90
// Prototype: undefined ~AddOrRemoveChildAction(AddOrRemoveChildAction * this)
// Body     : 004c2c90 - 004c2ce5


/* juce::ValueTree::SharedObject::AddOrRemoveChildAction::~AddOrRemoveChildAction() */

void __thiscall
juce::ValueTree::SharedObject::AddOrRemoveChildAction::~AddOrRemoveChildAction
          (AddOrRemoveChildAction *this)

{
  SharedObject *pSVar1;
  SharedObject *pSVar2;
  
  pSVar2 = *(SharedObject **)(this + 0x10);
  if (pSVar2 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = pSVar2 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      ~SharedObject(pSVar2);
      operator_delete(pSVar2);
    }
  }
  pSVar2 = *(SharedObject **)(this + 8);
  if (pSVar2 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = pSVar2 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      ~SharedObject(pSVar2);
      operator_delete(pSVar2);
    }
  }
  operator_delete(this);
  return;
}


