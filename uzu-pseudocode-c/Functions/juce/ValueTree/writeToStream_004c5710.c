// Function : writeToStream
// Namespace: juce:ValueTree
// Entry    : 004c5710
// Prototype: undefined writeToStream(ValueTree * this, long * param_1)
// Body     : 004c5710 - 004c5792


/* juce::ValueTree::writeToStream(juce::OutputStream&) const */

void __thiscall juce::ValueTree::writeToStream(ValueTree *this,long *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *local_10;
  
  if (*(SharedObject **)this != (SharedObject *)0x0) {
    SharedObject::writeToStream(*(SharedObject **)this,param_1);
    return;
  }
  local_10 = &DAT_0061ac58;
                    /* try { // try from 004c573c to 004c5749 has its CatchHandler @ 004c5793 */
  (**(code **)(*param_1 + 0xa0))(param_1,&local_10);
  piVar2 = (int *)(local_10 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1,0);
  (**(code **)(*param_1 + 0x98))(param_1,0);
  return;
}


