// Function : ~ThreadLocalValue
// Namespace: juce:ThreadLocalValue_juce__AudioProcessor__WrapperType_
// Entry    : 004c6400
// Prototype: undefined ~ThreadLocalValue(ThreadLocalValue<juce::AudioProcessor::WrapperType> * this)
// Body     : 004c6400 - 004c6422


/* juce::ThreadLocalValue<juce::AudioProcessor::WrapperType>::~ThreadLocalValue() */

void __thiscall
juce::ThreadLocalValue<juce::AudioProcessor::WrapperType>::~ThreadLocalValue
          (ThreadLocalValue<juce::AudioProcessor::WrapperType> *this)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)this;
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 8);
    operator_delete(pvVar2);
    pvVar2 = pvVar1;
  }
  return;
}


