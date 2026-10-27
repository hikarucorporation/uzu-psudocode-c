// Function : valueTreeChildAdded
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c2250
// Prototype: undefined valueTreeChildAdded(AudioProcessorValueTreeState * this, long * param_1, long * param_2)
// Body     : 001c2250 - 001c22a9


/* juce::AudioProcessorValueTreeState::valueTreeChildAdded(juce::ValueTree&, juce::ValueTree&) */

void __thiscall
juce::AudioProcessorValueTreeState::valueTreeChildAdded
          (AudioProcessorValueTreeState *this,long *param_1,long *param_2)

{
  long local_38 [5];
  undefined4 local_10;
  
  if (((*param_1 == *(long *)(this + 0x38)) && (local_38[0] = *param_2, local_38[0] != 0)) &&
     (*(long *)(local_38[0] + 0x10) == *(long *)(this + 0x70))) {
    LOCK();
    *(int *)(local_38[0] + 8) = *(int *)(local_38[0] + 8) + 1;
    UNLOCK();
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_10 = 0;
                    /* try { // try from 001c2294 to 001c229b has its CatchHandler @ 001c22aa */
    setNewState(this,local_38);
    ValueTree::~ValueTree((ValueTree *)local_38);
    return;
  }
  return;
}


