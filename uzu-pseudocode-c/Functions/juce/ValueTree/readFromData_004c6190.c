// Function : readFromData
// Namespace: juce:ValueTree
// Entry    : 004c6190
// Prototype: ValueTree * readFromData(ValueTree * this, undefined8 param_1, undefined8 param_2)
// Body     : 004c6190 - 004c61e4


/* juce::ValueTree::readFromData(void const*, unsigned long) */

ValueTree * __thiscall
juce::ValueTree::readFromData(ValueTree *this,undefined8 param_1,undefined8 param_2)

{
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *pvStack_20;
  undefined8 local_18;
  
  local_40 = &PTR__MemoryInputStream_007132a0;
  local_28 = 0;
  pvStack_20 = (void *)0x0;
  local_18 = 0;
                    /* try { // try from 004c61c1 to 004c61ca has its CatchHandler @ 004c61e5 */
  local_38 = param_1;
  local_30 = param_2;
  readFromStream(this,(long *)&local_40);
  local_40 = &PTR__MemoryInputStream_007132a0;
  free(pvStack_20);
  return this;
}


