// Function : ~SharedObject
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c00a0
// Prototype: undefined ~SharedObject(SharedObject * this)
// Body     : 004c00a0 - 004c00b1


/* juce::ValueTree::SharedObject::~SharedObject() */

void __thiscall juce::ValueTree::SharedObject::~SharedObject(SharedObject *this)

{
  ~SharedObject(this);
  operator_delete(this);
  return;
}


