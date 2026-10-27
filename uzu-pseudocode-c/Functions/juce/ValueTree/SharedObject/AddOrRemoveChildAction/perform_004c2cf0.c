// Function : perform
// Namespace: juce:ValueTree:SharedObject:AddOrRemoveChildAction
// Entry    : 004c2cf0
// Prototype: undefined8 perform(AddOrRemoveChildAction * this)
// Body     : 004c2cf0 - 004c2d1d


/* juce::ValueTree::SharedObject::AddOrRemoveChildAction::perform() */

undefined8 __thiscall
juce::ValueTree::SharedObject::AddOrRemoveChildAction::perform(AddOrRemoveChildAction *this)

{
  undefined8 uVar1;
  
  if (this[0x1c] == (AddOrRemoveChildAction)0x0) {
    uVar1 = addChild(*(SharedObject **)(this + 8),*(SharedObject **)(this + 0x10),
                     *(uint *)(this + 0x18),(UndoManager *)0x0);
    return CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  uVar1 = removeChild(*(SharedObject **)(this + 8),*(uint *)(this + 0x18),(UndoManager *)0x0);
  return CONCAT71((int7)((ulong)uVar1 >> 8),1);
}


