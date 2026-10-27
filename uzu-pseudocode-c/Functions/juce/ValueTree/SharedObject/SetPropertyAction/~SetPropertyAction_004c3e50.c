// Function : ~SetPropertyAction
// Namespace: juce:ValueTree:SharedObject:SetPropertyAction
// Entry    : 004c3e50
// Prototype: undefined ~SetPropertyAction(SetPropertyAction * this)
// Body     : 004c3e50 - 004c3ebb


/* juce::ValueTree::SharedObject::SetPropertyAction::~SetPropertyAction() */

void __thiscall
juce::ValueTree::SharedObject::SetPropertyAction::~SetPropertyAction(SetPropertyAction *this)

{
  SharedObject *pSVar1;
  int iVar2;
  SharedObject *this_00;
  int *piVar3;
  
                    /* try { // try from 004c3e5c to 004c3e5e has its CatchHandler @ 004c3ec4 */
  (**(code **)(*(long *)(this + 0x28) + 0x58))(this + 0x30);
                    /* try { // try from 004c3e67 to 004c3e69 has its CatchHandler @ 004c3ebc */
  (**(code **)(*(long *)(this + 0x18) + 0x58))(this + 0x20);
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar3);
      this_00 = *(SharedObject **)(this + 8);
      goto joined_r0x004c3eb8;
    }
  }
  this_00 = *(SharedObject **)(this + 8);
joined_r0x004c3eb8:
  if (this_00 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = this_00 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      ~SharedObject(this_00);
      operator_delete(this_00);
      return;
    }
  }
  return;
}


