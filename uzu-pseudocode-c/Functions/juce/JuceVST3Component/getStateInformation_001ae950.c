// Function : getStateInformation
// Namespace: juce:JuceVST3Component
// Entry    : 001ae950
// Prototype: undefined getStateInformation(JuceVST3Component * this, MemoryBlock * param_1)
// Body     : 001ae950 - 001ae9e6


/* juce::JuceVST3Component::getStateInformation(juce::MemoryBlock&) */

void __thiscall
juce::JuceVST3Component::getStateInformation(JuceVST3Component *this,MemoryBlock *param_1)

{
  void *pvVar1;
  MemoryOutputStream local_60 [56];
  size_t local_28;
  
  (**(code **)(**(long **)(this + 0x68) + 0x108))();
  MemoryOutputStream::MemoryOutputStream(local_60,0x100);
                    /* try { // try from 001ae97e to 001ae994 has its CatchHandler @ 001ae9e7 */
  OutputStream::writeInt64((OutputStream *)local_60,0);
  writeJucePrivateStateInformation(this,(long *)local_60);
                    /* try { // try from 001ae99e to 001ae9d2 has its CatchHandler @ 001ae9e9 */
  OutputStream::writeInt64((OutputStream *)local_60,local_28 - 8);
  operator<<((long *)local_60,"JUCEPrivateData");
  pvVar1 = (void *)MemoryOutputStream::getData(local_60);
  MemoryBlock::append(param_1,pvVar1,local_28);
  MemoryOutputStream::~MemoryOutputStream(local_60);
  return;
}


