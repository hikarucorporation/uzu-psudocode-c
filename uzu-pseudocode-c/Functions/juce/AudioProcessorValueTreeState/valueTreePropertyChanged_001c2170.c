// Function : valueTreePropertyChanged
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c2170
// Prototype: undefined valueTreePropertyChanged(AudioProcessorValueTreeState * param_1, long * param_2)
// Body     : 001c2170 - 001c2236


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorValueTreeState::valueTreePropertyChanged(juce::ValueTree&, juce::Identifier
   const&) */

void __cdecl
juce::AudioProcessorValueTreeState::valueTreePropertyChanged
          (AudioProcessorValueTreeState *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_88 [3];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  long local_50 [5];
  undefined4 local_28;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x70))) {
    local_88[0] = *(long *)(lVar1 + 0x48);
    if (local_88[0] == 0) {
      local_88[0] = 0;
    }
    else {
      LOCK();
      *(int *)(local_88[0] + 8) = *(int *)(local_88[0] + 8) + 1;
      UNLOCK();
    }
    lVar2 = local_88[0];
    local_60 = 0;
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_6c = 0;
    local_70 = 0;
    local_88[2] = 0;
    local_88[1] = 0;
    lVar1 = *(long *)(param_1 + 0x38);
    ValueTree::~ValueTree((ValueTree *)local_88);
    if (lVar2 == lVar1) {
      local_50[0] = *param_2;
      if (local_50[0] != 0) {
        LOCK();
        *(int *)(local_50[0] + 8) = *(int *)(local_50[0] + 8) + 1;
        UNLOCK();
      }
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_28 = 0;
                    /* try { // try from 001c2214 to 001c2220 has its CatchHandler @ 001c2237 */
      setNewState(param_1,local_50);
      ValueTree::~ValueTree((ValueTree *)local_50);
    }
  }
  return;
}


