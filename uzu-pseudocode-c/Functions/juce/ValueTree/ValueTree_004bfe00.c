// Function : ValueTree
// Namespace: juce:ValueTree
// Entry    : 004bfe00
// Prototype: undefined ValueTree(ValueTree * this, long * param_1)
// Body     : 004bfe00 - 004bfe75


/* juce::ValueTree::ValueTree(juce::Identifier const&) */

void __thiscall juce::ValueTree::ValueTree(ValueTree *this,long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  puVar2 = operator_new(0x50);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__SharedObject_00713ff0;
  lVar1 = *param_1;
  puVar2[2] = lVar1;
  piVar3 = (int *)(lVar1 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[9] = 0;
  *(undefined8 **)this = puVar2;
  LOCK();
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  UNLOCK();
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


