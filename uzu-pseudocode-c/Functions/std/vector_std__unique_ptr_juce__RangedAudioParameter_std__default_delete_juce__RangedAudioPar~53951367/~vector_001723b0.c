// Function : ~vector
// Namespace: std:vector_std__unique_ptr_juce__RangedAudioParameter_std__default_delete_juce__RangedAudioPar~53951367
// Entry    : 001723b0
// Prototype: undefined ~vector(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>> * this)
// Body     : 001723b0 - 0017240a


/* std::vector<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >,
   std::allocator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> > > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
::~vector(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
          *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)this;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  operator_delete(plVar2);
  return;
}


